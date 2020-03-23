#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#include "moves.h"
#include "io.h"
#include "data.h"

int main(void) {
  char move;
  int player = 1;
  while(1){
    move = accept_move(player);
    if(move == 'q') break;
    make_move(move, player);
    display();
    if(player == 1) player = 2;
    else player = 1;
  }
  printf("Good game!\n");
  return 0;
}