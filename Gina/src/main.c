#include <stdio.h>
#include <stdlib.h>
#include "../include/String.h"
#include "../include/middlelayer.h"

const char MIC_FILE[]="../Records/mic.wav";
const char MODEL[]="../whisper.cpp/models/ggml-base.bin";
const char DEVICE[]="plughw:'3,0";
const int DURATION=10;
int main()
{

    while(1)
    {
        arecor(DURATION,DEVICE,MIC_FILE);
        Whisper(MODEL,MIC_FILE);

    }

    return 0;
}

