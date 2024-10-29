#include<iostream>
using namespace std;

int main()
{
	int t1, t2, t3, t4, t5, avg;
	cout << "Enter 5 test scores: " << endl;
	cin >> t1 >> t2 >> t3 >> t4 >> t5;
	avg = (t1 + t2 + t3 + t4 + t5) / 5;
	cout << "The average score is " << avg << endl;

	return 0;
}