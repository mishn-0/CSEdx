#include <stdio.h>
#include <cs50.h>

int main(void)
{

/*
int score1= 72;
int score2 = 73;
int score3 = 33;

printf("Average: %f/n",(score1+score2+score3)/3.0);

printf("Average: %f/n",(score1+score2+score3)/(float) 3);   //another way to add a float
*/

// an ARRAY is something that contains THE SAME DATA TYPE


// Function to compute the average
float average(int length, int array[]);

    // Step 1: Ask for the number of grades
    int n = get_int("How many grades do you want to enter? ");

    // Step 2: Declare an array to store the grades
    int scores[n];

    // Step 3: Get the grades from the user
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("What was your grade? ");
    }

    // Step 4: Compute and print the average
    printf("Average grade: %.2f\n", average(n, scores));
}

// Function to calculate the average of the grades
float average(int length, int array[]) // average takes 2 arguments, one is the length of the array, and the array itself
{                   // array[] because we don't know how bit it is, but we tell it with length
    int sum = 0;  // Initialize sum to 0
    for (int i = 0; i < length; i++)
    {
        sum += array[i];  // Sum all the grades
    }
    return sum / (float) length;  // Calculate and return the average as a float
}





