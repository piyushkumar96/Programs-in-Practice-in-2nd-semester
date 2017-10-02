#include<bits/stdc++.h>

using namespace std;

int prec(char ch)
{
	if(ch=='^')
		return 3;
	else if((ch=='*')||(ch=='/'))
		return 2;
	else if((ch=='+')||(ch=='-'))
		return 1;
	else
		return -1;
}
void infixtopostfix(string s)
{
	int l=s.length();
	string str;
	stack <char> st;
	st.push('N');
	for(int i=0;i<l;i++)
		{
			if(((s[i]>='a')&&(s[i]<='z'))||((s[i]>='A')&&(s[i]<='Z')))
				str=str+s[i];
			else if(s[i]=='(')
			 {
			 	st.push('(');
			 }
			 else if(s[i]==')')
			 	{
			 		while(st.top()!='(')
			 			{
			 				char c=st.top();
			 				str=str+c;
			 				st.pop();
			 			}
			 			if(st.top()=='(')
			 				{
			 					st.pop();
			 				}
			 	}
			 else
			 	{
					while((st.top()!='N')&&(prec(s[i])<=prec(st.top())))
						{
							char c=st.top();
							str=str+c;
							st.pop();
						}
						st.push(s[i]);
			 	}
			
			
		}
		while(st.top()!='N')
			{
				char c=st.top();
				str=str+c;
				st.pop();
			}
	
	cout<<"postfix string is "<<str;
	
}
int main()
{
	string str= "a+b*(c^d-e)^(f+g*h)-i";
	cout<<"the infix string "<<str<<endl;
	infixtopostfix(str);
	
	return 0;
}
