//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int w, x, y, z;
//	while (cin >> w >> x >> y >> z)
//	{
//		vector<float> buf;
//		vector<float>::iterator it;
//		for (int j = y; j <= z; j++)
//		{
//			for (int i = w; i <= x; i++)
//			{
//				float temp = (float)i / j;
//				buf.push_back(temp);
//			}
//		}
//		sort(buf.begin(), buf.end());
//		it = unique(buf.begin(), buf.end());
//		buf.erase(it, buf.end());
//		for (it = buf.begin(); it != buf.end(); it++)
//			cout << *it << " ";
//		cout << buf.size() << endl;
//	}
//	
//	system("pause");
//}