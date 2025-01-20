#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pico/stdlib.h"

#define LED_RED 13
#define LED_BLUE 12
#define LED_GREEN 11
#define BUZZER 21

// Função responsável pela interpretação/identificação e execução dos comandos 
// Parâmetros: comando - uma string que contém o comando digitado pelo usuário
void interpretarComando(char comando[50]) {
    // Verifica se o comando recebido é "RED"
    if(strcmp(comando, "RED") == 0) {
        printf("Comando: RED reconhecido\n");
        acionaLED_R(); // Chama a função para acender o LED vermelho
    }
    // Verifica se o comando recebido é "BLUE"
    if(strcmp(comando, "BLUE") == 0) {
        printf("Comando: BLUE reconhecido\n");
        acionaLED_B(); // Chama a função para acender o LED azul
    }
    // Verifica se o comando recebido é "GREEN"
    if(strcmp(comando, "GREEN") == 0) {
        printf("Comando: GREEN reconhecido\n");
        acionaLED_G(); // Chama a função para acender o LED verde
    }
    // Verifica se o comando recebido é "WHITE"
    if(strcmp(comando, "WHITE") == 0) {
        printf("Comando: WHITE reconhecido\n");
        acionarTodosLEDs(); // Acende todos os LEDs simultaneamente
    }
    // Verifica se o comando recebido é "OFF"
    if(strcmp(comando, "OFF") == 0) {
        printf("Comando: OFF reconhecido\n");
        desligaTodosLEDs(); // Desliga todos os LEDs
    }
    // Verifica se o comando recebido é "BUZZER"
    if(strcmp(comando, "BUZZER") == 0) {
        printf("Comando: BUZZER reconhecido\n");
        tocaBuzzer(); // Ativa o buzzer
    }
    else {
        // Verifica se o comando recebido está fora das opções possíveis
        printf("Comando desconhecido: %s\n", comando);
    }

}

//Função principal
int main() {
    // Inicializa as bibliotecas padrão de entrada e saída
    stdio_init_all();

    // Inicializa os LEDs e o buzzer
    inicializacaoLEDs();
    inicializacaoBuzzer();

    // Variável para armazenar o comando digitado pelo usuário
    char comando[50];

    // Loop infinito para ler e interpretar comandos
    while (true) {
        printf("Digite um comando\n"); // Solicita um comando ao usuário
        scanf("%s", comando);         // Lê o comando digitado
        interpretarComando(comando);  // Chama a função que processa o comando
    }
}


