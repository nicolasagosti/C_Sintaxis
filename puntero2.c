#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i = 1;
    int *p = 0;

    printf("antes i valia %d \n", i);

    printf("le asignamos a p el valor de i \n");
    p = &i;
   
    printf("el valor de &p es %p", &p); // no hace nada

    *p = 2; //se le asigna a donde este apuntando p (i) el valor 2
    printf("Ahora i vale: %d y el contenido de p vale: %d\n", i, *p);
	return 0;
}