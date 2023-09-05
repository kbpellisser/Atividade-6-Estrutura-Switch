#include <stdio.h>

main(){

    int dia;
   
   printf ("Digite um numero correspondente ao dia da semana: ");
   scanf  ("%d", &dia);
   
   // Estrutura Switch Case

   switch (dia){
case 1:
    printf ("\nDomingo");
    break;
case 2:
    printf ("\nSegunda");
    break;
case 3:
    printf ("\nTerça");
    break;
case 4:
    printf ("\nQuarta");
    break;
case 5:
    printf ("\nQuinta");
    break;
case 6:
    printf ("\nSexta");
    break;
case 7:
    printf ("\nSabado");
    break;
   default:
   printf ("\nO numero nao e correspondente a um dia da semana!");
    return 0;
      }
}

