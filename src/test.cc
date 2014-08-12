/*

FileName :                     test.cpp
Content :                      Little test program to see if everything is working fine
Programmer :                   Nicolas PIERRE, Lorenzo Bidegain
Version :                      0.3
Date of creation :             24/06/14
Support :                      mail to : nico.pierre@cern.ch, lorenzo.bidegain@cern.ch

*/

#include "../HWDescription/Cbc.h"
#include "../HWDescription/Module.h"
#include "../HWDescription/Glib.h"
#include "../HWInterface/CbcInterface.h"
#include "../HWInterface/GLIBInterface.h"
#include "../HWDescription/Definition.h"

using namespace Ph2_HwDescription;
using namespace Ph2_HwInterface;

int main()
{
	//Two Cbc
	Cbc cCbc_00;
	Cbc cCbc_01;
	cCbc_01.fCbcId=1;

	//One Module
	Module cModule_00;
	cModule_00.fModuleId=3;
	cModule_00.addCbc(cCbc_00);
	cModule_00.addCbc(cCbc_01);

	//One Glib
	Glib cGlib_00;
	cGlib_00.addModule(cModule_00);

	GlibInterface cGlibInterface(UHAL_CONNECTION_FILE);
	CbcInterface cCbcInterface(UHAL_CONNECTION_FILE);

	cGlibInterface.ConfigureGlib(cGlib_00);

	cCbcInterface.ConfigureCbc(cGlib_00.getModule(3)->getCbc(0));

	cCbcInterface.ConfigureCbc(cGlib_00.getModule(3)->getCbc(1));

	std::cout << "\nChanging Value of VCth...\n" << std::endl;

        cCbcInterface.WriteBroadcast(cGlib_00.getModule(3),"VCth",0xFF);;

        std::cout << "\nValue of VCth Changed !\n" << std::endl;

	cGlibInterface.UpdateGlibRead(cGlib_00,EXT_TRG);
	cGlibInterface.UpdateGlibRead(cGlib_00,FAKE_DATA);

	uint32_t dump1 = cGlib_00.getReg(EXT_TRG);
	uint32_t dump2 = cGlib_00.getReg(FAKE_DATA);

	std::cout << "\nThe value for EXT_TRG is " << dump1 << std::endl;
	std::cout << "\nThe value for FAKE_DATA is " << dump2 << std::endl;

    cGlib_00.getModule(3)->getCbc(0)->writeRegValues("output/output_00.txt");
	cGlib_00.getModule(3)->getCbc(1)->writeRegValues("output/output_01.txt");

	std::cout << "\nHurray, it works !!" << std::endl;

	return 0;
}
