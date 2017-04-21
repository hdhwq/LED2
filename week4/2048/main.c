#include "2048.h"


int main()
{
	game_t game;
	srand(time(0));
	dir_t dir;
	int ret;
	game_init(&game);	
    draw(&game);
	while(1)
	{
		dir = get_dir();
		update(&game,dir);
		draw(&game);		
	}


	return 0;
}
