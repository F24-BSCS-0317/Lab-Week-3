#include<iostream>
using namespace std;

int main()
{
	int n, square, cube;
	cout << "Enter a number " << endl;
	cin >> n;
	cout << "No \t Square \t Cube\n";
	square = n * n;
	cube = n * n * n;
	cout << n << "\t  " << square << "\t\t  " << cube << endl;
	n++;
	square = n * n;
	cube = n * n * n;
	cout << n << "\t  " << square << "\t\t  " << cube << endl;
	n++;
	square = n * n;
	cube = n * n * n;
	cout << n << "\t  " << square << "\t\t  " << cube << endl;
	n++;
	square = n * n;
	cube = n * n * n;
	cout << n << "\t  " << square << "\t\t  " << cube << endl;
	n++;
	square = n * n;
	cube = n * n * n;
	cout << n << "\t  " << square << "\t\t  " << cube << endl;
	n++;
	square = n * n;
	cube = n * n * n;
	cout << n << "\t  " << square << "\t\t  " << cube << endl;

	return 0;
}
