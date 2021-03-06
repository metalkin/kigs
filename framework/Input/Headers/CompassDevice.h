#ifndef _CompassDevice_H_
#define _CompassDevice_H_

#include "InputDevice.h"

class CompassDevice : public InputDevice
{
public:
	//! buttons list
	
	
	DECLARE_ABSTRACT_CLASS_INFO(CompassDevice,InputDevice,Input)
	
	/**
	 * \brief	constructor
	 * \fn 		CompassDevice(const kstl::string& name,DECLARE_CLASS_NAME_TREE_ARG);
	 * \param	name : instance name
	 * \param	DECLARE_CLASS_NAME_TREE_ARG : list of arguments
	 */
	CompassDevice(const kstl::string& name,DECLARE_CLASS_NAME_TREE_ARG);
	

	/**
	 * \brief	retreive current position
	 * \fn 		void			getPos(kfloat& posX,kfloat& posY)
	 * \param	posX : position on x axis (in/out param)
	 * \param	posY : position on y axis (in/out param)
	 */
	void			getPos(kfloat& posX,kfloat& posY,kfloat& posZ){posX=myCompX; posY=myCompY; posZ=myCompZ;}
	
	
	/**
	 * \brief	compute current position
	 * \fn 		virtual void	Update();
	 */
	void	UpdateDevice() override;

	
	
protected:
	/**
	 * \brief	destructor
	 * \fn 		~MouseDevice();
	 */
	virtual ~CompassDevice(); 
	
	virtual void	Start() = 0;
	virtual void	Stop() = 0;

	maFloat	myCompX;
	maFloat	myCompY;
	maFloat	myCompZ;
	
	maInt	myRate;

};

#endif //_CompassDevice_H_