#include <iostream>

using namespace std;

int A,B, C,suma,bandera,i,n,k,k2,j;
int main()
{
cout<<"ingrese los valores de a, b y c respectivamente: "<<endl;
cin>>A>>B>>C;
suma=0;
bandera=0;

for (i=1;i<C;i++){
k=i*A;

if (k >=C){
for (j=1;j<C;j++){
    k2=j*B;
    if(k2>=C)break;

    else if(k2<C){
        for(int n=1;n<C;n++){
            k=n*A;
            if (k==k2){
                bandera=1;
            }
        }
        if(bandera != 1){
            suma+=k2;
            cout<<k2<<"+";
        }
        else bandera=0;
    }
}
break;
        }
        else if(k<C){
            suma+=k;
            cout<<k<<"+";
        }
    }
    cout<<"="<<suma<<endl;

}
