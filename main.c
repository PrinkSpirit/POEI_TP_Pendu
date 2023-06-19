#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "structure_mot_mystere.h"

int main() {
   char guess = '0'; // The current guessed character
   char* censoredWord; // Display of the known characters of the word
   int life = 9; // How many tries the user has

   struct MysteryWord mysteryWord;
   generateMysteryWord();

   // Initialize the censored word with the same length as the mystery word and with only '_' char
   censoredWord = (char*)malloc(mysteryWord.lengthWords * sizeof(char));
   for(int i=0; i<mysteryWord.lengthWords;i++) {
      censoredWord[i] = '_';
   }

   do{
      // We take the user character guess
      printf("Please guess a character: ");
      scanf("%s", &guess);
      
      // We check if this guess is contained in the word
      if(true) { //checkChara(guess)
         printf("%c is correct!\n", guess);
         printf("%s\n", censoredWord);
      }
      else {
         printf("%c is incorect!\n", guess);
         printf("Only %i lifes remainings.\n", --life);
         printf("%s\n", censoredWord);
      }

      // If the word is complettely discovered, user win
      if(true){ //strcmp(mysteryWord, Word.mot) is complete
         printf("You have guessed the word %s.\nVICTORY!", censoredWord);
         break;
      }

      // If the user is out of lifes, user lose
      if(life <= 0){
         printf("You are out of lifes...\nFAILURE!");
         printf("    ============\n    || //    |\n\n    ||//     |\n    ||/      |\n    ||       O\n    ||      /|\\\n||       |\n    ||      / \\\n    ||\n    ||\n    ||\n==========");
         break;
      }

   }while(true);
   
   printf("Thank you for playing");

   return 0;
}