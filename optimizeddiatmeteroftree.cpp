#include<bits/stdc++.h>
using namespace std;

struct tree {
	int data;
	struct tree* left;
	struct tree* right;
};
struct tree* newnode(int item){
	struct tree* node=(struct tree*)malloc(sizeof(struct tree));
	node->data=item;
	node->left=NULL;
	node->right=NULL;
};
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int diameter(struct tree* node,int *height)
{
	int rh=0,lh=0,ld=0,rd=0;
	if(node==NULL)
	{
		*height=0;
		return 0;
	}
	ld=diameter(node->left,&lh);
	rd=diameter(node->right,&rh);
	*height=max(lh,rh)+1;
	return max(rh+lh+1,max(ld,rd));
	
}
int main()
{
	int height=0;
	struct tree *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	
	cout<<"diameter of tree "<<diameter(root,&height);
	
	return 0;
}
