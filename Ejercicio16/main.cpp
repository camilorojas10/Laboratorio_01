#include <iostream>

using namespace std;
int N;
double prom,i,m;
int main()
{
    cout << "Ingrese un numero" << endl;
    cin>>N;

    while(N!=0){
        m=m+N;
        i++;
        cout << "Ingrese un numero" << endl;
        cin>>N;
    }

    prom=m/i;
    cout<<"El promedio es: "<<prom<<endl;


    return 0;

}
