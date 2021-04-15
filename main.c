#include <stdio.h>

void putbits(unsigned int n);

unsigned int getbits();

int main()
{
    int firstNum, secondNum, shift;

    printf("==== Bit - Operatoren ====\n");
    printf("Bitte geben Sie zwei ganze Zahlen ein!\n");
    printf("1. Zahl: \n");
    scanf("%d", firstNum);
    printf("2. Zahl: \n");
    scanf("%d", secondNum);

    printf("Das Bitmuster von %d = x: \n", firstNum);
    printf("Das Bitmuster von %d = y: \n", secondNum);

    printf("Das Bitmuster von x & y: \n");
    printf("Das Bitmuster von x | y: \n");
    printf("Das Bitmuster von x ^ y: \n");

    printf("Um wie viele Positionen soll x geshiftet werden?\n");
    printf("Anzahl: \n");
    scanf("%d", shift);

    printf("Das Bitmuster von x << 2 : \n");
    printf("Das Bitmuster von x >> 2 : \n");

    printf("Programm wiederholen (j/n)?");

    printf("Entscheiden Sie sich bitte zwischen binaerer und dezimaler Eingabe (b/d)!\n");
    printf("Bitte geben Sie zwei binaere Zahlen ein. (je 16 Stellen)\n");
    printf("1.Zahl: ");
    //scanf("%d", firstNum);
    printf("2.Zahl: ");
    //scanf("%d", secondNum);

    printf("");

    return 0;
}
