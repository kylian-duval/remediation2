#include <stdio.h>
#include <stdlib.h>

struct point3D
{
 int x,y,z;

};

main(){
int nombre, i =1,j;
int x,y,z;
printf("entre le nombre de point que tu ve rentrer\n");
scanf("%d",&nombre);
for(j=0; j < nombre ; j++)
{
    printf("point%d x= ",i);
    scanf("%d\n", x);
    printf("point%d y= ",i);
    scanf("%d\n", y);
    printf("point%d z= ",i);
    scanf("%d\n", z);
    struct point3D pointi={x,y,z};
    i++;
}
printf("combien de point vous voulais afficher");
scanf("%d\n",&nombre);
i = 1;
for(j=0; j < nombre ; j++)
{
    printf("point%d x= %d",i,pointi.x);
    printf("point%d y= %d ",i,pointi.y);
    printf("point%d z= %d\n",i,pointi.z);
    i++;
}

}
