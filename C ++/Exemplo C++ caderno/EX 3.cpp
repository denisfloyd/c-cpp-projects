// C++ Exemplo 3

#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      int n,q,r;
      textbackground(WHITE);
      clrscr();
      textcolor(BLACK); // Complemento próprio
      cout<<"\nDigite um valor: ";
      cin>>n;
      q = n/2;
      r = n -(q*2);
      if(r==0)
      {
              cout<<"\n\nO nr \202 PAR.\n"<<endl;
      }
      else
      {
              cout<<"\n\nO nr \202 IMPAR.\n"<<endl;
      }
      system("PAUSE");
}
