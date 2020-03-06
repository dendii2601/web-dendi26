#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,batas,cari,genap=0;

    printf("masukkan batas array : ");
    scanf("%d", &batas);
    for(i=1;i<=batas;i++){
        printf("%d", a[i]);
    }
    for(i=1;i<=batas;i++){
        if(a[i]%2==0){
            genap+=1;
        }
        if(genap==2){
            printf("\n Bilangan genap ke dua : %d\nterdapat pada urutan ke-%d", a[i],i);
            break;
        }
    }
    return 0;
}
