#include <stdio.h>
 
int main()
{
	//������д���ݣ�������0~9д�뵽data.txt�ļ���
	FILE *fpWrite=fopen("data.txt","w");
	if(fpWrite==NULL)
	{
		return 0;
	}
	for(int i=0;i<10;i++)
		fprintf(fpWrite,"%d ",i);
	fclose(fpWrite);
	//�����Ƕ����ݣ������������ݴ浽����a[10]�У����Ҵ�ӡ������̨��
	int a[10]={0};
	FILE *fpRead=fopen("data.txt","r");
	if(fpRead==NULL)
	{
		return 0;
	}
	for(int i=0;i<10;i++)
	{
		fscanf(fpRead,"%d ",&a[i]);
		printf("%d ",a[i]);
	}
	getchar();//�ȴ�
 
	return 1;
}

