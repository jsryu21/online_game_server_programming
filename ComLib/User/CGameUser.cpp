/*
 * CGameUser.cpp
 *
 *  Created on: 2016. 11. 10.
 *      Author: jsryu21
 */

#include "CGameUser.h"

VOID CGameUser::SetGameInformation(LPCTSTR szCharacterName, USHORT usLevel)
{
	if (!szCharacterName)
	{
		return;
	}

	_tcsncpy(m_szCharacterName, szCharacterName, 64);

	m_usLevel = usLevel;
}
