#include <stdio.h> // STANDART INPUT OUTPUT .HEADER
//2
int main()
{
    /*
    { } CURLY BRACKETS
    ( ) PARANTHESES
    /   SLASH
    \   BACKSLASH
    ;   SEMICOLON
    .   DOT
    ,   COMMA
    < > DIMOND BRACKETS
    !   BANG SYMBOL
    "   DOUBLE QUOTE
    */

    printf("JCH-2022\n");
    printf("Saudiya 3 - 0 O'zbekiston!\n");
    printf("Biz jahon chempionatiga chiqamiz, albatta\n ");
    // CHAR
    char belgi = '1'; // 1 BYTE
    printf("%c\n",belgi); // c -> char
    char belgi1 = 'a'; // 1 BYTE
    printf("Belgi: %c",belgi1);
    // CHAR SERIYA
    char ism[8] = "John"; // ...BYTE
    printf("\n%s\n",ism); // s -> seriya

    char familya[] = "Wick";
    printf("Inputda ishlamaydi: %s\n", familya);
    //INTEGER
    int butunSon = 2147483647; // 4BYTE // 2.147.483.647
    printf("Butun Son: %d \n", butunSon); // d -> decimal
    //FLOAT
    float qoldiqSon = 6.3; // 4BYTE
    printf("Qoldiq Sin: %.1lf\n",qoldiqSon); // f -> float
    // DOUBLE
    double kattaHajmQoldiqSon = 69.7; // 8BYTE
    printf("Katta Qoldiq Son: %.1lf\n",kattaHajmQoldiqSon); //lf -> long decimal
    return 0;
}
