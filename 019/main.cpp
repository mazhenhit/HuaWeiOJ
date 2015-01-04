#include <iostream>
#include <algorithm>
using namespace std;
struct Count
{
	int c;
	int count;
};
bool cmp(const Count &a, const Count &b)
{
	return a.count>b.count;
}
int main()
{
	struct Count a[256];
	char b[200];
	for (int i = 0; i<256; i++)
	{
		a[i].c = i;
		a[i].count = 0;
	}

	cin.getline(b, 256);
	//gets(b);
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= 'a'&&b[i] <= 'z' || b[i] >= 'A'&&b[i] <= 'Z' || b[i] >= '0'&&b[i] <= '9' || b[i] == ' ')
		{
			char tmp = b[i];
			a[tmp].count++;
		}
	}
	sort(a, a + 256, cmp);
	for (int i = 0; i<256; i++)
	{
		if (a[i].count != 0)
			cout << char(a[i].c);
	}

	cout << endl;
	return 0;
}