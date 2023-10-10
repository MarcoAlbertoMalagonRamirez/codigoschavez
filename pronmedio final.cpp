//incluir la libreria 
#include<iostream>
/* utiliza todos los caracteres y funciones 
de la libreria 
*/
using namespace std;
//funcion principal 
int main(){
	//declarar variable 
	int a,b,c,d,e,suma,promedio;
	// declaramos variales localesen la misma liena por ser del mismo tipo
	cout<<"Bienvenido a la rutin la caual calculara tu promedi"<<endl;
	// se imprime el texto para saver la rutina  
	cout<<"por favor digita tu primera evaluaccion"<<endl;
	//pedimos la primera variable
	cin>>a;
	//guardamos la variable en a 
	cout<<"por favor digita tu segunda evaluaccion"<<endl;
	//pedimos la segunda variable
	cin>>b;
	//guardamos la variable en b
	cout<<"por favor digita tu tercera evaluaccion"<<endl;
	//pedimos la tersera variable
	cin>>c;
	//guardamos la variable en c
	cout<<"por favor digita tu cuarta evaluaccion"<<endl;
	//pedimos la cuarta variable
	cin>>d;
	//guardamos la variable en d
	cout<<"por favor digita tu quinta evaluaccion"<<endl;
	//pedimos la quinta variable
	cin>>e;
	//guardamos la variable en e
	promedio=(a+b+c+d+e)/5;
	//se hace la operacion del promedio
	cout<<"tu promedio general es de"<<promedio<<endl;
	//se da el promedio q¿de la variable promedio 
	if(promedio>=7){
		cout<<"tu calificasion es aprobatoria:)";
	}
	else{
		cout<<"reprovaste:("<<endl;
	} 
    // se cloca si el promedio es igual o mayor a 7 te dise que aprovaste y si es menor reprovaste 
cout<<"gracias por usar el programa";
return 0;	
}

