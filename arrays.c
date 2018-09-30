/* finding average using arrays this is 2nd program I am writing using C language */

#include <stdio.h>
int main() {
int average;
int grades[3];
grades[0] = 90;
grades[1] = 85;
grades[2] = 80;

average = (grades[0] + grades[1] + grades[2]) / 3;
printf("The average for 3 grades is: %d \n", average);
return 0;
}
