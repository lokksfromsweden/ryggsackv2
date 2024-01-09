// Ett program kan göra en string array med user input

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 0

void las_rad(char buffer[]);
void listskit(char* lista[]);

int main() {

	int x, y, z;
	y = 30;
	x = 0;
	z = 0;

	char* aptr[y];

	listskit(aptr[y]);

	return OK;
}

void las_rad(char buffer[]) {

	int i = 0;
	char c;

	while((c = getchar()) != '\n') {
	
		buffer[i] = c;
		i++;
	}
	buffer[i] = '\0';
}

void listskit(char* lista[]) {

	int x = 30;
	char skit[30];
	int i = 0;
	int k = 0;

	printf("Hur många element vill du ha i din lista? ## ");
	scanf("%i", &k);
	while(i <= k) {
	
		las_rad(skit);	
		strcpy(lista[i], skit);
		i++;

	}
	
	strcpy(skit, lista[0]);
	printf("%s", skit);


}
