#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main(void)

{
    string x = get_string("Text :   ");   /// Promt for user input.

    int num_words, num_sentences, num_letters;

    num_words = num_sentences = num_letters = 0;


    for (int i = 0, len = strlen(x); i < len; i++)
    {
        if (isalpha(x[i]))  /// To check if a char is alphabet or not.
        {
            num_letters++;

        }

        if ((i == 0 && x[i] != ' ') || (i != len - 1 && x[i] == ' ' && x[i + 1] != ' ')) /// Counting words.
        {
            num_words++;
        }

        if (x[i] == '.' || x[i] == '?' || x[i] == '!')  /// Detecting sentences.
        {
            num_sentences++;
        }

    }

    float l = (num_letters / (float)num_words) * 100;

    float s = (num_sentences / (float)num_words) * 100;

    int index = round(0.0588 * l - 0.296 * s - 15.8);   /// counting index number.

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }

    else


        printf("Grade %i\n", index);
}

