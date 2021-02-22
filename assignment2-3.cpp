#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
     char  selection;
     cout << "Enter your choice among A, B, C\n";
     cin >> selection;
     //if (selection == 'A' || selection == 'a')
        // cout << "Your choice is A\n";
    //else if (selection == 'B' || selection == 'b')
       // cout << "Your choice is B\n";
    //else if (selection == 'C' || selection == 'c')
         //cout << "Your choice is C\n";
//else
    //cout << "Not good choice\n";
     
  
  switch(selection)
  {
    case 'A':
    case 'a':
      cout << "Your choice is A\n";
        break;
    case 'B':
    case'b':
       cout << "Your choice is B\n";
        break;
    case 'C':
    case 'c':
       cout << "Your choice is C\n";
       break;
    default:
       cout << "Not good choice\n";


  }
}