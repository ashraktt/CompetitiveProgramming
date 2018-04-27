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
	int x,y,z,a,b,c,sum=0;
	int n;
	cin>>x>>y>>z>>a>>b>>c;
	cin>>n;
	if((x+y+z)%5==0)
       sum+=(x+y+z)/5;
	else
       sum+=((x+y+z)/5)+1;
	if((a+b+c)%10==0)
		sum+=(a+b+c)/10;
	else
		sum+=((a+b+c)/10)+1;

	if(sum<=n)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;






// system("pause");
	return 0;
}