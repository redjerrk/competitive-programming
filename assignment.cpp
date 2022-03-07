#include<stdio.h>
#include<string.h>
#include<iostream>

int main()
{
    FILE *p1,*p2;
    //p1 = fopen("test.c", "r");
    //p2 = fopen("file1.txt", "w");
    int i, len;
    char c[1000];
    bool b = false;
    const int N=100000;
    /*
    while(fgets(c,N,p1)!=NULL)
    {
        len=strlen(c)-1;

        for( i=0; i<strlen(c); i++)
        {
            if((c[i]=='/')&& (c[i+1]=='/'))
            {
                b = true;
            }
            if(b){
                while(c[i] != '\n'){
                    c[i] = '\0';
                }

            }
        }

    }

    fclose(p1);
    fclose(p2);
    */
    p1 = fopen("test.c", "r");
    char a;
    while((a = fgetc(p1))!=EOF)
    {
        printf("%c", a);

    }
    fclose(p1);

    return 0;

}
