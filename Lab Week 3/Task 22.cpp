#include<iostream>
using namespace std;

int main()
{
    float weight, height, BMI;
    cout << "Enter your weight(in KG) and height(in meters): " << endl;
    cin >> weight >> height;
    BMI = weight / (height * height);
    cout << "Your BMI is " << BMI << endl;

    return 0;
}