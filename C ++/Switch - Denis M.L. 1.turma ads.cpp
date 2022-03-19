#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
    char opcao;                 //Denis Mendonça Ladeira - 1o.ADS - Turma 1
    int sair=1;                 //RA: 1111320497 
    textbackground(BLUE);
    system("cls");
    textcolor(WHITE);
    while(sair!=0){ 
        cout<<"\n\003\004\005\006 \003\004\005\006";
        cout<<" ANALISE E DESENVOLVIMENTO DE SISTEMAS \003\004\005\006 \003\004\005\006";   
        cout << "\n\n>>>>              Selecione uma Opcao              <<<<\n\n"; 
        cout << "1 - M\243ltiplos\n\n"; 
        cout << "2 - Vendedores\n\n"; 
        cout << "3 - Produtos\n\n"; 
        cout << "4 - Maior e Menor\n\n";
        cout << "5 - Sair\n\n";
        cout << "Opcao:  "; 
        opcao = getche(); 
        system("cls"); 
        switch(opcao)
        {
                     case'1':
                     {
                             #define t 7  
                             int v[t], i;
                             for(i=0; i<t; i++)
                             {
                                      cout<<"\nDigite o "<<i+1<<"o. elemento: ";
                                      cin>>v[i];
                             }
                             clrscr();
                             cout<<"\nOs m\243ltiplos de 2 s\306o: \n\n";
                             for (i=0; i<t; i++)
                             {
                                 if(v[i] % 2 == 0)
                                 {
                                     cout<<v[i]<<"\t";
                                 }
                             }
                             cout<<"\n\nOs m\243ltiplos de 3 s\306o: \n\n";
                             for(i=0; i<t; i++) 
                             {
                                 if (v[i] % 3 == 0)
                                 {
                                          cout<<v[i]<<"\t";
                                 }
                             }
                             cout<<"\n\nOs m\243ltiplos de 2 e 3 s\306o: \n\n";
                             for(i=0; i<t; i++)
                             {
                                      if (v[i] % 2 == 0 && v[i] % 3 == 0)
                                      {
                                          cout<<v[i]<<"\t";
                                      }
                             }
                             break;
                     }
                     case'2':
                     {
                             #define y 8
                             float v[y], a[y], maior, menor; 
                             int i;
                             char n[y][50], nome_maior[50], nome_menor[50];
                             for(i=0; i<y; i++)
                             {
                                      fflush(stdin);
                                      cout<<"\nDigite o nome do "<<i+1<<"o. vendedor: ";
                                      gets(n[i]);
                                      cout<<"\nDigite o total de vendas de "<<n[i]<<": ";
                                      cin>>v[i];
                                      cout<<"\nDigite o percentual de comiss\306o de "<<n[i]<<": ";
                                      cin>>a[i];cout<<"\n\n";
                                      a[i] = a[i]/100;
                                      v[i] = v[i] *a[i];
                             }
                             clrscr(); 
                             maior = v[0]; menor = v[0];
                             strcpy(nome_menor, n[0]); strcpy(nome_maior, n[0]);
                             for(i=1; i<y ;i++) 
                             {
                                      if(v[i] >maior) 
                                      {
                                              maior = v[i];
                                              strcpy(nome_maior, n[i]);
                                      }
                                      if(v[i]< menor)
                                      {
                                               menor = v[i];
                                               strcpy(nome_menor, n[i]);
                                      }
                             }
                             cout<<"\nRelat\242rio das comiss\344es dos vendedores \n\n";
                             for (i=0; i<y; i++)
                             {
                                 cout<<"\n"<<n[i]<<"----->"<<v[i];
                             }
                             cout<<"\n\n\nO maior valor \205 receber \202 de "<<nome_maior<<" sendo de "<<maior<<" R$";
                             cout<<"\nO menor valor \205 receber \202 de "<<nome_menor<<" sendo de "<<menor<<" R$"; 
                             break;          
                     }
                     case'3':
                     {
                             #define z 5
                             int c=0, q=0, i;
                             float v[z], s=0;
                             char p[z][30];
                             for(i=0; i<z; i++)
                             {
                                      fflush(stdin);
                                      cout<<"\nDigite o nome do produto: ";
                                      gets(p[i]);
                                      cout<<"\nDigite o pre\207o de "<<p[i]<<": ";
                                      cin>>v[i];
                                      if(v[i]<50)
                                      {
                                                 q++;
                                      }
                                      if(v[i]>100)
                                      {
                                                  s += v[i];
                                                  c++;
                                      }   
                                      clrscr();
                             }
                             cout<<"\nA qtd. de produto(s) com pre\207o inferior \205 R$50,00 \202: "<<q;
                             cout<<"\n\n";
                             for(i=0; i<z ;i++)
                             {
                                      if(v[i]>50 && v[i]<100) 
                                      { 
                                      cout<<"\n"<<p[i]<<" esta entre 50 e 100 reais.";
                                      } 
                             }
                             cout<<"\n\nA m\202dia de produtos entre 50 e 100 reais \202: "<<s/c;
                             break;
                     }
                     case'4':
                     {
                             #define u 10
                             float v[t], maior, menor;
                             int i, c=1, q=1;
                             for(i=0; i<u; i++)
                             {
                                      cout<<"\nDigite o "<<i+1<<"o. elemento: ";
                                      cin>>v[i];
                             }
                             maior = v[0]; menor = v[0];
                             for(i=1; i<u; i++)
                             {
                                      if(v[i] > maior) 
                                      {
                                              maior = v[i];
                                              c = i+1;
                                      }
                                      if(v[i] < menor)
                                      {
                                              menor = v[i];
                                              q = i+1;
                                      }
                             }
                             cout<<"\n\n\nO maior elemento \202 "<<maior<<" na posi\207\306o "<<c<<".";
                             cout<<"\nO menor elemento \202 "<<menor<<" na posi\207\306o "<<q<<".";
                             break;
                     }
                     case'5':
                     {
                            sair =0;
                            break;
                     } 
        }
    getch();
    clrscr();
    }
}

