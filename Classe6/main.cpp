#include <iostream>
#include <stdio.h>
#include "Point2D.h"
#include "Circle.h"

#include "p2String.h"

/*
void SwapRef(int &a, int &b){

	int temp = 0;
	
	temp = a;
	a = b;
	b = temp;

}

void SwapRef( float &a, float &b){

	float temp = 0;

	temp = a;
	a = b;
	b = temp;

}

void SwapRef(char &a, char &b){

	char temp = '0';

	temp = a;
	a = b;
	b = temp;

}

*/

int main(int argc, char** argv){
	//-------SWAP TEST-----------

	/*
	int a = 5, b = 1;

	SwapRef(a, b);

	printf("%i\n", a);
	printf("%i", b);
	*/

	//------- POINT TESTS--------------
	/*
	Point2D x;
	Point2D y;

	x.setZero();
	y.setZero();

	x = y + 3;
	
	x.Negate();

	x = x + 1;

	printf("%i", x.GetX());
	printf("%i", x.GetY());

	x.SetX(5);

	printf("%i", x.GetX());
	*/
	//---------------------------------

	//------- CIRCLE TEST--------------

	/*
	int a = 5, b = 5;
	float c = 3.6f, d = 4.2f;
	char f = 'ik'; 
	char g = 'toma';

	//SwapTemp(a,b);
	//SwapRef(c,d);
	//SwapRef(f,g);

	Point2D<int> point(4,5);

	Point2D<int> point2(5, 6);

	point.SwapTemp(point, point2);

	#include "iek.h"
	#include "iek.h"
	#include "iek.h"

	printf("%i", a);

	/*
	printf("%i\n", b);
	printf("%f\n", d);
	printf("%c\n", g);
	*/
	

	p2String a("hola");
	p2String b("hola");

	if (a == b){
		printf("ie");
	}
	
	system("PAUSE");
}

/*
Classe 6

Quan tu crides una variable a una funcio es crea una copia

my_func(a);
 
Es creara una copia de a per a treballar amb ella.

Referencia

void my_func(double& my_double){

	my_double = 10;

no es crea cap copia i per tant cambia el valor de la variable enviada 

Classe 7

metodes friend


ZORK
Si cambies de zona el que has de fer es sumar 1 o restar 1 segons la direccio en la que vas



// Classe 8


Static

Quan una variable es declarada com a global en un fitxer nomes es pot utilitzar en aquell fitxer

Quan es crea en una funcio no es cambia de lloc en memroia i nomes s'inizialitza un cop

Quan es una variable statica en una clase no esta vinculada en una instancia 


*/