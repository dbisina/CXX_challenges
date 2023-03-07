#include <iostream>;
using namespace std;

int main() {
  int n, x;

  cout << "Enter a number:\n ";
  cin >> x;
  cout << "Enter the power to raise to:\n ";
  cin >> n;

  int pow = 1;
  for (int i = 1; i <= n; i++) {
    pow = pow * x;
  };

  cout << pow;

  return 0;
};