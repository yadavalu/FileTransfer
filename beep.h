#ifndef beep
#include <stdio.h>
#define beep printf("\a");
void endbeeper() { beep; beep; beep; return; }
#endif
