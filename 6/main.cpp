#include <iostream>
using namespace std;

void IntString(char *pInt, int num,int count);
int Weishu(int input);

int main()
{
	int input = 0;
	cin >> input;
	int count = Weishu(input);
	char *pInt = new char[count];
	IntString(pInt, input,count);
	char flag[10] = { 0 };
	int zeroFlag = 0;
	for (int i = 0; i < count; i++)
	{
		int num = pInt[count - 1 - i] - '0';
		if (num != 0)
			zeroFlag = 1;
		if (flag[num] == 0 && num != 0)
		{
			cout << num;
			flag[num] = 1;
		}
		else if (flag[num] == 0 && num == 0)
		{
			if (zeroFlag == 1)
			{
				cout << num;
				flag[num] = 1;
			}
		}
	}
	cout << endl;
	return 0;
}

int Weishu(int input)
{
	int count = 0;
	while (input != 0)
	{
		count++;
		input /= 10;
	}
	return count;
}

void IntString(char *pInt,int num,int count)
{
	while (count != 0)
	{
		pInt[count - 1] = num % 10 + '0';
		num /= 10;
		count--;
	}
}
