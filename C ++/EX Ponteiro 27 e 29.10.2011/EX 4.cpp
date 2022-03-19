#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      int i, *pvetor, t;
      cout<<"\nEntre c/ a qtd. de elementos: "; 
      cin>>t;
      pvetor = new int[t];
      for(i=0; i<t; i++)
      {
               cout<<"\n["<<i+1<<"]: ";
               cin>>pvetor[i];
      }
      cout<<"\n\nOs Valores Digitados: \n\n";
      for(i=0; i<t; i++)
      {
               cout<<pvetor[i]<<"\n\n";
      }
      delete pvetor;
      getch();
}
