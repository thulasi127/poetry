#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LENGTH 1000000

int main(int argc, char *argv[]) {

  int word = 0;
  int line = 0;
  int quit = 0;
  int i;
  int j;
  int first = 0;
  int array[LENGTH];
  char poem[LENGTH];

  printf("Please enter your poem:\n");

  while (quit == 0) {
    fgets(poem, LENGTH, stdin);

    if (strcmp(poem, ".\n") == 0) {
      quit = 1;
    }

    for (i = 0; i < strlen(poem); i++) {
      if (poem[i] == ' ') {
        word++;
        array[j]++;
      }
    }

    word++;
    line++;
    j++;
  }
  printf("%d words on %d lines \n", word - 1, line - 1);
  for (j = 0; j < (line - 1); j++) {
    printf("%d ", (array[j] + 1));
  }

  return (0);
}
