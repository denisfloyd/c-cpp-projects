#include<iostream> 
#include<conio2.h> 
#define t 10
using namespace std;

struct dados
{
       int cod;
       char info[10];
};

dados val, x[t];                
int final =-1, aux;
char conf;

void lls_1()
{
     if(final < t-1)
     {
              cout<<"\nC\242digo : ";
              cin>>val.cod;
              cout<<"\nInforma\207\306o: ";
              cin>>val.info;
              cout<<"\nConfirma a opera\207\306o: ";
              cin>>conf;
              if(conf=='s')
              {
                           final++;
                           x[final] = val;
              }
              else
              {
                  cout<<"\n\t\tN\306o Confirmou a opera\207\306o !";
              }
     }
     else
     {
         cout<<"\n\n\t\tOVERFLOW !!";
     }
}

void lls_2()
{
     if(final < t-1)
     {
              cout<<"\nC\242digo : ";
              cin>>val.cod;
              cout<<"\nInforma\207\306o: ";
              cin>>val.info;
              cout<<"\nConfirma a opera\207\306o: ";
              cin>>conf;
              if(conf == 's')
              {
                      final++;
                      aux = final;
                      while(aux != 0)
                      {
                                x[aux] = x[aux - 1];
                                aux--;
                      }
                      x[aux] = val;
              }
              else
              {
                  cout<<"\n\t\tN\306o Confirmou a opera\207\306o !";
              }
     }
     else
     {
         cout<<"\n\n\t\tOVERFLOW !!";
     }
}

void lls_3()
{
     int k;
     if(final < t - 1)
     {
              cout<<"\nInsira a posi\207\306o que deseja inserir o n\242: ";
              cin>>k;
              if(k >= 0 && k <=final)
              {
                     cout<<"\nC\242digo : ";
                     cin>>val.cod;
                     cout<<"\nInforma\207\306o: ";
                     cin>>val.info;
                     cout<<"\nConfirma a opera\207\306o: ";
                     cin>>conf;
                     if(conf == 's')
                     {
                             final++;
                             aux = final;
                             while(aux != k)
                             {
                                       x[aux] = x[aux-1];
                                       aux--;
                             }
                             x[aux] = val;
                     }
                     else
                     {
                         cout<<"\n\t\tN\306o Confirmou a opera\207\306o !";
                     }
              }
              else
              {
                  cout<<"\n"<<k<<" n\306o exixte na lista !";
              }
     }
     else
     {
         cout<<"\n\n\t\tOVERFLOW !!";
     }
}

void lls_4()
{
     void lls_11();
     if(final > -1)
     {
              cout<<"\nDigite o c\242digo procurado: ";
              cin>>val.cod;
              cout<<"\nConfirma a opera\207\306o: ";
              cin>>conf;
              if(conf == 's')
              {
                      aux =0;
                      while(aux != final && val.cod != x[aux].cod)
                      {
                                aux++;
                      }
                      if(x[aux].cod == val.cod)
                      {
                                    cout<<"\n\n"<<val.cod<<" est\240 na LISTA !";
                                    lls_11();
                      }
                      else
                      {
                          cout<<"\n\n"<<val.cod<<" n\306o est\240 na LISTA !";
                      }
              }
              else
              {
                  cout<<"\n\t\tN\306o Confirmou a opera\207\306o !";
              }
     }
     else
     {
         cout<<"\n\n\t\tLISTA VAZIA !!";
     }
}
                       
void lls_11()
{
     cout<<"\nDeseja remove-l\223? ";
     cin>>conf;
     if(conf == 's')
     {
             while(aux != final)
             {
                       x[aux] = x[aux + 1];
                       aux++;
             }
             final--;
     }
     else
     {
         cout<<"\n\t\tN\306o Confirmou a opera\207\306o !";
     }
}

void lls_5()
{
     if(final > -1)
     {
              val = x[final];
              cout<<"C\242digo\tInforma\207\306o\n\n";
              cout<<val.cod<<"\t"<<val.info;
              cout<<"\n\n\nConfirma a opera\207\306o: ";
              cin>>conf;
              if(conf == 's')
              {
                      final--;
              }
              else
              {
                  cout<<"\n\t\tN\306o Confirmou a opera\207\306o !";
              }
     }
     else
     {
         cout<<"\n\n\t\tLISTA VAZIA !!";
     }
}

