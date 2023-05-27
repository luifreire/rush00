/**eu ACHO que esse deve ser 
 * SÓ colocar o caracter?
 * não sei 
 */

#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <string.h>

void main ()

{
    int fd;

    char example[2] = "z\n";
    
    fd = open("Home/remoterush/ex000/ft_putchar.c", O_RDONLY);

    write(1, &example, 2);

    close(fd);

}
