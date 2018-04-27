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
	long long arr[100000];
	int n,att[100000]={0},c=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
	     int x,y;
		 cin>>x>>y;
         att[x-1]++;   att[y]--;
	 
	}
	for(int i=1;i<n;i++)
	  att[i]+=att[i-1];

	for(int i=0;i<n;i++)   
	   if(att[i]==0)
		   c++;

	cout<<c<<endl;

	for(int i=0;i<n;i++)
		if(att[i]==0)
			cout<<arr[i]<<" ";
	cout<<endl;

	

 //system("pause");
	return 0;
}