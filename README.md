# IoT_library
Pequena biblioteca em C para que alunos que iniciam no uso de Arduino e IoT comecem a trabalhar com as funcionalidades sem precisar se preocupar com as funções built in.

Obviamente isso não substitui, muito menos elimina a necessidade das funções a fundo. É apenas um pequeno atalho para que o foco fique na construção do circuito inicialmente.

## Vídeo Explicativo
Quer saber um pouco mais como manipular e instalar a IoT_library? Confere esse vídeo Aqui

https://www.youtube.com/watch?v=awX2tzL8Tvc&t=2005s

## Funções disponíveis (em constante atualização e autoexplicativas)

### Funções para LEDs

*defineLed(PINO)* - define o PINO especificado (tem que ser digital) como sendo um pino de LED.

*acendeLed(PINO)* - acende o LED definido no pino.

*apagaLed(PINO)* - apaga o LED.

*brilhaLed(PINO, INTENSIDADE)* - faz o pino do LED acender de acordo com uma intensidade (entre 0 e 255). Cuidado, pinos que podem receber sinal analógico via PWM são, na maioria dos Arduinos, os pinos 3, 5, 6, 9, 10 e 11

*espera(TEMPO)* - espera o tempo em millisegundos (1000 millisegundos = 1 segundo).

### Funções para Servo Motor

*Classe Motor* - reescrita da classe Servo da biblioteca Servo.h (apenas para traduzir o termo).

*Motor.conectar(PINO)* - conecta o motor no pino determinado (função ATTACH do Servo).

*Motor.girar(GRAUS)* - envia comando para o motor rotacionar no valor informado em GRAUS. Similar ao método WRITE.

### Funções para Botão

*botao(PINO)* - define o pino correspondente ao botao.

*botaoLigado(PINO)* - retorna 1 se o botao esta ligado ou 0 caso contrario.

*botaoDesligado(PINO)* - retorna 1 se o botao esta desligado ou 0 caso contrário.

### Funções para Relé (geralmente utilizado com Relés NO - Normally Opened)

*defineRele(PINO)* - define o pino correspondente ao INPUT do Relé

*ligaRele(PINO)* - liga (fecha) o circuito do Rele

*desligaRele(PINO)* - desliga (abre) o circuito do Rele

### Funções para o Sensor de Proximidade Ultrassônico HC-SR04

*defineSensor(TRIG, ECHO)* - define o sensor com os pinos correspondentes ao TRIGGER e ECHO

*calculaDistanciaSensor(TRIG, ECHO)* - realiza o cálculo da distância (em centímetros) e retorna o valor numérico para ser utilizado em decisões.

### Redefinições de Estruturas sintáticas (para facilitar a programaço em Língua Portuguesa).

*se* - Decisão - equivalente ao IF.

*senao* - equivalente ao ELSE.

*repita(x)* - repete o bloco de comandos x vezes. Equivalente ao comando FOR. Nesta versão ainda não é possível aninhar várias estruturas "repita". Está em atualização.

## Tipos de Dados

*Numero* - Tipo de dado Numerico inteiro (correspondente ao INT)

*NumeroDecimal* - Tipo de dado Numerico decimal (correspondente ao FLOAT)

## Operações Lógicas

*E* - operação lógica AND (operador &&)

*OU* - operação lógica OR (operador ||)

*NAO* - operação lógicao NOT (operador !)

