#include<iostream>
//Nhập vào một số nguyên dương n, tiếp theo là n số nguyên của một dãy số,cài đặt nó vào một DSLK đơn.
//Tiếp theo nhập 2 số nguyên k và x,(0<=k<=x)
//Hãy chèn giá trị x vào DSLK tại chỉ số k và in ra màn hình DSLK.
//Input:
//8
//3 6 7 9 10 2 5 3
//3 4
//Output:
//3 6 7 4 9 10 2 5 3 
using namespace std;
struct node{
    int data;
    node *next;
};
node *createNode(int x){
    node *tmp=new node();
    tmp->data=x;
    tmp->next=NULL;
    return tmp;
}
node *addNode(node *p,int x){
    node *tmp=createNode(x);
    p->next=tmp;
    return tmp;
}
node *dauNode(node *head,int x){
    node *tmp=new node();
    tmp->data =x;
    tmp->next =head;
    return tmp;
}
node *cuoiNode(node *head,int x){
    node *p=head;
    while (p->next!=NULL){
        p=p->next;
    }
    node *tmp=new node();
    tmp->data=x;
    tmp->next=NULL;
    p->next=tmp;
    return head;
}
node *addNodek(int x,int k,node *head){
    node *p=head;
    for(int i=0;i<k-1;i++){
        p=p->next;
    }
    node *tmp=new node();
    tmp->data=x;
    tmp->next=p->next;
    p->next=tmp;
    return head;
}
void duyetNode(node *head){
    node *p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int n,x,k;
    cin>>n>>x;
    node *head=createNode(x);
    node *p=head;
    for(int i=1;i<n;i++){
        cin>>x;
        p=addNode(p,x);
    }
    cin>>k>>x;
    if(k==0){
        head=dauNode(head,x);
    }else if(k==n){
        head=cuoiNode(head,x);
    }else{
        head=addNodek(x,k,head);
    }
    duyetNode(head);
    return 0;
}