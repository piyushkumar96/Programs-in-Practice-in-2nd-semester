#include<bits/stdc++.h>
using namespace std;
void sieveoferothenes(int n)
{
	bool flag[n+1];
	memset(flag,true,sizeof(flag));
	for(int i=2;i*i<=n;i++)
	{
		if(flag[i]==true)
  		{
			for(int j=i*2;j<=n;j=j+i)
				flag[j]=false;
		}
	}
	cout<<"the prime less than "<<n<<" are :";
	for(int i=2;i<=n;i++)
	  {
	  	if(flag[i]==true)
	  		{
	  			cout<<i<<" ";
	  		}
	  }
}
int main()
{
	int n;
	cout<<"enter the no upto which you want the prime nos: ";
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	
	sieveoferothenes(n);
	return 0;
}
