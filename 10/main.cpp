#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int len = input.length();
	int result = 0;
	for (int i = 2; i < len; i++)
	{
		if ((input.at(i) >= 'A') && (input.at(i) <= 'F'))
		{
			result = result * 16 + (input.at(i) - 'A' + 10);
		}
		else if ((input.at(i) >= 'a') && (input.at(i) <= 'f'))
		{
			result = result * 16 + (input.at(i) - 'a' + 10);
		}
		else if ((input.at(i) >= '0') && (input.at(i) <= '9'))
		{
			result = result * 16 + (input.at(i) - '0');
		}
	}
	cout << result << endl;
	return 0;
}