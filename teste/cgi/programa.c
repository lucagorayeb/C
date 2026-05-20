#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Content-type: text/html\n\n");
  /* char *string = getenv( "CONTENT_LENGTH" );
  int tamanho  = atoi( string );
  char vetor[tamanho + 1]; */
  /* fgets( vetor, tamanho + 1, stdin ); */
  printf("Content-type: text/html\n\n");
  printf( "<!DOCTYPE html>\n\n" );
  printf( "<html lang=\"en\">\n" );
  printf( "\t<head>\n" );
  printf( "\t\t<meta charset=\"UTF-8\">\n" );
  printf( "\t\t<title>Lendo dados do formulário</title>\n" );
  printf( "\t</head>\n" );
  printf( "\t<body>\n" );
  printf( "\t\t<h1>Olá mundo!</h1>\n" );
  /* printf( "\t\t<h1>Estou lendo: %s</h1>\n", vetor ); */
  printf( "\t</body>\n" );
  printf( "</html>\n" );
  printf( "\n\n" );
  return 0;
}