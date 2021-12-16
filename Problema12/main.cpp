#include <iostream>

using namespace std;
int res,num,i,num1,num2;
int main()
{
int c3=0,c4=0;
    int pal=0;
    res=0;
    bool ya=false;
    for (int c2=999;c2>=100 && ya==false; c2=c2-1){
    for (int c1=100;c1<=999;c1=c1+1){
        int res=0;
        int y=1;
        int n=1;
        num1=c1*c2;
        num2=num1;
        if (num2%10!=0){
        for(i=1;i<=num1;i=i*10){
            n=i;
        }
        while (n>=1){
        if (n>=1){
        res=res+((num1/n)*y);
        num1=num1%n;
        y=y*10;
        n=n/10;}
        }
        if(num2==res){
            pal=c1*c2;
            c4=c1;
            c3=c2;
        }
        }}
    if (pal!=0)ya=true;
    }
    cout<<c4<<"*"<<c3<<"="<<pal<<endl;
}
