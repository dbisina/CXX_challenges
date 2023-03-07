#include <iostream>;
using namespace std;

int main() {

  int x, y;
  cout << "Please input number of lines: \n";
  cin >> x;
  cout << " ";
  cout << "Please input number of asterisks (*): \n";
  cin >> y;
  cout << "\n";
  string ast = "*";
  
  for (int i = 0; i < x; i++) {
    string n = "";
    for (int j = 1; j < y; j++) {
      n = n + ast;
      cout << n;  
    };
    cout << "\n";
  };

  
  return 0;
}