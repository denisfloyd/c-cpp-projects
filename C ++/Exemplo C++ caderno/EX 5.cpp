// C++ Exemplo 5

#include<iostream> 
#include<conio2.h>
using namespace std; 
main()
{
      int cont=1, n, s=0;
      while(cont<=4)
      {
             cout<<"\nDigite o "<<cont<<"o. nr: ";
             cin>>n;
             s = s + n;
             cont = cont + 1;
      }
      cout<<"\n\nA soma \202: "<<s;
      getch();
}
