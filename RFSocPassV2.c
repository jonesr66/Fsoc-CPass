#include <stdio.h>

int main()

{
char user[10], pass[10];

printf("Please enter username:\n");
scanf("%s", user );

printf("Please enter the passphrase:\n");
scanf("%s", pass );

if (strcmp(user, "admin")) {
	if (strcmp(pass, "bluesky")) 
		printf ("secret message!\n");
}
else { 
	printf ("Wrong passphrase.\n");
}
return 0;
}
