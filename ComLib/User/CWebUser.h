/*
 * CWebUser.h
 *
 *  Created on: 2016. 11. 10.
 *      Author: jsryu21
 */

#ifndef USER_CWEBUSER_H_
#define USER_CWEBUSER_H_

#include "CUser.h"
#include <cstdio>

class CWebUser : public CUser
{
public:
	~CWebUser();
	VOID SetWebInformation(LPCTSTR szBoardName);
	VOID OnUpdatedUserID(VOID);
private:
	TCHAR m_szBoardName[64];
};

#endif /* USER_CWEBUSER_H_ */
