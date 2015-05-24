#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void mostrarIndicador(char * indicador, char* ruta) //como ejecutrar whoiam a travez del codigo 
{
	//printf("imprimiendo indicador\n");
	printf("%s",indicador);
	//printf("imprimiendo ruta\n");
	printf("%s",ruta);
};

char * leerOrden(char* orden, char*indicador, char*ruta)
{
	//printf("AUN NO ENTRO\n");

		//printf("ENTRE\n");
		mostrarIndicador(indicador,ruta);
		scanf("%s",orden);
		return orden;		


};

void analizarOrden(char * str) //usar strok para separar la instruccion en tokenes igual 
{ 
	printf("analizando orden: %s\n",str);

 	char * pch = (char*)calloc(100,sizeof(char));
  	pch = strtok (str," ");
  	while (pch != NULL)
 	{
    	printf ("%s\n",pch);
    	pch = strtok (NULL, " ");
  	}

};


main()
{
	char* indicador = (char*)calloc(100,sizeof(char));
	char* ruta = (char*)calloc(100,sizeof(char));
	char* orden = (char*)calloc(200,sizeof(char));
	indicador = "$NombreDeLaMaquina/";
	ruta="RutaActual/";
	//while(1){

//  	*******LEER ORDEN*******
		orden = leerOrden(orden, indicador, ruta);
		printf("orden leida: %s\n",orden);	
//		*******ANALIZAR ORDEN*****

		//analizarOrden(orden);
	//}
}

