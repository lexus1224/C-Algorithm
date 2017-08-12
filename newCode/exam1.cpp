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

int findLongest(string A, int n, string B, int m) {
	vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));
	int maxlength = 0;
	for (int i = n - 1; i >= 0; i--){
		for (int j = m - 1; j >= 0; j--){
			if (A[i] == B[j]){
				dp[i][j] = dp[i + 1][j + 1] + 1;
				maxlength = (dp[i][j] > maxlength) ? dp[i][j] : maxlength;
			}
		}
	}
	return maxlength;
}

int main()
{
	string A, B;
	while ((getline(cin, A)) && (getline(cin, B)))
	{
		int n = A.length();
		int m = B.length();
		int maxlen = findLongest(A, n, B, m);
		cout << maxlen << endl;
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
