#include<iostream>
using namespace std;

int main()
{
	int G_eaten, S_eaten, F_eaten, Total;
	cout << "Enter the number of gourmet, standard and fast meals eaten respectively:" << endl;
	cin >> G_eaten >> S_eaten >> F_eaten;
	G_eaten = G_eaten * 50;
	S_eaten = S_eaten * 30;
	F_eaten = F_eaten * 20;
	Total = F_eaten + S_eaten + G_eaten;
	cout << "The total revenue is " << Total;

	return 0;
}
