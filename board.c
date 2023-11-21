#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#define N_BOARD            15 //15ĭ���� ��ũ�θ� �Ἥ ����// ���ڷ� �𵨸��ϴ� �� 
#define N_COINPOS          12
#define MAX_COIN            4
 
// board_��¼��� �̸����°� board�� �ش��Ѵٴ°��� ���ϰ� �̸����°� 
static board_status[N_BOARD]; //live or die // 15ĭ�� ���ǵ�. 
static board_coin[N_BOARD];

static board_sharkPosition; //�����ġ 


int board_initboard(void);
{
	for(i=0;i<N_BOARD;i++)
	{
		board_status[i]= BOARDSTATUS_OK
		board_coin[i]= 0;
		
	}
	//coin �Ҵ�
	for (i=0;i<N_COINPOS;i++)
	{
		int flag =0; //Ư�� �̺�Ʈ���� while���� ������ ���� �� flag��� 
		while(flag==0)
		{
			int allocPos = rnad()%N_BOARD;
			if (board_coin[alloPos]==0)
			{
				board_coin[alloPos]== rand()%MAX_COIN+1; //1���� 4���� 
				flag=1;  // ���ϴ� ���� �Ͼ���� flag=1 ��ߵ���. �׷� while 
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
		if (board_status[i]== BOARDSTATUS_NOK) //i�� NOK����, �� 0�̸� �ļյǴ� ��. X �� ��Եȴ�. 
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
	return board_coin[pos] ; //���������� �ʿ���. return�ϰ� �����ϴ°��� �ȵ� return���� ��������.
}



//int board_getSharkPosition(void);
//int board_stepShark(void);



