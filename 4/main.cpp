#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int len = input.length();
	char *a = new char[len + 1];

	for (int i = 0; i < len; i++)
	{
		a[len - 1 - i] = input.at(i);
	}
	a[len] = '\0';
	cout << a << endl;
	return 0;
}