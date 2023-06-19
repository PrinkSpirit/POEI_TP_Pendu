#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structure_mot_mystere.h"

struct MysteryWord  generateMysteryWord(){
        /*
         */
        FILE *fptr;
        fptr = fopen("./words.txt","r");
        int maxLineFile = 104334;
	char ch;
	if(fptr == NULL){
                printf("file doesn't exist");
                exit(0);
        }
	struct MysteryWord  motATrouver = {"",0};
	srand(time(NULL)); // Initialization random generator
	int lineMysteryWord = rand() % maxLineFile; // number of line in file containing words 
	int charWordCounter = 0;// count char in line
	int lineCounter = 0; // count nb line when function reads char
	while(ch != EOF){
		if(ch == '\n' && lineCounter != lineMysteryWord){
			lineCounter++;
			charWordCounter = 0;
			for(int j =0;j<50;j++){
				motATrouver.word[j]=' ';
			}
		}
		else  if(ch == '\n' && lineCounter == lineMysteryWord){
			return  motATrouver;
		}
		ch = fgetc(fptr);
		motATrouver.word[charWordCounter] = ch;
		motATrouver.lengthWords = charWordCounter;
		charWordCounter++;
			
	}	
	
}


