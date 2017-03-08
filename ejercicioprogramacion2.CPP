#include <iostream>
#include <conio.h>
#include <windows.h>


 //funcion que dibuja la tabla.

void tabla(){ //inicio de la funcion void

Sleep(1000);//temporizador

  	for (int i=2;i<54;i++){  //bucle que dibuja linea superior y inferior


    gotoxy(i,1);cout<<"\315";
    gotoxy(i,36);cout<<"\315";

   }

    for (int d=2;d<36;d++){//bucle que dibuja lineas laterales

     gotoxy(1,d);cout<<"\272";
     gotoxy(54,d);cout<<"\272";

    }
     //instrucciones que dibujan esquinas
    gotoxy(1,1);cout<<"\311";
    gotoxy(1,36);cout<<"\310";
    gotoxy(54,1);cout<<"\273";
    gotoxy(54,36);cout<<"\274";

   Sleep(1000);//otro temporizador

   for(int j=2;j<36;j++){//divide columnas

    gotoxy(6,j);cout<<"\272";
    gotoxy(12,j);cout<<"\272";
    gotoxy(18,j);cout<<"\272";
    gotoxy(24,j);cout<<"\272";
    gotoxy(30,j);cout<<"\272";
    gotoxy(36,j);cout<<"\272";
    gotoxy(42,j);cout<<"\272";
    gotoxy(48,j);cout<<"\272";


   }

   Sleep(1000);//otro temporizador;
   for(int n=2;n<54;n++){  //divide filas


    gotoxy(n,4);cout<<"\315";
    gotoxy(n,8);cout<<"\315";
    gotoxy(n,12);cout<<"\315";
    gotoxy(n,16);cout<<"\315";
    gotoxy(n,20);cout<<"\315";
    gotoxy(n,24);cout<<"\315";
    gotoxy(n,28);cout<<"\315";
    gotoxy(n,32);cout<<"\315";
    //gotoxy(n,36);cout<<"\315";
   }

      //inserta valores en coordenadas
   gotoxy(9,6);cout<<"A";
   gotoxy(45,6);cout<<"A";

   gotoxy(9,10);cout<<"G";
   gotoxy(21,10);cout<<"C";
   gotoxy(27,10);cout<<"F";
   gotoxy(33,10);cout<<"G";

   gotoxy(9,14);cout<<"F";
   gotoxy(21,14);cout<<"H";
   gotoxy(51,14);cout<<"E";

   gotoxy(15,22);cout<<"H";
   gotoxy(33,22);cout<<"E";
   gotoxy(45,22);cout<<"B";

   gotoxy(9,26);cout<<"C";
   gotoxy(21,26);cout<<"D";

   gotoxy(9,30);cout<<"D";
   gotoxy(21,30);cout<<"B";

   //recorrido hacia A
   Sleep(1000);
   for(int x=11;x<44;x++){gotoxy(x,6);cout<<"\52";}
   //recorrido hacia G
   Sleep(1000);
   for(int x=3;x<8;x++){gotoxy(x,10);cout<<"\52";}
   Sleep(1000);
   for(int y=2;y<11;y++){gotoxy(3,y);cout<<"\52";}
   Sleep(100);
   for(int x=3;x<52;x++){gotoxy(x,2);cout<<"\52";}
   Sleep(1000);
   for(int y=2;y<11;y++){gotoxy(52,y);cout<<"\52";}
   Sleep(1000);
   for(int x=35;x<51;x++){gotoxy(x,10);cout<<"\52";}

   //recorrido hacia B
   Sleep(1000);
     for(int x=23;x<45;x++){gotoxy(x,30);cout<<"\52";}
   Sleep(1000);
     for(int y=23;y<31;y++){gotoxy(45,y);cout<<"\52";}

     //recorrido hacia E
   Sleep(1000);
     for(int x=33;x<50;x++){gotoxy(x,14);cout<<"\52";}
     for(int y=15;y<22;y++){gotoxy(33,y);cout<<"\52";}

     //recorrido hacia H
     Sleep(1000);
     for(int x=16;x<22;x++){gotoxy(x,22);cout<<"\52";}
     for(int y=15;y<22;y++){gotoxy(21,y);cout<<"\52";}

      //recorrido hacia D
     Sleep(1000);
     for(int x=10;x<15;x++){gotoxy(x,30);cout<<"\52";}
     for(int y=26;y<30;y++){gotoxy(15,y);cout<<"\52";}
     for(int x=16;x<20;x++){gotoxy(x,26);cout<<"\52";}

     //recorrido hacia c
     Sleep(1000);

     for(int x=15;x<20;x++){gotoxy(x,10);cout<<"\52";}
     for(int y=10;y<19;y++){gotoxy(15,y);cout<<"\52";}
     for(int x=9;x<15;x++){gotoxy(x,18);cout<<"\52";}
     for(int y=18;y<26;y++){gotoxy(9,y);cout<<"\52";}

      //recorrido hacia F

     Sleep(1000);
     for(int x=3;x<9;x++){gotoxy(x,14);cout<<"\52";}
     Sleep(1000);
     for(int y=14;y<34;y++){gotoxy(3,y);cout<<"\52";}
      Sleep(1000);
     for(int x=3;x<52;x++){gotoxy(x,34);cout<<"\52";}
      Sleep(1000);
     for(int y=18;y<34;y++){gotoxy(52,y);cout<<"\52";}
      Sleep(1000);
     for(int x=39;x<52;x++){gotoxy(x,18);cout<<"\52";}
     Sleep(1000);
     for(int y=18;y<27;y++){gotoxy(39,y);cout<<"\52";}
     Sleep(1000);
     for(int x=27;x<39;x++){gotoxy(x,27);cout<<"\52";}
     Sleep(1000);
     for(int y=11;y<27;y++){gotoxy(27,y);cout<<"\52";}




}



int main (){

tabla();




 getch();
}