#include <iostream>;
using namespace std;

int main() {
  int x;
  cout << " Input Temperature in celcius: \n ";
  cin >> x;

  switch (x) {
  case 0 ... 10:
    cout << "Extremely Cold";
    break;
  case 11 ... 20:
    cout << " cold ";
    break;
  case 21 ... 30:
    cout << "Normal";
    break;
  case 31 ... 41:
    cout << "Hot";
    break;
    case 42 ... 999999999:
    cout << "Extremely Hot";
    break;
  default:
    cout << "Freezing";
    break;
  };

  return 0;
};