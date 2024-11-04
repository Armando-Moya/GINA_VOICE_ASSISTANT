#include "../include/middlelayer.h"
#include <stdlib.h>
#include <stdio.h>

int arecor(const int duration,const char *device,const char *outputFile)
{
    char command[COMMAND_SIZE];
    int done=0;
    snprintf(command,sizeof(command),ARECORD_TEMPLATE,duration,device,outputFile);
    done=system(command);
    if(done==ERROR_FLAG)
    {
        perror("error to execute arecord");
        return ERROR_FLAG;
    }
    return DONE;
}

int Whisper(const char * model,const char * recordfile)
{
    char command[COMMAND_SIZE];
    int done=0;
    snprintf(command,sizeof(command),WHISPER_TEMPLATE,model,recordfile);
    done=system(command);
    if(done==ERROR_FLAG)
    {
        perror("error to execute whisper");
        return ERROR_FLAG;
    }
    return DONE;
}

/*
int readconf(conftext params)
{
    char command[COMMAND_SIZE];
    FILE *descriptor=fopen(CONFIG_FILE,"r");
    if (!descriptor) 
    {
        perror("Error al abrir el archivo de configuración");
        return -1;
    }
    while(fgets(command,sizeof(command),descriptor)!=NULL)
    {
        if(command)
        {

        }
        
    }

}
*/