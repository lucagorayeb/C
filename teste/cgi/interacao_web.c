#include <stdio.h>
#include <stdlib.h>

int get(void);
int post(void);
int mostra_conteudo_enviado_pelo_navegador(void);

int main(void) {
    //get();
    //post();
    mostra_conteudo_enviado_pelo_navegador();
}

int get(void){
    char *string = getenv( "QUERY_STRING" );
    printf( "String que estava na variável de ambiente: %s\n", string );
    return 0;
}

int post(void){
  char *string = getenv( "CONTENT_LENGTH" );
  int tamanho  = atoi( string );
  char vetor[tamanho + 1];
  scanf( "%s", vetor );
  printf( "String lida: %s\n", vetor );
  return 0;
}

int mostra_conteudo_enviado_pelo_navegador(void){
  char *string = getenv( "CONTENT_LENGTH" );
  int tamanho  = atoi( string );
  char vetor[tamanho + 1];
  fgets( vetor, tamanho + 1, stdin );
  printf( "Content-type: text/html\n\n" );
  printf( "<html>\n" );
  printf( "\t<head>\n" );
  printf( "\t\t<meta charset=\"UTF-8\">\n" );
  printf( "\t\t<title>Lendo dados do formulário</title>\n" );
  printf( "\t</head>\n" );
  printf( "\t<body>\n" );
  printf( "\t\t<h1>Olá mundo!</h1>\n" );
  printf( "\t\t<h1>Estou lendo: %s</h1>\n", vetor );
  printf( "\t</body>\n" );
  printf( "</html>\n" );
  printf( "\n\n" );
  return 0;
}

/* 
QUERY_STRING: Parâmetros que estão sendo enviados via URL (GET)
CONTENT_LENGTH: Tamanho do corpo da mensagem (POST: Eviado pelo corpo da mensagem)
CONTENT_TYPE: Tipo de mídia ()
REQUEST_METHOD: Tipo de método que está sendo requisitado 
*/