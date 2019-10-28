#include <stdio.h>
#include <wiringpi.h>

#define LED1 18
#define LED2 23
#define LED3 24
#define LED4 25

void setup() {
    wiringPiSetupGpio();
    pinMode(Led1, OUTPUT);
    pinMode(Led2, OUTPUT);
    pinMode(Led3, OUTPUT);
    pinMode(Led4, OUTPUT);
}

int main(){
    for(int i=0; i < 5; i++){
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
        delay(500);
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, HIGH);
        digitalWrite(LED4, HIGH);
        delay(500);
    }
}