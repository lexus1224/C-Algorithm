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
	long long from, to;
	int dif;
	while (cin >> from >> to >> dif)
	{
		double fromDif = (double)from / dif;
		double toDif = (double)to / dif;
		int intFrom = ceil(fromDif);
		int intTo = floor(toDif);
		cout << intTo - intFrom + 1 << endl;
	}
	//system("pause");
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
