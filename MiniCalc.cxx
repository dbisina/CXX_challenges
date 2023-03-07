#include <iostream>;
using namespace std;

int additionFunc(int x, int y) {
  return x + y;
};

int subtractionFunc(int x, int y) {
  return x - y;
};
  
int main() {
  int num1, num2, count;
  char add = '+';
  char subtract = '-';
  string option;
  
  cout << "Enter First Number: \n> ";

  cin >> num1;

  cout << "Enter Second Number: \n> ";

  cin >> num2;

  cout << "Enter an option: \n 1. add\n 2. subtract. \n\n> ";

  cin >> option;

  if (option == "add") {
    int addition = additionFunc(num1, num2);
    cout << addition;
  } else if (option == "subtract") {
    int subtraction = subtractionFunc(num1, num2);
    cout << subtraction;
  } else {
    cout << "Please Enter \'add\' or \'subtract\'";
  };

  return 0;
  };

