// C++ Exemplo 4

#include<iostream> 
#include<conio2.h>
#include<iomanip> 
using namespace std;
main()
{
      float valor = 4.1834;
      textbackground(7);
      system("cls");
      textcolor(12); 
      cout<<"\nO valor Original : "<<valor;
      cout<<"\n\nO valor com duas casas decimais : "<<setprecision(2)<<valor;
      getch();
}
