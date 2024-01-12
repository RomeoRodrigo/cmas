#include<iostream>
using namespace std;

int main (int argc, char *argv[]) 
{
	short int numero_entero_p;
	int numero_entero;
	unsigned short int numero_entero_p1;
	unsigned int numero_entero_s;
	float numero_decimal;
	double numero_decimal_g;
	//Asignando valores limite de los tipos de dato
	numero_entero=32767;//valor limite del tipo de dato
	cout <<"numero entero pequeño: "<<numero_entero_p<<endl;
	numero_entero_p=65535;//valor limite del  tipo de dato 65535 65530
	cout <<"numero entero pequeño positivo: "<<numero_entero_p1<<endl;
	numero_entero=2147483647;
	cout <<"numero entero: "<<numero_entero<<endl;
	numero_entero_s=4294967295;
	cout <<"numero entero positivo: "<<numero_entero_s<<endl;
	
	return 0;
}

