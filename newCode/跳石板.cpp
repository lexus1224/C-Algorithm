#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string>
#include <string.h>
#include<algorithm>
#include<vector>
using namespace std;
void calDif(int n,vector<int> &dif){
	for (int i = 2; i <= n / 2; i++){
		if (n%i == 0)
			dif.push_back(i);
	}
}
int main(){
	int N, M;
	while (cin >> N >> M){
		vector<int> dp(M + 1, 0);
		for (int i = N; i <= M; i++){
			vector<int> dif;
			calDif(i,dif);
			for (int k = 0; k<dif.size(); k++){
				if (dp[i + dif[k]] == 0 && (i + dif[k] <= M))
					dp[i + dif[k]] = dp[i] + 1;
				else if (i + dif[k]<=M)
					dp[i + dif[k]] = min(dp[i] + 1, dp[i + dif[k]]);
				else{}
			}
			
		}
		cout << dp[M] << endl;
	}
}