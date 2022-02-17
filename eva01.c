#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
char opcion;
int contador, contadorMalPosicion, letraoNumero;
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
        srand(time(NULL));
        do{
        for(int i = 0 ; i < N; i++) {
          cadenaNumerosRandom[i] = (rand() % 10 + 48);
        }
      }while(cadenaNumerosRandom[0] == cadenaNumerosRandom[1] || cadenaNumerosRandom[0] == cadenaNumerosRandom[2] ||
      cadenaNumerosRandom[0] == cadenaNumerosRandom[3] || cadenaNumerosRandom[1] == cadenaNumerosRandom[2] || cadenaNumerosRandom[1] ==
    cadenaNumerosRandom[3] || cadenaNumerosRandom[2] == cadenaNumerosRandom[3]);
        //printf("[ Programador ]: resultado cadenaNumerosRandom: %s\n", cadenaNumerosRandom);
    do{
      contador = 0;
      contadorMalPosicion = 0;
      printf("Introduce una cadena de NUMEROS de [ %d ] caracteres \n", N);
      do{
        printf("!! Los caracteres deben ser diferentes !!\n");
        scanf("%4s", cadenaNumeros);
      }while(cadenaNumeros[0] == cadenaNumeros[1] || cadenaNumeros[0] == cadenaNumeros[2] ||
      cadenaNumeros[0] == cadenaNumeros[3] || cadenaNumeros[1] == cadenaNumeros[2] ||
    cadenaNumeros[1] == cadenaNumeros[3] || cadenaNumeros[2] == cadenaNumeros[3]);
    for(int i = 0; i < N; i++){
      if(cadenaNumerosRandom[i] == cadenaNumeros[i])
      contador++;
    }
      if (cadenaNumerosRandom[0] == cadenaNumeros[1] || cadenaNumerosRandom[0] ==
      cadenaNumeros[2] || cadenaNumerosRandom[0] == cadenaNumeros[3])
      contadorMalPosicion++;
      if (cadenaNumerosRandom[1] == cadenaNumeros[0] || cadenaNumerosRandom[1] ==
      cadenaNumeros[2] || cadenaNumerosRandom[1] == cadenaNumeros[3])
      contadorMalPosicion++;
      if (cadenaNumerosRandom[2] == cadenaNumeros[0] || cadenaNumerosRandom[2] ==
      cadenaNumeros[1] || cadenaNumerosRandom[2] == cadenaNumeros[3])
      contadorMalPosicion++;
      if (cadenaNumerosRandom[3] == cadenaNumeros[0] || cadenaNumerosRandom[3] ==
      cadenaNumeros[1] || cadenaNumerosRandom[3] == cadenaNumeros[2])
      contadorMalPosicion++;
      printf("contador bien posicionados: %d\n", contador);
      printf("contador mal posicionados: %d\n", contadorMalPosicion);
    }while (contador < N);
        break;
    case 'L':
        srand(time(NULL));
        do{
        for(int i = 0 ; i < N; i++) {
          cadenaLetrasRandom[i] = (rand() % 26 + 65);
        }
      }while(cadenaLetrasRandom[0] == cadenaLetrasRandom[1] ||
        cadenaLetrasRandom[0] == cadenaLetrasRandom[2] ||
        cadenaLetrasRandom[0] == cadenaLetrasRandom[3] ||
        cadenaLetrasRandom[1] == cadenaLetrasRandom[2] ||
        cadenaLetrasRandom[1] == cadenaLetrasRandom[3] ||
        cadenaLetrasRandom[2] == cadenaLetrasRandom[3]);
        //printf("[ Programador ]: cadenaLetrasRandom: %4s\n", cadenaLetrasRandom);
        do{
          contador = 0;
          contadorMalPosicion = 0;
          printf("Introduce una cadena de LETRAS MAYUSCULAS de [ %d ] caracteres: \n", N);
          do{
            printf("!! Los caracteres deben ser diferentes !!\n");
            scanf("%4s", cadenaLetras);
          }while(cadenaLetras[0] == cadenaLetras[1] || cadenaLetras[0] == cadenaLetras[2] ||
            cadenaLetras[0] == cadenaLetras[3] || cadenaLetras[1] == cadenaLetras[2] ||
            cadenaLetras[1] == cadenaLetras[3] || cadenaLetras[2] == cadenaLetras[3]);
            for(int i = 0; i < N; i++){
              if(cadenaLetrasRandom[i] == cadenaLetras[i])
              contador++;
            }
            if (cadenaLetrasRandom[0] == cadenaLetras[1] || cadenaLetrasRandom[0] ==
            cadenaLetras[2] || cadenaLetrasRandom[0] == cadenaLetras[3])
            contadorMalPosicion++;
            if (cadenaLetrasRandom[1] == cadenaLetras[0] || cadenaLetrasRandom[1] ==
            cadenaLetras[2] || cadenaLetrasRandom[1] == cadenaLetras[3])
            contadorMalPosicion++;
            if (cadenaLetrasRandom[2] == cadenaLetras[0] || cadenaLetrasRandom[2] ==
            cadenaLetras[1] || cadenaLetrasRandom[2] == cadenaLetras[3])
            contadorMalPosicion++;
            if (cadenaLetrasRandom[3] == cadenaLetras[0] || cadenaLetrasRandom[3] ==
            cadenaLetras[1] || cadenaLetrasRandom[3] == cadenaLetras[2])
            contadorMalPosicion++;
            printf("contador bien posicionados: %d\n", contador);
            printf("contador mal posicionados: %d\n", contadorMalPosicion);
          }while(contador < N);
        break;
    case 'A':
        srand(time(NULL));
        do{
        for(int i = 0 ; i < N; i++) {
          letraoNumero = (rand() % 2);
          if (letraoNumero == 0)
          cadenaAlfaNumericosRandom[i] = (rand() % 10 + 48);
          else (cadenaAlfaNumericosRandom[i] = (rand() % 26 + 65));
        }
        }while(cadenaAlfaNumericosRandom[0] == cadenaAlfaNumericosRandom[1] ||
          cadenaAlfaNumericosRandom[0] == cadenaAlfaNumericosRandom[2] ||
          cadenaAlfaNumericosRandom[0] == cadenaAlfaNumericosRandom[3] ||
          cadenaAlfaNumericosRandom[1] == cadenaAlfaNumericosRandom[2] ||
          cadenaAlfaNumericosRandom[1] == cadenaAlfaNumericosRandom[3] ||
          cadenaAlfaNumericosRandom[2] == cadenaAlfaNumericosRandom[3]);
        //printf("[ Programador ]: cadenaAlfaNumericosRandom: %4s\n", cadenaAlfaNumericosRandom);
        do{
          contador = 0;
          contadorMalPosicion = 0;
        printf("Introduce una cadena con LETRAS MAYUSCULAS Y NUMEROS de [ %d ] caracteres: \n", N);
        do{
          printf("!! Los caracteres deben ser diferentes !!\n");
          scanf("%4s", cadenaAlfaNumericos);
        }while(cadenaAlfaNumericos[0] == cadenaAlfaNumericos[1] || cadenaAlfaNumericos[0] == cadenaAlfaNumericos[2] ||
        cadenaAlfaNumericos[0] == cadenaAlfaNumericos[3] || cadenaAlfaNumericos[1] == cadenaAlfaNumericos[2] ||
        cadenaAlfaNumericos[1] == cadenaAlfaNumericos[3] || cadenaAlfaNumericos[2] == cadenaAlfaNumericos[3]);
        for(int i = 0; i < N; i++){
          if(cadenaAlfaNumericosRandom[i] == cadenaAlfaNumericos[i])
          contador++;
        }
        if (cadenaAlfaNumericosRandom[0] == cadenaAlfaNumericos[1] || cadenaAlfaNumericosRandom[0] ==
        cadenaAlfaNumericos[2] || cadenaAlfaNumericosRandom[0] == cadenaAlfaNumericos[3])
        contadorMalPosicion++;
        if (cadenaAlfaNumericosRandom[1] == cadenaAlfaNumericos[0] || cadenaAlfaNumericos[1] ==
        cadenaAlfaNumericosRandom[2] || cadenaAlfaNumericosRandom[1] == cadenaAlfaNumericos[3])
        contadorMalPosicion++;
        if (cadenaAlfaNumericosRandom[2] == cadenaAlfaNumericos[0] || cadenaAlfaNumericosRandom[2] ==
        cadenaAlfaNumericos[1] || cadenaAlfaNumericosRandom[2] == cadenaAlfaNumericos[3])
        contadorMalPosicion++;
        if (cadenaAlfaNumericosRandom[3] == cadenaAlfaNumericos[0] || cadenaAlfaNumericosRandom[3] ==
        cadenaAlfaNumericos[1] || cadenaAlfaNumericosRandom[3] == cadenaAlfaNumericos[2])
        contadorMalPosicion++;
        printf("contador bien posicionados: %d\n", contador);
        printf("contador mal posicionados: %d\n", contadorMalPosicion);
        }while(contador < N);

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
