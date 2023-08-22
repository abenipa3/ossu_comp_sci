#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string userInput = get_string("Text: ");
    int count_words, count_sentences, count_letters;
    count_words = count_sentences = count_letters = 0;
    for (int i = 0, len = strlen(userInput); i < len; i++)
    {
        if (isalpha(userInput[i]))
            count_letters++;
        if ((i == 0 && userInput[i] != ' ') || (i != len - 1 && userInput[i] == ' ' && userInput[i + 1] != ' '))
            count_words++;
        if (userInput[i] == '.' || userInput[i] == '?' || userInput[i] == '!')
            count_sentences++;
    }

    float L = (count_letters / (float) count_words) * 100;
    float S = (count_sentences / (float) count_words) * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
        printf("Before Grade 1\n");
    else if (index >= 16)
        printf("Grade 16+\n");
    else
        printf("Grade %i\n", index);
}
