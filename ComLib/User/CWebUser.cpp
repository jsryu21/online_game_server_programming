/*
 * CWebUser.cpp
 *
 *  Created on: 2016. 11. 10.
 *      Author: jsryu21
 */

#include "CWebUser.h"
#include <cstdio>

CWebUser::~CWebUser()
{
	_tprintf(_T("~CWebUser\n"));
}

VOID CWebUser::SetWebInformation(LPCTSTR szBoardName)
{
	if (!szBoardName)
	{
		return;
	}

	_tcsncpy(m_szBoardName, szBoardName, 64);
}

VOID CWebUser::OnUpdatedUserID(VOID)
{
	_tprintf(_T("CWebUser OnUpdatedUserID\n"));
}
