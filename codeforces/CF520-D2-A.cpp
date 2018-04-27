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
	string s;
	int c=0,n;
	cin>>n;
	cin>>s;
	for(int i=0;i<s.size();i++)
		if(s[i]>='a')
			arr[s[i]-'a']++;
		else
			arr[s[i]-'A']++;
	for(int i=0;i<26;i++)
		if(arr[i]>=1)
			c++;
	if(c==26)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;


 //system("pause");
	return 0;
}
