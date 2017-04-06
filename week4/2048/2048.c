#include "2048.h"
#include "color.h"

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
		ch = getchar();
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
	printf("\033[2J");
	printf("socre: ");
	RED(game->score);
	printf("step:  ");
	GREEN(game->step);
	printf("\n");
	int i,j;
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
	if(dir==UP)	
	{		
		int i,j;
		for(i=0; i<4; i++)
			for(j=0; j<4; j++)
			{
				if(game->map[i][j]!=0)
				{
					game->map[i-1][j]=game->map[i][j];
					game->map[i][j]=0;
					break;
				}
			}
	}

	else if(dir== DOWN)	
	{		
		int i,j;
		for(i=0; i<4; i++)
			for(j=0; j<4; j++)
			{
				if(game->map[i][j]!=0)
				{
					game->map[i+1][j]=game->map[i][j];
					game->map[i][j]=0;
					for(i=0;i<4; i++)
					{
						for(j=0;j<4;j++)
						{
							printf("%d", game->map[i][j]);
						}
							printf("\n");
					}
	
					break;
				}
			}
	}
   else if(dir==LEFT)	
	{		
		int i,j;
		for(i=0; i<4; i++)
			for(j=0; j<4; j++)
			{
				if(game->map[i][j]!=0)
				{
					game->map[i][j-1]=game->map[i][j];
					game->map[i][j]=0;
					break;
				}
			}
	}
   else if(dir==RIGHT)	
	{		
		int i,j;
		for(i=0; i<4; i++)
			for(j=0; j<4; j++)
			{
				if(game->map[i][j]!=0)
				{
					game->map[i][j+1]=game->map[i][j];
					game->map[i][j]=0;	
					break;
				}
			}
	}
}








