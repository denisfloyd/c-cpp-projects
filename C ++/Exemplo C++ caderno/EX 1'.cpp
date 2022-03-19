// C++ Exemplo 1'

#include<iostream>
#include<math.h>  
#include<conio2.h>
#include<iomanip> 
using namespace std;
main() 
{
       double raiz2,raiz3,n,p;
       textbackground(4);
       clrscr();
       textcolor(WHITE);
       cout<<fixed<<setprecision(2);
       cout<<"\nDigite um numero: ";
       cin>>n;
       raiz3=exp(log(n)/3);
       raiz2=sqrt(n);
       p=pow(n,3);
       cout<<"\n\nRaiz cubica: "<<raiz3<<"\n\n";
       cout<<"Raiz quadrada: "<<raiz2<<"\n\n";
       cout<<"Numero elevado ao cubo: "<<p<<"\n\n\n\n\n\n\n\n\n\n";
       system("PAUSE");
}
         
        
