#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	string s[t];
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int min=10000,len[n],c=0;
		string str[n];
		for(int j=0;j<n;j++)
		{
		  cin>>str[j];
		  len[j]=str[j].length();
		  if(min>len[j])
		  	min=len[j];
		}
		
		if(n==1)
			{
				s[i]=str[i];
			}
		else
		{
			int k=0;
		for(int j=1;j<n;j++)
		{
			if(str[0][k]==str[j][k])
				c++;
			else
			{
				if(k==0)
				  c=-1;
				break;
			}
			if(k==min-1)
				break;
			if(j==n)
				{
					j=0;
					k++;
				}
		}
		if(c!=-1)
		{
			for(int j=0;j<c;j++)
	       	{
			s[i]=s[i]+str[0][j];
		    }
		}
		else
			s[i]="-1";		
		
		}
	}
	for(int i=0;i<t;i++)
	{
		cout<<s[i]<<endl;
	}
	
	
	
	return 0;
}
