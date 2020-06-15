#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define varchar "__ENV_GOT__GUTS__"
int main()
{
printf("--------------------------------------------\n");
printf("Hey hooman, do you want the flag ?!\n");
printf("--------------------------------------------\n");

const char* s = getenv("GOLDENTICKET");

if(s!=NULL)
 {
  printf("Ah, Well done human. Here you are graced with the flag : %s\n", varchar);
 }
else
 {
  printf("You are missing GOLDENTICKET :-(\n");
 }
return 0;
}


