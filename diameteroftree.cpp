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
int height(struct tree* node)
{
	if(node==NULL)
	{
		return 0;
	}
	else
	{	
		return (1+max(height(node->left),height(node->right)));
	}
}
int diameter(struct tree* node)
{
	if(node==NULL)
		return 0;
	int rheight=height(node->right);
	int lheight=height(node->left);
	int ldiameter=diameter(node->left);
	int rdiameter=diameter(node->right);
	return max(rheight+lheight+1,max(ldiameter,rdiameter));
}
int main()
{
	struct tree *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	
	cout<<"diameter of tree "<<diameter(root);
	
	return 0;
}
