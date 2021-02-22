#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  int num1, num2, num3;
  cout << "enter three integer values: " ;
  cin >> num1 >> num2 >> num3 ;

  if (num1 > num2)
  {
    if (num1 > num3)
      cout << "num1 is the largest number "<< num1 << endl;
    else 
      cout << "num3 is the greatest number " << num3 << endl;


  }
  else {
    if (num2 > num3)
      cout << "num2 is the largest number " << num2 << endl;
    else 
      cout << "num3 is the largest number " << num3 << endl;
  }
  
  
  
}
