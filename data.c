#include "data.h"
#include "io.h"
#include "moves.h"

char board[8][8];

int fill(char s, int idx){
  int i;
  int lastopen = -1;
  for(i = 0; i < 8; i++){
    if(board[i][idx] == 0) lastopen = i;
  }
  if(lastopen  == -1) return 0;
  else {
    board[lastopen][idx] = s;
    return 1;
  }
}