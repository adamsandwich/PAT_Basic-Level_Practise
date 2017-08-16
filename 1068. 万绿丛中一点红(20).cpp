#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool com(int i, int j,int tol)
{
	if (i - j > tol)return true;
	else return false;
}
int main()
{
	//m 列数
	//n 行数
	//tol 阈值
	int m, n, tol, color[1000][1000], unique, counter = 0, x, y;
	cin >> m >> n >> tol;
	//读入图像
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> color[i][j];
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			unique = 0;
			if (j + 1 == m)unique++;
			if (i + 1 == n)unique++;
			if (j - 1 == -1)unique++;
			if (i - 1 == -1)unique++;
			if (j + 1 < m&&com(color[i][j], color[i][j + 1], tol))unique++;//→
			if (j + 1 < m&&i + 1 < n&&com(color[i][j], color[i + 1][j + 1],tol))unique++;//↘
			if (i + 1 < n&&com(color[i][j], color[i + 1][j], tol))unique++;//↓
			if (j - 1 >= 0 && i + 1 < n && com(color[i][j], color[i + 1][j - 1], tol))unique++;//↙
			if (j - 1 >= 0 && com(color[i][j], color[i][j - 1], tol))unique++;//←
			if (j - 1 >= 0 && i - 1 >= 0 && com(color[i][j], color[i - 1][j - 1], tol))unique++;//↖
			if (i - 1 >=0&&com(color[i][j], color[i - 1][j], tol))unique++;//↑
			if (j + 1 <m&&i - 1 >=0&&com(color[i][j], color[i - 1][j + 1], tol))unique++;//↗
			if (unique == 8) {  counter++; x = i + 1; y = j + 1;}
		}
	}
	if (counter == 1)cout << "(" << y << ", " << x << "): " << color[x - 1][y - 1];
	if (counter > 1)cout << "Not Unique";
	if (counter == 0)cout << "Not Exist";
	system("pause");
	return 0;
}
