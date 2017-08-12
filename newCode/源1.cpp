#include<iostream>
#include<vector>
const int m = 1e9 + 7;
using namespace std;
int main(){
	int n;
	while (cin >> n)
	{	
		
		vector<int> dp(n+1,0);
		vector<int> a(n + 1,0);
		dp[0] = 1;
		a[0] = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			vector<int> exist(10, 0);
			for (int j = i-1; j >=0 ; j--)
			{
				dp[i] += dp[j];
				dp[i] %= int(1e9 + 7);
				if (a[i] == a[j] || exist[a[j]] == 1)
				{
					break;
				}
				exist[a[j]] = 1;
			}
		}
		cout << dp[n] % m << endl;
	}
	return 0;
}