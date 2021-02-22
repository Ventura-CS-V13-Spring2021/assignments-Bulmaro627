#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  int num1;
  int num2;
  int num3;
    cout << "Enter three integer values: " ;
    cin >> num1 >> num2 >> num3 ;
  if (num1 == num2)
  { if (num1 == num3)
      cout << "all number are the same"<< endl;
    else 
      cout << "num1 and num2 are duplicates"<< endl;
  }
  else{ 
   if (num2 == num3)
    cout << "num2 and num3 are duplicates" << endl;
   else 
    cout << "num1 and num3 are dupilcates" << endl;
    if(num3 == num1)
      cout <<"num1 and num3 are duplicates"<< endl;
    else 
      cout << "all number are distinct" << endl;
  }

 
 
}
   