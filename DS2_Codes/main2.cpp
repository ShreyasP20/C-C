#include<iostream>
#include<stack>
using namespace std;
struct node *create(struct node *root);
void display(struct node *root);
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(struct node *root)
{
    root=NULL;
    int data;
    struct node *temproot, *newnode;
    int con=1;
    while(con==1)
    {
    if(root==NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        cout << "Enter The Data for Root Node:";
        cin >> data;
        root->data=data;
        root->left=NULL;
        root->right=NULL;
    }
    else
    {
        int newdata, flag;
        //temproot=(struct node *)malloc(sizeof(struct node));
        temproot=root;
        char ch,ch1;
        do
        {
            cout << "Enter Data for New Node:";
            cin >> newdata;
            flag=0;
            while(flag==0)
            { 
                newnode = (struct node *)malloc(sizeof(struct node));
                cout <<"Do You want to connect[ "<< newdata << " ]Right or Left of[ "<< temproot->data<<" ]";
                newnode->data= newdata;
                newnode->left=NULL;
                newnode->right=NULL;
                cin >> ch1;
                if(ch1 == 'L' || ch1=='l')
                {
                    cout<<"\nConnecting in left....\n";
                    if(temproot->left==NULL)
                    {
                        temproot->left = newnode;
                        flag=1;
                    }
                    else
                    {
                        temproot= temproot->left;
                    }
                }
                else
                {
                    cout<<"\nConnecting in right....\n";
                    if(temproot->right==NULL)
                    {
                        temproot->right = newnode;
                        flag=1;
                    }
                    else
                    {
                        temproot= temproot->right;
                        
                    }
                }
            }
            cout << "Do You To Continue[Y/N]?";
            cin >> ch;
        }while (ch=='y' || ch=='Y');
    }
    cout << "Do you want to Continue[1/0]?";
    cin >> con;
    }
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
void Preorder_nr(struct node *root)
{
    struct node *temp;
    temp=root;
    stack <node*> st;
    while(1)
    {
        while(temp!=NULL)
        {
            cout << temp->data <<"\t";
            st.push(temp);
            temp=temp->left;   
        }
        if(!(st.empty()))
        {
            temp=st.top();
            st.pop();
            temp=temp->right;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    struct node *root;
    root = create(root);
    display(root);
    Preorder_nr(root);
    return 0;
}