#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static char arrs[3][10]={"����","��Ȥ","�Ա�"};

char * int2char(int inta);
 void test();

int main(void){
   /*
    strcpy(&arrs[0],"����");
    strcpy(&arrs[1],"Ů");
    strcpy(&arrs[2],"��");

    //printf("|����|��%s��[��Ȥ]��%s;|�Ա�|��%s;\n",arrs[0],arrs[1],arrs[2]);
    int a=10;
    printf("%s",int2char(a));
    test();

   */
   //oper();
//   testSprintf();
//    testConvert();
//    printAscii();

//    int tmp=fac(10);
//    printf("%d",tmp);

    testConv();
    return 0;
}
/**
 *����ת���ַ��͡�
 */
char * int2char(int inta){
    char *str;
    sprintf(str,"%d",inta);
    return str;
}

/**
 *����ַ�ָ�����顣���ԡ�
 */
 void test(){
    char *str[20]={0};//
    str[0]="aaa";
    str[1]="bbb";
    str[2]="ccc";
    memset(str,0,sizeof(char*)*20);
    //�������str����������¸�ֵ���������£�
    str[0]="����";
    str[1]="����";


    printf("%s\n",str[0]);
    printf("%s\n",str[1]);//
    //printf("%s\n",str[2]);//����ط��ᱨ����˵����ճɹ���

 }
 /**
  *����㡣
  */
 void oper(){
    int a=101212;
    int b=1234;
    int c=0;
    a=a&b&c;
    printf("%d",a);
 }

 /**
  *sprintf ���÷���
  */
  void testSprintf(){
    char dest[30]={0};
    char *a="20131202 14:25:55";
    char *b="1234";
    int i=123,k=4567;
//    sprintf(dest,"%6.6s",a+2);//��ȡ�ӿ�ʼλ�õ�ǰ��λ��
//    sprintf(dest,"%06.6s",b+1);//��ȡ�ӿ�ʼλ�õ�ǰ��λ,������λ�ģ���0��
//    sprintf(dest,"%06d",i);//��߲�0
//    sprintf(dest,"%-6d|",k);//�Ҳ��ո�
    sprintf(dest,"%8s|%8s",a,b);
//    sprintf(dest,"%8d|%8d|",i,k);//����ת�����ַ�������ƴ�ӵ�һ��
//    sprintf(dest,"%6s|%4s|%02s|",a,b,"0");
    printf("%s\n",dest);
  }

/**
 *����ת������
 */
void testConvert(){
    char *iStr="123.456";
    float dest=0.0f;
    dest=atof(iStr);
    printf("%0.3f",dest);
}

void printAscii(){
    int i ;
    for(i= 30; i < 127; i++ ) {
        printf("[ %c ]=%#04X\n", i, i, i);
    }
}
/**
 * �ݹ�ʵ��n�Ľ׳ˡ�
 * @param n
 * @return
 */
int fac(int n){
    if(n==1){
        return 1;
    }else{
        return n*fac(n-1);
    }
}

void CardNumber2str(char cardNum[], char str[])
{
    int k;
	for( k= 0; k < 5; k++)
	{
		str[k << 1] = cardNum[k] / 10 + '0';
		str[(k << 1) + 1] = cardNum[k] % 10 + '0';
	}
	str[5 * 2] = '\x0';
}

void str2CardNumber(char str[], char cardNum[])
{
    int k;
	for( k= 0; k < 5; k++)
	{
		cardNum[k] = ((str[k << 1] - '0') * 10) + (str[(k << 1) + 1] - '0');
	}
	cardNum[5] = 0;
}

void testConv(){
    char id[] = "\x0\xa\x1\x0\xa";
	char id2[10];
	char id_str[20] = {0};
	CardNumber2str(id, id_str);
//	str2CardNumber(id_str, id2);
    printf("%s",id_str);
}
