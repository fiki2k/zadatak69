// Program ce izracunat polumjer plasta.

#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

//Funkcija za izracunavanje polumjera plasta stozca.
float polumjer_plasta(int polumjer,int visina){
	
	float s;
	s=sqrt(polumjer*polumjer+visina*visina);
	return s;
}

int main(){
   int polumjer,visina;
   printf("Unesi polumjer stozca:\n");
   scanf("%d",&polumjer);
   printf("Unesi visinu stozca:\n");
   scanf("%d",&visina);
   float s=polumjer_plasta(polumjer,visina);
   printf("Polumjer plasta stozca je %f\n",s);
   return 0;
}
