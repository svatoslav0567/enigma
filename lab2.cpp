#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a;
	double b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a < 0)
	{
		cout << "error";
	}
	if (b > 3 * pow(10, 4))
	{
		cout<<"error";
	}
	if (c > 3 * pow(10, 4))
	{
		cout <<"error";
	}
	double diagonal;
	cout << sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2));

	return 0;
}