/* A indústria de farinha de mandioca  Lua armazena em seus registros a produção de 
cada uma de suas filiais (vide representação abaixo): 
Cod_Filial = 1        Nome = Bonita      Cidade = Assis         Qtd = 4500kg

Pede-se: 
a.  A média produzida entre todas as Filiais; 
b.  Qual é o nome da Filial que mais faturou? Em qual cidade ela está? 
c.  Qual é o nome da Filial que menos faturou? Em qual cidade ela está? 
d.  Mostre, para todas as Filiais, o seguinte relatório:  
    OBS: Mais Detalhes na Lista de Exercicios.  */
    
#include<iostream>
#include<conio2.h>
using namespace std;
struct dados
{
       int cod_f;
       char nome[15];
       char cidade[15];
       int quant;
};
main()
{
      int i;
      dados a[5];
      float val[5] = {0.95, 0.85, 0.8, 0.99, 1.8}, s=0, maior, menor;
      char nome_maior[15], nome_c[15], nome_menor[15], nome_cm[15];
      for(i=0; i<5; i++)
      {
               cout<<"\nCodigo: ";
               cin>>a[i].cod_f;
               fflush(stdin);
               cout<<"Nome Filial: ";
               gets(a[i].nome);
               cout<<"Cidade: ";
               gets(a[i].cidade);
               cout<<"Quantidade Produzida: ";
               cin>>a[i].quant;
               s += a[i].quant * val[i];
      }      
      i=0;
      maior = a[i].quant * val[i];
      strcpy(nome_maior, a[i].nome); strcpy(nome_c, a[i].cidade);
      strcpy(nome_menor, a[i].nome); strcpy(nome_cm, a[i].cidade);
      menor = a[i].quant * val[i];
      for(i=1; i<5; i++) 
      {
               if(a[i].quant * val[i] > maior)
               {
                             maior = a[i].quant * val[i];
                             strcpy(nome_maior, a[i].nome);
                             strcpy(nome_c, a[i].cidade);
               }
               if(a[i].quant * val[i] < menor)
               {
                             menor = a[i].quant * val[i];
                             strcpy(nome_menor, a[i].nome);
                             strcpy(nome_cm, a[i].cidade);
               }
      } 
      system("CLS");
      cout<<"\nA m\202dia entre as Filiais: R$"<<s/5<<endl;
      cout<<nome_maior<<" em "<<nome_c<<" mais faturou."<<endl;
      cout<<nome_menor<<" em "<<nome_cm<<" menos faturou."<<endl;
      int col = 10, lin = 7;
      gotoxy(col, lin); cout<<"NOME"; col +=13;
      gotoxy(col, lin); cout<<"CIDADE"; col+=10;
      gotoxy(col, lin); cout<<"QtdProduzida"; col+= 15;
      gotoxy(col, lin); cout<<"Valor Produ\207\306o R$"; col=10; lin += 3;
      for(i=0; i<5; i++)
      {
              gotoxy(col, lin); cout<<a[i].nome; col+=13; 
              gotoxy(col, lin); cout<<a[i].cidade; col+=10;
              gotoxy(col, lin); cout<<a[i].quant; col+=15;
              gotoxy(col, lin); cout<<a[i].quant*val[i]; col = 10;
              lin += 2;
      }
      getch();
}            
