#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include<set>¡¡
#include<stack>¡¡
#include<list>¡¡
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		vector<int> arr(num,0);
		for (int i = 0; i < num;i++)
			cin >> arr[i];
		int count = 0;
		while (1)
		{
			int i;
			for (i = 0; i < num - 1; i++)
			{
				if ((arr[i]>arr[i + 1] && i<num - 2) || (i == num - 2 && arr[i] < arr[i - 1]))
				{
					int temp = arr[i];
					arr.erase(arr.begin()+i);
					arr.push_back(temp);
					count++;
				}
			}
			if (i == num - 1)
			{
				if (arr[num - 1] < arr[num - 2])
				{
					int temp = arr[0];
					arr.erase(arr.begin());
					arr.push_back(temp);
					count++;
				}
				else
				{
					break;
				}
			}
		}
		
		cout << count <<endl;
	}	
}