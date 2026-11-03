#include <stdlib.h>
#include <stdio.h>

int main(void) {
	char user[30];
	int age;
	const int YEAR = 2026;
	int birthyearL;
	int birthyearE;
	
	printf("\n Hello, what is your name ? ");
	scanf("%s",user);

	printf("\n Hello %s, how old are you ? ", user);
	scanf("%d",&age);

	birthyearL=YEAR-age-1;
	birthyearE=YEAR-age;
	
	printf("\n %s, if you were born late year, your birthyear would be %d, if not then it's %d \n", user, birthyearL, birthyearE);

	exit(0);
}
