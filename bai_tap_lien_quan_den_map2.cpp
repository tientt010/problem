#include<bits/stdc++.h>
#include<map>

//Đếm số lần xuất hiện của các phần tử trong mảng, sau đó in ra phần tử đó kèm tần suất xuất hiện của nó theo thứ tự nhập vào
//Input:
//10
//1 1 9 7 6 3 7 7 6 3
//Output:
//1 2
//9 1
//7 3
//6 2
//3 2
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	map<int, int> mp;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(mp[a[i]]!=0){
			cout<<a[i]<<" "<<mp[a[i]]<<endl;
			mp[a[i]]=0;
		}
	}
	return 0;
}