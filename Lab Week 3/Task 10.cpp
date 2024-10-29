#include<iostream>
using namespace std;

int main()
{
	int min, hr;
	cout << "Enter the minutes: " << endl;
	cin >> min;
	hr = min / 60;
	min = min % 60;
	cout << "The total time is " << hr << " hours and " << min << " minutes " << endl;

	return 0;
}