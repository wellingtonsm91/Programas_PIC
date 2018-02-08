#include<16F628a.h>
#fuses XT ,NOLVP, NOWDT
#use delay(clock = 4000000)

void main (){
    while(TRUE){
        output_high(pin_b0);
        delay_ms(500);
        output_low(pin_b0);
        delay_ms(500);
    }

}
