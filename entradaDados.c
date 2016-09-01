#ifndef ENTRADA_DADOS
#define ENTRADA_DADOS
#include <stdio.h>
#include "planoNPonto.h"

	void Reader_Dots(){

			for (count = 0; count < 3; count ++){
					printf("\n ponto %d \n",count +1);
					printf("abscissa: ");
					scanf ("%lf",&dot[count].abscissa);
					printf("ordenada: ");
					scanf ("%lf",&dot[count].ordenada);
			}
		}
		
#endif