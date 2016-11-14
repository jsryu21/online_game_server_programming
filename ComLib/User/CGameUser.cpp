/*
 * CGameUser.cpp
 *
 *  Created on: 2016. 11. 10.
 *      Author: jsryu21
 */

#include "CGameUser.h"
#include <cstdio>

CGameUser::~CGameUser()
{
	_tprintf(_T("~CGameUser\n"));
}

VOID CGameUser::SetGameInformation(LPCTSTR szCharacterName, USHORT usLevel)
{
	if (!szCharacterName)
	{
		return;
	}

	_tcsncpy(m_szCharacterName, szCharacterName, 64);

	m_usLevel = usLevel;
}

VOID CGameUser::OnUpdatedUserID(VOID)
{
	_tprintf(_T("CGameUser OnUpdatedUserID\n"));
}
