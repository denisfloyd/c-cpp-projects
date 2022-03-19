/* Construa um programa que leia o estoque atual de 3 produtos que estão armazenados em 
   4 armazéns e coloque esses dados em uma matriz 5x3.
   Tabela no arquivo pdf;
   Calcule e mostre: 
   a)  A quantidade de itens armazenados em cada armazém; 
   b)  Em qual armazém está estocado a maior quantidade do produto 2? 
   c)  A quantidade média de itens armazenados pelo Armazém 3.
*/

#include<iostream>
#include<conio2.h> 
using namespace std;
main()
{
      float a[5][3], s, maior, s1=0;
      int i, j, col, lin=3, c;
      cout<<"\t\tProduto 1\t";
      cout<<"Produto 2\t";
      cout<<"Produto 3\t";
      cout<<"Quantidade";
      cout<<"\n\nArmazem 1: ";
      cout<<"\n\nArmazem 2: ";
      cout<<"\n\nArmazem 3: ";
      cout<<"\n\nArmazem 4: ";
      cout<<"\n\nArmazem 5: ";
      for(i=0; i<5; i++) 
      {
               s=0;
               col=20;
               for(j=0; j<3; j++) 
               {
                        gotoxy(col, lin);
                        cin>>a[i][j];
                        col += 15;
                        s += a[i][j];
                        if(j==2)
                        {
                                gotoxy(col+3, lin);
                                cout<<s; 
                        }
                        if(i==0 && j==1)
                        {
                                maior=a[i][j];
                                c=i;
                        }
                        else
                        {
                            if(a[i][j] > maior)
                            {
                                       maior=a[i][j];
                                       c=i;
                            }
                        } 
                        if(i==2) 
                        {
                                 s1 += a[i][j];
                        }              
               }
               lin +=2;
      }
      lin +=3;
      cout<<"\n\n\n\nEsta estocado a maior qtd. do produto 2, o Armazem "<<c+1;
      cout<<"\nM\202dia dos produtos do Armazem 3: "<<s1/3;
      getch();
}
                        
      
