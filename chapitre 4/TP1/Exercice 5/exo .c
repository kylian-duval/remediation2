#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void saisie(float *aa,float *bb,float *cc){
printf("entre la valeur de a = ");
scanf("%f", aa);
printf("entre la valeur de b = ");
scanf("%f",bb);
printf("entre la veleur de c = ");
scanf("%f", cc);
}
float *calcul(float aa,float bb,float cc){
float r;
float d = (bb*bb) - 4*aa*cc;

if(d == 0){
    r = -bb/(2.0*aa);
}else if(d > 0){
    r = 9.99;
}else if(d <0 ){
r = 1111.666;
}
return r; //il y a une error ici j'arrive pas a la résoudre!!!

}
main(){
float aa,bb,cc;
float r;
saisie(&aa,&bb,&cc);
 r = calcul(aa,bb,cc);

if(r == 9.99){
    printf("l'equition admer 2 solution");
}else if(r == 1111.666){
    printf("il y a pas de solution réel dans R")
}else{
    printf("l'aquiation admer 1 solution x0 = %f", r)
}

}
