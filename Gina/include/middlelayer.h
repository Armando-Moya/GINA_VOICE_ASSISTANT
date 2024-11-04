#ifndef __MIDDLELAYER_H_
#define __MIDDLELAYER_H_

#define COMMAND_SIZE 256
#define ERROR_FLAG -1
#define DONE 0

/*
typedef struct 
{
    int duration;
    char device[14];
    char  record_file[20];
    char  model[24];

}conftext;
*/
const char CONFIG_FILE[]="../Conf/conf.p";
const char ARECORD_TEMPLATE[]="arecord -c 1 -f S16_LE -r 16000 -d %d -t wav --device='%s' %s -q";
const char WHISPER_TEMPLATE[]="../whisper.cpp/main -m %s -f %s -otxt";

extern int arecor(const int duration,const char * device,const char * outputFile);
extern int Whisper(const char * model,const char * recordfile);
//extern int readconf(conftext params);
#endif 
