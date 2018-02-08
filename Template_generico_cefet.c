/********************************************************
* CEFETES
* Prof: Marco Antonio
* Exemplo 1: Estrutura Básica de um programa em C
* Materia: Microcontroladores
* Data: Agosto 2006
********************************************************/
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* DEFINIÇÃO DAS VARIÁVEIS INTERNAS DO PIC *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <16f877A.h> // microcontrolador utilizado
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Configurações para gravação *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#fuses xt,wdt,noprotect,put,brownout,nolvp,nocpd,nowrt // configuração dos fusíveis
#use delay(clock=4000000, RESTART_WDT)
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Definição e inicialização das variáveis *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
//Neste bloco estão definidas as variáveis globais do programa.
//Este programa não utiliza nenhuma variável de usuário
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Constantes internas *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
//A definição de constantes facilita a programação e a manutenção.
//Este programa não utiliza nenhuma constante de usuário
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Declaração dos flags de software *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
//A definição de flags ajuda na programação e economiza memória RAM.
//Este programa não utiliza nenhum flag de usuário
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Definição e inicialização dos port's *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#use fast_io(a)
#use fast_io(b)
#use fast_io(c)
#use fast_io(d)
#use fast_io(e)
#byte porta = 0x05
#byte portb = 0x06
#byte portc = 0x07
#byte portd = 0x08
#byte porte = 0x09
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* ENTRADAS *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#bit BotaoSA14_b1 = portb.1
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* SAÍDAS *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
