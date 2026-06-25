#include <iostream>


using namespace std;


int main() {
   double meters;;
   double feet;
   double inches;
   cout << "Enter distance in meters: ";
   cin >> meters;
   inches = 0.0254 * meters;
   feet = inches / 12;
   cout << "Distance in feet: " << feet << endl;
   cout << "Distance in inches: " << inches << endl;
   return 0;
}
