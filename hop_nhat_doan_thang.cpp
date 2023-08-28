#include<bits/stdc++.h>

using namespace std;
bool compare(pair<int,bool>a, pair<int,bool>b){
    if(a.first==b.first){
        if(a.second)return 1;
        else return 0;
    }
    else return a.first<b.first;
}


int main(){
    int n;
    cin>>n;
    vector<pair<int,bool>>v;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back({x,1});
        v.push_back({y,0});
    }
    int c=1;
    int ans=0;
    sort(v.begin(),v.end(),compare);
    for(int i=1;i<2*n;i++){
        if(c)ans+=(v[i].first-v[i-1].first);
        if(v[i].second)c++;
        else c--;
    }
    cout<<"Do dai hop doan la :"<<ans;
}
