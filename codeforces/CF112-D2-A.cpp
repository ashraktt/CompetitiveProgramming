#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <string>
#include <map>
#include <set>
using namespace std;
string binary(long long x)
{
	string num="";
	long long  i = 0;
	while (x != 0)
	{
		num += x % 2 + '0';
		x /= 2;
	}
	return num;
}

void fast()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
string lower(string s)
{
   string a="";
   for(int i=0;i<s.size();i++)
	   if(s[i]>='A' && s[i]<='Z')
		   a+=s[i]+32;
	   else
		   a+=s[i];
   return a;
}
int main()
{   
	fast();
	string s,s1;
	cin>>s>>s1;
	s= lower(s);
	s1=lower(s1);
	if(s<s1)
		cout<<-1<<endl;
	else if(s1<s)
		cout<<1<<endl;
	else
		cout<<0<<endl;
 //system("pause");
	return 0;
}