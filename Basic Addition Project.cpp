#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double number1, number2, sum;

	cout << "Enter two number to add : " << endl;
	cin >> number1 >> number2;
	sum = number1 + number2;

	cout << fixed << setprecision(2) << sum;

	return 0;
	
}

