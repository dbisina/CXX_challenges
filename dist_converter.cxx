#include <iostream>;
using namespace std;

int main() {
  int x;
  
  cout << "Please select conversion type:\n (1) miles to Kilometres. \n (2) kilometres to miles. \n >>>  ";

  cin >> x;
  
  if (x == 1){
    //miles to kilometres
    float mil;
    cout << "Enter miles value: \n";
    cin >> mil;
    float km = mil * 1.60934;
    cout << to_string(mil) + " miles is " + to_string(km) + " kilometres";
  } else if(x == 2){
    //kilometres to miles
    float km;
    cout << "Enter kilometres value: \n";
    cin >> km;
    float mil = km / 1.60934;
    cout << to_string(km) + " kilometres is " + to_string(mil) + " miles";
  }else {
    cout << "Please Select a valid option";
  };
  return 0;
};