#include<iostream>
#include<cstring>
#include<stack>
int op(char ch);
struct node *create(char a[20]);
using namespace std;
struct node 
{
    char data;
    struct node *left;
    struct node *right;
};
struct node *create(char a[20])
{
    struct node *t, *t1, *t2;
    stack <node*> st;
    for(int i=0;i<strlen(a);i++)
    {
        if(op(a[i])==0)
        {
            t=new node;
            t->data=a[i];
            t->left=NULL;
            t->right=NULL;
            st.push(t);
        }
        else
        {
            t=new node;
            t->data=a[i];
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

int op(char ch)
{
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void inorder(struct node *root)
{
    stack <node*> st;
    struct node* temp;
    temp=root;
    while(1)
    {
        while(temp!=NULL)
        {
            st.push(temp);
            temp=temp->left;
        }
        if(st.empty()==0)
        {
            temp=st.top();
            st.pop();
            cout<<temp->data <<"\t";
            temp= temp->right;
        }
        else
        {
            break;
        }
    }
}

void Delete(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        Delete(root->left);
        Delete(root->right);
        cout<<"\nDeleting Node->"<<root->data;
        delete root;
    }
}
int main()
{
    struct node *expt;
    char expr[20];
    cout << "Enter The Expression:";
    cin.getline(expr,20);
    expt=create(expr);
    inorder(expt);
    Delete(expt);
}