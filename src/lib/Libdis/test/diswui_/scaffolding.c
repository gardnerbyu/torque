#include "license_pbs.h" /* See here for the software license */
#include <stdlib.h>
#include <stdio.h>

int tcp_puts(int fd, const char *str, size_t ct)
  {
  fprintf(stderr, "The call to tcp_puts needs to be mocked!!\n");
  exit(1);
  }

char *discui_(char *cp, unsigned value, unsigned *ndigs)
  {
  fprintf(stderr, "The call to discui_ needs to be mocked!!\n");
  exit(1);
  }
