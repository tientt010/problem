#include<bits/stdc++.h>

using namespace std;
set<string> s;

void hoanvi(string a, int l, int r)  
{    
    if (l == r)  
        s.insert(a);
    else
    {   
        for (int i = l; i <= r; i++)  
        {  
            swap(a[l], a[i]);
            hoanvi(a, l+1, r);
            swap(a[l], a[i]);  
        }  
    }  
}
int main(){
    string a;
    cin>>a;
    hoanvi(a,0,a.size()-1);
    cout<<s.size()<<endl;
    for(string b:s){
        cout<<b<<endl;
    }
}  