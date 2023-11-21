#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#define N_BOARD            15 //15칸으로 매크로를 써서 정의// 숫자로 모델링하는 것 
#define N_COINPOS          12
#define MAX_COIN            4
 
// board_어쩌고로 이름짓는것 board에 해당한다는것을 뜻하게 이름짓는겨 
static board_status[N_BOARD]; //live or die // 15칸이 정의됨. 
static board_coin[N_BOARD];

static board_sharkPosition; //상어위치 


int board_initboard(void);
{
	for(i=0;i<N_BOARD;i++)
	{
		board_status[i]= BOARDSTATUS_OK
		board_coin[i]= 0;
		
	}
	//coin 할당
	for (i=0;i<N_COINPOS;i++)
	{
		int flag =0; //특정 이벤트에서 while문을 나가고 싶을 때 flag사용 
		while(flag==0)
		{
			int allocPos = rnad()%N_BOARD;
			if (board_coin[alloPos]==0)
			{
				board_coin[alloPos]== rand()%MAX_COIN+1; //1에서 4사이 
				flag=1;  // 원하는 일이 일어났으면 flag=1 깃발들음. 그럼 while 
			}
		}
	 } 
	
}

int board_printBoardStatus(void)
{
	int i;
	
	printf("-----------------BOARD STATUS------------------\n");
	for (i=0;i<N_BOARD;i++)
	{
		printf("|");
		if (board_status[i]== BOARDSTATUS_NOK) //i가 NOK상태, 즉 0이면 파손되는 것. X 를 띠게된다. 
			printf("X");
		else
			printf("O");
	}
	printf("|\n");
	printf("-----------------------------------------------\n");
}

int board_getBoardStatus(int pos);
{
	return board_status[pos]; 
}
int board_getBoardCoin (int pos);
{
	int coin = board_coin[pos];
	board_coin[pos] = 0;
	return board_coin[pos] ; //지역변수가 필요함. return하고 세팅하는것은 안됨 return에서 끝나버림.
}



//int board_getSharkPosition(void);
//int board_stepShark(void);



