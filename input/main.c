#include <stdio.h>
#include <stdlib.h>

/*******************************************************************************
int getchar(void)
    �ӱ�׼������stdin�ж�ȡһ���ַ�������
    ch = getchar();

int fgetc(FILE *stream)
    ��ָ��������stream�ж�ȡһ���ַ������أ���Ϊ�ļ�ĩβEOF����-1
    ch = getchar(fpFile);

int scanf(const char *format, ...)
    %s: �ӱ�׼������stdin�ж�ȡһ������
        �������ĵ�һ���ǿո��ַ�(' ','\t','\n')��ʼ
        ����������һ���ո��ַ�(������)����

int fscanf(FILE *stream, const char *format, ...)
    %s: ��ָ��������stream�ж�ȡһ������
        �������ĵ�һ���ǿո��ַ�(' ','\t','\n')��ʼ
        ����������һ���ո��ַ�(������)�����ļ�ĩβEOF����

char *gets(char *str)
    �ӱ�׼����stdin���ж�ȡһ��
    ��ȡ'\n'(������)ǰ�������ַ���Ȼ�����'\0'

char *fgets(char *str, int n, FILE *stream)
    ��ָ������stream���ж�ȡһ��
    ����ȡ��(n-1)���ַ������ȡ�����з�'\n'���򵽴��ļ�ĩβEOF����
    ��ȡ'\n'(����)ǰ�������ַ�
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
