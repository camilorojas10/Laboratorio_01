#include <iostream>

using namespace std;
int fi,col,N=0;
int main()
{


cout<<"ingrese el numumero que quiere imprimir"<<endl;
cin>>N;
for(fi=0;fi<N;fi=fi+1){
   for(col=0;col<N;col=col+1){

        if(fi==0){
        cout << "+";
        }
        else if(fi==N-1){
            cout <<"+";
        }
        else if(col==0){
            cout<<"+";
        }
        else if(col==N-1){
            cout<<"+";
        }
        else{
            cout << " ";
        }
   }
   cout << endl;
}

}
