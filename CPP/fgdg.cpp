#include <iostream>
using namespace std;

int main() {
  int a = 5, b = 10;
  
  cout << "Before swapping: a = " << a << "b = " << b << endl;

  // Swap the values using the temporary variable
  int temp = a;
  a = b;
  b = temp;
  
  cout << "After swapping: a = " << a << " b = " << b << endl;

  return 0;
}
