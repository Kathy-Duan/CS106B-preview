#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& nums);

int main() {
    vector<int> nums1 = {1, 3, 4, 2};
    insertionSort(nums1);
    for (int elem : nums1) {
        cout << elem;
    }
    cout << endl;
    vector<int> nums2 = {1};
    insertionSort(nums2);
        for (int elem : nums2) {
        cout << elem;
    }
    cout << endl;
    vector<int> nums3 = {3, 1};
    insertionSort(nums3);
        for (int elem : nums3) {
        cout << elem;
    }
    cout << endl;
    vector<int> nums4 = {4, 3, 1};
    insertionSort(nums4);
        for (int elem : nums4) {
        cout << elem;
        }
    cout << endl;
    return 0;
}

void insertionSort(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        int j = i - 1;
        int temp = nums[i];
        while (j >= 0 && temp < nums[j]) {
            nums[j + 1] = nums[j];
            nums[j] = temp;
            j--;
        }
    }
}