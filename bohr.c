#include <stdio.h>
#include <math.h>

int main(){
	do{
	printf("orbital inicial: ");
	static int ni;
	scanf("%d",&ni);setbuf(stdin,NULL);
	
	printf("orbital final: ");
	static int nf;
	scanf("%d",&nf);setbuf(stdin,NULL);
	
	double energia=(1/pow(ni,2)-1/pow(nf,2))*2.18E-18;
	printf("Energia=2.18E-18*[1/%d-1/%d]=%.4Ej\n\n",ni*ni,nf*nf,energia);
	if(energia<0){energia=energia*-1;}
	
	double frecuencia=energia/6.63E-34;
	printf("Frecuencia=%.4Ej/%1.2Ej*s=%.4E 1/s\n\n",energia,6.63E-34,frecuencia);	
	
	double longitud=3E8/frecuencia;
	printf("Longitud=3E8m/s/%.4E 1/s=%.4Em=%.2fnm\n\n\n",frecuencia,longitud,longitud*1E9);
	
	}while(true);



	return 0;
}

