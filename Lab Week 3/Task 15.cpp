#include<iostream>
using namespace std;

int main()
{
	int Fuel, Rent, Bills, Total;
	cout << "Enter the Fuel, Rent and Bills :" << endl;
	cin >> Fuel >> Rent >> Bills;
	Total = Fuel + Rent + Bills;
	cout << "___________________________________________" << endl;
	cout << "Fuel:\t" << Fuel << endl;
	cout << "Rent:\t" << Rent << endl;
	cout << "Bills:\t" << Bills << endl;
	cout << "Total:\t" << Total << endl;
	cout << "___________________________________________";

	return 0;
}
