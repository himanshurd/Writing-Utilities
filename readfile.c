#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFSIZE 2048

int main(int argc, char *argv[])
{
    (void)argc;
    char buff[BUFSIZE];
    int file_descripter = open(argv[1], O_RDONLY);
    int counter = read(file_descripter, buff, 2048);
    write(1, buff, counter);
    close(file_descripter);    
}
