#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>




int hex_to_binary(char hexadecimal[20]){
    int aux[8];
    for (int i = 0; i < (sizeof(hexadecimal)/4); i++){
        //aux[i] = hexadecimal % 10;
        //hexadecimal = hexadecimal % 10;
    }

}

// exemplo 0xDC000007
int main(){
    char teste = "0xDC000007";
    int binario = hex_to_binary(teste);
    printf("tamanho do hex %d", (sizeof(teste)/4));
}
