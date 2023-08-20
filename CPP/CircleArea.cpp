#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "Circle's Radius: ";
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    cout << "Area Of Circle will be: " << area;
    
    return 0;
    
}