/*
 * Static Analyzer for the NewtonOS 2.1 ROM
 */

/*
 Command line parameter:
 -aif filename   path and name of the .aif ROM file with debug information
 -rex filename   path and name of the ROM Extension file
 -dst path       path to a directory where all generated files are written
 */

#include <stdio.h>

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;
  printf("Hello, World...\n");
  return 0;
}

