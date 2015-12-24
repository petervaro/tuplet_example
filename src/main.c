/* INFO **
** INFO */

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/* Include standard headers */
#include <stdio.h>
/*  func  : puts */
#include <stdlib.h>
/*  const : EXIT_SUCCESS
    func  : system */


/*----------------------------------------------------------------------------*/
int
main(void)
{
    system("python -c \""
           "from os import getcwd;"
           "from os.path import basename;"
           "print('\\n' + basename(getcwd()), '=> ', end='')\"");
    puts("Everything is working!\n");
    return EXIT_SUCCESS;
}

