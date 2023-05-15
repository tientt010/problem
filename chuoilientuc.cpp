#include <stdio.h>

int find(int a[],int l,int r){
    while(l<r){
        if(a[l]==a[r])return l;
        l++;
    }
    return -1;
}


int a[1000000];
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=0;
    int j=1;
    int i=0;
    while(j<n){
        int tmp=find(a,i,j);
        while(tmp==-1&&j<n){
            j++;
            tmp=find(a,i,j);
        }
        int p=j-i;
        if(p>max)max=p;
        i=tmp+1;
        j++;
    }
    printf("%d",max);
}