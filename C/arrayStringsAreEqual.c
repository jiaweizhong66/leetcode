#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool arrayStringsAreEqual(char **word1, int word1Size, char **word2, int word2Size)
{
    int word1_len = 0;
    for (int i = 0; i < word1Size; ++i)
    {
        word1_len += strlen(word1[i]);
    }
    int word2_len = 0;
    for (int i = 0; i < word2Size; ++i)
    {
        word2_len += strlen(word2[i]);
    }

    if (word1_len != word2_len)
    {
        return false;
    }

    char *str1 = malloc((word1_len + 1) * sizeof(char));
    char *str2 = malloc((word2_len + 1) * sizeof(char));
    int w1idx = 0;
    int w2idx = 0;
    for (int i = 0; i < word1Size; ++i)
    {
        int wordlen = strlen(word1[i]);
        for (int j = 0; i < wordlen; ++i)
        {
            str1[w1idx] = word1[j];
            w1idx += 1;
        }
        if (i == word1Size - 1)
        {
            str1[word1_len] = '\0';
        }
    }
    for (int i = 0; i < word2Size; ++i)
    {
        int wordlen = strlen(word2[i]);
        for (int j = 0; i < word2_len; ++i)
        {
            str2[w2idx] = word2[j];
            w2idx += 1;
        }
        if (i == word2Size - 1)
        {
            str2[word2_len] = '\0';
        }
    }

    if (!strcmp(str1, str2))
    {
        return true;
    }
    else
    {
        return false;
    }
}