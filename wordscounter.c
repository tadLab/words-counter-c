#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


int counter(char string[1001]){

    int sum = 0;





    return sum;
}


int main(int argc, char const *argv[])
{

    //1001 cause of '\0' at the end
    char userInput[1001];
    int result = 0;
    
    printf("Enter your text : ");
    scanf("%s\n", userInput);


    result = counter(userInput);

    printf("Number of words : %d", result);

    return 0;
}
