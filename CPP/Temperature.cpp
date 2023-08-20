/*Temperature in degrees Fahrenheit (°F) = (Temperature in degrees Celsius (°C) * 9/5) + 32*/
#include <iostream>

using namespace std;

int main(){
    cout << "Enter Celsius: ";
    double celsius;
    cin >> celsius;
    double fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit will be: " << fahrenheit ;
    return 0;
}