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
	int t;
	cin>>t;
	for(int k=0;k<t;k++)   
	{
		int one =3 , two = 3 , three= 5;
		string s;
		cin>>s;
		if(s.size()==3)
		{
			if( (s[0]=='t'&& s[1]=='w')|| (s[0]=='t' && s[2]=='o') || (s[1]=='w' && s[2]=='o' ) )
                 cout<<2<<endl;
           else if(( s[0]=='o' && s[1]=='n')|| (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e'))
                 cout<<1<<endl;

		
		}
		else
			cout<<3<<endl;
    }
 //system("pause");
	return 0;
}