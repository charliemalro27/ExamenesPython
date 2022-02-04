#include <iostream>

using namespace std;

//Devolver divisores de un numero en una lista
void divisoresnumero(int numero){
	for(int i=0;i<numero;i++){
		int divisores[i];
		if(numero%i==0)
		divisores[i]=numero;
		cout<<divisores[i]<<endl;
	}
}
//Imprimir lista
void imprimirlista(string lista[],int tamano){
	for(int i=0;i<tamano;i++){
		cout<<lista[i]<<endl;
	}
}

int main(){

		cout<<"Examen Bucles 1"<<endl;

		int numero;
		divisoresnumero(21);




	return 0;
}
