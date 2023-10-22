#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(void)
{
    int passwordLength;

    printf("How much characters? ");
    scanf("%d", &passwordLength);

    // Generating random seed
    srand(time(NULL));

    // Declaring possible arrays
    char lowerLetters[] = "abcdefghijklmnopqrstuvxwyz";
    char upperLetters[] = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
    char numbers[] = "0123456789";
    char symbols[] = "!@#$%^&*<>?";

    char* selectedArray;
    for (int i = 0; i < passwordLength; i++)
    {
        //Fixed number of random choices
        int randomChoice = rand() % 4;

        // Assigning a random number to a pointer so we have a case for each array
        switch (randomChoice)
        {
        case 0:
            selectedArray = lowerLetters;
            break;
        case 1:
            selectedArray = upperLetters;
            break;
        case 2:
            selectedArray = numbers;
            break;
        case 3: 
            selectedArray = symbols;
            break;
        }

        // Declaring the size of the selected array
        int numElements = strlen(selectedArray);

        // Generating a random index (position) for the array
        int randomIndex = rand() % numElements;

        // Assigning the value at the randomIndex to a variable
        char randomElement = selectedArray[randomIndex];
        printf("%c", randomElement);
    }

    // Removing the % sign at the end of the execution
    printf("\n");
    
    return 0;
}
