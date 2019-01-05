#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nilai[5],x;
    printf("Memasukkan nilai : \n");
    for (x=0;x<5;x++)
    {
        printf("Nilai Angka : "); scanf("%d",&nilai[x]);
    }
    printf("\n");
    printf("Membaca Nilai : \n");
    for (x=0;x<5;x++)
    {
        printf("Nilai Angka : %d\n",nilai[x]);
    }
    return 0;
}
