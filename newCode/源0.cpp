#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	int N, M,s,n1,n2;
	char command;
	while (cin >> N >> M)
	{
		vector<int> score;
		for (int i = 0; i < N; i++)
		{
			cin >> s;
			score.push_back(s);
		}
		for (int j = 0; j < M; j++)
		{
			cin >> command >> n1 >> n2;
			if (command == 'Q')
			{
				if (n1 > n2)
					swap(n1, n2);
				vector<int> temp;
				for (int i=n1-1; i <= n2-1; i++)
					temp.push_back(score[i]);
				sort(temp.begin(), temp.end());
				cout << temp[n2 - n1]<<endl;
			}
			else
			{
				score[n1 - 1] = n2;
			}
		}
	}

	//system("pause");
	return 0;
}