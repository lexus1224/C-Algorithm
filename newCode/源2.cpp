#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
	int n,T,j,totalmine=0,sum;
	cin >> T;
	for (int c = 1; c <= T;c++)
	{
		cin >> n;
		vector<int> mine(n + 1, 0);
		int dp[501][501];
		sum = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> mine[i];
			dp[i][i] = mine[i];
			sum += mine[i];
		}
			
		
		for (int k = 1; k <= n-1; k++)
		{
			for (int i = 1; i <= n - k ; i++)
			{
				j = i + k;
				
					totalmine = 0;
					for (int p = i; p <= j; p++)
					{
						totalmine += mine[p];
					}
					dp[i][j] = totalmine - min(dp[i + 1][j], dp[i][j - 1]);
				
			}
		}
		cout << "Case #" << c << ": " << dp[1][n] << ' ' << sum - dp[1][n]<<endl;
	}
	return 0;
}