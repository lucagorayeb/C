#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *string = getenv( "QUERY_STRING" );
    printf( "String que estava na variável de ambiente: %s\n", string );
    return 0;
}