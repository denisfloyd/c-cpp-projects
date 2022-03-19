//  EX String STRNCPY

#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      char x[]="Feliz Aniversario";
      char y[20], z[6];
      cout<<"A string em x \202: "<<x<<"\n";
      cout<<"A string em y \202: "<<strcpy(y,x)<<"\n";
      strncpy(z,x,5);
      z[5]='\0';
      cout<<"\nA string em z \202: "<<z;
      getch();
}
 
