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
int counta=0;
void bst(NODE temp,int kp)
{
    if(temp!=NULL){
        bst(temp->llink,kp);
        counta++;
        if(counta==kp){
            cout<<temp->k;
            return;
        }
        bst(temp->rlink,kp);
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
    root->rlink->rlink=create(8);
    cout<<"enter kth smallest element to find"<<endl;
    int k;
    cin>>k;
    bst(root,k);
     return 0;
}
