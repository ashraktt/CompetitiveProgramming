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
	int n,a,arr[100],ans=0,f=0,d=0,x,y;
	cin>>n>>a;
	for(int i=0;i<n;i++)
		cin>>arr[i], ans+=arr[i];
	if(ans==n)
	{cout<<ans<<endl ; return 0;}
	else if (n==2 &&  ans==1)
	{ 
		cout<<ans<<endl;  return 0;
	}
	else
		ans=0;
	a-=1;
	if(arr[a]==1)
		ans+=1,arr[a]=0;
	if(a==0)
		x=a;
	else
		x=a-1;
	if(a==n-1)
		y=a;
	else
		y=a+1;
   //cout<<ans<<endl;
	for(int i=0  ;i<n ;i++)
	{   
	    // cout<<x<<"  "<<y<<endl;
	    if(f==d && ((arr[x]==0 && arr[y]==1)||(arr[x]==1&& arr[y]==0)) )
	            arr[x]=0,arr[y]=0;
	    else if(f==d && arr[x]==1 && arr[y]==1)
			 ans+=2,arr[x]=0,arr[y]=0;
		 else if(f!=d && x==0 && arr[y]==1)
			 ans+=1 ,arr[y]=0;
		  else if(f!=d && y==n-1 && arr[x]==1)
			 ans+=1 ,arr[x]=0;
			// cout<<ans<<endl;
		 if(x==0 && y==n-1)
			 break;
	
		 if(x>0)
			 x--,f++;
		 if(y<n-1)
			 y++,d++;
		 
	}
	cout<<ans<<endl;
 //system("pause");
	return 0;
}