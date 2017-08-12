#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include<set>　
#include<stack>　
#include<list>　
#include<algorithm>
#include<math.h>

using namespace std;
const int omod = 1e9 + 7;

int main(){
	int n;
	while (cin >> n)
	{
		float ex=0;
		vector<int> x(n, 0);
		vector<int> p(n ,0);
		for (int i = 0; i < n; i++)
		{
			cin >> x[i]>>p[i];
			ex += float(x[i]) * p[i] / 100;
		}
		printf("%.3f", ex);
		//cout <<  << endl;
	}
	return 0;
}




int main(){
	int num, totalval, cnum, col = 0, count = 0;
	cin >> num >> totalval >> cnum;
	vector<int> val(num);
	for (int i = 0; i < num; i++)
	{
		cin >> val[i];
	}
	vector<vector<int> > dp(num, vector<int>(num,0));
	for (int k = 0; k < num; k++)
	{
		dp[k][k] = val[k];
	}
	for (int t = 1; t < cnum; t++)
	{
		for (int row = 0; row < num - t; row++)
		{
			col = row + t;
			dp[row][col] = dp[row][col - 1] + dp[row + 1][col];
			if (t = cnum - 1)
			{
				if (dp[row][col] <= totalval)
					count++;
			}
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}
#include<iostream>
#include<vector>
using namespace std;
void quicksort(vector<int> &s, int l, int r)
{
	if (l< r)
	{
		int i = l, j = r, x = s[l];
		while (i < j)
		{
			while (i < j && s[j] >= x) // 从右向左找第一个小于x的数
				j--;
			if (i < j)
				s[i++] = s[j];
			while (i < j && s[i]< x) // 从左向右找第一个大于等于x的数
				i++;
			if (i < j)
				s[j--] = s[i];
		}
		s[i] = x;
		quicksort(s, l, i - 1); // 递归调用
		quicksort(s, i + 1, r);
	}
}
int main()
{
	vector<int> array = { 34, 65, 12, 43, 67, 5, 78, 10, 3, 70 };
	int k;
	int len = sizeof(array) / sizeof(int);
	cout << "the orginal arrayare:" << endl;
	for (k = 0; k<len; k++)
		cout << array[k] << ",";
	cout << endl;
	quicksort(array, 0, len - 1);
	cout << "the sorted arrayare:" << endl;
	for (k = 0; k<len; k++)
		cout << array[k] << ",";
	cout << endl;
	system("pause");
	return 0;
}
