/*Escriba un programa que lea de la entrada estandar los dos catetos de un 
triangulo rectangulo y escriba en la salida estandar su hipotenusa. */

#include<iostream>

using  namespace std;

int main(){
	float cateto1,cateto2,hipotenusa;
	
	cout<<"Digite el cateto 1: "; cin>>cateto1;
	cout<<"Digite el cateto 2: "; cin>>cateto2;
	
    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	
	cout<<"nEl resultado de la hipotenusa es: "<<hipotenusa;
	
	return 0;
}
