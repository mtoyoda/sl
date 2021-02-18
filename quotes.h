#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define FILENAME "quotes/quotes.txt"
#define QUOTEBUFFER 1024
#define NUMQUOTES 5422

char *get_quotes();
char *select_random_quote(char *buffer);

