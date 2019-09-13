#include<iostream>
#include<conio.h>

using namespace std;

struct nodo{
	int valor;
	struct nodo *Ptr;
};

int main(int argc, char** argv){
	struct nodo N1;
	struct nodo N2;
	struct nodo N3;
	struct nodo N4;
	struct nodo N5;
	
	struct nodo *inicio;
	struct nodo *aux;
	
	N1.valor=4;
	N1.Ptr=NULL;
	
	N2.valor=8;
	N2.Ptr=NULL;
	
	N3.valor=2;
	N3.Ptr=NULL;
	
	N4.valor=5;
	N4.Ptr=NULL;
	
	N5.valor=7;
	N5.Ptr=NULL;
	
	N1.Ptr=&N2;
	N2.Ptr=&N3;
	N3.Ptr=&N4;
	N4.Ptr=&N5;
	N5.Ptr=&N1;
	
	cout<<" \n Usando apuntadores \n"<<endl;
	cout<<"El valor de 2 es :"<<N1.Ptr->valor<<endl;
	cout<<"El valor de 3 es :"<<N1.Ptr->Ptr->valor<<endl;
	cout<<"El valor de 4 es :"<<N1.Ptr->Ptr->Ptr->valor<<endl;
	cout<<"El valor de 5 es :"<<N1.Ptr->Ptr->Ptr->Ptr->valor<<endl;
	cout<<"El valor de 1 es :"<<N1.Ptr->Ptr->Ptr->Ptr->Ptr->valor<<endl;
	

	aux = new nodo();
	aux->Ptr=NULL;
	aux->valor=4;
	inicio=aux;
	
	aux=new nodo();
	aux->Ptr=NULL;
	aux->valor=8;
	inicio->Ptr=aux;
	
	aux=new nodo();
	aux->Ptr=NULL;
	aux->valor=2;
	inicio->Ptr->Ptr=aux;
	
	aux=new nodo();
	aux->Ptr=NULL;
	aux->valor=5;
	inicio->Ptr->Ptr->Ptr=aux;
	
	aux=new nodo();
	aux->Ptr=NULL;
	aux->valor=7;
	inicio->Ptr->Ptr->Ptr->Ptr=aux;
	
	cout<<" \n Usando auxiliar \n"<<endl;
	cout<<"El valor de 1 es :"<<inicio->valor<<endl;
	cout<<"El valor de 2 es :"<<inicio->Ptr->valor<<endl;
	cout<<"El valor de 3 es :"<<inicio->Ptr->Ptr->valor<<endl;
	cout<<"El valor de 4 es :"<<inicio->Ptr->Ptr->Ptr->valor<<endl;
	cout<<"El valor de 5 es :"<<inicio->Ptr->Ptr->Ptr->Ptr->valor<<endl;
	
	getch();
	return 0;
}
