#ifndef IMPRIME
#define IMPRIME


	void imprime_calculo()
		{

			fflush(stdin);

			lados_Triangulo();

			if(valida_triangulo()){

				printf("Comprimento A:%2.f \n", lados[0]);

				printf("Comprimento B:%2.f \n", lados[1]);

				printf("Comprimento C:%2.f \n", lados[2]);



				printf("\nárea do triangulo:%2.f \n", Area());

				printf("\nPerimetro:%2.f \n",perimetro());
			}
			else{
				printf("Triangulo Invalido\n");
			}




		}
#endif