#include<iostream>

using namespace std;

int main(){
	
	int temperatura;
	
	cout<<"Ingreso a la camara detectora de COVID 19"<<endl;
	cout<<"Por favor ingrese su temperatura: "<<endl;
	cin>>temperatura;
	
	if(temperatura > 37){
		cout<<"Necesitas chequeo medico, pues tienes uno de los sintomas del virus. "<<endl;
	}else{
		cout<<"Cuidate ;)"<<endl;
	}
	
	return 0;
}
