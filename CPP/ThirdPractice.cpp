/*Write a code to swap the value of two variable*/

#include <iostream>
using namespace std;

int main() {
  int a = 90 , b = 9;

cout << "before swapping the values: a= "<< a <<"b = "<< b << endl;

/*Adding a temp value to a */

int temp = a ;
a = b ;
b = temp;

 cout << "After Swapping the value: a =" << a << "b =" << b << endl;

return 0;

}
