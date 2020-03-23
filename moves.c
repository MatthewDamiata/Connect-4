#include "moves.h"
#include "data.h"

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

void make_move(char s, int player){
  int valid;
  if(player == 1){
    switch(s){
      case 'a': valid = fill('X', 0); break;
      case 'b': valid = fill('X', 1); break;
      case 'c': valid = fill('X', 2); break;
      case 'd': valid = fill('X', 3); break;
      case 'e': valid = fill('X', 4); break;
      case 'f': valid = fill('X', 5); break;
      case 'g': valid = fill('X', 6); break;
      case 'h': valid = fill('X', 7); break;
    }
  } else {
      switch(s){
        case 'a': valid = fill('O', 0); break;
        case 'b': valid = fill('O', 1); break;
        case 'c': valid = fill('O', 2); break;
        case 'd': valid = fill('O', 3); break;
        case 'e': valid = fill('O', 4); break;
        case 'f': valid = fill('O', 5); break;
        case 'g': valid = fill('O', 6); break;
        case 'h': valid = fill('O', 7); break;
    }
  }
}

char accept_move(int player){
  char * list = "ABCDEFGHabcdefghqQ";
  char ch;
  int i = 0;
  int verified = 0;
  while(1){
  	printf("Player %d enter move: ", player);
   	scanf(" %c",&ch);
    printf("\n");
    while(list[i] != '\0'){
      if(ch == list[i]){
        verified = 1;
        break;
      }
      i++;
   	}
    if(verified == 0){
      printf("Incorrect move type\n");
      continue;
    }
    else break;
  }
  if(ch >= 'A' && ch <= 'Z') ch = tolower(ch);
  return ch;
}