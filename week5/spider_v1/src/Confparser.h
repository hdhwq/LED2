#ifndef __CONFPARSER_H__
#define __CONFPARSER_H__

#define MAX_CONF LEN 1024
#define CONF_FILE_NAME "spider.conf"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct config
{
	int 	max_job_num;
	char 	*seeds;
	char	*include_prefixes;
	char 	*exclude_prefixes;
	char	*logfile;
	int		log_level;
	int		max_depth;
	int		make_hostdir;
	int		start_interval;
	
	
	char	*module_path;
	char	**module_name;
	int		mcnt;

	char 	**accept_types;
	int		tcnt;
	
}Config;

extern Config	 *init_config();
extern void 	load_config(Config *gconfig);

#endif








