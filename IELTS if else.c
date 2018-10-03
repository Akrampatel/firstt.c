/* This code checks IELTS exam score if person score less than 5 then system will print 'fail' otherwise 'pass' with final band result.*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    float Speaking = 4.5;
    float Listening = 6;
    float Writing = 5;
    float Reading = 6;
    float Total = Speaking + Listening + Writing + Reading;
    float Band = Total / 4;
    if (Speaking >= 5 && Listening >= 5 && Writing >= 5 && Reading >= 5)
        {
            printf("You are passed and your Band is : %f", Band);
        } else {
        printf("Sorry you have failed.");
        }
    return 0;
}




