#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

//binary serach Tree
struct node
{
int data;


node *Left,*Right;



};
node * root = NULL;

node* createNode(int key)

{
node* nd=new node;

nd->data=key;
nd->Left=NULL;
nd->Right=NULL;

	
	
}
node* insert(node* root,int key)
{
	if(root==NULL)
	return createNode(key);
	
	
	
	if (key<root->data)
	root->Left=insert(root->Left,key);
	
	
	else if(key >root->data)
	root->Right = insert(root->Right,key);
	return root;
	
}
void inorder(node*  root)
{
	if (root!=NULL)
	{
		inorder(root->Left);
	
		cout<<root->data<<"\t";
		inorder(root->Right);
	}
	
	
}

int main()
{
	root = insert(root,30);
	insert(root,25);
	insert(root,40);
	insert(root,41);
	insert(root,42);
	insert(root,28);
	insert(root,27);
	cout<<"\n Inorder Traversal of BST\n";
	inorder(root);
	getch();
	return 0;
	
}
