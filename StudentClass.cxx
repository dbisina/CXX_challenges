#include <iostream>  
using namespace std;  

class Student {
  public:
    string Student_Name;
    int Student_ID;
    int Student_DOB;
    

    int Student_Age (int Student_DOB) {
      return 2022 - Student_DOB;
    }
};

int main() {
  Student s1;

  cout << "Enter Student Name: " <<endl;
  cin >> s1.Student_Name;

  cout << "Enter Student ID: " << endl;
  cin >> s1.Student_ID;

  cout << "Enter Students DOB: "<< endl;
  cin >> s1.Student_DOB;
  
  int Age = s1.Student_Age(s1.Student_DOB); 
  
  cout << s1.Student_Name << " (" << s1.Student_ID <<") " << " is " << Age <<" years old" << endl;
}
      