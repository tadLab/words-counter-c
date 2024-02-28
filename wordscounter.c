#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

//
bool isString(char string[1001]){





}

//COUNTS SPACES IN STRING
int counter(char string[1001]){

    int sum = 0;

    for(int index = 0; index < strlen(string); index++){
        if(isspace(string[index])){
            sum++;
        }
    }

    return sum;
}


int main(int argc, char const *argv[])
{
    //1001 cause of '\0' at the end
    char userInput[1001];
    
    printf("Enter your text : ");
    fgets(userInput, sizeof(userInput), stdin);







    printf("Number of words : %d", counter(userInput));

    return 0;
}
