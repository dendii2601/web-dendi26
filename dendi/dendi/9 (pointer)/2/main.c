#include "header.h"

int main()
{
    int *target;
    changeValue(&target, 3, 2);
    printf("changeValue(*target, 3, 2)\ntarget=%d",target);
    return 0;
}
