#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "structure_mot_mystere.h"

int main() {

   // Struct Word = getRandomWord()
   char guess = '0';
   char* mysteryWord; //Malloc word size

   int life = 9; // Hardcoded for now

   do{
      // We take the user character guess
      printf("Please guess a character: ");
      scanf("%s", &guess);
      
      // We check if this guess is contained in the word
      if(true) { //checkChara(guess)
         print("%c is correct!\n", guess);
         print("%s\n",  mysteryWord);
      }
      else {
         print("%c is incorect!\n", guess);
         print("Only %i lifes remainings.\n", --life);
         print("%s\n", mysteryWord);
      }

      // If the word is complettely discovered, user win
      if(true){ //strcmp(mysteryWord, Word.mot) is complete
         print("You have guessed the word %s.\nVICTORY!", mysteryWord);
         break;
      }

      // If the user is out of lifes, user lose
      if(life <= 0){
         print("You are out of lifes...\nFAILURE!");
         print("    ============\n    || //    |\n\n    ||//     |\n    ||/      |\n    ||       O\n    ||      /|\\\n||       |\n    ||      / \\\n    ||\n    ||\n    ||\n==========");
         break;
      }

   }while(true);
   
   print("Thank you for playing");

   return 0;
}