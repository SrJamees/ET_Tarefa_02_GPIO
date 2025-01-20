# Controle GPIO com Raspberry Pi Pico

Este repositório contém um projeto de controle GPIO utilizando o microcontrolador Raspberry Pi Pico, LEDs RGB e um buzzer, desenvolvido como parte da **Atividade 2** no contexto da disciplina de **Sistemas Embarcados**. O objetivo é interpretar comandos enviados via UART para controlar periféricos conectados aos pinos GPIO.

## Estrutura do Repositório

```plaintext
ET_Tarefa_02_GPIO/
├── .vscode/          # Configurações do ambiente de desenvolvimento
├── .gitignore        # Arquivo de configuração do Git
├── CMakeLists.txt    # Configuração de compilação do projeto
├── ET_Tarefa_02_GPIO.c # Código principal do projeto
├── README.md         # Documentação do projeto
├── diagram.json      # Diagrama para o simulador Wokwi
├── pico_sdk_import.cmake # Configuração do SDK do Pico
├── wokwi.toml        # Configuração do projeto no simulador Wokwi
```

## Funcionalidades

- **Controle de LEDs RGB**:
  - `RED`: Acende o LED vermelho.
  - `GREEN`: Acende o LED verde.
  - `BLUE`: Acende o LED azul.
  - `WHITE`: Acende todos os LEDs (luz branca).
  - `OFF`: Desliga todos os LEDs.
- **Controle do Buzzer**:
  - `BUZZER`: Toca o buzzer por aproximadamente 2 segundos.
- **Interpretação de Comandos**:
  - Comandos são enviados via terminal UART (ex.: PuTTY) e processados pelo programa para realizar as ações correspondentes.

## Demonstração

Confira a demonstração do funcionamento no YouTube: [Assista à demonstração](https://youtu.be/K5tzPIKYAQI).

## Requisitos

- Ferramenta educacional **BitDogLab** (versão 6.3).
- Ambiente de desenvolvimento **VS Code**.
- Kit de Desenvolvimento de Software **Pico SDK**.
- Simulador **Wokwi** configurado no VS Code.
- Cabo micro-USB para conexão ao computador.

## Configuração e Execução

1. **Clone o repositório**:
   ```bash
   git clone https://github.com/SrJamees/ET_Tarefa_02_GPIO.git
   ```
2. **Configure o ambiente de desenvolvimento**:
   - Certifique-se de que o **Pico SDK** está configurado.
   - Importe o projeto no VS Code e conecte o simulador **Wokwi**.
3. **Compile e execute o código**:
   - Compile o projeto com o CMake.
   - Use o simulador Wokwi ou conecte o Raspberry Pi Pico ao computador.

## Estrutura do Código

### Arquivo Principal: `ET_Tarefa_02_GPIO.c`

- **Inicialização de Periféricos**:
  - `inicializacaoLEDs()`: Configura os GPIOs dos LEDs.
  - `inicializacaoBuzzer()`: Configura o GPIO do buzzer.
- **Funções de Controle**:
  - Controle individual dos LEDs: `acionaLED_R`, `acionaLED_G`, `acionaLED_B`.
  - Controle do buzzer: `tocaBuzzer`.
  - Interpretação de comandos: `interpretarComando`.
- **Loop Principal**:
  - Aguarda comandos via UART e executa as ações correspondentes.

### Comandos Disponíveis

| Comando   | Ação Realizada                          |
|-----------|-----------------------------------------|
| `RED`     | Acende o LED vermelho.                 |
| `GREEN`   | Acende o LED verde.                    |
| `BLUE`    | Acende o LED azul.                     |
| `WHITE`   | Acende todos os LEDs.                  |
| `OFF`     | Desliga todos os LEDs.                 |
| `BUZZER`  | Toca o buzzer por 2 segundos.          |

## Contribuição

Contribuições são bem-vindas! Siga os passos abaixo para colaborar:

1. Faça um fork do repositório.
2. Crie uma branch para sua feature ou correção:
   ```bash
   git checkout -b minha-feature
   ```
3. Faça commit de suas alterações:
   ```bash
   git commit -m "Descrição das alterações"
   ```
4. Envie para sua branch remota:
   ```bash
   git push origin minha-feature
   ```
5. Abra um pull request no GitHub.

## Licença

Este projeto está licenciado sob a licença MIT. Consulte o arquivo `LICENSE` para mais detalhes.

---

**Equipe de Desenvolvimento:**
- Integrantes da equipe do projeto:
    - Alícia
    - André Lima
    - Cláudio
    - David
    - Edcarllos (líder)
    - James
    - Tiago
