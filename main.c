#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>

#include "structure_mot_mystere.h"
#include "checkMotMystere.h"


int main() {
   char guess; // The current guessed character
   char* censoredWord; // Display of the known characters of the word
   char* mystWord;
   int life = 9; // How many tries the user has

   struct MysteryWord mysteryWord = generateMysteryWord();
   //generateMysteryWord();

   //mysteryWord.word = "pistache";
   //mysteryWord.lengthWords = strlen("pistache");

   // Initialize the censored word with the same length as the mystery word and with only '_' char
   mystWord = (char*)calloc(mysteryWord.lengthWords+1, sizeof(char));
   censoredWord = (char*)calloc(mysteryWord.lengthWords+1, sizeof(char));

   for(int i=0; i<mysteryWord.lengthWords;i++) {
      censoredWord[i] = '_';
      mystWord[i] = mysteryWord.word[i];
   }
   censoredWord[mysteryWord.lengthWords+1] = '\0';
   mystWord[mysteryWord.lengthWords+1] = '\0';

   do{
      printf("Word to guess: %s\n", censoredWord);
      printf("Word to guess: %s\n", mystWord);
      // We take the user character guess
      printf("Please guess a character: ");

      guess = getch();
      
      // We check if this guess is contained in the word
      if(checkChara(guess, &mysteryWord, censoredWord)) {
         printf("%c is correct!\n", guess);
         printf("%s\n", censoredWord);
      }
      else {
         printf("%c is incorect!\n", guess);
         printf("Only %i lifes remainings.\n", --life);
         printf("%s\n", censoredWord);
      }

      // If the word is complettely discovered, user win

      if(0==strcmp(censoredWord, mystWord)){ //strcmp(mysteryWord, Word.mot) is complete
         printf("You have guessed the word %s.\nVICTORY!\n", censoredWord);
         break;
      }

      // If the user is out of lives, user lose
      if(life <= 0){
         printf("You are out of lives...\n");
         printf("    ============\n    || //    |\n    ||//     |\n    ||/      |\n    ||       O\n    ||      /|\\\n    ||       |\n    ||      / \\\n    ||\n    ||\n    ||\n==========\n");
         printf("The word was: %s\n", mystWord);
         break;
      }

   }while(true);
   
   printf("Thank you for playing.\n");

   free(censoredWord);
   free(mystWord);

   return 0;
}