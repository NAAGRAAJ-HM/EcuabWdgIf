/******************************************************************************/
/* File   : WdgIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "WdgIf_Cfg.h"
#include "infWdgIf_EcuM.h"
#include "infWdgIf_Dcm.h"
#include "infWdgIf_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define WDGIF_AR_RELEASE_MAJOR_VERSION                                         4
#define WDGIF_AR_RELEASE_MINOR_VERSION                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(WDGIF_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible WDGIF_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(WDGIF_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible WDGIF_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_WdgIf:
      public abstract_module
{
   public:
      FUNC(void, WDGIF_CODE) InitFunction   (void);
      FUNC(void, WDGIF_CODE) DeInitFunction (void);
      FUNC(void, WDGIF_CODE) GetVersionInfo (void);
      FUNC(void, WDGIF_CODE) MainFunction   (void);

   private:
      CONST(Std_TypeVersionInfo, WDGIF_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_WdgIf, WDGIF_VAR) WdgIf;
CONSTP2VAR(infEcuMClient, WDGIF_VAR, WDGIF_CONST) gptrinfEcuMClient_WdgIf = &WdgIf;
CONSTP2VAR(infDcmClient,  WDGIF_VAR, WDGIF_CONST) gptrinfDcmClient_WdgIf  = &WdgIf;
CONSTP2VAR(infSchMClient, WDGIF_VAR, WDGIF_CONST) gptrinfSchMClient_WdgIf = &WdgIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, WDGIF_CODE) module_WdgIf::InitFunction(void){
   WdgIf.IsInitDone = E_OK;
}

FUNC(void, WDGIF_CODE) module_WdgIf::DeInitFunction(void){
   WdgIf.IsInitDone = E_NOT_OK;
}

FUNC(void, WDGIF_CODE) module_WdgIf::GetVersionInfo(void){
#if(STD_ON == WdgIf_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, WDGIF_CODE) module_WdgIf::MainFunction(void){
}

#include "WdgIf_Unused.h"

FUNC(void, WDGIF_CODE) class_WdgIf_Unused::SetMode(void){
}

FUNC(void, WDGIF_CODE) class_WdgIf_Unused::SetTriggerCondition(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

