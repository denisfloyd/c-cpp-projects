#include<iostream>
#include<conio2.h>
using namespace std;
struct dados
{
       int cod;
       char info[10];
       float valor;
};
int main()
{
    dados val, a[4];
    for(int i=0; i<4; i++)
    {
            cout<<"\nCodigo: ";
            cin>>val.cod;
            cout<<"\nInfo: ";
            cin>>val.info;
            cout<<"\nValor: ";
            cin>>val.valor;
            a[i] = val;
    }
    cout<<"\n\n\n";
    for(int i=0; i<4; i++)
    {
             cout<<a[i].cod<<"\t"<<a[i].info<<"\t  "<<a[i].valor<<endl;
    }
    getch();
}
