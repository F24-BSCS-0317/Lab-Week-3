#include<iostream>
using namespace std;

int main()
{
    float r, h, Vol, S_A;
    cout << "Enter the Radius and Height of the cylinder: " << endl;
    cin >> r >> h;
    Vol = 3.14 * r * r * h;
    S_A = 2 * 3.14 * r * (r + h);
    cout << "The Volume is " << Vol << endl << "The surface area is " << S_A << endl;

    return 0;
}