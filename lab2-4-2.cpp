#include <iostream>
#include <fstream>
using namespace std;


int main()
{

  int num;
  int rndum;
  int sum=0;
  int min= 1000000;
  int max=0;
  float avg;
  int count=0;
  ifstream   rdfile;

  rdfile.open("rndum.txt");
  rdfile >> num;


  while (!rdfile.eof())
  {

    count++;
    sum = sum + num;
    
    
    if (num>max)
    {
      max=num;
    }
    if (num<min)
    {
      min=num;
    }
    rdfile >> num;

  }
     rdfile.close();

    cout << "sum " << sum << endl;
    cout <<"total numbers of integers are: " << count <<endl;
    cout << "Mininum value is: " << min << endl;
    cout << "Maximum value is; " << max << endl;
    avg=sum/count;
    cout << "Average is : " << avg << endl;
}