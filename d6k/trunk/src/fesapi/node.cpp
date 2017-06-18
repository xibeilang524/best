/*! @file node.cpp
<PRE>
********************************************************************************
ģ����       :
�ļ���       :  node.cpp
�ļ�ʵ�ֹ��� :  ϵͳ�Ľڵ㶨��
����         :  LiJin
�汾         :  V1.00
--------------------------------------------------------------------------------
��ע         :  <����˵��>
--------------------------------------------------------------------------------
�޸ļ�¼ :
�� ��        �汾     �޸���              �޸�����

********************************************************************************
</PRE>
*  @brief   ϵͳ�Ľڵ㶨��
*  @author  LiJin
*  @version 1.0
*  @date    2016.09.16
*******************************************************************************/

#include "node.h"
#include "fesapi/fesdatadef.h"


#include "log/log.h"  

#include <QObject>
 

CNode::CNode()
{

}

CNode::~CNode()
{

}

CNode::CNode(NODE *pNode)
{
	Q_ASSERT(pNode);
	if (pNode == nullptr)
		return;

	m_nOccNo = pNode->OccNo;
}


/** @}*/