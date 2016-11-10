/*
 * CWebUser.cpp
 *
 *  Created on: 2016. 11. 10.
 *      Author: jsryu21
 */

#include "CWebUser.h"

VOID CWebUser::SetWebInformation(LPCTSTR szBoardName)
{
	if (!szBoardName)
	{
		return;
	}

	_tcsncpy(m_szBoardName, szBoardName, 64);
}
