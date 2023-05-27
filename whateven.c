/* ESSE ARQUIVO É APENAS UM EXEMPLO - não faz parte da proposta
Serve somente para fazer os testes e entender a lógica necessária pra usar a função write
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

char buffer[42] = "a trick is something";

fd= open("Home", O_RDONLY);

write(1, &buffer, 42);

close(fd);

}
