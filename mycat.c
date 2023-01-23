#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFSIZE 2048

int main(int argc, char **argv)
{
    if (argc == 0)
    {
        char buff[BUFSIZE];
        int count = read(0, buff, 2048);
        count = write(1, buff, count);
    }

    for (int i = 1; i < argc; i++)
    {
        int file_descripter = open(argv[i], O_RDONLY);
        char buf[2048];
        int count = read(file_descripter, buf, 2048);

        while (count > 0)
        {
            count = read(file_descripter, buf, 2048);
            write(1, buf, count);
        }
        close(file_descripter);
    }
}