#include "io.h"
#include "data.h"
#include "moves.h"

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

void display(){
  int i,j;
  printf("\n");
  for(i = 0; i < 8; i++){
    for(j = 0; j < 8; j++){
      if(board[i][j] == 0) printf("|   |");
      else printf("| %c |", board[i][j]);
    }
    printf("\n-----------------------------------------\n");
  }
  printf("  a    b    c    d    e    f    g    h\n");
	printf("\n");
}