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
	{ 
		if (num1 == num3)
			cout << "all number are the same"<< endl;
		else 
			cout << "num1 and num2 are duplicates"<< endl;
	}
	else // Here we can know num1 is different to num2
	{ 
		if (num2 == num3)
			cout << "num2 and num3 are duplicates" << endl;
		else // num1 may be the same as num3 or may not
			if (num1 == num3)
		  	cout <<"num2 and num3 are duplicates"<< endl;
		  else  //num1 may be same as num3 or may not
			  cout << "all number are distinct" << endl;
	}
}

// 1) You need to align the inner block with the indentation so as to figure out the if-condition easily

// 2) line 24, amd 26, we cannot say the relationship between n1 and n3. Need ask more about the n1 and n3, instead of line 25 
// 3) then, you don't want to use from 26 to 29


   