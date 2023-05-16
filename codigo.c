#include<stdio.h>
#include<stdlib.h>
#include<string.h>
  
  int main(){
  int alternativa;
  char opcion;
  
  do{




    printf("Elija la opci%cn que desee\n",162);
    printf("A-Registrar Datos\n",162);
    printf("B-Analizar datos\n");
    printf("C-Visualizar Datos\n");
    printf("D-Salir\n");


    scanf("%c",&opcion);
    fflush(stdin);

   switch(opcion){
   	case 'A':
   	case 'a':
   	    break;
   	
   	case 'B':
   	case 'b':
   	    break;
   	
   	case 'C':
   	case'c':
   	    break;
   	
   	case 'D':
   	case'd':
   		return 0;
   	    break;
   	
   	default:
        printf("\nNo has elegido ninguna de las opciones");
        break;
   }


}

while(alternativa==1);

    return 0;
}
