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
	int n;
	long long arr[10000000];
	long long sum=0,x;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i],sum+=arr[i];
	if(sum%2==0)
		cout<<sum<<endl;
	else
	{
	  sort(arr,arr+n);
	  for(int i=0 ; i<n ; i++)
	  {   
		  if(arr[i]%2==0)
			  continue;
		  else
		     sum-=arr[i];
		if(sum%2==0)
			break;
	  }
	
	  cout<<sum<<endl;
	}
 //system("pause");
	return 0;
}