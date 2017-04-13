#include "Confparser.h"

Config * init_config()
{
	Config *gconfig = (Config*)malloc(sizeof(Config));
	memset(gconfig, 0, sizeof(Config));
	
	return gconfig;
}

void 	load_config(Config *gconfig)
{

	FILE *fp = fopen("spider.conf","r");
	char buff[5024], *buf; 
	char str[1024]={0},str2[1024]={0};
	int i=0,j=0;
	buf = fgets(buff,1000 ,fp);

	while(buf!=NULL)
	{
		buf = fgets(buff,1000 ,fp);
		if(buff[0]=='#'||buff[0]=='\n')
			continue;
		int k=0;
		//printf("%d\n", strlen(buff));
		while(buff[k]!= '\0')
			{
		printf("%c", buff[k]);
		k++;
		}
		while(buff[i]!= '=')
			{
			str[i]=buff[i];
			i++;
			}
			 str[i]='\0';
			// printf("str:");
			// puts(str);
			 #if 1
			 k = 0;
				while(str[k]!= '\0')
			 {
		       printf("%c", str[k]);
				k++;
				}
			#endif		
			
			if(strcmp(str,"max_job_num")==0)
				{
					memset(str, 0 , sizeof(str));
					while(buff[i+1]!='\0')
					{
						str2[j] = buff[i+1];
						j++;
						i++;
					}
					str2[j]='\0';
					
					gconfig->max_job_num = atoi(str2);
					
				}
			else
				continue;
				
		
 }	 
	fclose(fp);

}

