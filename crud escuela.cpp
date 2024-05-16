#include <stdio.h>
#include <stdlib.h>
int indicea; //indice de alumnos
int indicem; //indice de maestros
struct datos_Alumno {       //creacion de la estructura o molde de datos_alumno
    char prinom[10];        //prinom = primer nombre
    char segunom[10];       // segunom = segundo nombre
    char primape[10];       //primape = primer apellido
    char segape[10];        //segape = segundo apellido
    int edad;
    char genero;
    float calf[5];          //5 calificaciones por alumno
    int matricula;     // matrucula con un maximo de 15 caracteres
}alumno[10];               //maximo de alumnos 100 
struct datos_Maestros {     //creacion de la estructura o molde de datos_maestro
    char prinom[10];        //prinom = primer nombre
    char segunom[10];       // segunom = segundo nombre
    char primape[10];       //primape = primer apellido
    char segape[10];        //segape = segundo apellido
    int edad;
    char genero;
    char materia;
    int matricula;     // matrucula con un maximo de 15 caracteres
}maestro[5];              //maximo de maestros     
void login(){               //creacion y definicion de la funcion de login
    int usuario,password,acceso;    //acceso inicialisada en 0
    printf("Bienvenido al archivero de datos del persoanles de los alumnos y maestros del CBTis051\n");
    do{
    printf("usuario: ");
    scanf ("%d",&usuario);  
    printf("\ncontraseña: ");
    scanf("%d",&password);
    if(usuario==123456789 && password==123456789){      //si usuario es igual a director y contraseña igual a 123456789 entonces
        printf("|-----------------------------------------------------------------------------------------------|\n");
        printf("|   ACCESO PERMITIDO                                                                            |\n");                   //acceso permitido
        printf("|-----------------------------------------------------------------------------------------------|\n");
        acceso=1;           //(acceso = 1) == aceso permitido
    }else{  //de lo contrario
        printf("|-----------------------------------------------------------------------------------------------|\n");
        printf("|   ACCESO DENEGADO                                                                             |\n");
        printf("|   por favor vuelva a intertarlo                                                               |\n");
        printf("|-----------------------------------------------------------------------------------------------|\n");
    }}
    while(acceso!=1);       //mientra que acceso sea diferente a 1 el programa se seguira ejecutando
}
void Agregar_alumno(){      //creacion y definicion de la funcion de agregar_alumno
    int nocalf;
    /*alumno es variable creada para usarse con una structura para poder usarlos es necesario poner */
    printf("-----------------------------------------------------------------------------------------------\n");
    printf("digite el nombre del alumno #%d: ",indicea) && scanf("%s %s %s %s",alumno[indicea].prinom,alumno[indicea].segunom,alumno[indicea].primape,alumno[indicea].segape); 
    /*la razon por la definicion de cuatro variables es para poder dejar espacio y que me los lea */ 
    printf("digite la edad del alumno #%d: ",indicea) && scanf("%d",&alumno[indicea].edad); //indicea es para llevar un control del numero de alummno
    printf("digite el genero del alumno #%d: ",indicea) && scanf("%s",&alumno[indicea].genero);
    for(nocalf=1;nocalf<=5;nocalf++){
        printf("asigne la calificacion #%d: ",nocalf) && scanf("%f",alumno[indicea].calf);
    }
    printf("asigne una matricula al alumno #%d: ",indicea) && scanf("%d",&alumno[indicea].matricula);
     printf("-----------------------------------------------------------------------------------------------\n");
}
void Buscar_alumno(){
int opcion,encontrado,eda,mat,indice;
	printf("digite la edad del alumno a buscar: ");
	scanf("%d",&eda);
	for(indice=1;indice=10;indice++){	
		if(alumno[indicea].edad==eda){
			encontrado=encontrado+1;
			printf("\n\n\n\n-------------------------------------------------------------------------------------");
			printf("alumno #%d",indicea);
			printf("\nnombre: %s %s %s %s\n",alumno[indicea].prinom,alumno[indicea].segunom,alumno[indicea].primape,alumno[indicea].segape);
    		printf("edad: %d\n",alumno[indicea].edad);
    		printf("genero: %c\n",alumno[indicea].genero );
			printf("promedio: \n");
    		printf("matricula: %d\n",alumno[indicea].matricula );
			}
		}
			if(encontrado==0){
				printf("el alumno no se encuentra regitrado.");
			}
			}
