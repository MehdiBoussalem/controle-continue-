#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int  main(int argc, char *argv[]){
int a=atoi(argv[1]);
int somme=0;

//somme des diviseurs 
for(int i=1,i<a+1,i++){
    if (a%i==0){
        somme=somme+i;}
}
//si la somme est égale au nombre parfait renvoie que le nombre est parfait sinon renvoie que le nombre ne l'est pas 
if somme==a{
printf("%d,le nombre %d est parfait",a)
}
else {
printf("%d,le nombre %d n'est pas parfait",a)



printf("%d",somme);


}
