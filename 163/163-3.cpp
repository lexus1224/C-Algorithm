//#include<iostream>
//#include<stdio.h>
//#include<iomanip>
//#include<string>
//#include<vector>
//#include<map>
//#include<set>¡¡
//#include<stack>¡¡
//#include<list>¡¡
//#include<algorithm>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	int n,num;
//	while (cin >> n)
//	{
//		int qnum;
//		vector<int> seq;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> num;
//			seq.push_back(num);
//		}	
//		vector<int> rep(n,0);
//		for (int i = n-1; i >=0; i--)
//		{
//			for (int j = i; j >= 0; j--)
//			{
//				if (j == i)
//				{
//					qnum = seq[j];
//				}
//				else if (rep[j] == 0)
//				{
//					if (qnum == seq[j])
//						rep[j] = 1;
//				}
//			}
//		}
//		int p = 0;
//		for (int i = 0; i < seq.size(); i++)
//		{
//			if (rep[p] == 1)
//			{
//				seq.erase(seq.begin() + i);
//				i--;
//			}
//			p++;
//		}
//		for (int i = 0; i < seq.size(); i++)
//		{
//			cout << seq[i];
//			if (i != seq.size() - 1)
//				cout << ' ';
//		}
//		
//	}
//}