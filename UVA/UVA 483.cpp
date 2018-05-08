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
string reverse(string s)
{
   string a="";
   for(int i=s.size()-1;i>=0;i--)
		   a+=s[i];
	
   return a;
}
int main()
{   
	fast();
	string s;
	
	while (getline(cin,s))
	{
       string a="",q="";
	   for(int i=0;i<s.size();i++)
		 {
		   if(s[i]!=' ')
			   a+=s[i];
		   else
		   {
			   
			   a=reverse(a);
			   a+=' ';
		     q+=a;
		       
			   a="";
		   }
		 }
  	//	 cout<<a<<endl;
  	     a=reverse(a);
			  // a+=' ';
			   q+=a;
		   cout<<q<<endl;
	}


 //system("pause");
	return 0;
}