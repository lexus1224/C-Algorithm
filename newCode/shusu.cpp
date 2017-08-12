#include<iostream>
using namespace std;
 
int main()
{
	int n,count;
	
	while (1)
	{
		cin >> n;
		if (n == -1)
			return 0;
		count = 0;
		if (n < 2)
			cout <<"No" << endl;
		else if (n == 2)
			cout << "Yes" << endl;
		else if (n % 2 == 0)
			cout << "No" << endl;
		else
		{
			for (int i = 2; i*i <= n; i++)    //判断是否为素数可以使用所有比n小的数与n相除，如果能除开就不是素数，但是其实只需要判断到i*i>=n就可以了，因为此时已经不存在比i大的数能把n除开啦，仔细想想就会明白啦
			{
				if (n % i == 0)
					count++;
			}
			if (count>0)
				cout << "No" << endl;
			else
				cout << "Yes" << endl;
		}
	}
	
	//system("pause");
	
}
