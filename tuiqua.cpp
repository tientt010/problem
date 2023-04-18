//cho n bọc quà và bạn có 1 cái túi có thể chứa tối đa k cân nặng
//mỗi bọc quà có cân nặng và giá trị riêng biểu thị là a[n] và b[n]
//Input:    n k                             10 20                       4 10
//          a[n]                            4 2 4 1 5 2 4 3 1 2         2 3 4 5
//          b[n]                            6 7 3 2 1 4 5 2 4 9         3 4 5 6
//Output:   giá trị tối đa tìm được         40                          13
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