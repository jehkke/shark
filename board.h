#include <stdio.h>
#include <stdlib.h>

#define BOARDSTATUS_OK      1 //board.c �ָ� �־ getboardstatus�Լ��� ���������� ��ȯ�Ǵ��� main.c�� ��. 
#define BOARDSTATUS_NOK     0 //�׷��� board.h�� �̰� ���� �Ѱ� �ٿ��ָ� main.c���� ���� ������ 
int board_initboard(void);
int board_printBoardStatus(void);

int board_getBoardStatus(int pos);
int board_getBoardCoin (int pos);

//int board_getSharkPosition(void);
//int board_stepShark(void);



