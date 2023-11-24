#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "board.h"

#define N_PLAYER    5
#define MAX_DIE     6 

#define PLAYERSTATUS_LIVE   0
#define PLAYERSTATUS_DIE    1
#define PLAYERSTATUS_END    2

int player_position[N_PLAYER];
char player_name[N_PLAYER][MAX_CHARNAME];
int player_coin[N_PLAYER];
int player_status[N_PLAYER];
char player_statusString[3][MAX_CHARNAME] = {"LIVE","DIE","END"};

void opening(void)
{
	printf("=======================\n");
	printf("  Shark Game GO GO!!\n");
	printf("=======================\n");
}

int rolldie(void)
{
	return rand()% MAX_DIE+1;
 } 

void printPlayerPostion(int player)
{
	int i;
	for(i=0;i<N_BOARD;i++)
	{
		printf("|");
		if (i==player_position[player])
			printf("%c", player_name[player][0]);
		else
		{
			if (board_getBoardStatus)
				printf("X");
			else
				print("|\n ");
		}
	}
	printf("|\n");
}
void chaeckDie(void) //죽는 조건// 팀: 직관적인거 먼저 적어놓고 조건 따져서 넣기 
{
	int i;
	for (i=0;i<N_PLAYER;i++)
		if (board_get) 
}
void printPlayerStatus(void)
{
	int i;
	for (i=0;i<N_PLAYER;i++)
	{
		printf("%s: pos %i, coin %i, status : %s\n",
			player_name[i],player_position[i],player_coin[i],);
		
	}
}

int main(int argc, char *argv[]) {
	int pos= 0;
	int i;
	
	srand((unsigned)time(NULL));	
	
	
	//0.opening
	opening();
	
	//1. 초기화& 플레이어 이름 결정(initial, player name) 
	board_initboard();
	//1-2.
	for(i=0;i<N_PLAYER;i++)
	{
		plyaer_position[i] =0;
		player_coin[i]= 0;
		player_status[i] = PLAYERSTATUS_LIVE;
		//player_name
		printf("Player %i's name:", i)
		scanf("%s",player_name[i]);
	}
	
	//2. 반복문 (플레이어 턴)
	do {
		int step = rolldie();
		int coinResult;
		char c;
		
		if (player_status[turn])
		{
			turn= (turn+1)%N_PLAYER;
			continue;
		}
		pos +=step;
		printf();
		coinResult= board_getBoardCoin(pos);
		
		printf("press any key to continue: ");
		scanf("%d", &c);
		fflush(stdin);
	//2-1. 플레이어 상태 출력
		for (i=0;i<N_PLAYER;i++)
		printPlayerPosition(i);
		printPlayerStatus();
		
		
		//2-2. 주사위 던지기
		printf("%smturn!!",player_name[turn]);
		printf("press any key to roll a die!\n");
		scanf("%d",&c);
		fflush(stdin);
		step=rolldie();


		//2-3. 이동
		player_position[turn] += step;
		if (player_position[turn]>= N_BOARD)
		{
			player_position[turn]= PLAYERSTATUS_END
			player_position[turn]= N_BOARD-1;
			
		}
		if(player_position[turn]== N_BOARD-1)
			player statys[turn]
		//printf()
		
		//2-4 동전 줍기
		coinResult = board_getBoardCoin(pos);
		player_coin[turn] += coinResult;
		//printf(		
		//2-5. 다음턴
		turn= (turn + 1)%N_PLAYER; //wrap around
		//2-6. if(조건: 모든 플레이어가 한번씩 턴을 돈다.) 
		if (turn ==0)
		{
			//상어 동작
		}
			
	} while(1);
	//3. 정리( 승자 게산, 출력 등 
	
	system("PAUSE");
	return 0;
}
