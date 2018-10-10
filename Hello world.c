#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string userName = get_string("Enter your name: ");
    printf("Hello %s\n", userName);
}
