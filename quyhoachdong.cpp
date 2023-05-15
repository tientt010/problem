#include<stdio.h>
#include<math.h>
int max(int x,int y,int z){
    if(x>y&&x>z)return x;
    if(y>x&&y>z)return y;
    return z;
}

int dequy(int a[][30],int i,int j,int m,int n){
    if(i==0||i==m+1)return 0;
    else if(j==n)return a[i][j];
    else return a[i][j]+max(dequy(a,i,j+1,m,n),dequy(a,i+1,j+1,m,n),dequy(a,i-1,j+1,m,n)); 
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int a[30][30];
    int max=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=m;i++){
        int tmp=dequy(a,i,1,m,n);
        if(tmp>max)max =tmp;
    }
    printf("%d",max);
}

