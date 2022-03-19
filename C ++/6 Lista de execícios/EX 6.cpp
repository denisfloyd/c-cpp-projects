/* Construa um algoritmo que calcule o FATORIAL de N, sendo que o valor 
   inteiro de N é fornecido pelo usuário. 
   Sabe-se que: N! = 1 * 2 * 3 * 4 ... (N-1) * N 
    0!  = 1, por definição 
    1!  = 1                                  */

#include<iostream>
#include<conio2.h> 
using namespace std;
main()
{
      float mult=1, n, num=1;
      cout<<"\nDigite o valor de N! : ";
      cin>>n;
      if(n == 0)
      {
           cout<<"\n\nO valor do fatorial de "<<n<<" \202: 1";
      }
      else
      {
           cout<<"\n\n";
           do
           {
                        mult *= num; 
                        cout<<endl<<num<<"! = "<<mult;
                        num++;
           }while(num <= n);
      } 
      getch();
}
