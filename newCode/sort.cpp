#include<iostream>
using namespace std;

int main()
{
	int t,n,*a,min,count,temp;
	cin >> t;
	for (int r = 0; r < t; r++)
	{
		count = 0;
		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			min = i;
			for (int j = i+1; j < n; j++)
			if (a[j] < a[min])
			{
				min = j;
				count++;
			}
			if (min != i)
			{
				temp = a[min];
				a[min] = a[i];
				a[i] = temp;
			}
		}
		cout << count<<endl;
		delete[] a;
	}
	
	//system("pause");
	return 0;
}