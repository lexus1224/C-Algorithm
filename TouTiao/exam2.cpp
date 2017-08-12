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
const int omod = 1e9 + 7;


int main()
{
	string exp;
	while (cin >> exp)
	{
		int sum=0;
		int num = 0;
		char kk;
		int length = exp.length();
		stack<char> st;
		for (int i = 0; i < length; i++)
		{
			char w = exp[i];
			if (i == 0)
			{
				sum = w - '0';
			}
			else if (i % 2 == 0)
			{
				num = w - '0';
				switch (kk)
				{
				case '+':
					sum += num;
					break;
				case '-':
					sum -= num;
					break;
				case '*':
					sum *= num;
					break;
				}
			}
			else
			{
				kk = exp[i];				
			}
				
		}
		cout <<sum << endl;
	}
	return 0;
}
//	vector<vector<int> > dp(n, vector<int>(m,0));
//	for (int t = 1; t < cnum; t++)
//	{
//		for (int row = 0; row < num - t; row++)
//		{
//			col = row + t;
//			dp[row][col] = dp[row][col - 1] + dp[row + 1][col];
//			if (t = cnum - 1)
//			{
//				if (dp[row][col] <= totalval)
//					count++;
//			}
//		}
//	}
