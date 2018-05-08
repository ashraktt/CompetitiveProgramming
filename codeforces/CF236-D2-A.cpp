#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <string>
int arr[26];
using namespace std;
int main()
{   
   string s;
   int c=0;
   cin>>s;
   for(int i=0 ; i<s.size();i++)
	   arr[s[i]-'a']+=1;
   
     for(int i=0 ;i<26 ;i++)
		 if(arr[i]!=0)
			 c++;
	 if(c%2==0)
		 cout<<"CHAT WITH HER!"<<endl;
	 else
		 cout<<"IGNORE HIM!"<<endl;
	 




  return 0;

}