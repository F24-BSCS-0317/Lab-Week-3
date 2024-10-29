#include<iostream>
using namespace std;

int main()
{
	float servings, eaten, calories;
	cout << "Input the number of cookies eaten: ";
	cin >> eaten;
	servings = eaten / 4;
	calories = servings * 300;
	cout << "The total number of calories consumed is " << calories;

	return 0;
}
