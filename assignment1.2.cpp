#include <iostream>
using namespace std;


int main()
{
  double celsius;
  double fahrenheit;

  cout << "enter the a number in celsius\n:";
  cin >> celsius;

  fahrenheit = 9/5 * celsius + 32;

  cout << "celsius: " << celsius << " is " << "fahrenheit\n" << fahrenheit;


}