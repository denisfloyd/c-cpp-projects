#include<iostream> 
#include<conio2.h>
using namespace std;
      
struct ell
{
       int cod;
       char texto[30];
       struct ell *prox;
};
      
ell *il = NULL, *aux;
char conf;
     
void lll_1()
{
     if(il == NULL)
     {
           aux = new ell;
           if(aux != NULL)
           {
                  cout<<"\nCodigo: ";
                  cin>>(*aux).cod;
                  cout<<"\nInfo: ";
                  cin>>(*aux).texto;
                  cout<<"\nConfirma (S/N): " ;
                  cin>>conf;
                  if(conf == 's')
                  {
                          il = aux;
                          (*aux).prox = NULL;
                  }
                  else
                  {
                      cout<<"\nN\306o Confirmou";
                      delete aux;
                  }
           }
           else
           {
               cout<<"\nOVERFLOW: ";
           }
     }
     else
     {
         cout<<"\n\n\tLista ja possui o primeiro n\242 !";
     }
}

void lll_2()
{
     void listavazia();
     if(il != NULL)
     {
           aux = new ell;
           if(aux != NULL)
           {
                  cout<<"\nCodigo: ";
                  cin>>(*aux).cod;
                  cout<<"\nInfo: ";
                  cin>>(*aux).texto;
                  cout<<"\nConfirma (S/N): " ;
                  cin>>conf;
                  if (conf  == 's')
                  {
                            (*aux).prox = il;
                            il = aux;
                  }
                  else 
                  {
                       cout<<"\nN\306o Confirmou";
                       delete aux;
                  }
           }
           else
           {
               cout<<"\n\n\tOVERFLOW ";
           }
     }
     else
     {
         listavazia();
     }
}

void listavazia()
{
     cout<<"\n\tLista Vazia, Deseja inserir 1\247 n\242 ?";
     cin>>conf;
     if(conf == 's')
     {
             lll_1();
     }
}

void lll_3()
{
     void listavazia();
     ell *fl;
     if(il != NULL)
     {
           aux = new ell;
           if(aux != NULL)
           {
                  cout<<"\nCodigo: ";
                  cin>>(*aux).cod;
                  cout<<"\nInfo: ";
                  cin>>(*aux).texto;
                  cout<<"\nConfirma (S/N): " ;
                  cin>>conf;
                  if (conf  == 's')
                  {
                         fl = il;
                         while((*fl).prox != NULL)
                         {
                                fl = (*fl).prox;
                         }
                         (*fl).prox = aux;
                         (*aux).prox = NULL;
                  }
                  else 
                  {
                       cout<<"\nN\306o Confirmou";
                       delete aux;
                  }
           }
           else
           {
               cout<<"\n\n\tOVERFLOW ";
           }
     }
     else
     {
         listavazia();
     }
}

void lll_4()
{
     if(il != NULL)
     {
           aux = il;
           cout<<"\tCOD\t"<<"INFO\t"<<"PROX\n";
           while(aux != NULL)
           {
                 cout<<"\n\t"<<(*aux).cod<<"\t"<<(*aux).texto<<"\t"<<(*aux).prox<<"\n";
                 aux = (*aux).prox;
           }
     }
     else
     {
           listavazia();
     }
}

void lll_5()
{
     void listavazia();
     ell *all;
     if(il != NULL)
     {
           aux = il;
           while((*aux).prox != NULL)
           {
                  all = aux; 
                  aux = (*aux).prox;
           }
           cout<<"\tCOD\t"<<"INFO\t";
           cout<<"\n\t"<<(*aux).cod<<"\t"<<(*aux).texto;
           cout<<"\n\nDeseja Remover ?";
           cin>>conf;
           if(conf == 's')
           {
                if(aux == il)
                {
                       il = NULL;
                }
                else 
                {
                      (*all).prox = NULL;
                }
           }
           else 
           {
                cout<<"\nN\306o Confirmou";
           }
     }
     else
     {
         listavazia();
     }
}    
