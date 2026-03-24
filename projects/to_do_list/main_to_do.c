// -----------------------------------------------------
// Script   : main_lista_tarefas.c
// Descrição: Projeto prático báscio para eu treinar e 
//            melhorar meu nível de programação.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 23/03/2026
// Lincença : GNU/GPL v3.0
// -----------------------------------------------------
//
// Esse é o arquivo principal de um projeto de lista de tarefas que será 
// usado no terminal. 
//
// As principais funções da lista de tarefas são:
// 1 - Adicionar tarefas a lista 
// 2 - Remover tarefas da lista
// 3 - Mostrar a lista de tarefas 

#include <stdio.h> 

int main() {
        char toDoList[] = "primeiro";
        printToDoList(toDoList);
        return 0;
}

void printToDoList(char toDoList[]){
        int i = 0;
        while(toDoList[i] != '\0'){
                printf("%d - %s", i+1, toDoList);
                i++;
        }        
}

