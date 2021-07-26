#include <stdio.h>
int tab1 (int x){
	return (x * 1);
}
int tab2 (int x){
	return (x * 2);
}
int tab3 (int x){
	return (x * 3);
}
int tab4 (int x){
	return (x * 4);
}
int tab5 (int x){
	return (x * 5);
}
int tab6 (int x){
	return (x * 6);
}
int tab7 (int x){
	return (x * 7);
}
int tab8 (int x){
	return (x * 8);
}
int tab9 (int x){
	return (x * 9);
}int tab10 (int x){
	return (x * 10);
}

int main(){
	int a;
	printf ("Escreva um numero: ");
	scanf ("%d", &a);
	printf ("tabuada do %d ",a, "\n");
	printf ("\n");
	printf ("%d \n" ,tab1(a));
	printf ("%d \n" ,tab2(a));
	printf ("%d \n" ,tab3(a));
	printf ("%d \n" ,tab4(a));
	printf ("%d \n" ,tab5(a));
	printf ("%d \n" ,tab6(a));
	printf ("%d \n" ,tab7(a));
	printf ("%d \n" ,tab8(a));
	printf ("%d \n" ,tab9(a));
	printf ("%d \n" ,tab10(a));
	return (0);
}


	
