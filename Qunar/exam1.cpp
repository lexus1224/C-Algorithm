#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int  num;
	while (cin >> num)
	{
		int seq, ans, ex,temp,score=0;
		vector<int> buf(101,0);
		for (int i = 0; i < num;i++)
		{
			cin >> seq >> ans >> ex;
			temp = ans * 2 + ex;
			if (temp == 2 && buf[seq] < 2)
			{
				score += 10;
				buf[seq] = 2;
			}
			else if (temp == 2 && buf[seq] >= 2)
			{
				score += 5;
			}
			else if (temp == 3)
			{
				score += 30;
				buf[seq] = 3;
			}
		}
		cout << score << endl;
	}
	
	system("pause");
}