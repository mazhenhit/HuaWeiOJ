#include <iostream>

using namespace std;

typedef struct L
{
	int id;
	int val;
	char flag;
}LIST;

int main()
{
	int num = 0;
	cin >> num;
	LIST *pList = new LIST[num];
	for (int i = 0; i < num; i++)
	{
		cin >> pList[i].id;
		cin >> pList[i].val;
		pList[i].flag = 0;
	}
	for (int i = 0; i < num; i++)
	{
		if (pList[i].flag == 0)
		{
			for (int j = i + 1; j < num; j++)
			{
				if (pList[i].id == pList[j].id && pList[i].flag == 0 && pList[j].flag == 0)
				{
					pList[i].val += pList[j].val;
					pList[j].flag = 1;
				}
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		if (pList[i].flag == 0)
		{
			cout << pList[i].id << endl << pList[i].val << endl;
		}
	}

	return 0;
}