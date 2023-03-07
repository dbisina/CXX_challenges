#include <iostream>;
using namespace std;

int main() {
  int array[10] = {};
  int temp, i, j;
  cout << "Enter 10 numbers: \n" << endl;

  for ( i = 0; i < 10; ++i) {
    cin >> array[i];
  }

  cout << "The numbers are: \n";

  for (int n = 0; n < 10; ++n) {
    cout << array[n] << "  ";
  }

  cout << "\nThe reversed numbers are: \n" ;

  for ( i = 0, j = 9; i < 5; i++, j--)  
    {     
        temp = array[i];  
        array[i] = array[j];  
        array[j] = temp;  
    }  
    
    for ( i = 0; i < 10; i++)  
    {  
        cout << array[i] << " ";  
    }  
  return 0;
}