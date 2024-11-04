#include "../include/String.h"

void Upper(char *String)
{
    while (*String!=EOS)
    {
    if(*String>='a' && *String<='z')
    {
       *String-=UP_OFFSET; 
    }
    String++;
    }
}

void Lower(char *String)
{
    while (*String!=EOS)
    {
    if(*String>='A' && *String<='Z')
    {
        *String+=UP_OFFSET;
    }
    String++;
    }
}

int Instring(char *String , char *Substring)
{
    char *begin=Substring;
    int flag=ZERO;
    while (*String!=EOS)
    {
        if(*String==*Substring)
        {
            Substring++;
        }
        else
        {
            Substring=begin;
        }
        if(*Substring==EOS)
        {
            flag=EIN;
            break;
        }
        String++;
    }
    
        return flag;
}

void Split(char *String,char *Stringremplace)
{
    while(*Stringremplace!=EOS)
    {
    while(*String!=EOS)
        {if(*String==*Stringremplace)
        {
            *String=' ';
        }
        String++;
        }
        Stringremplace++;
    }
}