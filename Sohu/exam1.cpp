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
		int *arr = new int[num];
		for (int i = 0; i < num;i++)
			cin >> arr[i];
		sort(arr,arr+num);
		int count = 0;
		int hat=-1;
		for (int i = 0; i < num; i++)
		{
			if (arr[i + 1]>arr[i]&&i<num-1)
			{
				count++;
				if (count == 3)
				{
					hat = arr[i];
					break;
				}
			}
			if (i == num - 1 && arr[i] > arr[i - 1])
			{
				count++;
				if (count == 3)
				{
					hat = arr[i];
					break;
				}
			}
		}
		cout << hat <<endl;
	}	
}