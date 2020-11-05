#include <stdio.h>
#include <string.h>

funstr(char string1,char string2)
{

}
int main()
{
    char string1[20];
    char string2[20];
    int count;

    gets(string1);
    gets(string2);
    printf("\n");


    for(int i = 0; i < strlen(string1); i++)
    {
        count = 0;
        for(int j = 0; j < strlen(string2); j++)
        {
            //printf("%c %c [i]=%d[j]=%d count = %d\n",string1[i],string2[j],i,j,count);
            if(string1[i] == string2[j] && string1[i] != ' ')
            {

                count++;


                string2[j] = '0';
            }
        }

        
        if( count>0&&string1[i] != '0')

            printf("%c = %d\n", string1[i],count);
    }



    return 0;
}
