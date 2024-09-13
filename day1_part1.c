#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "inputArray.h"  //inputArray definition

int getEachLineValue(const char *line){
    char firstNumb='\0';
    char lastNumb='\0';

    const char *p=line;

    while (*p)
    {
        
        if(isdigit(*p)){
            if (firstNumb=='\0')
            {
                firstNumb=*p;
            }
            lastNumb=*p;
        }

        p++;
    }
   // If both first and last digits were found, combine them into a two-digit number
    if (firstNumb != '\0' && lastNumb != '\0') {
        return (firstNumb - '0') * 10 + (lastNumb - '0');
    }

    return 0;  // Return 0 if no valid number is found
}


int main(){
    int total=0;

    for (int i = 0; i < arraySize; i++)
    {
        int calculatedValue= getEachLineValue(inputArray[i]);
        total += calculatedValue;
    }
printf("Answer == %d",total);

    
    return 0;
}