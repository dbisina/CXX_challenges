#include <iostream>;
using namespace std;

void preincrement (int&x, int&y, int&z);

int main(){
int a,b,c;

cout << "enter value of a:";
cin >> a;
cout << "enter value of b:";
cin >> b;
cout << "enter value of c:";
cin >> c; 

preincrement (a,b,c); 
cout << a << endl;
cout << b << endl;
cout << c << endl;

  return 0;
}

void preincrement(int &x, int &y, int &z){

x = ++x;
y = ++y;
z = ++z;
  }