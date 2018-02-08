#include <16F628A.h>

#fuses XT,NOWDT, NOLVP   //XT = oscilador de média freq; NOWDT = desativar reset; NOLVP = Low voltage 
#use delay (clock = 4000000)
int valor = 0;

void main(){
    while(TRUE){
        if(!input(pin_a0)){             //Pino sempre fica em alto
            delay_ms(300);
            valor++;
        }
        else if (!input(pin_a1)){
            delay_ms(300);
            valor--;
        }
        
        output_b(valor);
    
    }

}
