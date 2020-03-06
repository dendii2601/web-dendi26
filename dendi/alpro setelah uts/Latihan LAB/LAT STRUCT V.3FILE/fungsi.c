#include "header.h"

void InputDataHero(hero DotA)
{
        printf("Nama Hero : "); gets(DotA.nama);
        printf("Skill 1 Hero : "); gets(DotA.skillHero.skill1);
        printf("Skill 2 Hero : "); gets(DotA.skillHero.skill2);
        printf("Skill 3 Hero : "); gets(DotA.skillHero.skill3);
        printf("Ultimate Hero : "); gets(DotA.skillHero.ultimate);

        printf("Nama Hero : "); gets(DotA.nama);
        printf("Stat Hero :\n");
        printf("INT : "); scanf("%d", &DotA.Stat.INT);
        printf("STR : "); scanf("%d", &DotA.Stat.STR);
        printf("AGI : "); scanf("%d", &DotA.Stat.AGI);

        //Penentuan Type Hero
        if(DotA.Stat.STR > DotA.Stat.AGI && DotA.Stat.INT){
            strcpy(DotA.type, "Strengh");
        }
        else if(DotA.Stat.AGI > DotA.Stat.STR && DotA.Stat.INT){
            strcpy(DotA.type,"Agility");
        }else if(DotA.Stat.INT > DotA.Stat.AGI && DotA.Stat.STR){
            strcpy(DotA.type,"Intelligence");
        }
        puts("");
    CetakDataHero(DotA);
}

void CetakDataHero(hero DotA)
{
    printf("Nama Hero : %s\n", DotA.nama);
    printf("Type Hero : %s\n", DotA.type);

    printf("Skill 1 Hero : %s\n",DotA.skillHero.skill1);
    printf("Skill 2 Hero : %s\n",DotA.skillHero.skill2);
    printf("Skill 3 Hero : %s\n",DotA.skillHero.skill3);
    printf("Ultimate Hero : %s\n",DotA.skillHero.ultimate);
    printf("Stat Hero :\n");
    printf("\tINT : %d\n", DotA.Stat.INT);
    printf("\tSTR : %d\n", DotA.Stat.STR);
    printf("\tAGI : %d\n", DotA.Stat.AGI);
}
