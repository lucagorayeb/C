// -----------------------------------------------------
// Script     :
// Description:
// Version    : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 06/04/2026
// License    : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <mysql/mysql.h>

#define HOST "localhost"
#define USER "root"
#define PASS ""
#define DB "banco_c"

int main() {
        MYSQL *conexao;
        MYSQL_RES *resp;
        MYSQL_ROW linhas;
        MYSQL_FIELD *campos;

        char query[] = "SELECT * FROM usuarios;";

        int conta;

        conexao = mysql_init(NULL);

        if (conexao == NULL) {
                fprintf(stderr, "Erro ao inicializar a conexão: %s\n", mysql_error(conexao));
                return 1;
        }

        if(mysql_real_connect(conexao, HOST, USER, PASS, DB, 0, NULL, 0)){
                printf("conectado com sucesso!\n");

                if(mysql_query(conexao, query)){
                        printf("Erro: %s\n",mysql_error(conexao));
                }else{
                        bool resp = mysql_store_result(conexao);


                        if(resp){
                                campos = mysql_fetch_fields(resp);

                                for (conta=0;conta<mysql_num_fields(resp);conta++) {
                                        printf("%s",(campos[conta]).name);
                                        if (mysql_num_fields(resp)>1)
                                                printf("\t");
                                }

                                printf("\n");

                                while((linhas=mysql_fetch_row(resp)) != NULL){
                                        for (conta=0;conta<mysql_num_fields(resp);conta++){
                                                printf("%s\t",linhas[conta]);
                                        }
                                        printf("\n");
                                }

                                mysql_free_result(resp);
                        }
                        mysql_close(conexao);
                }else{
                        printf("Falha na conexão!\n");
                        printf("Erro %d : %s\n", mysql_errno(conexao), mysql_error(conexao));
                }
        }
        return 0;

}


// INSERÇÃO

//bool res = mysql_query(conexao, "INSERT INTO usuarios (nome, idade) VALUES ('Luana', 28)");

//if(!res){
//        printf("Registros inseridos %ld\n", mysql_affected_rows(conexao));
//}else{
//        printf("Erro na inserção %d : %s\n", mysql_errno(conexao), mysql_error(conexao));
//}
