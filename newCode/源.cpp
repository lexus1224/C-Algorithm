#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> divisor(int i){
	vector<int> div;
	for (int k = 2; k <= (int)sqrt((double)(i)); k++){
		if (i%k == 0){
			div.push_back(k);
			if (k*k != i){
				div.push_back(i/k);
			}
		}
	}
	return div;
}
int main(){
	int n, m;
	cin >> n >> m;
	vector<int> div;
	vector<int> num(m+1, 0);
	for (int i = n; i <= m; i++){
		if (num[i] == 0 && i>n)
			continue;
		else
		{
			div = divisor(i);
			for (int k = 0; k<div.size(); k++){
				if (i + div[k] <= m){
					if (num[i + div[k]] == 0){
						num[i + div[k]] = num[i] + 1;
					}
					else if (num[i + div[k]]>0){
						if ((num[i] + 1)<(num[i + div[k]]))
							num[i + div[k]] = num[i] + 1;
					}
					else
						continue;
				}
				
			}
		}
		
	}
	if (num[m]>0 || n==m)
		cout << num[m];
	else
		cout << -1;
	//system("pause");
	return 0;
}