#include<iostream>
#include<vector>
#include<cstdint>
struct Node{
    int data;
    Node *link;
}
Node *XOR(Node *x,Node *y){
    return(Node*)((uniptr(x)) ^ (uniptr(y)));
}
void traverse (Node *head){
    Node *curr=head;
    Node *prev=nullptr;
    Node *next;
    while(curr != nullptr){
        cout<<curr->data<<"->";
        next=XOR(prev,curr->link);
        prev=curr;
        curr=next;}
        cout<<nullptr;
    
}
void push(Node *&headRef,int data){
    Node *newNode=new Node();
    newNode->data=data;
    newNode->link XOR(headref,nullptr);
    if(headrRef){
        headRef->link=XOR(headRef->link,nullptr);
    }
    if(headRef){
        headRef->link =XOR(headRef->link,nullptr);
    }
    headRef=newNode;
}
int main(){
    vector <int> keys={1,2,3,4,5};
    int n=sizeof(keys)/sizeof(keys[0]);
    struct Node*head=NULL;
    for (int i=n-1;i>=0;i--){
        push(&head,keys[i]);
    }
    traverse(head);
}