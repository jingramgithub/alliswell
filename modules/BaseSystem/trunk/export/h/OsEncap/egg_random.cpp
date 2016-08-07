#include "egg_random.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

namespace OsEncap
{

    long int egg_random()
    {

        return rand();

    }

}
