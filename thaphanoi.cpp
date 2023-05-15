#include<iostream>
#include<math.h>
using namespace std;
void test(int n,int nguon,int dich, int mid){
    if(n==1){
        cout<<nguon<<" "<<dich<<endl;
        return;
    }
    test(n-1,nguon,mid,dich);
    cout<<nguon<<" "<<dich<<endl;
    test(n-1,mid,dich,nguon);
}
int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    test(n,1,3,2);
}

