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
	string s;
	while(getline(cin,s))
	{
		int c=0;
		bool y;
		for(int i=0;i<s.size();i++)
			if(isalpha(s[i]))
			      y=true;
			else if(y==true)
		   	y=false , c++;
			    
			
	
	  cout<<c<<endl;
	
	}
 //system("pause");
	return 0;
}