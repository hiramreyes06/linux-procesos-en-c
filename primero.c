
//pid_t = int GNU C es la variable que contiene el process id
//getpid() = Obtiene el ID del proceso actual
//getppid() = Obtiene el Id del padre del proceso actual
/*
fork() si sale bien
	El proceso padre nos va a regresar el proceso del hijo
	Hijo nos regresa un 0
Si falla
	El proceso padre me regresa un -1
	El hijo no se crea
*/

/*

Para poder compular el codigo ejecutamos el comando
gcc nombreArchivo.c -o nombreCompilado

Para ejecutar un codigo compilado
./ynombreDelArchivo
*/

#include<unistd.h>
#include<stdio.h>

int main(void){

pid_t procid;
//Para imprimir un numero en decimal se ocupa %d
printf("My current process id is %d \n", getpid() );

procid = fork();

if(procid == 0){
printf("Soy el proceso hijo del proceso padre \n");
}else{
printf("Soy el proceso padre %d \n", getpid() );
}


printf("Fork ID %d \n", procid);


printf("Calling fork %d \n", getppid());

return 0;
}



