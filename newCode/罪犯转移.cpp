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
	int num, totalval, cnum;
	while (cin >> num >> totalval >> cnum)
	{
		int count = 0, tval = 0;
		vector<int> val(num);
		for (int i = 0; i < num; i++)
		{
			cin >> val[i];
		}
		if (cnum>num)
			cout << 0 << endl;
		else
		{
			for (int k = 0; k < cnum; k++)
				tval += val[k];
			if (tval <= totalval)
				count++;
			for (int k = 0; k < num - cnum; k++)
			{
				tval = (tval + val[k + cnum] - val[k]) % omod;
				if (tval <= totalval)
					count++;
			}
			cout << count << endl;
		}
	}
	//system("pause");
	return 0;
}
//int main(){
//	int num, totalval, cnum, col = 0, count = 0;
//	cin >> num >> totalval >> cnum;
//	vector<int> val(num);
//	for (int i = 0; i < num; i++)
//	{
//		cin >> val[i];
//	}
//	vector<vector<int> > dp(num, vector<int>(num,0));
//	for (int k = 0; k < num; k++)
//	{
//		dp[k][k] = val[k];
//	}
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
//	cout << count << endl;
//	system("pause");
//	return 0;
//}