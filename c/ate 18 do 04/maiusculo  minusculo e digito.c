#include <stdio.h>
#include <string.h>
void  print(char letra){
    
    if (letra == 'a' || letra == 'b' || letra == 'c' || letra == 'd' || letra == 'e' || letra == 'f' || letra == 'g' || letra == 'h' || letra == 'i' || letra == 'j' || letra == 'k' || letra == 'l' || letra == 'm' || letra == 'n' || letra == 'o' || letra == 'p' || letra == 'q' || letra == 'r' || letra == 's' || letra == 't' || letra   == 'u' || letra == 'v' || letra == 'w' || letra == 'x' || letra == 'y' || letra == 'z')
    {
        letra = letra-32;
    }
    else if(letra == 'A' || letra == 'B' || letra == 'C' || letra == 'D' || letra == 'E' || letra == 'F' || letra == 'G' || letra == 'H' || letra == 'I' || letra == 'J' || letra == 'K' || letra == 'L' || letra == 'M' || letra == 'N' || letra == 'O' || letra == 'P' || letra == 'Q' || letra == 'R' || letra == 'S' || letra == 'T' || letra == 'U' || letra == 'V' || letra == 'W' || letra == 'X' || letra == 'Y' || letra == 'Z'){
        letra = letra+32;
    }
    printf("%c", letra);

}
int main(){
    char letra;
    scanf("%c", &letra);

    print(letra);

    return 0;
}