#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{


  int rndum;
  int N;
  ofstream   rdfile;

  rdfile.open("rndum.txt");

  cout << "enter the number of rndum:\n";
  cin >> N;


  srand(time(0));
  for (int i; i<N; i++)
  {

    rndum= random() % 100;
    rdfile << rndum << endl;

  }
  rdfile.close();
}