#include <stdio.h>
#include <cs50.h>

// let's write a program
int main(void)
{
    //Name String
    string name = get_string("What's your name? ");
    //Age Integer
    int age = get_int("What's your age? ");
    //Hometown Int
    string hometown = get_string("What's your hometown? ");
    //Phone number Int
    string phone = get_string("What's your phone number? ");

    printf("My new friend's name is %s, they are %i years old, they come from %s, and their phone number is %s\n", name, age, hometown, phone);
}

