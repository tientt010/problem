#include<iostream>
#include<string.h>
using namespace std;
int ngaytrongthang(int x){
    if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)return 31;
    else if(x==2)return 28;
    else return 30;
}

struct Date{
    int d;
    int m;
    int y;
};

int Namnhuan(int x){
    if(x%400==0||((x%4==0)&&(x%100!=0)))return 1;
    else return 0;
}

int songay(Date x){
    int kq=0;
    for(int i=1;i<x.y;i++){
        kq+=365+Namnhuan(i);
    }
    for(int i=1;i<x.m;i++){
        kq+=ngaytrongthang(i);
        if(i==2)kq+=Namnhuan(x.y);
    }
    kq+=x.d-1;
    return kq;
}

int thu(Date x){
    int tmp=songay(x)%7;
    return tmp;
}

char *dich(Date d){
    char *kq=new char[10];
    int x=thu(d);
    if(x==0)strcpy(kq,"chu nhat");
    if(x==1)strcpy(kq,"thu hai");
    if(x==2)strcpy(kq,"thu ba");
    if(x==3)strcpy(kq,"thu tu");
    if(x==4)strcpy(kq,"thu nam");
    if(x==5)strcpy(kq,"thu sau");
    if(x==6)strcpy(kq,"thu bay");
    return kq;
}

int khoangcach(Date x,Date y){
    return songay(y)-songay(x);
}


int main(){
    Date a,b;
    cin>>a.d>>a.m>>a.y;
    cout<<"ngay "<<a.d<<" thang "<<a.m<<" nam "<<a.y<<" la "<<dich(a)<<endl;
    cin>>b.d>>b.m>>b.y;
    cout<<"ngay "<<b.d<<" thang "<<b.m<<" nam "<<b.y<<" la "<<dich(b)<<endl;
    cout<<"khoang cach giua hai ngay nay la: "<<khoangcach(a,b)<<endl;
    return 0;
}