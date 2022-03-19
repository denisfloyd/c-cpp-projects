#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
      struct dma
      {
             int dia;
             int mes;
             int ano;
      };
      
      dma data;
      cout<<"\nDia: "; 
      cin>>data.dia; 
      cout<<"\nMes: "; 
      cin>>data.mes;
      cout<<"\nAno: ";
      cin>>data.ano;
      cout<<"\n\nOs valores digitados: "<<data.dia<<" / "<<data.mes<<" / "<<data.ano;
      getch();
}
