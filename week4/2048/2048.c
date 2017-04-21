#include "2048.h"
#include "color.h"
#include "termios_control.h"

static void random_value(game_t *game)
{
	int pos;
	int value;
	int cnt=0;
	int empty[16] = {0};
	int i, j;
	for(i=0; i<4; i++)
		for(j=0; j<4; j++)
			if(game->map[i][j] == 0)
				empty[cnt++] = 4 * i + j;								
	if(cnt==0)
	{	//game over
		game->status = FAILED;
		return ;
	}

	pos = empty[random()%cnt];
	i = pos / 4;
	j = pos % 4;
	value = ( random()%10 ) ? 2 : 4; 	
	game->map[i][j] = value;
														
}

#if 0 
static void random_value(game_t *game)
{
	int ipos, jpos;
	int value;
	while(1)
	{
		ipos = random()%4;
		jpos = random()%4;
		value = (random()%10) ? 2 : 4;
		if(game->map[ipos][jpos]==0)
		{
			game->map[ipos][jpos] =value;
			break;
		}
	}
}
#endif
void game_init(game_t *game)
{
#if 0
	int i,j;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			game->map[i][j]=0;
		}
	}
#endif
	game->score = 0;
	game->step = 0;
	//game->status=STOP;
	memset(game->map, 0, sizeof(int)*4*4);	
	random_value(game);
	random_value(game);

}

dir_t get_dir()
{
	char ch;
	while(1)
	{
		ch = my_getch();
		if(ch == '\n')
			continue;
		else if(ch == 'w')
			return UP;
		else if(ch == 's')
			return DOWN;
		else if(ch == 'a')
			return LEFT;
		else if(ch == 'd')
			return RIGHT;
	}
}

void draw(game_t *game)
{
	int i,j;
	game->score = 0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			game->score+=game->map[i][j];
		}	
	}
	printf("\033[2J");
	printf("socre: ");
	RED(game->score);
	printf("step: ");
	GREEN(game->step);
	printf("\n");
	for(i=0; i<4; i++)
	{
		printf("-------------------------\n");
		printf("|     |     |     |     |\n");
		for(j=0; j<4; j++)
		{
			printf("|");
			if(game->map[i][j]!=0)
				printf(" %2d  ",game->map[i][j]);
			else
				printf("     ");
		
		}
		printf("|\n");
		printf("|     |     |     |     |\n");
	}

	printf("-------------------------\n");
}

void update(game_t *game,dir_t dir)
{
    game->step++;
	int box[4][4]={0};
	int i,j;
	for(i=0; i<4; i++)
		for(j=0; j<4; j++)
	  		box[i][j] = game->map[i][j];	  
	if(dir==UP)	
	{		
		int i,j,k;
		for(i=1; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				if(box[i][j]!=0)
				{
					box[i][j]=0;
					k=i-1;
					while(box[k][j]==0)
					{
						if(k=0)
							break;
						k--;
					}
					if(game->map[i][j]==box[k][j])
						box[k][j]=box[k][j]*2;	
					else 
						box[k+1][j]=game->map[i][j];
				}
			}
		}	
	}

	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			game->map[i][j]=box[i][j];
			
		}
	}

   random_value(game);
}








