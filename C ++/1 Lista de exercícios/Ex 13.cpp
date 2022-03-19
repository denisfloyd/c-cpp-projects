// Construa um algoritmo que leia 4 números reais e mostre o somatório entre eles.

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main() 
{
       float a,b,c,d,soma;
       cout<<"\nDigite o primeiro numero: ";
       cin>>a;
       cout<<"\n\nDigite o segundo numero: ";
       cin>>b;
       cout<<"\n\nDigite o terceiro numero: ";
       cin>>c;
       cout<<"\n\nDigite o quarto numero: ";
       cin>>d;
       soma=a+b+c+d;
       cout<<"\n\nA soma entre os numeros é: "<<soma,
       getch();
}

/* obs.: Laço while - do
        int i=0;
        while(i<4)
        {
                  cout<<"Digite o "<<i+1<<"o. nr: ";
                  cin>>n
                  s += n;
        }
        ...
        
        Como não havia aprendido a lidar com laços, não daria para resolver
        semelhante a resolucão acima.
*/
                   
       
