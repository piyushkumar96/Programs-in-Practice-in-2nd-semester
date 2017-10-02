#include<bits/stdc++.h>
using namespace std;
struct bintree
{
	int data;
	struct bintree* left;
	struct bintree* right;
};

struct bintree* newnode(int item)
{
	struct bintree* node=(struct bintree*)malloc(sizeof(struct bintree));
	node->data=item;
	node->left=NULL;
	node->right=NULL;
	return node;
}
int heightofbt(struct bintree* node)
{
	if(node==NULL)
		return 0;
	else
	{
		int lheight=heightofbt(node->left);
		int rheight=heightofbt(node->right);
		return (lheight>rheight)?(lheight+1):(rheight+1);
	}
}
int getwidth(struct bintree* node,int level)
{
	if(node==NULL)
		return 0;
	else if(level==1)
		return 1;
	else if(level > 1)
	{
		return getwidth(node->left,level-1)+getwidth(node->right,level-1);
	}
}
int getmaxwidth(struct bintree* node)
{
	int maxwidth=0;
	int width;
	int h = heightofbt(node);
	for(int i=1;i<=h;i++)
	{
		width=getwidth(node,i);
		if(width>maxwidth)
			maxwidth=width;
	}
	return maxwidth;
}
int main()
{
	struct bintree *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(9);
	root->right->right=newnode(8);
	root->right->right->left=newnode(6);
	root->right->right->right=newnode(7);
	cout<<"The maximum width is "<<getmaxwidth(root);
	
	
	return 0;
}
