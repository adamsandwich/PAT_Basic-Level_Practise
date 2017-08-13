#include<iostream>
#include<string>
using namespace std;
typedef struct Num
{
	int coe;
	int exp;
};
int main()
{
	Num *num = new Num[1000];
	int i = 0;
	int flag = 0;
	while (cin >> num[i].coe>> num[i].exp)
	{
		if (num[i].exp == 0) {
			if (flag == 0)
				cout << "0 0";//要是第一次输出就是b = 0的情况，那直接0 0
			return 0;
		}
		if (flag == 1)
			cout << " ";//不是第一次输出了 那前面就加一个空格
		cout << num[i].coe * num[i].exp << " " << num[i].exp - 1;
		flag = 1;
		i++;
	}
	if (flag == 0) //如果没有输入，就要输出0 0
		cout << "0 0";
	return 0;
}
