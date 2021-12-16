#include <iostream>
using namespace std;
int num;
float result;
int main()
{
    cout << "Ingrese numero de elementos de aproximacion: " ;
    cin >>num;
    for(int i=1; i<num+1; i++){
        if(i%2==0){
            result -= (4.0/((i*2.0)-1.0));
        }
        else{
            result += (4.0/((i*2.0)-1.0));
        }
    }
    cout << "pi es aproximadamente: " << result <<endl;

    return 0;
}
