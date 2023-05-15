#include <stdio.h>
#include<iostream>
//BTAP này không được sử dụng mảng map hay set, tất cả chỉ dừng lại ở hàm, hàm đệ quy,vòng lặp
//Nhập vào duy nhất số nguyên n, hãy đếm số lần xuất hiện của các chữ số nguyên tố trong n và xuất ra màn hình
//Xuất theo thứ tự xuất hiện của các chữ số.
//Input:
//26836468315678
//Output:
//2 1
//3 2
//5 1
//7 1

long long tn(long long n){
	long long d=0;
    while(n){
    	d=d*10+n%10;   	
    	n/=10;
	}
	return d;
}

int main(){
	long long n,a=0,b=0,c=0,d=0;
	scanf("%lld",&n);
	long long m=n;
	while(n){
		int x=n%10;
		if(x==2) a++;
		if(x==3) b++;
		if(x==5) c++;
		if(x==7) d++;
		n/=10;
	}
	long long k=tn(m);
	std :: cout<<k;
	/*while(k){
	long long x=k%10;
	if(x==2&&a!=0){      printf("2 %lld\n",a); a=0;} 
	if(x==3&&b!=0){      printf("3 %lld\n",b); b=0;}  
	if(x==5&&c!=0){      printf("5 %lld\n",c); c=0;} 
	if(x==7&&d!=0){      printf("7 %lld\n",d); d=0;} 
		k/=10;
	}*/
	return 0;
}