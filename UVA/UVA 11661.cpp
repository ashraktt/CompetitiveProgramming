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
map <string , int > m ;
map <string , int> :: iterator mitr ;

void fast()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
int arr[26];
int main()
{   
	fast();
	int n;
	string s;
	for(int j=0; ; j++)
	{
		int c=0;
		cin>>n;
		if(n==0)
		   return 0;
	   else
		{
		 cin>>s;
		 bool a=false;
		 int x=s.size();
		 int y=s.size();
		 int ans=s.size();
		// cout<<ans<<endl;
		 for(int i=0;i<s.size();i++)
		 {
		     if(s[i]=='Z')
			 {
			     cout<<0<<endl;
				 a=true;
				 break;
			 }
			  if (s[i]=='R')
		          x=i;
			 else if(s[i]=='D')
				 y=i;
			  
			 // cout<<x<<"  "<<y<<endl;
			 // cout<<abs(x-y)<<endl;
			  if(ans > abs(x-y)&& (x!=s.size() && y!=s.size()))
			       ans=abs(x-y);
			 // cout<<ans<<endl;
		 }
		 if(a==false)
		 cout<<ans<<endl;

		}
	
	}
 //system("pause");
	return 0;
}