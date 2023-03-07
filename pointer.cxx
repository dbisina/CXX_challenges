#include <iostream>;
using namespace std;

int main() {

  int num1, num2, *ptr_to_num1, *ptr_to_num2;

  cout << "Enter First number: \n>";

  cin >> num1;

  cout << "Enter Second Number: \n>";

  cin >> num2;

  ptr_to_num1 = &num1;
  ptr_to_num2 = &num2;

  cout << *ptr_to_num1;
  cout << "\n";
  cout << *ptr_to_num2;
  
  return 0;
}