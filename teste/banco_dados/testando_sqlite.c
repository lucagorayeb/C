// -----------------------------------------------------
// Script     :
// Description:
// Version    : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 07/04/2026
// License    : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3 *db;
    int rc;

    rc = sqlite3_open("database.db", &db);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "Erro ao abrir o banco de dados: %s\n", sqlite3_errmsg(db));
        return 1;
    }

    printf("Conexão estabelecida com sucesso!\n");

    sqlite3_close(db);

    return 0;
}
