#include<iostream>
using namespace std;

int main()
{
	int A, P, l, w;
	cout << "Enter the length and width " << endl;
	cin >> l >> w;
	A = l * w;
	P = 2 * (l + w);
	cout << "The Area is " << A << " and the perimeter is " << P << endl;

	return 0;
}