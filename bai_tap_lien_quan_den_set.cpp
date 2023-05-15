#include<bits/stdc++.h>


using namespace std;
//Bài toán chia kẹo. Tèo có n cái kẹo trong đó có 1 số cái kẹo giống nhau. Tèo muốn chia kẹo cho bạn của mình sao cho mỗi người chỉ nhận 1 cái kẹo
//và không có 2 người bạn nào có chung một loại kẹo.
//Input:
// 7
// 2 3 4 3 5 7 7 
//Output:
// 5

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	set<int> s; 
	for(int i=1;i<=n;i++){
		s.insert(a[i]);
	}
	cout<<s.size()<<endl;
	return 0;	
}