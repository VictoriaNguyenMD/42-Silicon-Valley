/* Rush03
1) Left corners are 'A', right corners are 'B'
A: [0][0] or [0][max]
C: [0][max] or [max][max]
The rest are B
2) If it's on the edge, so either [min] or have a [max], then fill it in
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//Determine if A, C, or B letter should be placed. Checks for the corners.
void checkVals(dir, max){
  if (dir == 1){
    printf("%s", "A");
  }else if (dir == max){
    printf("%s", "C");
  }else{
    printf("%s", "B");
  }
}

void rush(int x, int y){

  //Invalid col and row size
  if(x <= 0 || y <= 0){
    exit(-1);
  }

  int row, col;
  row = 1;

  while (row <= y){
    col = 1;
    while (col <= x){
      if (row == 1 || row == y){ //Checks top and bottom row
        checkVals(col, y); 
      }else if (col == 1 || col == x){ //Checks left and right column
        checkVals(row, x);
      }else{
        printf("%s", " "); //If the row/col is not on the edge (min/max), then add a space
      }
      col++;
    }
    
    //If its row is less than the maximum row line, then add a new line
    if(row < y){
      putchar('\n');
    }
    row++;
  }
}

int main(void) {
  rush(4, 4);
  return 0;
}
