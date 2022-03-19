#include<iostream>
#include<conio2.h>
using namespace std;

struct data
{
       int dia;
       char mes[12];
       int ano;
};
struct venda
{
      int pecas;
      float preco;
      data diavenda;
};

main()
{
     venda a = {20, 110.00, {15, "setembro", 2011}};
     cout<<"Pe\207as: "<<a.pecas<<endl;
     cout<<"Pre\207o: R$ "<<a.preco<<endl;
     cout<<"Data: "<<a.diavenda.dia<<" / "<<a.diavenda.mes<<" / "<<a.diavenda.ano<<endl;
     getch();
}
