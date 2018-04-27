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
int arr[26];
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
int main()
{   
	
	long long arr[100000],a2[100000];
  int n;
  cin>>n;
   for(int i=0;i<n;i++)
	   cin>>arr[i] , a2[i]=arr[i];
  
   for(int i=1 ;i<n;i++)
	   a2[i]+=a2[i-1];

   sort(arr,arr+n);

   for(int i=1 ;i<n;i++)
	   arr[i]+=arr[i-1];
   

   int q;
   cin>>q;
   for(int i=0;i<q;i++)
   {
       int type,l,r;
	   cin>>type>>l>>r;
	   if(type==2)
	   {
	 	   if(l==r && l!=1)
			   cout<<arr[r-1]-arr[r-2]<<endl;
		   else if(l==1)
			   cout<<arr[r-1]<<endl;
		   else if(l>=2)
		     cout<<arr[r-1]-arr[l-2]<<endl;
	   }
	   else
	   {
		   if(l==r && l!=1)
			   cout<<a2[r-1]-a2[r-2]<<endl;
		   else if(l==1)
			   cout<<a2[r-1]<<endl;
		   else if(l>=2)
		     cout<<a2[r-1]-a2[l-2]<<endl;
	   }
   }
	


 //system("pause");
	return 0;
}