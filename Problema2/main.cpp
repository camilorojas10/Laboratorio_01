#include <iostream>

using namespace std;


int N=0,resto=0,cinc=0,veinte=0,diez=0,cinco=0,dos=0,mil=0,quin=0,dosc=0,cien=0,cincue=0;
int main()
{
  cout<<"Ingrese la cantidad a determinar";
  cin>>N;


resto=N%50000;
cinc=N/50000;
veinte=resto/20000;
resto=resto%20000;
diez=resto/10000;
resto=resto%10000;
cinco=resto/5000;
resto=resto%5000;
dos=resto/2000;
resto=resto%2000;
mil=resto/1000;
resto=resto%1000;
quin=resto/500;
resto=resto%500;
dosc=resto/200;
resto=resto%200;
cien=resto/100;
resto=resto%100;
cincue=resto/50;
resto=resto%50;
cout<<"50000: "<<cinc<<endl<<"20000: "<<veinte<<endl<<"10000: "<<diez<<endl<<"5000:  "<<cinco<<endl<<"2000:  "<<dos<<endl<<"1000:  "<<mil<<endl<<"500:   "<<quin<<endl<<"200:   "<<dosc<<endl<<"100:   "<<cien<<endl<<"50:    "<<cincue<<endl<<"faltante:"<<resto<<endl;
}
