#include<iostream>
using namespace std;

int main()
{
	int hr, min;
	cout << "Enter the hours and minutes: " << endl;
	cin >> hr >> min;
	min = (hr * 60) + min;
	cout << "The total minutes are " << min << " minutes " << endl;

	return 0;
}