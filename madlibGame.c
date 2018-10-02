#include <stdio.h>
#include <stdlib.h>

int main()
{
    char AnimalName[20];
    char Color[20];
    char PlaceName[20];
    char verb[20];

    printf("Please enter your favourite Animal name in 1 word:");
    scanf("%s", AnimalName);
    printf("Please enter your favourite colour in 1 word:");
    scanf("%s", Color);
    printf("Please enter place name in 1 word:");
    scanf("%s", PlaceName);
    printf("Please enter Verb:");
    scanf("%s", verb);

    printf("A girl had %s \n", AnimalName);
    printf("It's fleece was %s as snow \n", Color);
    printf("It followed her to %s one day \n",PlaceName);
    printf("It made the children %s \n", verb);

    return 0;
}




