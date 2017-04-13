#include "file.h"
void save_map(game_t *game)
{
	FILE *fp = fopen("2048.dat", "w");
	fwrite(game, sizeof(game_t), 1, fp);
	fclose(fp);

}

int load_map(game_t *game)
{

	int ret;
	FILE *fp1 = fopen("2048.dat", "r");
	fread(game, sizeof(game_t), 1, fp1);
	fclose(fp1);
	
	return 0;
	
}











