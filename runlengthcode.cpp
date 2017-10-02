#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str,s;
	cin>>str;
	int c=1;
	s=str[0];
	for(int i=1;i<str.length();i++)
	 {
	 	if(str[i-1]==str[i])
	 	{
	 		c++;
	 	}
	 	else
	 	{
	 	    	
	 		s=s+to_string(c)+str[i];
	 		c=1;
	 	}
	 	
	 }
	 s=s+to_string(c);
	 cout<<s;
	
	return 0;
}
