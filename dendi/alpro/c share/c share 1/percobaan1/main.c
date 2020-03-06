#include <stdio.h>
#include <stdlib.h>

int persegi (int a);
int segitiga (int d, int n);
int psgi_panjang (int i, int j);
float lingkaran (float x);
int


int main()
{
    int s;
    int e,f;
    int m,n;
    float l;
    printf("masukkan sisi  = ");
    scanf("%d",&s);
    printf("sisi persegi = %d", persegi(s));
    printf("\n");

    printf("masukkan alas = ");
    scanf("%d",& e);
    printf("masukkan tinggi = ");
    scanf(" %d",& f);
    printf("luas segitiga = %d", segitiga(e,f));
    printf("\n");

    printf("masukkan panjang = ");
    scanf("%d",& m);
    printf("masukkan lebar = ");
    scanf(" %d",& n);
    printf("luas persegi panjang = %d", psgi_panjang(m,n));
    printf("\n");


    printf("masukkan r = ");
    scanf(" %f",& l);
    printf("luas lingkaran = %f", lingkaran(l));

    return 0;
}
int persegi (int a)
{
    return (a * a);

}

int segitiga(int d, int n)
{
    return (d*n*0.5);
}

int psgi_panjang(int i, int j)
{
    return (i*j);
}

float lingkaran(float x)
{
    float k;
    k= 3.14;
    return (k*pow(x,2));
}




