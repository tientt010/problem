#include<bits/stdc++.h>
//tìm số dư của số fibonachi thứ n cho k
//thuật toán dựa trên công thức (F0 F1) * P^n =(Fn Fn+1)
//với P={0,1,1,1}
using namespace std;
int p[4]={0,1,1,1},q[4]={0,1,1,1};
int tmp[4];
int n,k;
void tich2matran(int a[],int b[],int ans[]){
    tmp[0] = (a[0]*b[0] + a[1]*b[2])%k;
    tmp[1] = (a[0]*b[1] + a[1]*b[3])%k;
    tmp[2] = (a[2]*b[0] + a[3]*b[2])%k;
    tmp[3] = (a[2]*b[1] + a[3]*b[3])%k;
    for(int i=0;i<4;i++)ans[i]=tmp[i];
}
int main(){
    cin>>n>>k;
    while(n){
        if(n%2==1)tich2matran(p,q,p);
        tich2matran(q,q,q);
        n/=2;
    }
    cout<<p[2]%k;
    //cout<<"\nTime: "<<clock()/(double)1000<<" sec";
}