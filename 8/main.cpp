#include <iostream>

using namespace std;

int main()
{
	double input = 0.0;
	cin >> input;
	int integer = (int)input;
	int cha = (int)(input - integer) * 10;
	if (cha >= 5)
		cout << integer + 1 << endl;
	else
		cout << integer << endl;
	return 0;
}