#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>
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
		if (s[i] >= 'A'&&s[i] <= 'Z')
			a+= (s[i] + 32);  
		else
			a+=s[i];
	   
	
   return a;
}
int main()
{   
	fast();
	string s;
	set<string> ss;
	set<string> :: iterator itr;

	while(cin>>s)
	{
	  string x ="";
	  for(int i=0;i<s.size();i++)
		  if(isalpha(s[i]))
			  x+=s[i];
		  else
		  {
			  x=lower(x);
			  ss.insert(x);
			  x="";
		  
		  }
		   x=lower(x);
		  ss.insert(x);
	}
		  
	for(itr=ss.begin() ; itr!=ss.end() ; itr++)
		  if(*itr!="")
		   cout<<*itr<<endl;

// system("pause");
	return 0;
}