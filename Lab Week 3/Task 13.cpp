#include<iostream>
using namespace std;

int main()
{
	int wheatP, wheatQ, riceP, riceQ, sugarP, sugarQ, wheatV, riceV, sugarV;
	cout << "Enter the price and quantity of rice ";
	cin >> riceP >> riceQ;
	cout << "Enter the price and quantity of sugar ";
	cin >> sugarP >> sugarQ;
	cout << "Enter the price and quantity of wheat ";
	cin >> wheatP >> wheatQ;
	wheatV = wheatP * wheatQ;
	riceV = riceQ * riceP;
	sugarV = sugarP * sugarQ;
	cout < "________________________________________" << endl;
	cout << "The value of rice is " << riceV << endl;
	cout << "The value of sugar is " << sugarV << endl;
	cout << "The value of wheat is " << wheatV << endl;
	cout << "_______________________________________";
	

	return 0;
}
