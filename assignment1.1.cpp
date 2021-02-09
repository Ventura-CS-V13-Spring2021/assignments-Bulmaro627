#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const int rateA = 15.00;
  const int rateB =12.00;
  const int rateC = 9.00;
  
  int seatA;
  int seatB;
  int seatC;
  
  // cout for making some prompt message
  cin >> seatA >> seatB >> seatC;

  double totalA;
  double totalB;
  double totalC;
  double total_amount;

  totalA = seatA * rateA;
  totalB = seatB * rateB;
  totalC =seatC * rateC;

  total_amount =totalA + totalB +totalC;

	// print out with some message
	// setw(), setprecision() 
	
  cout << total_amount <<endl;



  
}
