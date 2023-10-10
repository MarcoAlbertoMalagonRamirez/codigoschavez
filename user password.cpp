#include<iostream>
using namespace std;

int main(){
	string user="305";
	string password="12345";
	string usuario ,pass;
	cout<<"ingresa tu usuario"<<endl;
	getline(cin,usuario);
	cout<<"ingresa tu contraseña"<<endl;
	getline(cin,pass);
	if(usuario == user and pass == password){
		cout<<"bienvenido";
	}
	else{
		cout<<"largate de aqui";
    }
    
}	

