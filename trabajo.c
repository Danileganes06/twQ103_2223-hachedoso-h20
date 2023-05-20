#include<stdio.h>
#include<stdlib.h>
#include<string.h>
  
struct jugador {
    char nombre[50];
    
};

typedef struct{
    char nombre[50];
    int contrasena;
}reg;

  
  int main(){
  int alternativa;
  char opcion,aux;
  int dato;
  char tar,aux1;
  
  reg f4;

    FILE * f;
    FILE * f1;
    FILE * f2;
    
  struct jugador jugadores[1];
  
printf("Introduzca su nombre: ");
	fgets(f4.nombre,50,stdin);
	
	printf("Introduzca su contrasena numerica: ");
	scanf("%i",&f4.contrasena);
  
  char nombre[50];
  //printf("Nombre: \n");
  scanf("%c",&opcion);
  fflush(stdin);
  
 
  //strcpy(nombre,jugadores[0].nombre);
  
  do{


    printf("Elija la opci%cn que desee: \n",162);
    printf("A-Registrar Datos\n",162);
    printf("B-Analizar datos\n");
    printf("C-Salir\n");


    scanf("%c",&opcion);
    fflush(stdin);

   switch(opcion){
   	case 'A':
   	case 'a':
   		
   	f = fopen("registrar.txt","a");
   	
    if (f == NULL){
 	printf("No se ha podido abrir.\n");
 	exit(1);
 }
 
 printf("Introduzca un dato: \n");
 scanf("%i",&dato);
 
 fprintf(f,"%i",dato);
 
 fclose(f); // Mirar esta parte por la tarde para registrar los datos en el fichero.
 

   	break;
   	
   	case 'B':
   	case 'b':
   		
   	do{
   		
    printf("Elija el fichero que desee analizar: \n");
    printf("F-Fichero registrar\n");
    printf("D-Ficher 202301_ Lavapies\n");
   
    scanf("%c",&tar);
    fflush(stdin);
	   
   		
   	switch(tar){
   	case 'D':
   	case 'd':
   	f1 = fopen("202301_ Lavapies.txt","r");
 if (f1 == NULL){
 	printf("No se ha podido abrir.\n");
 	exit(1);
 }
 
while(aux != EOF){
	aux = fgetc(f1);
	printf("%c",aux);
}

printf("\n");

break;

case 'F':
case 'f':
	f2 = fopen("registrar.txt","r");
 if (f2 == NULL){
printf("No se ha podido abrir.\n");
exit(1);
 }
 
while(aux1 != EOF){
	aux1 = fgetc(f2);
	printf("%c",aux1);
}

printf("\n");

}
}
while(alternativa==1);

   	    break;
   	
   	case 'C':
   	case'c':
   	    break;
   	
   	default:
        printf("\nNo has elegido ninguna de las opciones");
        break;
   }


}

while(alternativa==1);

    return 0;
}
