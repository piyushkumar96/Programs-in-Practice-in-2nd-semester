#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node * newnode(int item)
{
	struct Node* node=(struct Node*)malloc(sizeof(struct Node));
	node->data=item;
	node->left=NULL;
	node->right=NULL;
}
struct Node* bin_sear_tree(int arr[],int start, int end)
{
	if(start>end)
		return NULL;
	int mid=(start+end)/2;
	struct Node* root=newnode(arr[mid]);
	root->left=bin_sear_tree(arr,start,mid-1);
	root->right=bin_sear_tree(arr,mid+1,end);
	return root;
}
void preorder(struct Node* node)
{
	if(node==NULL)
		return ;
	cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}
int main()
{
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)
      {
      	 cin>>ar[i];
      }
    struct Node* root=bin_sear_tree(ar,0,n-1);
    preorder(root);
      
	
	return 0;
}
