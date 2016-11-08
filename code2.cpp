#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <ctype.h>

using namespace std;



void pausa ();

void pausa (){


	cout<<"Desea volver al menu  's' /  'n' "<<endl;
	getwchar();
	//getwchar();
}



/*void funcion_venta(){

	int cantidad=0;
	char dec;

	

}

*/


int main (){

//proceso del menu


char tecla;



do{

cout<<" Menu de opciones"<<endl;
cout<<"A) Registrar Ventas"<<endl;
cout<<"B) Consultar Catalogo "<<endl;
cout<<"C) salir."<<endl;
		
	do{
		do{
		tecla=toupper(getch());
	
		}while(!isalpha(tecla));
	
	}while((tecla < 'A') || (tecla > 'C'));

	switch(tecla){

		case 'A' : 
			system("cls");
			cout<<"venta";
			pausa();

			break;
		case 'B' :

			system("cls");
			cout<<"catalogo";
			pausa();
			break;


	}

		system("cls");


	}while(tecla!='C');

//fin del menu


	getch();
}
