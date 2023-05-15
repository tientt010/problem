#include<bits/stdc++.h>
#include<map>

//Đếm số lần xuất hiện của các phần tử trong mảng, sau đó in ra phần tử đó kèm tần suất xuất hiện của nó theo thứ tự tăng dần
//Input:
//10
//1 1 9 7 6 3 7 7 6 3
//Output:
//1 2
//3 2
//6 2
//7 3
//9 1
using namespace std;
int main(){
	map<int, int> mp;
	int n; 
	cin>> n;
	for(int i=0;i<n;i++){
		int x;
		cin >>x;
		mp[x]++;
	}
	for(auto x:mp){
		cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}
