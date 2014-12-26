#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	getline(cin, input);
	int numberOfWord = 1;
	for (unsigned int i = 0; i < input.length(); i++)
	{
		if (input.at(i) == ' ')
		{
			numberOfWord++;
		}
	}
	int n = 0;
	int m = 0;
	string *str = new string[numberOfWord];
	for (unsigned int i = 0; i < input.length(); i++)
	{
		if (input.at(i) == ' ')
		{
			str[m] = input.substr(n, i - n);
			n = i + 1;
			m++;
		}
		else if (i == input.length() - 1)
		{
			str[m] = input.substr(n, i - n + 1);
		}
	}

	for (int i = numberOfWord - 1; i >= 0; i--)
	{
		if (i != 0)
		{
			cout << str[i] << " ";
		}
		else
		{
			cout << str[i] << endl;
		}
	}

	return 0;
}