#ifndef CALCULA_AREA
#define CALCULA_AREA
#include "planoNPonto.h"
#include "math.h"

	double valor;
	double ab;
	double bc;
	double ac;
	double p;


	double Area(double valor)
	{
			valor = ( (dot[0].abscissa * dot[2].ordenada - dot[0].ordenada * dot[2].abscissa +
 					  dot[2].abscissa * dot[1].ordenada - dot[2].ordenada * dot[1].abscissa) /2 
				    );
		return valor;
	}

	double comprimento_lado1( double ab)
	{

		double b;
		double a; 

         a = (dot[0].abscissa - dot[1].abscissa);
		 b = (dot[0].ordenada - dot[1].ordenada);

		 ab = sqrt( a + pow(b,2));

		return ab;
	}

	double comprimento_lado2( double bc)
	{

		double b;
		double c; 

		 b = (dot[1].abscissa - dot[2].abscissa);
		 c = (dot[1].ordenada - dot[2].ordenada);
		 

		 bc = sqrt( b + pow(c,2));

		return bc;
	}

	double comprimento_lado3( double ac)
	{

		double a;
		double c; 

		 a = (dot[0].ordenada - dot[2].ordenada);
		 c = (dot[0].abscissa - dot[2].abscissa);

		 ac = sqrt( a + pow(c,2));

		return ac;
	}

	double perimetro_triangulo(double p)
	{

		comprimento_lado1(ab);
		comprimento_lado2(bc);
		comprimento_lado3(ac);

		

		return ab + bc + ac;
	}

#endif






