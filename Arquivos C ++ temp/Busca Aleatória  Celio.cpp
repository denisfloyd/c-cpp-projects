#include<iostream> 
#include<conio2.h> 
using namespace std;

struct reg
{
       int cod;
       char nome[30]; 
       char end[20];
};

main() 
{
       int i, f=6, c, chave;
       reg m[f];
       for(i=0; i<f; i++)
       {
                cout<<"\nCodigo: "; 
                cin>>m[i].cod;
                fflush(stdin);
                cout<<"Nome: "; 
                gets(m[i].nome);
                cout<<"Endere\207o: ";
                cin>>m[i].end; 
       }
       cout<<"\n\n\tQual codigo tu procura: ";
       cin>>chave;
       i=0;
       do
       {
           c = (i+f)/2;
           if (chave > m[c].cod)
           {
                     i = c+1;
           }
           else
           { 
               f = c-1; 
           } 
       } while (i<=f && chave != m[c].cod);
       if(chave == m[c].cod)
       {
                 cout<<"\n\n\t"<<chave<<" foi encontrado. "; 
       }
       else
       {
           cout<<"\n\n\t"<<chave<<" n\306o foi encontrado. "; 
       }
       getch(); 
}         
