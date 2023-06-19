#include <stdio.h>
#include <stdbool.h>


int main() {

   // Struct Word = getRandomWord()
   char guess = '0';
   char* mysteryWord;

   int vie = 9;

   do{
      printf("Please guess a character: ");
      // in char
      
      //if(checkChara(guess)) {}
         print("%c is correct!\n%s");
      //else {}
         print("%c is incorect!\n\n%s");
         vie--;
      
      // if Check word is complete
         // print Victory
      // if(vie == 0)
      // print FAILURE
      // Break

   }while(true);
   
   return 0;
}