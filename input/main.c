#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*******************************************************************************
int getchar(void)
    �ӱ�׼������stdin�ж�ȡһ���ַ�������
    ch = getchar();

int fgetc(FILE *stream)
    ��ָ��������stream�ж�ȡһ���ַ������أ���Ϊ�ļ�ĩβEOF����-1
    ch = getchar(fpFile);

int scanf(const char *format, ...)
    %s: �ӱ�׼������stdin�ж�ȡһ������
        �Էǿո��ַ�(' ','\t','\n')��ʼ,����һ��(������)�ո��ַ�����

int sscanf(const char *str, const char *format, ...)
    %s: ���ַ����ж�ȡһ������
        �Էǿո��ַ�(' ','\t','\n')��ʼ,����һ��(������)�ո��ַ�����

int fscanf(FILE *stream, const char *format, ...)
    %s: ��ָ��������stream�ж�ȡһ������,���ƶ�������λ�ñ�ʶ
        �Էǿո��ַ�(' ','\t','\n')��ʼ,����һ��(������)�ո��ַ����ļ�βEOF����

char *gets(char *str)
    �ӱ�׼����stdin���ж�ȡһ��
    ��ȡ'\n'(������)ǰ�������ַ���Ȼ�����'\0'

char *fgets(char *str, int n, FILE *stream)
    ��ָ������stream���ж�ȡһ��,���ƶ�������λ�ñ�ʶ
    ����ȡ��(n-1)���ַ������ȡ�����з�'\n'���򵽴��ļ�ĩβEOF����
    ��ȡ'\n'(����)ǰ�������ַ�
*******************************************************************************/

char ch = 0;
char buf[50] = "\t\nhello wallying!\n";
char str[50] = {0x00};
FILE *fpFile = NULL;

int main()
{
    if ((fpFile = fopen("input.txt", "r")) == NULL) {
        printf("open \"input.txt\" error!!!");
        exit(1);
    }

#if 0
    ch = getchar();
    ch = getchar();
    ch = getchar();
    ch = getc(fpFile);
    ch = getc(fpFile);
    ch = getc(fpFile);
#endif

#if 1
//    memset(str, 0x00, sizeof(str));
//    scanf("%s", str);
//    scanf("%s", str);
    memset(str, 0x00, sizeof(str));
    sscanf(buf, "%s", str);
    sscanf(buf, "%*[ \t\n]%[^!]", str);
    memset(str, 0x00, sizeof(str));
    fscanf(fpFile, "%s", str);
    fscanf(fpFile, "%s", str);
#endif

#if 0
    gets(str);
#endif


    fclose(fpFile);

    return 0;
}
