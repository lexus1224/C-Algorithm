#include <iostream>
#include <iomanip>
using namespace std;
int factorial(int num)
{
	int result = 1;
	for (int i = 1; i <= num; i++){
		result *= i;
	}
	return result;
}

int calculate(int num, int len)
{
	return factorial(num) / (factorial(num - len);
}
float wrongNum(int x, int y, int n, int m)
{
	float num = calculate(n - x, n + m - x - y);
	return num;
}
//float sameWrongNum(int* x, int* y, int k)
//{

//}
int main()
{
	int n, m, k;
	int temp;
	cin >> n >> m >> k;
	int *x = new int[k];
	int *y = new int[k];
	for (int i = 0; i < k; i++)
	{
		temp = 0;
		cin >> x[i] >> y[i];
		temp += wrongNum(x[i], y[i], n, m);
	}
	float total = calculate( n + m - 2,n-1);
	float result = 1 - temp / total;
	cout <<fixed<<setprecision(6)<< result << endl;
	system("pause");
	return 0;
}