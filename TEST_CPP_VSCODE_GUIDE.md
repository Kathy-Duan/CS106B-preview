# 从 0 到 1：用 VS Code 创建并运行 test.cpp

这份教程适合第一次在 macOS + VS Code 里写 C++ 的同学。目标是：创建一个 `test.cpp` 文件，写一个最小 C++ 程序，并成功编译运行。

## 1. 准备工具

需要准备三样东西：

- VS Code
- C++ 编译器
- VS Code 的 C/C++ 扩展

### 1.1 安装 VS Code

如果还没有安装 VS Code，先到官网下载安装：

```text
https://code.visualstudio.com/
```

安装完成后打开 VS Code。

### 1.2 安装 C++ 编译器

macOS 上最简单的方式是安装 Xcode Command Line Tools。

打开终端，输入：

```bash
xcode-select --install
```

如果系统提示安装，就按提示完成。

安装完成后，可以检查编译器是否可用：

```bash
clang++ --version
```

只要能看到版本信息，就说明 C++ 编译器已经可以用了。

注意：编译 C++ 文件要用 `clang++` 或 `g++`，不要用 `clang`。`clang` 主要用于 C 文件，直接编译 C++ 程序时容易出现 `undefined symbols` 之类的链接错误。

### 1.3 安装 VS Code C/C++ 扩展

在 VS Code 左侧打开 Extensions，搜索并安装：

```text
C/C++
```

发布者一般是 Microsoft。安装后 VS Code 就能更好地识别 C++ 代码、显示错误、支持调试。

## 2. 创建项目文件夹

可以在任意位置创建一个练习文件夹，例如：

```bash
mkdir cpp-test-demo
cd cpp-test-demo
code .
```

如果 `code .` 命令不可用，可以在 VS Code 里用菜单打开：

```text
File > Open Folder...
```

然后选择刚才创建的 `cpp-test-demo` 文件夹。

## 3. 创建 test.cpp

在 VS Code 左侧 Explorer 里：

1. 点击 New File
2. 输入文件名：`test.cpp`
3. 按 Enter 创建文件

然后写入下面这段代码：

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "!" << '\n';
    cout << "Your first C++ program ran successfully." << '\n';

    return 0;
}
```

保存文件：

```text
Command + S
```

## 4. 用终端编译运行

在 VS Code 里打开终端：

```text
Terminal > New Terminal
```

确认终端当前目录就是项目文件夹。然后输入：

```bash
clang++ -std=c++17 -Wall -Wextra -pedantic test.cpp -o test
```

这条命令的意思是：

- `clang++`：使用 C++ 编译器
- `-std=c++17`：使用 C++17 标准
- `-Wall -Wextra -pedantic`：打开更多警告，帮助发现问题
- `test.cpp`：要编译的源代码文件
- `-o test`：输出一个叫 `test` 的可执行程序

如果没有报错，就运行：

```bash
./test
```

你应该会看到：

```text
Enter your name:
```

输入你的名字并回车，例如：

```text
Alice
```

程序会输出类似：

```text
Hello, Alice!
Your first C++ program ran successfully.
```

到这里，`test.cpp` 就已经成功运行了。

## 5. 在当前项目里运行 src/test.cpp

如果你是在这个 `cpp-week1-foundations` 项目里练习，当前文件路径是：

```text
src/test.cpp
```

可以在项目根目录执行：

```bash
clang++ -std=c++17 -Wall -Wextra -pedantic src/test.cpp -o src/test
./src/test
```

也可以进入 `src` 文件夹后执行：

```bash
cd src
clang++ -std=c++17 -Wall -Wextra -pedantic test.cpp -o test
./test
```

## 6. 用 VS Code 的 Build Task 编译

这个项目已经配置了 `.vscode/tasks.json`，默认任务会编译当前打开的 C++ 文件。

使用方式：

1. 打开 `src/test.cpp`
2. 按快捷键：`Command + Shift + B`
3. VS Code 会运行默认构建任务
4. 如果当前文件是 `src/test.cpp`，会生成：`src/test`
5. 在终端运行：

```bash
./src/test
```

如果你已经在 `src` 目录，可以运行：

```bash
./test
```

## 7. 常见报错处理

### 报错：command not found: clang++

说明还没有安装编译器，先执行：

```bash
xcode-select --install
```

安装完成后重新打开终端，再运行：

```bash
clang++ --version
```

### 报错：undefined symbols for architecture arm64

常见原因是用了 `clang` 编译 C++ 文件。

错误写法：

```bash
clang test.cpp -o test
```

正确写法：

```bash
clang++ test.cpp -o test
```

C++ 程序需要链接 C++ 标准库，所以应该用 `clang++` 或 `g++`。

### 报错：no such file or directory: test.cpp

说明终端当前目录里没有 `test.cpp`。

先查看当前目录：

```bash
pwd
```

再查看文件：

```bash
ls
```

如果文件在 `src/test.cpp`，就用：

```bash
clang++ -std=c++17 src/test.cpp -o src/test
```

### 程序生成了，但运行时报 permission denied

一般是运行命令写错了。运行当前目录下的程序时要加 `./`：

```bash
./test
```

不要只输入：

```bash
test
```

## 8. 推荐练习流程

每次写一个新的小程序，可以按这个顺序：

1. 新建或打开 `test.cpp`
2. 写代码
3. 保存文件
4. 编译：`clang++ -std=c++17 -Wall -Wextra -pedantic test.cpp -o test`
5. 运行：`./test`
6. 如果报错，先看第一条错误信息
7. 修改代码后重新保存、重新编译、重新运行

## 9. 最小可运行版本

如果只是想快速确认环境没问题，可以先用这个最小版本：

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello, C++!" << '\n';
    return 0;
}
```

编译运行：

```bash
clang++ -std=c++17 test.cpp -o test
./test
```

看到下面输出，就说明环境搭建成功：

```text
Hello, C++!
```
