#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// CHECKS IF THE USER INPUT SOMETHING
bool isNull(const char *string){
   
    for (int i = 0; string[i] != '\0'; i++) {
        if (!isspace(string[i])) {
            return false; 
        }
    }

    return true; 
}

//CHECKS IF THERE ARE ONLY WORDS ˆNUMBERS, SYMBOLS
bool isString(const char string[1001]) {

    for(int index = 0; index < strlen(string); index++) {
        if(!isalpha(string[index]) && !isspace(string[index])) {
            return false;
        }
    }

    return true;

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

    if(!isNull(userInput)){
       if(!isString(userInput)){
            printf("There are symbols or numbers in the input.\n");
        }else{
            printf("Number of words : %d\n", counter(userInput));
        }
    } else{
        printf("Please provide some input.\n");
    }

    return 0;
}
