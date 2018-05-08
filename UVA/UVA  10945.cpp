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
		while (getline(cin,s))
		{
		    if(s=="DONE")
		        break;
			string x = "" ,y="";
			for (int i = 0; i < s.size(); i++)
				  if (isalpha(s[i]))
				   	x += s[i];
				
				
			x=lower(x);
			
		   y= x;
			
			 reverse(x.begin(),x.end());
			 
			if (x== y )
			cout << "You won't be eaten!"<<endl;
			else 
			cout << "Uh oh.."<<endl;
			x =" " , y  = "";
		}

 //system("pause");
	return 0;
}