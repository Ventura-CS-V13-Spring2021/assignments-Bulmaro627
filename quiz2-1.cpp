#include <iostream>
using namespace std;



int main ()
{
 int rndum;
 int N;

 cout << "enter the number of rndum:\n";
 cin >> N;

 srand(time(0));
  for (int i; i<N; i++)
  {

    rndum= random() % 100;
  }
  cout << rndum << endl;

}