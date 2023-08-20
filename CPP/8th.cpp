#include <iostream>

using namespace std;

            /*Just To Remember 

                Salary = 95000$
                State Tax = 4%
                County Tax =  2%

            */

int main(){
    double s = 95000;
    const double County_tax = .02;
    const double State_tax = .04;

    double County_rate = s * County_tax;
    double State_rate = s * State_tax;
    double Total_Tax = County_rate + State_rate;

    cout << "Salary = $" << s << endl;
    cout << "County Tax: $" << County_rate << endl;
    cout << "State Tax: $"  << State_rate << endl;
    cout << "Total Tax: $"  << Total_Tax << endl;
    
    return 0;

}