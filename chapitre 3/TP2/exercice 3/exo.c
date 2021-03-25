#include <stdio.h>
#include <conio.h>

//fonction Majuscule  pour converire la chaine en majuscule
void Majuscule(char *chaine)
{
    int i;
  for (i=0; i<strlen(chaine); i++) //nzvigation dans la chaine
{
     chaine[i]= toupper(chaine[i]);  //toupper temforme le caractère en majuscule
}
}

main()
{
    char chaine[100];
    printf("Entrer une phrase qui sera converti en majuscule\n");
    gets(chaine);
    Majuscule(chaine);
    printf("%s\n",chaine);
}
