/*A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a 
cada dia. Cada p�ozinho custa R$ 0.12 e a broa custa R$ 1.50. Ao final do dia, o dono quer 
saber quanto arrecadou com a venda dos p�es e broas (juntos), e quanto deve guardar numa 
conta de poupan�a (10% do total arrecadado). Voc� foi contratado para fazer os c�lculos para o 
dono. Com base nestes fatos, fa�a um algoritmo para ler as quantidades de p�es e de broas, e 
depois calcular os dados solicitados. Finalize o algoritmo quando for lida quantidade de p�o = 
999, que n�o entrar� para os c�lculos. */

#include<iostream>
#include<conio2.h> 
#include<math.h>
#include<iomanip>
using namespace std;
main()
{
      float p, b,s=0,d; 
      cout<<fixed<<setprecision(2);
      cout<<"Digite a qtd de paes: ";
      cin>>p;
      while(p!=999)
      {
                   cout<<"\nDigite a qtd de broas: ";
                   cin>>b;
                   s = (p*0.12)+(b*1.50);
                   d = (s*10)/100;
                   cout<<"\nFoi arrecadado: R$ "<<s;
                   cout<<"\nO Senhor deve guardar: " <<d;
                   cout<<"\n\n\n\nDigite a qts de paes: ";
                   cin>>p;
      }
      getch();
}
