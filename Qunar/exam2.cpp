#include <vector>
#include <iostream>
using namespace std;

void bsort(vector<int> &a, vector<int> &b, vector<int> &c, int n)//n为数组a的元素个数
{
	//最多进行N-1轮比较
	int temp;
	for (int i = 0; i< n - 1; i++)
	{
		bool isSorted = true;
		//每一轮比较前n-1-i个，即已排序好的最后i个不用比较
		for (int j = 0; j< n - 1 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				isSorted = false;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;

				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
			else if (a[j] == a[j + 1] && b[j] < b[j + 1])
			{
				isSorted = false;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;

				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
		if (isSorted) break; //如果没有发生交换，说明数组已经排序好了
	}
}

int main()
{
	int  num;
	while (cin >> num)
	{
		int min;
		float ave,total;
		vector<int> minStar(num,0);
		vector<int> seq(num, 0);
		vector<int> aveStar(num, 0);
		int star;
		for (int i = 0; i < num;i++)
		{
			min = 5;
			total = 0;
			for (int k = 0; k < 5; k++)
			{
				cin >> star;
				total += star;
				if (star < min)
					min = star;		
			}
			minStar[i] = min;
			aveStar[i] = total;
			seq[i] = i;
		}
		bsort(minStar, aveStar,seq, num);
		for (int i = 0; i < num; i++)
		{
			cout << seq[i];
			if (i < num - 1)
				cout << ' ';
		}
		cout << endl;
	}
	return 0;
}