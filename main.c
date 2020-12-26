#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int i, count, count1;
    i = 0;
    count = 0;
    count1 = 0;

    printf("zadacha 1A (uberem lishnie probeli)\n");
    printf("vvedite stroku\n");
    char s[100], s1[100], * last, *last1;
    gets(s);
    strcpy(s1, s);
    char * pch = strtok (s," ");
    printf("otvet:\n");
    while (pch != NULL)
    {
        printf("%s", pch);
        pch = strtok(NULL," ");
        if (pch != NULL)
        {

            if (strcmp(pch, ".") != 0)
            {
                printf(" ");
                last = pch;
                count1++;
            }

        }
    }
    printf("\n");
    //puts(s1);
    char a[50][50];

    printf("\nzadacha 2, udalit slova, sovpadaushie s poslednim\n");

    last1 = last;
    if (last[strlen(last) - 1] == '.')
        last[strlen(last) - 1] = '\0';

    char * pch1 = strtok (s1," ");
    printf("otvet:\n");
    while (pch1 != NULL)
    {
        if (pch1 != NULL)
        {
            if (strcmp(pch1, ".") != 0)
            {
                if (strcmp(pch1, last) != 0)
                {
                    if (count1 > 0)
                    {
                        printf("%s ", pch1);
                        strcpy(a[i], pch1);
                        i++;
                        count++;
                    }
                }
                count1--;
            }

        }
        pch1 = strtok(NULL," ");
    }



    printf("\n\nzadacha 3, pomenyat 1 i poslednyu bukvu kazhdogo slova\n");
    printf("onvet:\n");

    char word[50];
    char sym = " ";

    for (i = 0; i < count; i++)
    {
        strcpy(word, a[i]);
        sym = word[0];
        word[0] = word[strlen(word) - 1];
        word[strlen(word) - 1] = sym;
        printf("%s ", word);
    }






    return 0;
}
