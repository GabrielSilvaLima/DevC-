#include <stdio.h>
int dec(int x){
	return (x*10);
}
int cent(int x){
	return (x*100);
}
int mili(int x){
	return (x*1000);
}

int main(){
	int a;
	printf ("Escreva uma medida: ");
	scanf ("%d", &a);
	printf ("---------------------");
	printf ("\n");
	printf ("Medida digitada foi: %d metros ",a,"\n");
	printf ("\n");
	printf ("---------------------");
	printf("\n");
	printf ("Medida em Decimetros: %d dm",dec(a));
	printf ("\n");
	printf ("---------------------");
	printf("\n");
	printf ("Medida em Centimetros: %d cm",cent(a));
	printf ("\n");
	printf ("---------------------");
	printf("\n");
	printf ("Medida em Milimetros: %d mm",mili(a));
	return(0);
}
