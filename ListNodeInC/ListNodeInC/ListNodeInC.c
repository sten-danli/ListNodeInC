#include<stdio.h>


struct SignalNode
{
	void* data;
	struct SignalNode* next;
}typedef SNode;

SNode* Sig_CreateNode(void* data, int dataSize)
{
	//malloc
	SNode* p = (SNode*)malloc(sizeof(SNode));
	if (p == NULL)
	{
		printf("malloc_error");
	}
	//让next指向默认空间
	p->data = NULL;

	//创建节点数据空间
	if (NULL != data)
	{
		p->data = malloc(dataSize);
		if (p == NULL) { printf("malloc_error"); }

		memcpy(p->data, data, dataSize);
	}
	return p;
}

void main()
{
	char arr[10] = { sten };
	Sig_CreateNode(arr, sizeof(arr));
}