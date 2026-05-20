#include <stdio.h>

int main() {
    // 1. Cabeçalho obrigatório
    printf("Content-type: text/html\n\n");

    // 2. Conteúdo da página
    printf("<html>\n");
    printf("<head><title>CGI em C</title></head>\n");
    printf("<body>\n");
    printf("<h1>Ola, este e um CGI rodando em C!</h1>\n");
    printf("</body>\n");
    printf("</html>\n");

    return 0;
}