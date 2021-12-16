#include <iostream>

using namespace std;
int A,B,C;
int main()
{
    cout << "Ingrese los 3 numeros A,B,C" << endl; cin>>A;cin>>B;cin>>C;

    if(A==B==C){
        cout<<"Es un triangulo equilatero"<<endl;

    }
    else if(A==B||A==C||B==C){
        cout<<"Es un triangulo isoceles"<<endl;
    }
    else{
        cout<<"Es un triangulo escaleno"<<endl;
    }
    return 0;
}
