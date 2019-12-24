#include <stdio.h>
#include <stdlib.h>

/*******************************************************************************
int getchar(void)
    从标准输入流stdin中读取一个字符并返回
    ch = getchar();

int fgetc(FILE *stream)
    从指定输入流stream中读取一个字符并返回，若为文件末尾EOF返回-1
    ch = getchar(fpFile);

int scanf(const char *format, ...)
    %s: 从标准输入流stdin中读取一个单词
        以遇到的第一个非空格字符(' ','\t','\n')开始
        以遇到的下一个空格字符(不包括)结束

int fscanf(FILE *stream, const char *format, ...)
    %s: 从指定输入流stream中读取一个单词
        以遇到的第一个非空格字符(' ','\t','\n')开始
        以遇到的下一个空格字符(不包括)，或文件末尾EOF结束

char *gets(char *str)
    从标准输入stdin流中读取一行
    读取'\n'(不包括)前的所有字符，然后添加'\0'

char *fgets(char *str, int n, FILE *stream)
    从指定输入stream流中读取一行
    当读取到(n-1)个字符，或读取到换行符'\n'，或到达文件末尾EOF结束
    读取'\n'(包括)前的所有字符
*******************************************************************************/

char ch = 0;
char str[50] = {0x00};
FILE *fpFile = NULL;

int main()
{
    if ((fpFile = fopen("input.txt", "r")) == NULL) {
        printf("open \"input.txt\" error!!!");
        exit(1);
    }

#if 0
//    ch = getchar();
//    ch = getchar();
//    ch = getchar();
    ch = getc(fpFile);
    ch = getc(fpFile);
    ch = getc(fpFile);
#endif

#if 1
//    scanf("%s", str);
//    scanf("%s", str);
    fscanf(fpFile, "%s", str);
    fscanf(fpFile, "%s", str);
#endif

#if 0
    gets(str);
#endif


    fclose(fpFile);

    return 0;
}
