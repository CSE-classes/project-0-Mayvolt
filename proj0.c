

#include "types.h"
#include "stat.h"
#include "user.h"
// The includes ls.c has minus fs.h





// Goal: echo but has leading text appended to user-input-string
// seems every shell command has a main() that takes args
int main(int argc, char *argv[])
{

    // file-descriptor 1 is stdout
    printf(1, "CSE3320 proj0 printing in user space: \n"); 
    // 2 is error stuff
    printf(2, "oops\n"); 
    exit();
}