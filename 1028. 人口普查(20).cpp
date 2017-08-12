#include<iostream>
#include<string>
using namespace std;
struct person
{
	string name;
	string birth;
};
bool isValid(person a)
{
	if (a.birth > "2014/09/06")return false;
	if (a.birth < "1814/09/06")return false;
	return true;
}
int main()
{
	int num, validCount = 0;
	cin >> num;
	person *people = new person[num];
	person  max, min;
	for (int i = 0; i < num; i++)
	{
		cin >> people[i].name >> people[i].birth;
		if (isValid(people[i]))
		{
			if (validCount == 0) { max = people[i]; min = people[i]; }
			if (people[i].birth < max.birth)max = people[i];
			if (min.birth < people[i].birth)min = people[i];
			validCount++;
		}
	}
	if (validCount == 0)
		cout << 0;
	else
		cout << validCount << " " << max.name << " " << min.name;
	system("pause");
	return 0;
}
