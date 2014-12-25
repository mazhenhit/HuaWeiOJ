#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	cin >> input;
	int sum[128] = { 0 };
	for (unsigned int i = 0; i < input.length(); i++)
	{
		if (input.at(i) >= 0 && input.at(i) <= 128)
			sum[input.at(i)]++;
	}
	int result = 0;
	for (int i = 0; i < 128; i++)
	{
		if (sum[i] != 0)
		{
			result++;
		}
	}
	cout << result << endl;
	return 0;
}