void lls_6() 
{
     if(final > -1)
     { 
              aux = final;
              cout<<"\tC\242digo\tInforma\207\306o";
              while(aux >= 0)
              {
                        val = x[aux];
                        cout<<"\n\n\t"<<val.cod<<"\t"<<val.info;
                        aux--;
              }
     }
     else
     {   
         cout<<"\n\n\t\tLISTA VAZIA !!";
     }
}

void lls_7()
{
     char proc[10];
     if(final > -1)
     {
              cout<<"\nDigite a Info procurada : ";
              cin>>proc;
              aux = 0;
              while(aux <= final && strcmp(proc, x[aux].info)!=0)
              {
                        aux++;
              }
              if(aux <= final)
              {
                     cout<<"\nC\242digo : ";
                     cin>>val.cod;
                     cout<<"\nInforma\207\306o: ";
                     cin>>val.info;
                     cout<<"\nConfirma a altera\207\306o: ";
                     cin>>conf;
                     if(conf == 's')
                     {
                             x[aux] = val;
                     }
                     else 
                     {
                          cout<<"\n\t\tN\306o Confirmou a opera\207\306o !";
                     }
              }
              else
              {
                  cout<<"\n\n"<<proc<<" n\306o existe na LISTA !";
              }
     }
     else
     {
         cout<<"\n\n\t\tLISTA VAZIA !!";
     }
}

void lls_8()
{
     dados m[t], n[t];
     int fimm, fimn;
     cout<<"\n( * ) 1 - Nrs. menores que 20 / 2 - Nrs. maiores ou iguais a 20"; 
     if(final > -1)
     {
              fimm = -1, fimn = -1, aux =0;
              while(aux <= final)
              {
                        val = x[aux];
                        if(val.cod < 20)
                        {
                                   fimm++;
                                   m[fimm] = val;
                        }
                        else
                        {
                            fimn++;
                            n[fimn] = val;
                        }
              aux++;
              }
              cout<<"\n\n1\tC\242digo\tInforma\207\306o";
              for(aux = fimm; aux >= 0; aux--)
              {
                      cout<<"\n\n\t"<<m[aux].cod<<"\t"<<m[aux].info;
              }
              cout<<"\n\n\n2\tC\242digo\tInforma\207\306o";
              for(aux = fimn; aux >= 0; aux--)
              {
                      cout<<"\n\n\t"<<n[aux].cod<<"\t"<<n[aux].info;
              }
     }
     else
     {
         cout<<"\n\n\t\tLISTA VAZIA !!";
     }
}

void lls_9()
{
     if(final > -1)
     {
              aux =0;
              cout<<"C\242digo\tInforma\207\306o\n\n";
              cout<<x[aux].cod<<"\t"<<x[aux].info;
              cout<<"\n\n\nConfirma a opera\207\306o: ";
              cin>>conf;
              if(conf == 's')
              {
                      while(aux != final)
                      {
                                x[aux] = x[aux + 1];
                                aux++;
                      }
                      final--;
              }
              else 
              {
                   cout<<"\n\t\tN\306o Confirmou a opera\207\306o !";
              }
     }
     else
     {
         cout<<"\n\n\t\tLISTA VAZIA !!";
     }
}                  

void lls_a ()
{
      if(final > -1)
      { 
               int i=0, f = final , c;
               cout<<"\n\nQual nr. procura? ";
               cin>>val.cod;
               cout<<"\nConfirma a opera\207\306o: ";
               cin>>conf;
               if(conf == 's')
               {
                       do
                       {
                          c =  (i+f)/2;
                          if (val.cod > x[c].cod)  
                             i = c+1;
                          else                  
                             f = c-1;
              } while(i <= f && val.cod != x[c].cod);
              if(val.cod == x[c].cod)
              {
                         cout<<"\n\n\t"<<x[c].cod<<" foi encontrado !";    
              }
              else
                         cout<<"\n\n\t"<<x[c].cod<<" n\306o foi encontrado !";   
              }
              else
                         cout<<"\n\t\tN\306o Confirmou a opera\207\306o !";
      }
      else
                  cout<<"\n\n\t\tLISTA VAZIA !!";
}          
