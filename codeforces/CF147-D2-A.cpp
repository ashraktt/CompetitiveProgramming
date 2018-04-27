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
set <string> st;
set <string> :: iterator sitr;
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
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
	     if (s[i]==' ' && s[i+1]==' ')
		    	s.erase(i, 1) , i-=1;
		
		 if (s[i]==' ' && (s[i+1]==',' || s[i+1]=='.' || s[i+1]=='?' || s[i+1]=='!')) 
			   s.erase(i, 1);
		
		 if ((s[i]==',' || s[i]=='.' || s[i]=='?' || s[i]=='!') && ( (s[i+1]>='a' && s[i+1]<='z') || (s[i+1]>='A'&& s[i+1]<='Z') ) )
			  s.insert(i+1 , " ");
		
	

	}
	cout<<s<<endl;
 //system("pause");
	return 0;
}