#include <iostream>


using namespace std;


int main() {
   double fahrenheit;
   double celsius;
   cout << "Enter temperature in Celsius: ";
   cin >> celsius;
   fahrenheit = (celsius * 9.0 / 5.0) +32.0;
   cout << "Temperature in Fahrenheit: " << fahrenheit;
   return 0;
}
