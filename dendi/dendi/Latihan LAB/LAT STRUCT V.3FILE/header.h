#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stat{
    int STR;
    int INT;
    int AGI;
};

typedef struct{
    char skill1;
    char skill2;
    char skill3;
    char ultimate;
}skill;

typedef struct {
    char nama[20];
    char type[10];
    struct stat Stat;
    skill skillHero;
}hero;

void InputDataHero(hero DotA);
void CetakDataHero(hero DotA);



#endif // HEADER_H_INCLUDED
