#include <stdio.h>
int main (){
	int a,b,c,resul;
	a=6;
	b=2;
	printf ("ingrese un valor entre 0 y 50 incluyendo el 0 y 50\n");
	scanf ("%d",&c);
	while ((c<0) || (c>50)){
		printf ("ingrese corectamente");
		scanf ("%d",&c);
	}	
	while (c!=26){
		if (c<26){
			c++;
		}
		if (c>26){
			c--;
		}
	}	
	if (c=26){
		resul=a+b*b*(a+(a/b))-c;
		printf ("el resultado es de: %d",resul);	
	}
	return 0;
}