void mostrar_almnos(){
    int indicea;
    printf("mostrar los datos de todos los alumnos registrados por el momento\n");
    for (indicea=1;indicea<=10;indicea++){
    printf("                                                                                            alumno #%d\n",indicea);
    printf("nombre: %s %s %s %s\n",alumno[indicea].prinom,alumno[indicea].segunom,alumno[indicea].primape,alumno[indicea].segape);
    printf("edad: %d\n",alumno[indicea].edad);
    printf("genero: %c\n",alumno[indicea].genero );
    printf("promedio: \n");
    printf("matricula: %d\n",alumno[indicea].matricula );
    printf("--------------------------------------------------------------------------------------------------------\n");
}}
void Agregar_maestro(){
    printf("-----------------------------------------------------------------------------------------------\n");
    printf("digite el nombre del maestro #%d: ",indicem) && scanf("%s %s %s %s",maestro[indicem].prinom,maestro[indicem].segunom,maestro[indicem].primape,maestro[indicem].segape);
    printf("digite la edad del maestro #%d: ",indicem) && scanf("%d",&maestro[indicem].edad);
    printf("digite el genero del maestro #%d: ",indicem) && scanf("%s",&maestro[indicem].genero);
    printf("maestro de la materia de: ") && scanf("%s",&maestro[indicem].materia);
    printf("asigne una matricula al maestro #%d: ",indicem) && scanf("%d",&maestro[indicem].matricula);
    printf("-----------------------------------------------------------------------------------------------\n");
}
void Buscar_maestro(){int opcion,encontrado,eda,mat;
	printf("1-.		buscar maestro apartir de la edad\n");
	printf("2-.		buscar maestro apartir de la matricula\n");
	printf("por favor elija una opcion de busqueda: ") && scanf("%d",&opcion);
	switch(opcion){
		case 1:
			printf("digite la edad del maestro a buscar: ") && scanf("%d",&eda);
				if(maestro[indicem].edad==eda){
					encontrado=encontrado+1;
				    printf("\n\n\n\n-------------------------------------------------------------------------------------");
					printf("maestro #%d",indicem);
					printf("\nnombre: %s %s %s %s\n",maestro[indicem].prinom,maestro[indicem].segunom,maestro[indicem].primape,maestro[indicem].segape);
    				printf("edad: %d\n",maestro[indicem].edad);
    				printf("genero: %c\n",maestro[indicem].genero );
    				printf("materia: maestro[indicem].materia\n");
    				printf("matricula: %d\n",maestro[indicem].matricula );
			}else if(encontrado==0){
				printf("el maestro no se encuentra regitrado.");
				}
			
			break;
		case 2:
			printf("digite la matricula del maestro a buscar: ") && scanf("%d",&mat);
			if(maestro[indicem].edad==mat){
				encontrado=encontrado+1;
			    printf("\n\n\n\n-------------------------------------------------------------------------------------");
				printf("maestro #%d",indicem);
				printf("\nnombre: %s %s %s %s\n",maestro[indicem].prinom,maestro[indicem].segunom,maestro[indicem].primape,maestro[indicem].segape);
    			printf("edad: %d\n",maestro[indicem].edad);
    			printf("genero: %c\n",maestro[indicem].genero );
    			printf("materia: maestro[indicem].materia\n");
   				printf("matricula: %d\n",maestro[indicem].matricula );
			}else if(encontrado==0){
				printf("el maestro no se encuentra regitrado.");
				}
			break;
	}
}
void mostrar_maestros(){
     int indice;
    printf("mostrar los datos de todos los alumnos registrados por el momento\n");
    for (indicem=1;indicem<=5;indicem++){
    printf("                                                                                            maestro #%d\n",indice);
    printf("nombre: %s %s %s %s\n",maestro[indicem].prinom,maestro[indicem].segunom,maestro[indicem].primape,maestro[indicem].segape);
    printf("edad: %d\n",maestro[indicem].edad);
    printf("genero: %c\n",maestro[indicem].genero );
    printf("materia: %c\n",maestro[indicem].materia);
    printf("matricula: %d\n",maestro[indicem].matricula );
    printf("--------------------------------------------------------------------------------------------------------\n");
}}
void Salir(){
    
    printf("el programa ha finalizado(·_·)\n");
}
void menu() {
    int opcion;
    int eleccion;
    do{
    printf("\n_________________");
    printf("\n|    MENÚ DE CONTROL DE ALUMNOS Y MAESTROS    |");
    printf("\n|---------------------------------------------|");
    printf("\n|    1. Agregar alumno.                       |");
    printf("\n|    2. Buscar alumno.                        |");
    printf("\n|    3. mostrar alumnos registrados.          |");
    printf("\n|    4. Agregar maestro.                      |");
    printf("\n|    5. Buscar maestro.                       |");
    printf("\n|    6. mostrar maestros registrados.         |");
    printf("\n|    7,Salir                                  |");
    printf("\n|_______________|");
    printf("\nIngrese aquí la opción seleccionada: ") && scanf("%d",&opcion);
    switch(opcion){
        case 1:
            indicea = indicea + 1;
            Agregar_alumno();
            printf("\n\n");
            break;
        case 2:
            Buscar_alumno();
            printf("\n\n");
            break;
        case 3:
            mostrar_almnos();
            printf("\n\n");
            break;
        case 4:
            indicem = indicem + 1;
            Agregar_maestro();
            
            printf("\n\n");
        break;
        case 5:
            Buscar_maestro();
            printf("\n\n");
        break;
        case 6:
           mostrar_maestros();
        break;
        case 7:
            Salir();
            break;
        default:
            printf("\n\n");
            printf("opcion incorrecta o no reconocida ");
            printf("porfavor intentelo de nuevo \n");
            printf("\n\n");

    }}  while(opcion!=7); //el menu se repetira hasta que opcion sea diferente a 7(salir)
}
int main(){
    login();              
    menu();
    system("PAUSE");
    return 0;
}
