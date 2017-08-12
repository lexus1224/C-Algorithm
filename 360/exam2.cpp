#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
	string T;
	while (cin >> T)
	{
		int total=0,asc;
		bool flag;
		for (int r = 0; r < T.length(); r++)
		{
			vector<int> time(26, 0);
			for (int i = r; i >=0 ; i--)
			{	
				flag = true;
				asc = T[i] - 'a';
				time[asc]++;
				if ((r - i) % 2 != 0)
				{
					for (int k = 0; k < 26; k++)
					{
						if (time[k] % 2 != 0)
						{
							flag = false;
							break;
						}
					}
					if (flag == true)
						total += 1;
				}				
			}
		}
		cout << total << endl;
	}
	return 0;
}