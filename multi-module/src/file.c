#include <stdio.h>

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "file.h"
#include "common.h"

int open_file_rw(char *filename) {
  int fd = open(filename, O_RDWR);
  if (fd == STATUS_ERROR) {
    perror("open");
    return fd;
  }

  return fd;
}
