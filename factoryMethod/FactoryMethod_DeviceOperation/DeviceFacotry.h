///////////////////////////////////////////////////////////
//  DeviceFacotry.h
//  Implementation of the Interface DeviceFacotry
//  Created on:      06-11ÔÂ-2020 19:07:01
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_2A995D8F_64ED_4065_9F1D_84E0F0EEDA7C__INCLUDED_)
#define EA_2A995D8F_64ED_4065_9F1D_84E0F0EEDA7C__INCLUDED_

class DeviceFacotry
{

public:
	DeviceFacotry() {

	}

	virtual ~DeviceFacotry() {

	}

	virtual void createDevice() =0;
	virtual bool openDoor(std::string channelId) =0;
	virtual void passStatus() =0;

};
#endif // !defined(EA_2A995D8F_64ED_4065_9F1D_84E0F0EEDA7C__INCLUDED_)
