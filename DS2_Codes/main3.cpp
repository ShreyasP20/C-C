#include<iostream>
#include <queue>
using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(struct node *root)
{
    root=NULL;
    int newdata;
    struct node *temproot, *newnode;
    int ch;
    do
    {
        if(root==NULL)
        {
            root= (struct node *)malloc (sizeof(struct node));
            cout << "Enter Data For Root Node:";
            cin >> newdata;
            root->data=newdata;
            root->left=NULL;
            root->right=NULL;
        }
        else
        {
            int flag=0;
            temproot=root;
            newnode= (struct node *)malloc (sizeof(struct node));
            cout << "Enter Data For New Node:";
            cin >> newdata;
            newnode->data=newdata;
            newnode->left=NULL;
            newnode->right=NULL;
            while(flag==0)
            {
                if(temproot->data < newdata)
                {
                    if(temproot->right==NULL)
                    {
                        temproot->right=newnode;
                        flag=1;
                    }
                    else
                    {
                        temproot=temproot->right;
                    }
                }
                else if(temproot->data > newdata)
                {
                    if(temproot->left==NULL)
                    {
                        temproot->left=newnode;
                        flag=1;
                    }
                    else
                    {
                        temproot=temproot->left;
                    }
                }
            }
        }
        cout <<"Do U want to continue?[1/0]";
        cin >> ch;
    } while (ch==1); 
    return root;
}

void display(struct node *root)
{
    if(root==NULL)
    {
        cout << "Root Is NULL";
        return;
    }
    cout << "\nRoot Data is:"<<root->data;
    if(root->left!=NULL)
    {
        cout <<"\nRoot Left:"<<root->left->data;
        display(root->left);
    }
    if(root->right!=NULL)
    {
        cout << "\nRoot Right:"<< root->right->data;
        display(root->right);
    }
}
int MaxDepth(struct node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        int lDepth = MaxDepth(root->left);
        int rDepth = MaxDepth(root->right);
        if(lDepth>rDepth)
        {
            return lDepth+1;
        }
        else 
        {
            return rDepth+1;
        }
        
    }
}
struct node *Delete(struct node *root, int val)
{
    struct node *temp;
    temp = new node;
    if(root==NULL)
    {
        return NULL;
    }
    else if( val < root->data)
    {
        root->left = Delete(root->left, val);
    }
    else if( val > root->data)
    {
        root->right = Delete(root->right , val);
    }
    else if(val==root->data)
    {
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
        }
        else if(root->left==NULL)
        {
            temp=root;
            root = root->right;
            delete temp;
        }
        else if(root->right==NULL)
        {
            temp=root;
            root=root->left;
            delete temp;
        }
        else
        {
            temp=findmin(root->right);
            root->data = temp->data;
            root->right= Delete(root->right,temp->data);
        }
    }
    else
    {
        cout << "The Number You are lookin for is not Present";
    }
}

struct node *findmin(struct node *root)
{
    if(root->left==NULL)
    {
        return root;
    }
    else 
    {
        findmin(root->left);
    }
    return NULL;
}

void bft(struct node *root)
{
    struct node *temp;
    queue <node *> q;
    q.push(root);
    while(q.empty()!=true)
    {
        temp = q.front();
        q.pop();
        cout << temp->data;
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
    }
}

struct node *mirror(struct node *root)
{
    struct node *temp;
    temp=NULL;
    if(root!=NULL)
    {
        temp = new node;
        temp->data = root->data;
        temp->left = mirror(root->right);
        temp->right= mirror(root->left);
    }
    return temp;
}
int main()
{
    int val;
    struct node *root;
    root =(struct node *)malloc(sizeof(struct node));
    root = create(root);
    display(root);
    int Max = MaxDepth(root);
    cout << Max;
    cout << "Enter The Element to be deleted:"
    cin >> val;
    return 0;
}