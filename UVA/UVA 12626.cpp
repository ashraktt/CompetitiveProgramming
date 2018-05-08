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
	int t;
	cin>>t;
	for(int k=0;k<t;k++)   // m=1 , a=3 , r=2 , g=1 , i=1 , t=1;
	{
		map<char,int> m;
		string s;
		int ans=0;
		cin>>s;
		for(int i=0;i<s.size();i++)
			m[s[i]]++;
		m['A']/=3  ,  m['R']/=2;


     ans=min( m['A'] , min(m['M'] , min( m['R'] , min( m['G'], min(m['I'],m['T']) ) )  ) );
	 cout<<ans<<endl;
    }
 //system("pause");
	return 0;
}