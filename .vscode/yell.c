#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>
#define BUFSIZE 2048

int main(int argc, char *argv[])

if (argc == 0)
{
    char buff[BUFSIZE]
    int count = read(0, buff, 2048);
    count = write(1, buff, count);
}

for(i = 0; i<=argc; i++) {
    int file_descriptor = open(argv[i], O_RDONLY)
    while (counter > 0) {
        int count = read(file_descriptor, buff, 2048)
        for(i =0; i <buff; i++){
            buff[i] = toupper(buff[i])
        }
        write(1, buff, count)
    }
    close(file descriptor)
}
