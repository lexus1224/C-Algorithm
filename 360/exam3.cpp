#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
	int N, M;
	while (cin >> N>>M)
	{
		vector<int> T(N);
		//vector<int> Q(M);
		int x;
		for (int i = 0; i < N; i++)
			cin >> T[i];

		for (int r = 0; r < M; r++)
		{
			cin >> x;
			bool flag=false;
			int middle;
			int left = 0, right = N - 1;
			while( left <= right)
			{
				middle = (left + right) / 2;
				if (x == T[middle])
				{
					flag = true;
					break;
				}
				else if (x<T[middle])
					right = middle - 1;
				else
					left = middle + 1;
			}
			if (flag == false)
				cout << x << endl;
			else{
				int k = 1;
				while (x > T[middle + k]){
					k++;
				}
				cout << T[middle + k-1] + 1;
			}
				
		}
	}
	return 0;
}