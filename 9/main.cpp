#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int input = 0;
	cin >> input;
	int num = sqrt(input);
	for (int i = 2; i <= num; i++)
	{
		while (input % i == 0 && input != 0)
		{
			cout << i << " ";
			input /= i;
		}
	}
	cout << endl;
	return 0;
}