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

int main(){
	int num, length, pre;
	double range = 0;
	while (cin >> num >> length)
	{
		int count = 0, tval = 0;
		vector<int> light(num);
		for (int i = 0; i < num; i++)
			cin >> light[i];
		int j, k;
		int flag;
		flag = num;

		cout << << endl;
	}
	return 0;
}
//	vector<vector<int> > dp(num, vector<int>(num,0));
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