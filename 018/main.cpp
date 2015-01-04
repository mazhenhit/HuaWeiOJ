#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input[2];
	cin >> input[0] >> input[1];
	for (int i = 0; i < 2; i++)
	{
		int len = input[i].length();
		if (len <= 8)
		{
			input[i].append(8 - len, '0');
			cout << input[i] << endl;
		}
		else
		{
			int count = 0;
			int temp = len;
			int j = 0;
			while (temp > 8)
			{
				string a;
				count = j * 8;
				a.assign(input[i], count, 8);
				cout << a << endl;
				temp -= 8;
				j++;
			}
			string b;
			b.assign(input[i], count + 8, len - count - 8);
			b.append(count + 16 - len, '0');
			cout << b << endl;
		}
	}

	return 0;
}