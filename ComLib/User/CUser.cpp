/*
 * CUser.cpp
 *
 *  Created on: 2016. 11. 10.
 *      Author: jsryu21
 */

#include "CUser.h"
#include <cstdio>

CUser::CUser(VOID)
{
	ZeroMemory(m_szUserID, sizeof(TCHAR) * 64);
	ZeroMemory(m_szPassword, sizeof(TCHAR) * 64);
	ZeroMemory(m_szName, sizeof(TCHAR) * 64);
	ZeroMemory(m_szAddress, sizeof(TCHAR) * 64);

	m_usAge = 0;
}

CUser::~CUser(VOID)
{
	_tprintf(_T("~CUser\n"));
}

VOID CUser::SetUserID(LPCTSTR szUserID, LPCTSTR szPassword)
{
	if (!szUserID || !szPassword)
	{
		return;
	}

	_tcsncpy(m_szUserID, szUserID, 64);

	OnUpdatedUserID();

	_tcsncpy(m_szPassword, szPassword, 64);
}

VOID CUser::SetUserInformation(LPCTSTR szName, LPCTSTR szAddress, USHORT usAge)
{
	if (!szName || !szAddress)
	{
		return;
	}

	_tcsncpy(m_szName, szName, 64);
	_tcsncpy(m_szAddress, szAddress, 64);

	m_usAge = usAge;
}
