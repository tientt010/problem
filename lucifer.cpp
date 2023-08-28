#include<bits/stdc++.h>

//một số là số lucifer nếu tổng các chữ số ở vị trí chãn trừ tổng các số ở vị trí lẻ là 1 số nguyên tố
//đếm trong khoảng [l,r] có bao nhiêu số như vậy
//lưu ý: vị trí tính từ hàng đơn vị và bắt đầu từ 1
//Input:    150 200     100 150     50 100
//Output:   16          3           18
using namespace std;

int l,r;
int a[11];
int f[11][100];
bool sont[50];
int thu(int i,bool gh, int hieu){
    if(i<0){
        if(hieu>0&&!sont[hieu])return 1;
        else return 0;
    }
    if(gh==false && f[i][hieu+50]>=0)return f[i][hieu+50];
    int kq=0;
    int maxc=(gh ? a[i] : 9);
    for(int c=0;c<=maxc;c++){
        if(i%2==0)kq+=thu(i-1,gh&&(c==maxc),hieu-c);
        else kq+=thu(i-1,gh&&(c==maxc),hieu+c);
    }
    if(gh==false)f[i][hieu+50]=kq;
    return kq;
}

int g(int x){
    a[0]=0;
    int n=0;
    while(x){
        a[n++]=x%10;
        x/=10;
    }
    return thu(n-1,true,0);
}

void make_sont(){
    sont[0]=1;
    sont[1]=1;
    for(int i=2;i<=7;i++){
        if(!sont[i]){
            for(int j=i+i;j<50;j+=i)sont[j]=1;
        }
    }
}

int main(){
    cin>>l>>r;
    make_sont();
    memset(f,-1,sizeof(f));
    cout<<g(r)-g(l-1);
}