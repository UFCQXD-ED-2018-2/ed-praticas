#include <stdio.h>

#if defined QXD_ED_ANALISE
#include "01-analise/analise.h"
#endif

#ifdef C_MAIN_ARGS
int main(int argc, char* argv[])
#else
int main()
#endif
{
    printf("Hello World!\n");
    return 0;
}
