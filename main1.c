#include <stdio.h>

main(){

char pass;

printf("Please enter the passphrase:");
scanf("%s", &pass);
printf("%s", &pass, "\n");
char answer;

answer = "bluesky";

int comp = strncmp(&pass, &answer, 10);

if (&comp == 0) {
	printf("secret message! \n");
}
else if (&comp != 0) {
	printf ("Wrong passphrase\n");
}
return 0;
}