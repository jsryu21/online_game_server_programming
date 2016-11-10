/*
 * CUser.h
 *
 *  Created on: 2016. 11. 10.
 *      Author: jsryu21
 */

#ifndef USER_CUSER_H_
#define USER_CUSER_H_

#include "tchar.h"
#include "windows.h"

class CUser
{
public:
	CUser(VOID);
	~CUser(VOID);
	VOID SetUserID(LPCTSTR szUserID, LPCTSTR szPasswd);
	VOID SetUserInformation(LPCTSTR szName, LPCTSTR szAddress, USHORT usAge);
private:
	TCHAR m_szUserID[64];
	TCHAR m_szPassword[64];
	TCHAR m_szName[64];
	TCHAR m_szAddress[64];
	USHORT m_usAge;
};

#endif /* USER_CUSER_H_ */
