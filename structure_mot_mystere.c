#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void generateMysteryWord(){
        /*
         */
        FILE *fptr;
        fptr = fopen("./words.txt","r");
        if(fptr == NULL){
                printf("file doesn't exist");
                exit(0);
        }


        srand(time(NULL)); // Initialization random generator


}


