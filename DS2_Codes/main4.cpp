#include<iostream>
#include<cstring>
#include<stack>
//abc*+d-
//-*+abcd
using namespace std;
struct node
{
struct node*left;
struct node *right;
char data;
};
int ope(char c);
struct node *postfix(char expr[20]);
struct node *prefix(char expr[20]);
void inorder(struct node *root);
void DELETE(struct node *root);

int main()
{

char expr[20];
cout<<"ENTER THE EXPRESSION";
cin.getline(expr,20);

cout<<"was the number in 1.)prefix \nor \n 2.)postfix\n";
int choice;
cin>>choice;

struct node *root;
switch(choice)
{
case 1:

root=prefix(expr);
inorder(root);
cout<<"now deleting\n";
DELETE(root);

break;
case 2:
{

root=postfix(expr);
inorder(root);
cout<<"\nnow deleting\n";
DELETE(root);

break;
}
default:
cout<<"wrong choice";

}

return 0;
}
struct node *postfix(char expr[20])
{

struct node *t1,*t2,*t;
stack<node*>st;
for(int i=0;i<strlen(expr);i++)
{
if(!ope(expr[i]))
{
t=new node;
t->data=expr[i];
t->left=NULL;
t->right=NULL;
st.push(t);
}
else
{
t=new node;
t->data=expr[i];
t->left=NULL;
t->right=NULL;
t1=st.top();
st.pop();
t2=st.top();
st.pop();
t->left=t2;
t->right=t1;
st.push(t);
}
}
t=st.top();
st.pop();
return t;


}
int ope(char c)
{
if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%')
{
return 1;
}
else
return 0;
}

void inorder(struct node *root)
{
if(root==NULL)
return;
else
{
inorder(root->left);
cout<<root->data;
inorder(root->right);
}
}
struct node *prefix(char expr[20])
{

struct node *t1,*t2,*t;
stack<node*>st;
for(int i=strlen(expr)-1;i>=0;i--)
{
if(!ope(expr[i]))
{
t=new node;
t->data=expr[i];
t->left=NULL;
t->right=NULL;
st.push(t);
}
else
{
t=new node;
t->data=expr[i];
t->left=NULL;
t->right=NULL;
t1=st.top();
st.pop();
t2=st.top();
st.pop();
t->left=t1;
t->right=t2;
st.push(t);
}
}
t=st.top();
st.pop();
return t;


}
void DELETE(struct node *root)
{
if(root==NULL)
return;
else
{
DELETE(root->left);
DELETE(root->right);
cout<<"deleting\n"<<root->data<<"\n";
delete root;
}
}
