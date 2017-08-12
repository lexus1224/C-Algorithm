#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		string status = "up";
		bool flag = true,flag2=false;
		int start=0, end=0, count = 0,now,last=0,max=0,maxstart,maxend;
		vector<int> func;
		for (int i = 0; i < num; i++)
		{
			cin >> now;
			if (i>0)
			{
				if (now>last&&flag2==false&&flag==true)
				{
					count++;
					start = i-1;
					flag = true;
				}
				else if (now<last && flag==true)
				{
					count++;
					flag2 = true;
					flag = false;
				}
				else if (now>last && flag2==true)
				{
					end = i;
					flag2 = false;
				}
			}
			if (end - start > max)
			{
				max = end - start;
				maxend = end;
				maxstart = start;
			}
			last = now;
		}
		if (max > 0)
			cout << maxstart<<' '<<maxend << endl;
		else
			cout << -1 <<' '<< -1 << endl;
	}
	system("pause");
}