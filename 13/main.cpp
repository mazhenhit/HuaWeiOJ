#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	getline(cin, input);
	char flag = ' ';
	cin.get(flag);
	int len = input.length();
	int result = 0;
	for (int i = 0; i < len; i++)
	{
		if (input.at(i) == flag)
		{
			result++;
		}
	}

	cout << result << endl;

	return 0;
}