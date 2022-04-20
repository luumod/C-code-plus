/*支持链表操作的函数*/
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/*局部函数原型*/
static void CopyToNode(Item item,Node* pnode);

/*接口函数*/
//把链表设置为空
void InitializeList(List)
