#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
char opcion;
const int N = 4;
const int expediente = 18070358;
char cadenaNumeros[5], cadenaLetras[5], cadenaAlfaNumericos[5];
char cadenaNumerosRandom[5], cadenaLetrasRandom[5], cadenaAlfaNumericosRandom[5];
do{
        printf("N) Introducir numeros\n");
        printf("L) Introducir letras\n");
        printf("A) Introducir valores alfanumericos\n");
        printf("0) Salir [0]\n");
        printf("Seleccionar la opcion deseada: ");
        scanf(" %c",&opcion);

        switch(opcion){
    case 'N':
        printf("Introduce una cadena de NUMEROS de [ %d ] caracteres: ", N);
        scanf("%4s", cadenaNumeros);
        srand(time(NULL));
        for(int i = 0 ; i < N; i++) {
          cadenaNumerosRandom[i] = (rand() % 10 + 48);
        }
        //printf("%s", cadenaNumerosRandom);
        //scanf("%4s", cadenaNumeros);    //solo para verificacion
        if(cadenaNumerosRandom[0] == cadenaNumeros[0] && cadenaNumerosRandom[1]
          == cadenaNumeros[1] && cadenaNumerosRandom[2] == cadenaNumeros[2] &&
        cadenaNumerosRandom[3] == cadenaNumeros[3]){
          printf("Las cadenas son iguales\n");
        }
        break;
    case 'L':
        printf("Introduce una cadena de letras MAYUSCULAS de [ %d ] caracteres: ", N);
        scanf("%4s", cadenaLetras);
        srand(time(NULL));
        for(int i = 0 ; i < N; i++) {
          cadenaLetrasRandom[i] = (rand() % 26 + 65);
        }
        //printf("\n[ Programador ]: cadenaLetrasRandom: %4s\n", cadenaLetrasRandom);
        //scanf("%4s", cadenaLetras);   //solo para verificacion
        if(cadenaLetras[0] == cadenaLetrasRandom[0] && cadenaLetras[1] ==
          cadenaLetrasRandom[1] && cadenaLetras[2] == cadenaLetrasRandom[2] &&
          cadenaLetras[3] == cadenaLetrasRandom[3]){
            printf("Las cadenas son iguales\n");
          }
        break;
    case 'A':
        printf("Introduce una cadena de con valores ALFANUMERICOS de [ %d ] caracteres: ", N);
        scanf("%4s", cadenaAlfaNumericos);
        srand(time(NULL));
        for(int i = 0 ; i < N; i++) {
          cadenaAlfaNumericosRandom[i] = (rand() % 43 + 48);
        }
        //printf("\n[ Programador ]: cadenaAlfaNumericosRandom: %4s\n", cadenaAlfaNumericosRandom);
        //scanf("%4s", cadenaAlfaNumericos);    //solo para verificacion
        if(cadenaAlfaNumericos[0] == cadenaAlfaNumericosRandom[0] &&
        cadenaAlfaNumericos[1] == cadenaAlfaNumericosRandom[1] && cadenaAlfaNumericos[2] ==
        cadenaAlfaNumericosRandom[2] && cadenaAlfaNumericos[3] == cadenaAlfaNumericosRandom[3]){
          printf("Las cadenas son iguales\n");
        }
        break;
    case '0':
        printf("Programa creado por: %d\n", expediente);
        break;
    default:
        printf("Favor de proporcionar un dato valido \n");
        break;
    }
}while (opcion != '0');
return 0;
}
