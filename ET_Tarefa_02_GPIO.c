#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pico/stdlib.h"

#define LED_RED 13
#define LED_BLUE 12
#define LED_GREEN 11
#define BUZZER 21

void inicializacaoLEDs(){
    gpio_init(LED_RED);
    gpio_init(LED_BLUE);
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_RED,GPIO_OUT);
    gpio_set_dir(LED_BLUE,GPIO_OUT);
    gpio_set_dir(LED_GREEN,GPIO_OUT);
}

void inicializacaoBuzzer(){
    gpio_init(BUZZER);
    gpio_set_dir(BUZZER,GPIO_OUT);
}

void acionaLED_R(){
  gpio_put(LED_RED,true);
  gpio_put(LED_GREEN,false);
  gpio_put(LED_BLUE,false);
}

void acionaLED_G(){
  gpio_put(LED_RED,false);
  gpio_put(LED_GREEN,true);
  gpio_put(LED_BLUE,false);
}

void acionaLED_B(){
  gpio_put(LED_RED,false);
  gpio_put(LED_GREEN,false);
  gpio_put(LED_BLUE,true);
}

void acionarTodosLEDs(){
  gpio_put(LED_RED,true);
  gpio_put(LED_GREEN,true);
  gpio_put(LED_BLUE,true);
}

void desligaTodosLEDs(){
  gpio_put(LED_RED,false);
  gpio_put(LED_GREEN,false);
  gpio_put(LED_BLUE,false);
}

void tocaBuzzer(){
  for(int i=0;i<2000;i++){
      gpio_put(BUZZER,true);
      sleep_us(250);
      gpio_put(BUZZER,false);
      sleep_us(750);
  }
}

void interpretarComando(char comando[50]){
    if(strcmp(comando,"RED")==0){
        printf("Comando: RED reconhecido\n");
        acionaLED_R();
    }
    if(strcmp(comando,"BLUE")==0){
        printf("Comando: BLUE reconhecido\n");
        acionaLED_B();
    }
    if(strcmp(comando,"GREEN")==0){
        printf("Comando: GREEN reconhecido\n");
        acionaLED_G();
    }
    if(strcmp(comando,"WHITE")==0){
        printf("Comando: WHITE reconhecido\n");
        acionarTodosLEDs();
    }
    if(strcmp(comando,"OFF")==0){
        printf("Comando: OFF reconhecido\n");
        desligaTodosLEDs();
    }
    if(strcmp(comando,"BUZZER")==0){
        printf("Comando: BUZZER reconhecido\n");
        tocaBuzzer();
    }
}

int main() {
  stdio_init_all();
  inicializacaoLEDs();
  inicializacaoBuzzer();
  char comando[50];
  while (true) {
    printf("Digite um comando\n");
    scanf("%s",comando);
    interpretarComando(comando);

  }
}