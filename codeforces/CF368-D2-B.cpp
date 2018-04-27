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
    int n,q,arr[100000],att[100000];
	cin>>n>>q;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	set <int> st;
	for(int i =n-1 ;i>=0;i--)
	{
	  
	  st.insert(arr[i]);
	  att[i]=st.size();
	}

	for(int j=0;j<q;j++)
	{
		
		int y;
		cin>>y;
		cout<<att[y-1]<<endl;
	
	}

 //system("pause");
	return 0;
}