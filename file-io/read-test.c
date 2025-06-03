
#include <fcntl.h>
#include <stdio.h>
// #include <stdlib.h>
#include <unistd.h>

void print_the_flag() {

    int fd = open("./hello.txt", O_RDONLY);

    char contents[1024] = {0};

    read(fd, &contents, sizeof(contents));

    printf("%s\n", contents);
    close(fd);

}

int main() {
    print_the_flag();
    return 0;
};

