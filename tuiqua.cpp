#include<bits/stdc++.h>

using namespace std;

int test(int a[],int b[],int l,int r,int k){
    if(l>r)return 0;
    if(k-a[l]<0)return test(a,b,l+1,r,k);
    return max(b[l]+test(a,b,l+1,r,k-a[l]),test(a,b,l+1,r,k));
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    cout<<test(a,b,0,n-1,k);
    return 0;
}