#include <iostream>

using namespace std;

int GetSumOfOne(int);

int main()
{
	int num = 0;
	cin >> num;
	cout << GetSumOfOne(num) << endl;
	return 0;
}

int GetSumOfOne(int num)
{
	int sum = 0;
	while (num != 0)
	{
		num = num & (num - 1);
		sum++;
	}
	return sum;
}