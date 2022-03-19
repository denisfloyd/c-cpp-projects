//  EX String STRCMP

#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      char resposta[]="branco"; 
      char resp[40];
      cout<<"Qual \202 a cor do cavalo de Napole\306o?: ";
      gets(resp);
      while (strcmp(resp,resposta)!=0)
      {
            cout<<"\nResposta Errada tente novamente.\n";
            cout<<"Qual \202 a cor do cavalo de Napole\306o?: ";
            gets(resp);
      }
      cout<<"\n\nCorreto !\a";
      getch();
}
  
