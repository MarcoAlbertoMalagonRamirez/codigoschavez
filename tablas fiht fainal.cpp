#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
	
	string user,pass,usuario = "sistema",password = "admin01";
	//doble comilla por se stdio.h se declaran en la misma linea por ser del mismo tipo
	char seguir,opc;
	//char es variante caracter 
	int multiplicacion, numero,i;
		//char es variante entera 
	cout<<"bienvenid@ al sistema;\n";
	cout<<"incresa tu usuario"<<endl;
	cin>>user;
	cout<<"ingresa tu usuario"<<endl;
	cin>>pass;
	// guardamos los datos recaudados 
	if(user == usuario && pass == password){
	//comparativa de datos 
		do{
			cout <<"porfavor ingresa el numero de la tabla a inprimir: ";
			cin>>numero;
			for(int i=1;i<=10;i++){
				//la guardara en
				multiplicacion=i*numero;
				//inprimir en pantalla 
				cout<<numero<<"x"<<i<<"="<<multiplicacion<<endl; 
				//inpresion en pntaya todo lo que ste en "" el = edss para que3 se vea el prosedimiento 
			}
			cout<<"quieres generar otra tabla(s7n)?";
		    fflush(stdin);
		    //elimir histrial de datos del recorrido
	        cin>>seguir; 
		}
		while(seguir!='n');
		// compara si es diferente 
			int h = 0 , m = 0 , s = 0;
	while(1){
		
		if(s>=60){
			s = 0;
			m++;
			
		if(m>=60);{
			m = 0;
			h++;
		}	
	}
	system("cls");
	cout<<h<<":"<<m<<":"<<s;
	Sleep(10);
	s++;		
	}
	cin.get();
}
	
	
	else {
		//si nio se cumplen las datos
		cout<<"usuario incorrecto";
	}
	cin.get();
	return 0;
	//para que no de valores restamntes 
}
