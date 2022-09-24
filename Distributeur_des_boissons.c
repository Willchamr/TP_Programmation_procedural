#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
char i;
int prix = 0, rendu = 0;
while (i!='q')
{
printf("DISTRIBUTEUR DE BOISSONS\n");
printf("Faites votre choix et validez ...\n");
printf("\nCAFE NOIR <N>");
printf("\nCAFE AU LAIT <L>");
printf("\nTHE NATURE <T>");
printf("\nCHOCOLAT au LAIT <C>");
printf("\nSODA <S>");
printf("\nBIERE sans alcool <B>\n");
i=getche();
switch (i)
{
case'N':
case'n': printf("\nVeuillez payer votre CAFE NOIR !\n\n");
break;
case'L':
case'l': printf("\nVeuillez payer votre CAFE AU LAIT !\n\n");
break;
case'T':
case't': printf("\nVeuillez payer votre THE NATURE !\n\n");
break;
case'C':
case'c': printf("\nVeuillez payer votre CHOCOLAT au LAIT !\n\n");
break;
case'S':
case's': printf("\nVeuillez payer votre SODA !\n\n");
break;
case'B':
case'b': printf("\nVeuillez payer votre BIERE sans alcool !\n\n");
break;
}
if(i!='q')
{
printf("PRIX=1EURO ( 1e:[e] | 0.5e:[s] | 0.2e:[z] | 0.1e:[i] )\n");
while((prix<10)&&(i!='q'))
{
i=getch();
switch (i)
{
case'e': prix=prix+10;
break;
case's': prix=prix+5;
break;
case'z': prix=prix+2;
break;
case'i': prix=prix+1;
}
}
if(prix>10)
{
rendu=prix-10;
printf("\nRendu O.%d0euro\n", rendu);
}
if(i!='q')
{
prix=0;
printf("\nVeuillez prendre votre boisson!\n\n");
}
}
}
printf("\nFin du programme\n");
system ("pause");
return 0;
}
