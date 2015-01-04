#include <iostream>

using namespace std;

void sortUp(int a[], int length);
void sortDown(int a[], int length);

int main()
{
	int sum = 0;
	cin >> sum;
	int *pArray = new int[sum];
	for (int i = 0; i < sum; i++)
		cin >> pArray[i];
	char flag = ' ';
	cin >> flag;
	if (flag == '0')
	{
		sortUp(pArray,sum);
	}
	else if (flag == '1')
	{
		sortDown(pArray, sum);
	}

	for (int i = 0; i < sum; i++)
	{
		cout << pArray[i] << ' ';
	}
	cout << endl;
	return 0;
}

void sortUp(int a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = length - 1; j >= i; j--)
		{
			if (j >= 1)
			{
				if (a[j] < a[j - 1])
				{
					int temp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = temp;
				}
			}
		}
	}
}

void sortDown(int a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = length - 1; j >= i; j--)
		{
			if (j >= 1)
			{
				if (a[j] > a[j - 1])
				{
					int temp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = temp;
				}
			}
		}
	}
}