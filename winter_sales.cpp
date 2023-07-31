#include <iostream>
using namespace std;
int main()
{
	float price_after;
	float x_rate;

	do {
		cin >> x_rate >> price_after;
	} while (x_rate > 100);

	float price_before;
	price_before = (price_after / (1 - (x_rate / 100)));

	cout << price_before;

	return 0;
}