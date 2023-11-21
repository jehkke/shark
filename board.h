#include <stdio.h>
#include <stdlib.h>

#define BOARDSTATUS_OK      1 //board.c 애만 있어서 getboardstatus함수가 무슨값으로 반환되는지 main.c는 모름. 
#define BOARDSTATUS_NOK     0 //그래서 board.h에 이걸 정의 한걸 붙여주면 main.c에도 전달 가능함 
int board_initboard(void);
int board_printBoardStatus(void);

int board_getBoardStatus(int pos);
int board_getBoardCoin (int pos);

//int board_getSharkPosition(void);
//int board_stepShark(void);



