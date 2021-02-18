#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define FILENAME "quotes/quotes.txt"
#define QUOTEBUFFER 1024
#define NUMQUOTES 5422

char *get_quotes()
{
    char *buffer;
    long length;
    FILE *f = fopen(FILENAME, "rb");

    if (f)
    {
        fseek(f, 0, SEEK_END);
        length = ftell(f);
        fseek(f, 0, SEEK_SET);
        buffer = malloc(length);
        if (buffer)
        {
            size_t d = fread(buffer, 1, length, f);
            if (d < 0)
                exit(EXIT_FAILURE);
            return buffer;
        }
        perror("Unable to allocate buffer");
        exit(EXIT_FAILURE);
    }
    perror("unable to open the file");
    exit(EXIT_FAILURE);
}

char *select_random_quote(char *buffer)
{
    srand(time(NULL));
    // there are 5421 quotes until now in the file.
    int selected_num_quote = (rand() % NUMQUOTES) + 1;
    char *token_quotes = strtok(buffer, "\n");
    int num_quote = 1;

    while (token_quotes != NULL)
    {
        token_quotes = strtok(NULL, "\n");
        if (num_quote == selected_num_quote)
        {
            return token_quotes;
        }

        num_quote++;
    }
    return ("MUUUUUUUUUUUU");
}