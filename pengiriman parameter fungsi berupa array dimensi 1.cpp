#include <stdio.h>
#include <conio.h>
int cetak_mundur (char S []){
int i,n;
for (n=0;n<S[n];n++);
printf ("Panjanng array = %d\n",n);
for (i=n-1;i>=0;i--){
    printf ("%c",S[i]);
}
}
int main (){
char str [50]="MUTIARA IZMI NURFADLILAH";
cetak_mundur (str);
}
