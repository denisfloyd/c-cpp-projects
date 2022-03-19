#include<iostream>
#include<conio2.h> 
#include<math.h>
using namespace std;
float s[4];

void autor()
{
     cout<<"\n\nPrograma Desenvolvido por Denis Mendon\207a Ladeira";
     cout<<"\nRA: 1111320497  1o. ADS - Turma 1";
}

int verifica_terr(float r)
{
     if(r>50 && r<95)
     {
                   if(sqrt(r)>10 || sqrt(r)<9)
                   {
                                       textcolor(LIGHTBLUE);
                                       cout<<r;
                                       return 1;
                   }
     }
     else
     {
         textcolor(BROWN);
         cout<<r;
         return 0;
     }
}

void impressao (int e)
{
     if(e==0)
     {
             textcolor(BROWN);
             cout<<"\n\n\n\tN\307o ha areas boas para perfura\207\306o !";
     }
     else
     {
         textcolor(LIGHTBLUE);
         cout<<"\n\n\n\tAreas boas para perfura\207\306o !";
     }
}
     
void cabecalho()
{
     cout<<"\t\tProduto 1\t";
      cout<<"Produto 2\t";
      cout<<"Produto 3\t";
      cout<<"Produto 4\t";
      cout<<"\n\nFilial 1: ";
      cout<<"\n\nFilial 2: ";
      cout<<"\n\nFilial 3: ";
      cout<<"\n\nFilial 4: ";
}

void leitura_2()
{
     #define w 4
     int col=20, lin=4, i, j;
     float a[w][w];
     for(i=0; i<w; i++)
     {
              col=20;
              for(j=0; j<w; j++)
              {
                       gotoxy(col,lin);
                       cin>>a[i][j];
                       col +=16;
              }
              lin += 2;
     }
}

void media_2()
{
     #define w 4
     int i, j,col=20, lin=15;
     float a[w][w], s;
     cout<<"\n\n\t\tFilial 1";
     cout<<"\tFilial 2";
     cout<<"\tFilial 3";
     cout<<"\tFilial 4";
     cout<<"\n\nM\202dia: ";
     for(i=0; i<w; i++)
     {
              s=0;
              for(j=0; j<w; j++)
              {
                       s += a[i][j];
              }
              gotoxy(col,lin);
              cout<<s/w;
              col +=16;
     }
     lin+=3;
}

void valor()
{
     #define w 4
     int i, j=0;
     float a[w][w];
     cout<<"\n\n\n";
     for(i=0; i<w; i++)
     {
              cout<<"\nValor em R$ na Filial "<<i+1<<": ";
              cout<<(a[i][j]*1.30)+(a[i][j+1]*2.90)+(a[i][j+2]*1)+(a[i][j+3]*3.50);
     }
}

void cabecalho_2()
{
     cout<<"   \nM\210s";
     cout<<"\t\tJan\t";
     cout<<"Fev\t";
     cout<<"Mar\207o\t";
     cout<<"Abril\t";
     cout<<"  Maio\t";
     cout<<"  Junho";
     cout<<"\n\nFilial 1: ";
     cout<<"\n\nFilial 2: ";
     cout<<"\n\nFilial 3: ";
     cout<<"\n\nFilial 4: ";
}

void matriz_3()
{
     void cabecalho();
     int mais_tres(int);
     void maior_v();
     void menor_v();
     int i, j , col, lin=4, b, c;
     float a[4][6], auxs, mais_3=0;
     cabecalho_2();
     for(i=0; i<4; i++)
     {
              col= 17;
              auxs=0;
              for(j=0; j<6; j++)
              {
                    gotoxy(col, lin);
                    cin>>a[i][j];
                    col += 9;
                    auxs += a[i][j];
                    b = mais_tres(i);
                    if(b==1)
                    {
                            if(a[i][j]>mais_3)
                            {
                                             mais_3 = a[i][j];
                                             c = j;
                            }
                    }
              }
              s[i] = auxs;
              lin+=2;
              
     }
     cout<<"\nA m\202dia de vendas da filial 1: "<<s[0]/6;
     cout<<"\nA Filial 3 mais vendeu no m\210s: "<<c+1;
     maior_v();
     menor_v();
}

int mais_tres(int e)
{
    if(e==2)
    {
            return 1;
    }
    else{
         return 0;
    }
}

void maior_v()
{
     int i, j, c;
     float maior=0;
     for(i=0; i<4; i++)
     {        
              if(s[i]>maior)
              {
                            maior = s[i];
                            c=i+1;
              }
     }
     cout<<"\nA Filial que mais vendeu foi a de Nr: "<<c;
}

void menor_v()
{
     int i, j, c;
     float menor=999999999;
     for(i=0; i<4; i++)
     {        
              if(s[i]<menor)
              {
                            menor = s[i];
                            c=i+1;
              }
     }
     cout<<"\nA Filial que menos vendeu foi a de Nr: "<<c;
}
     

    

     

    

                        
     
     
     
