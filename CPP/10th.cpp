#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout<<"Enter Radius ";
    double r;
    cin >> r;
    const double pi = 3.14;

    double area = pi*pow(r,2);
    cout<<"Result is = "<<area;
    
    return 0;
}