#include <stdlib.h>
#include <stdio.h>

int main(void) {
	const int YEAR = 2026;
	char name[30];
	int age;
	int birthyear;

	printf("What is your full name ? ");
	fgets(name,sizeof(name),stdin);
	
	printf("When were you born ? ");
	scanf("%d", &birthyear);

	if (birthyear > YEAR-100 && birthyear < YEAR) {
		age = YEAR - birthyear;

		printf("\n Hello %s \n", name);
		printf("\n You are %d years old \n", age);	
	} else {
		printf("Error \n");
	}
	return 0;
}
