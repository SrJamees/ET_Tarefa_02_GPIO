#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pico/stdlib.h"

#define LED_RED 13
#define LED_BLUE 12
#define LED_GREEN 11
#define BUZZER 21

///// DECLARAÇÃO

void inicializacaoLEDs();

void inicializacaoBuzzer();

void acionaLED_R();

void acionaLED_G();

void acionaLED_B();

void acionarTodosLEDs();

void desligaTodosLEDs();

void tocaBuzzer();

void interpretarComando(char comando[50]);

///// DEFINIÇÃO

// Função principal para inicilização das portas GPIO
void inicializacaoLEDs() {
  // Inicializa os pinos associados aos LEDs
  gpio_init(LED_RED);
  gpio_init(LED_BLUE);
  gpio_init(LED_GREEN);
  // Configura os pinos como saída para controlar os LEDs
  gpio_set_dir(LED_RED, GPIO_OUT);
  gpio_set_dir(LED_BLUE, GPIO_OUT);
  gpio_set_dir(LED_GREEN, GPIO_OUT);
}