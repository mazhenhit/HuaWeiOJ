#include <iostream>

using namespace std;

int main()
{
	int numberOfInteger = 0;
	cin >> numberOfInteger;
	int *inputInteger = new int[numberOfInteger];
	for (int i = 0; i < numberOfInteger; i++)
	{
		cin >> inputInteger[i];
	}

	for (int i = 0; i < numberOfInteger; i++)
	{
		for (int j = numberOfInteger - 1; j >= i; j--)
		{
			if (inputInteger[j] < inputInteger[j - 1])
			{
				int temp = inputInteger[j];
				inputInteger[j] = inputInteger[j - 1];
				inputInteger[j - 1] = temp;
			}
		}
	}

	for (int i = 0; i < numberOfInteger; i++)
	{
		if ((i < numberOfInteger - 1) && (inputInteger[i] == inputInteger[i+1]))
		{
			continue;
		}
		else
		{
			cout << inputInteger[i] << endl;
		}
	}

	return 0;
}