#ifndef __STRING_H__
#define __STRING_H__

#define EOS   '\0'
#define UP_OFFSET 32
#define ZERO 0
#define EIN  1


void extern Upper(char *String);
void extern Lower(char *String);
int extern Instring(char * String , char *Substring);
#endif