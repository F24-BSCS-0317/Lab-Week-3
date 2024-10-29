#include<iostream>
using namespace std;

int main()
{
    int B_course, A_course, P_course;
    float Total;
    cout << "Enter the number of Basic , advance and Professional courses taken respectively:" << endl;
    cin >> B_course >> A_course >> P_course;
    B_course = B_course * 500;
    A_course = A_course * 1000;
    P_course = P_course * 2000;
    Total = (P_course + A_course + B_course)*0.85;
    cout << "The total revenue is " << Total;

	return 0;
}