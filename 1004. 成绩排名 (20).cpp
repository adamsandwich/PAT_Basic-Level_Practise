#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct stu
{
	string name;
	string id;
	int score;
};
int main()
{
	int n, max = 0, min = 0;
	cin >> n;
	stu *stuList = new stu[n];
	for (int i = 0; i < n; i++)
	{
		cin >> stuList[i].name >> stuList[i].id >> stuList[i].score;
		if (stuList[i].score > stuList[max].score)max = i;
		if (stuList[i].score < stuList[min].score)min = i;
	}
	cout << stuList[max].name << " " << stuList[max].id << endl;
	cout << stuList[min].name << " " << stuList[min].id;
	system("pause");
	return 0;
}
