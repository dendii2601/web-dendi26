#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("at_least('r', 3, Larry Page) \t\t  --> : %s\n",at_least('r',3,"Larry Page")?"True":"False");
    printf("at_least('m', 2, Matt Mullenweg)\t  --> : %s\n",at_least('m',2,"Matt Mullenweg")?"True":"False");
    printf("at_least('a', 2, Mark Zuckerberg)\t  --> : %s\n",at_least('a',2,"Mark Zuckerberg")?"True":"False");
    printf("at_least('m', 2, Jimmy Wales) \t\t  --> : %s\n",at_least('m',2,"Jimmy Wales")?"True":"False");
    return 0;
}
