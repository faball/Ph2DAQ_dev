/*!
*
* \file BeBoardFWInterface.cc
* \brief BeBoardFWInterface base class of all type of boards
* \author Lorenzo BIDEGAIN, Nicolas Pierre
* \date 28/07/14
*
* Support : mail to : lorenzo.bidegain@cern.ch, nicolas.pierre@cern.ch
*
*/

#define DEV_FLAG         0

#include "BeBoardFWInterface.h"

namespace Ph2_HwInterface
{

	//Constructor, makes the board map
	BeBoardFWInterface::BeBoardFWInterface(const char *puHalConfigFileName):
        RegManager(puHalConfigFileName),
        fNTotalAcq(0),
        fDataFile(0),
	//fNegativeLogicCBC(true),
	fStop(false)
	{
		fData = new Data();
	}


	BeBoardFWInterface::~BeBoardFWInterface()
	{
		delete fData;
    	}


   	 void BeBoardFWInterface::getBoardInfo(Glib& pGlib)
    	{
        	std::cout << "FMC1 present : " << uint32_t(ReadReg(FMC1_PRESENT)) << std::endl;
        	std::cout << "FMC2 present : " << uint32_t(ReadReg(FMC2_PRESENT)) << std::endl;
        	std::cout << "FW version : " << uint32_t(ReadReg(FW_VERSION_MAJOR)) << "." << uint32_t(ReadReg(FW_VERSION_MINOR)) << "." << uint32_t(ReadReg(FW_VERSION_BUILD)) << std::endl;

        	uhal::ValWord<uint32_t> cBoardType = ReadReg(BOARD_TYPE);

        	uint32_t cMask(0x00000000);
        	unsigned int i(0);
        	char cChar;

        	std::cout << "BoardType : ";

        	for( i=24; i < 32; i++ ) cMask |= ( (uint32_t) 1 << i );
        	cChar = ( ( cBoardType & cMask ) >> 24 );

        	std::cout << cChar;

        	for( cMask=0, i=16; i < 24; i++ ) cMask |= (uint32_t) 1 << i;
        	cChar = (( cBoardType & cMask ) >> 16);

        	std::cout << cChar;

        	for( cMask=0, i=8; i < 16; i++ ) cMask |= (uint32_t) 1 << i;
        	cChar = (( cBoardType & cMask ) >> 8);

        	std::cout << cChar;

        	for( cMask=0, i=0; i < 8; i++ ) cMask |= (uint32_t) 1 << i;
        	cChar = (cBoardType & cMask);

        	std::cout << cChar << std::endl;

        	std::cout << "FMC User Board ID : " << uint32_t(ReadReg(FMC_USER_BOARD_ID)) << std::endl;
        	std::cout << "FMC User System ID : " << uint32_t(ReadReg(FMC_USER_SYS_ID)) << std::endl;
        	std::cout << "FMC User Version : " << uint32_t(ReadReg(FMC_USER_VERSION)) << std::endl;
        	std::cout << "Nb FE : " << uint32_t(ReadReg(NB_FE)) << std::endl;
        	std::cout << "Hybrid Type : " << uint32_t(ReadReg(HYBRID_TYPE)) << std::endl;
        	std::cout << "Hybrid Version : " << uint32_t(ReadReg(HYBRID_VERSION)) << std::endl;

	}
}
