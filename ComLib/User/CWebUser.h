/*
 * CWebUser.h
 *
 *  Created on: 2016. 11. 10.
 *      Author: jsryu21
 */

#ifndef USER_CWEBUSER_H_
#define USER_CWEBUSER_H_

#include "CUser.h"

class CWebUser : public CUser
{
public:
	VOID SetWebInformation(LPCTSTR szBoardName);
private:
	TCHAR m_szBoardName[64];
};

#endif /* USER_CWEBUSER_H_ */
