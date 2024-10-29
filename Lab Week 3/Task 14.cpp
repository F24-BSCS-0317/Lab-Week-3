#include<iostream>
using namespace std;

int main()
{
	int seatA = 15, seatB = 12, seatC = 9;
	int soldA, soldB, soldC;
	int incA, incB, incC;
	cout << "Enter the seats sold of class A, class B and class C respectively:" << endl;
	cin >> soldA >> soldB >> soldC;
	incA = soldA * seatA;
	incB = soldB * seatB;
	incC = soldC * seatC;
	cout << "The total income of class A is " << incA << endl << "The total income of class B is " << incB << endl << "The total income of class C is " << incC << endl;

	return 0;
}
