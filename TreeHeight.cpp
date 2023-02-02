#include <bits/stdc++.h>
#include<vector>
using namespace std;
struct node{
struct node *llink;
struct node *rlink;
int k;
};
typedef struct node *NODE;
NODE create(int data){
NODE temp=(struct node*)malloc(sizeof(struct node));
temp->k=data;
temp->llink=NULL;
temp->rlink=NULL;
return temp;
}
NODE root;
int counta=0,countb=0;
void bst(NODE temp,int kp)
{
    if(temp!=NULL){
        bst(temp->llink,kp);
        counta++;
        if(counta==kp){
            cout<<temp->k<<endl;
            return;
        }
        bst(temp->rlink,kp);
    }
}
void treeheight(NODE temp)
{
    if(temp!=NULL)
    {
        if(temp->llink||temp->rlink)
        {
              countb++;
            if(temp->llink&&temp->rlink)
            {
                treeheight(temp->llink);
                treeheight(temp->rlink);
            }
            else if(temp->llink)
                treeheight(temp->llink);
            else
                treeheight(temp->rlink);
        }
    }
}
int main()
{
    root=create(6);
    root->llink=create(4);
    root->rlink=create(8);
    root->llink->llink=create(3);
    root->llink->rlink=create(5);
    root->rlink->llink=create(7);
    root->rlink->llink->llink=create(10);
    root->rlink->llink->llink->rlink=create(11);
    root->rlink->rlink=create(8);
    cout<<"enter kth smallest element to find"<<endl;
    int k;
    cin>>k;
    bst(root,k);
    treeheight(root);
    cout<<countb<<endl;
     return 0;
}
