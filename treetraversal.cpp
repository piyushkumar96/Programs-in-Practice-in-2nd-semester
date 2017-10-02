#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data ;
	struct Node *left;
	struct Node *right;
};
struct Node* newnode(int item)
{
	struct Node* node=(struct Node*)malloc(sizeof(struct Node));
	node->data=item;
	node->left=NULL;
	node->right=NULL;
	return node;
	
} 
void preorder(struct Node* node)
{
	if(node==NULL)
	    return ;
	cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}
void inorder(struct Node* node)
{
	if(node==NULL)
		return ;
	inorder(node->left);
	cout<<node->data<<" ";
	inorder(node->right);
	
}

void postorder(struct Node* node)
{
	if(node==NULL)
		return ;
	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<" ";
}
int main()
{
	struct Node* root=newnode(4);
	root->left=newnode(3);
	root->right=newnode(6);
	root->left->left=newnode(1);
	root->left->right=newnode(2);
	root->right->left=newnode(5);
	root->right->right=newnode(7);
	
	cout<<"preorder traversal ";
	preorder(root);
	cout<<endl;
	cout<<"inorder traversal ";
	inorder(root);
	cout<<endl;
	cout<<"postorder traversal ";
	postorder(root);
	cout<<endl;
	
	
	return 0;
}
