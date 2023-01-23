#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFSIZE 2048

int main(int argc, char* argv[])
{
    FILE *fp = fopen(arg[1], "r");
    char buff[BUFSIZE];

    int file_descripter = open(argv[1], O_RDONLY)
    int counter = read(file_descriptor, buff, 2048);
    count = write(1, buff, count);
    close(file_descriptor)    
}