#include <iostream>
#include<stack>
using namespace std;
struct node
{
 int data;
 struct node *left;
 struct node *right;
};
struct node *create(struct node *root);
void inorder_nr(struct node *root);
void preorder_nr(struct node *root);
void preorder_rec(struct node *root);
void inorder_rec(struct node *root);
void postorder_rec(struct node *root);
int main()
{
 node *root;
 root=create(root);
 cout<<"inorder non rec\n";
 inorder_nr(root);
 cout<<"\npreorder non rec\n";
 preorder_nr(root);
 cout<<"\ninorder rec\n";
 inorder_rec(root);
 cout<<"\npreorder rec\n";
 preorder_rec(root);
 cout<<"\npostorder rec\n";
 postorder_rec(root);
 return 0;
}
struct node *create(struct node *root)
{
struct node *temproot,*newnode;
 root=NULL;
 //root->data=0;
 int flag,n;
 char choice,con;
 do
 {
 flag=0;
 cout<<"Enter data\n";
 cin>>n;
 if(root==NULL)
 {
 root=(struct node*)malloc(sizeof(struct node));
 root->data=n;
 root->right=NULL;
 root->left=NULL;
 }
 else
 {
 temproot=(struct node*)malloc(sizeof(struct node));
 newnode=(struct node*)malloc(sizeof(struct node));
 temproot=root;
 while(flag==0)
 {
 newnode->data=n;
 newnode->right=NULL;
 newnode->left=NULL;
 cout<<"Do you want to connect"<<n<<"on the left(L) or the right(R) of "<<temproot->data;
 cin>>choice;
 if(choice=='R')
 {
 if(temproot->right==NULL)
 {
 temproot->right=newnode;
 temproot=temproot->right;
 flag=1;
 }
 else
 {
 temproot=temproot->right;
 }
 }
 else
 {
 if(temproot->left==NULL)
 {
 temproot->left=newnode;
 temproot=temproot->left;
 flag=1;
 }
 else
 {
 temproot=temproot->left;
 }
 }
 }
 }
 cout<<"Do you want to continue y/n?";
 cin>>con;
 }while(con=='Y');
 return root;
}
void inorder_nr(struct node *root)
{
 node *temp;
 stack<node *>s1;
 temp=root;
 while(1)
 {
 while(temp!=NULL)
 {
 s1.push(temp);
 temp=temp->left;
 }
 if(!(s1.empty()))
 {
 temp=s1.top();
 s1.pop();
 cout<<temp->data<<"\t";
 temp=temp->right;
 }
 else
 {
 break;
 }
 }

}
void preorder_nr(struct node *root)
{
 node *temp;
 stack<node *>s1;
 temp=root;
 while(1)
 {
 while(temp!=NULL)
 {
 cout<<temp->data<<"\t";
 s1.push(temp);
 temp=temp->left;
 }
 if(!(s1.empty()))
 {
 temp=s1.top();
 s1.pop();
 temp=temp->right;
 }
 else
 {
 break;
 }
 }

}
void preorder_rec(struct node *root)
{
if(root==NULL)
{
return;
}
cout<<" "<<root->data;
preorder_rec(root->left);
preorder_rec(root->right);
}
void inorder_rec(struct node *root)
{
if(root==NULL)
{
return;
}
inorder_rec(root->left);
cout<<" "<<root->data;
inorder_rec(root->right);
}
void postorder_rec(struct node *root)
{
if(root==NULL)
{
return;
}
postorder_rec(root->left);
postorder_rec(root->right);
cout<<" "<<root->data;
} 