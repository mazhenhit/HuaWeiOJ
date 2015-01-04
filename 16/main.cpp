#include <iostream>
#include <string>

using namespace std;

int main()
{
	char input[100],output[100];
	cin.getline(input,100);
	int len = strlen(input);
	for (int i = 0; i < len; i++)
	{
		output[len - 1 - i] = input[i];
	}
	output[len] = '\0';
	cout << output << endl;
	return 0;
}