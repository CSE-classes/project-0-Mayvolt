#include "types.h"
#include "stat.h"
#include "user.h"
// The includes ls.c has minus fs.h





// Goal: echo but has leading text appended to user-input-string
// seems every shell command has a main() that takes args
int main(int argc, char *argv[])
{
    // printf(stdout) the phrase and then all the args provided after the shell command
    printf(1, "CSE3320 proj0 printing in user space: ");

    // inspired by ls.c
    int i;
    for(i=1; i<argc; i++)
        printf(1, "%s ", argv[i]);
    printf(1, "\n");
    exit();
}