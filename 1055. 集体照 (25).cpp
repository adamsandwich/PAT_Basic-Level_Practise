//嘿嘿嘿 不想写 抄小方的
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
struct Person
{
  string name;
  int height;
};
bool cmp(const Person perA, const Person perB)
{
  if (perA.height != perB.height)
    return perA.height > perB.height;
  else
    return perA.name < perB.name;
}
string right(string str,string name)
{
  str = str + name;
  return str;
}
string left(string str, string name)
{
  str = name + " " + str;
  return str;
}
int main()
{
  int m, n;
  cin >> m >> n;
  string *str = new string[n];
  Person *per = new Person[m];
  for (int i = 0; i < m; i++)
  {
    cin >> per[i].name >> per[i].height;
  }
  sort(per, per + m, cmp);
  int col = m / n;
  int colFirst = m / n + m%n;
  bool flag = true;
  for (int i = 0; i < colFirst; i++)
  {
    if (flag)//left
    {
      str[0] = right(str[0], per[i].name);
      if (i != colFirst-1 && i != colFirst-2)
        str[0] += " ";
    }
    else
    {
      str[0] = left(str[0], per[i].name);
    }
    flag = !flag;
  }
  int begin = colFirst;
  for (int i = 1; i < n; i++)
  {
    flag = true;
    for (int j = 0; j < col; j++)
    {
      if (flag)//left
      {
        str[i] = right(str[i], per[begin++].name);
        if (j != col - 2 && j != col - 1 )
          str[i] += " ";
      }
      else
      {
        str[i] = left(str[i], per[begin++].name);
      }
      flag = !flag;
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << str[i]<< endl;
  }
  system("pause");
  return 0;
}
