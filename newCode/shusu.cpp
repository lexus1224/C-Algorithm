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
			for (int i = 2; i*i <= n; i++)    //�ж��Ƿ�Ϊ��������ʹ�����б�nС������n���������ܳ����Ͳ���������������ʵֻ��Ҫ�жϵ�i*i>=n�Ϳ����ˣ���Ϊ��ʱ�Ѿ������ڱ�i������ܰ�n����������ϸ����ͻ�������
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
