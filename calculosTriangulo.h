#ifndef CALCULA_AREA
#define CALCULA_AREA
#define TRUE 1
#define FALSE 0
#include "planoNPonto.h"
#include "math.h"

	double valor;
	double A;
	double B;
	double C;
	double p;

	double lados[3];


	void lados_Triangulo()
	{



        A = sqrt ((double)pow(dot[1].abscissa - dot[0].abscissa ,2) +  
        		   pow(dot[1].ordenada - dot[0].ordenada,2));
       
        B = sqrt ((double)pow(dot[1].abscissa - dot[2].abscissa ,2) +  
        		   pow(dot[1].ordenada - dot[2].ordenada,2));

        C =	sqrt ((double)pow(dot[0].abscissa - dot[3].abscissa ,2) +  
        		   pow(dot[0].ordenada - dot[3].ordenada,2));



        lados[0] = A;
        lados[1] = B;
        lados[2] = C;

	}

	int valida_triangulo()
	{
	    int valida;

	   	    float L1 = lados[0];
	    float L2 = lados[1] ;
	    float L3 = lados[2];

    	if ((L1 < (L2+L3)) || (L2 < (L1+L3)) || (L3 < (L2+L3)))
    	{
    		valida = TRUE;
    	}else{ 
    		valida = FALSE;
    	}
    	return valida;
    }



	double Area()
	{

			valor = ( (dot[0].abscissa * dot[2].ordenada - dot[0].ordenada * dot[2].abscissa +
 					  dot[2].abscissa * dot[1].ordenada - dot[2].ordenada * dot[1].abscissa) /2 
				    );
		
		return valor;
	}


	double perimetro()
	{


		p = lados[0] + lados[1]  + lados[2];

		return p;
	}

		

	


#endif



