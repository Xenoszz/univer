#include<stdio.h>
#include<conio.h>

int main(){
    int i,count[10] = {},num = 1,round = 0,pos = 1,max;
    char sentence[100],word[100][100];
    printf("Input sentence : ");
    gets(sentence);
    for ( i = 0;sentence[i] != '\0'; i++)
    {
        if(sentence[i] != ' ' && sentence[i] != '.')
        {
            word[num][round] = sentence[i];
            round += 1;
            count[num] += 1;
        }
        else if (sentence[i] != '.')
        {
            num += 1;
            round = 0;
        }
    }
    for(i = num ; i > 0 ; i--)
    {
        printf("word[%d] : %s\n",i,word[i]);
    }

    max = count[1];
    for ( i = 1; i <= num ; i++)
    {
        if(max < count[i]) 
        {
            max = count[i];
            pos = i;
            
        }
        printf(" i = %d\n",i);
    }
    printf("The longest word consists of %d characters.\n",max);
    printf("It is in position no. %d of the sentence.\n",pos);
    printf("This word is %s.",word[pos]);
    getch();
    return 0;
}