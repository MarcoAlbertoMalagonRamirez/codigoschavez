#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Dame tu primer numero"<<endl;
	cin>>num1;
    cout<<"Dame tu segundo numero"<<endl;
	cin>>num2;	
	cout<<"Dame tu tercer numero"<<endl;
	cin>>num3;
	
	if(num1==num2 and num2==num3){
		cout<<"Tutriangulo es equilatero";
	}
	else if (num1==num2 or num2==num3){
		cout<<"tu triangulo es isosiles ";
	}
    else if (num1 != num2 and num2 != num3){
		cout<<"tu triangulo es escaleno ";
	}	
	else{
		cout<< " NO ES UN TRIANGULO";
	}
	return 0;
}
