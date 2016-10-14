#include <stdio.h>

main()

{

char pass;

printf("Please enter the passphrase:");
scanf("%d", &pass);

if (pass == "bluesky") {
	printf("secret message!");
}
else if (pass != "bluesky") {
	printf ("Wrong passphrase");
}
return 0;
}
