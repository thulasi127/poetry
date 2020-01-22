all: poetry.c
  gcc -ansi -o poetry poetry.c

poetry: poetry.c
  gcc -ansi -o poetry poetry.c

clean:
  rm poetry
