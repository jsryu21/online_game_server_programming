/*
 * CGameUser.h
 *
 *  Created on: 2016. 11. 10.
 *      Author: jsryu21
 */

#ifndef USER_CGAMEUSER_H_
#define USER_CGAMEUSER_H_

#include "CUser.h"

class CGameUser : public CUser
{
public:
	~CGameUser();
	VOID SetGameInformation(LPCTSTR szCharacterName, USHORT usLevel);
	VOID OnUpdatedUserID(VOID);
private:
	TCHAR m_szCharacterName[64];
	USHORT m_usLevel;
};



#endif /* USER_CGAMEUSER_H_ */
