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
	long long n,x,c=0;
	cin>>n>>x;
	for(long long i=1;i<=n;i++)
	{
		//cout<<i*n<<endl;
	     if(i*n==x)
	        c++;
		 else if(i*n>x && x%i==0)
			 c++;
	}
	cout<<c<<endl;

	
 //system("pause");
	return 0;
}