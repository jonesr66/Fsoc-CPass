#include <stdio.h>

int main()

{
char user, pass;

printf("Please enter username:\n");
scanf("%s", &user );

printf("Please enter the passphrase:\n");
scanf("%s", &pass );

if ((user == "admin") && (pass == "bluesky")) {
printf ("secret message!\n");
}

else { 
printf ("Wrong passphrase.\n");
}
}
