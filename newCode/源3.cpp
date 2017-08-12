#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<map>
#include <algorithm>
using namespace std;
int main(){
	int n, T, j, totalmine = 0, sum;
	string str;
	cin >> T;
	for (int i = 0; i < T;i++)
	{
		vector<int> asc(200, 0);
		cin >> str;
		for (int k = 0; k < str.length(); k++)
		{
			asc[str[k]]++;
			
		}
		for (int k = 0; k<str.length(); k++)
		{
			if (asc[str[k]]==1){
				cout << str[k] << endl;
				break;
			}
		}
	}
	return 0;
}