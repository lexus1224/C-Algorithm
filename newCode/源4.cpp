#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<map>
#include <algorithm>
using namespace std;
int main(){
	int n, T, relate,pnum,a,b;
	cin >> T;
	for (int q = 0; q < T; q++)
	{
		cin >> pnum >> relate;
		vector<int> in(pnum+1,0);
		vector<int> out(pnum+1, 0);
		vector<int> host;
		for (int k = 0; k < relate; k++)
		{
			cin >> a >> b;
			if (a == b)
				continue;
			out[a]++;
			in[b]++; 
			
		}
		for (int i = 1; i <= pnum ; i++)
		{
			if (out[i] == 0 && in[i] == pnum - 1)
				host.push_back(i);
			
		}
		if (host.size()==0)
			cout << 0 << endl << endl;
		else
		{
			cout << host.size() << endl;
			for (int i = 0; i < host.size(); i++)
			{
				cout << host[i];
				if (i < host.size() - 1)
					cout << ' ';
			}
			cout << endl;
		}

	}
	return 0;
}