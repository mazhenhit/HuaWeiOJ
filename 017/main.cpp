#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
	int countfu = 0;
	int count = 0;
	int sum = 0;
	double average = 0;
	vector<int> a;
	int m;
	while (cin >> m)
	{
		a.push_back(m);
	}
	int len = a.size();
	for (int i = 0; i<len; i++)
	{
		if (a[i]<0)
			countfu++;
		else if (a[i] >= 0)
		{
			sum += a[i];
			count++;
		}
	}
	average = double(sum) / count;
	cout << countfu << endl;
	if (sum == 0)
		cout << "0.0" << endl;
	else if (sum % (count) == 0)
		cout << sum / (count) << endl;
	else
		cout << fixed << setprecision(1) << average << endl;
}