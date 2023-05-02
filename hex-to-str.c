#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char hex[100];
    int i;


    if (argc != 2) {
        printf("Usage: %s <chaine ASCII>\n", argv[0]);
        return 1;
    }


    for (i = 0; i < strlen(argv[1]); i++) {
        sprintf(&hex[i*2], "%02x", argv[1][i]); 
    }

    printf("La chaîne hexadécimale correspondante est : %s\n", hex);

    return 0;
}
