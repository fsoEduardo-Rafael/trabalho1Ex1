#ifndef PONTO_NO_PLANO
#define PONTO_NO_PLANO
#include <stdio.h>


   struct Ponto
	{
		double abscissa;
		double ordenada;	
	};

	void leitura_Pontos(){
		
		int count = 0;

		struct Ponto pontos[3];

		for (count = 0; count < 3; count ++){
			printf("informe o valor do ponto %d",count +1);
			scanf ("%lf",&pontos[count].abscissa);
			scanf ("%lf",&pontos[count].ordenada);
		}
		
	}

#endif

