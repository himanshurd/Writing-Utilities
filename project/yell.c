#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>
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
        char buff[BUFSIZE];
        int count = read(file_descripter, buff, 2048);

        while (count > 0)
        {
            char buff[BUFSIZE];
            int size = 2048/ sizeof(char);
            for (int i = 0; i < size; i++)
            {
                buff[i] = toupper(buff[i]);
            }

            write(1, buff, count);
            count = read(file_descripter, buff, 2048);
        }
        close(file_descripter);
    }
}