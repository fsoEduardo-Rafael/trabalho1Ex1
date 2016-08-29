#ifndef CALCULA_AREA
#define CALCULA_AREA

double calcula_area(A,B,C){

valor = ((  (A.abscissa * C.ordenada) - (A.abscissa * C.ordenada) + (A.abscissa * B.ordenada) - (A.ordenada * B.abscissa)
			(C.abscissa * B.ordenada) - (C.ordenada * B.abscissa)) /2 );
return valor;
}

void area_triangulo (calcula_area (A,B,C)){
	printf("área do triangulo: %f", &valor);
}
	
#endif