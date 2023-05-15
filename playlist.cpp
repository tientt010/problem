#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>v;
	map<int,int> s;
	int x;
	int ans=0;
	int k=0;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
		auto it1=s.find(x);
		if(it1==s.end()||((it1->second)<k)){
		}else{
			v.erase(v.begin(),v.begin()+(it1->second+1)-k);
			k=it1->second+1;
		}
		int p=v.size();
		ans=max(ans,p);
		s[x]=i;
		
	}
	ans=max(ans,j);
	cout<<ans;
}