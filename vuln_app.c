#include <stdio.h>
#include <string.h>

void funcion(char *nombre){
	char buffer[500];
	strcpy(buffer, nombre);
	printf("Hola %s\n", buffer);
}

int main(int argc, char *argv[]){
	funcion(argv[1]);
	return 0;
}
