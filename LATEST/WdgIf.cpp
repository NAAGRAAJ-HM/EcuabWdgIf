/******************************************************************************/
/* File   : WdgIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infWdgIf_EcuM.hpp"
#include "infWdgIf_Dcm.hpp"
#include "infWdgIf_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define WDGIF_AR_RELEASE_VERSION_MAJOR                                         4
#define WDGIF_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(WDGIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible WDGIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(WDGIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible WDGIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_WdgIf:
      public abstract_module
   ,  public class_WdgIf_Functionality
{
   public:
      module_WdgIf(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, WDGIF_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, WDGIF_CONFIG_DATA, WDGIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, WDGIF_CODE) DeInitFunction (void);
      FUNC(void, WDGIF_CODE) MainFunction   (void);
};

extern VAR(module_WdgIf, WDGIF_VAR) WdgIf;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, WDGIF_VAR, WDGIF_CONST) gptrinfEcuMClient_WdgIf = &WdgIf;
CONSTP2VAR(infDcmClient,  WDGIF_VAR, WDGIF_CONST) gptrinfDcmClient_WdgIf  = &WdgIf;
CONSTP2VAR(infSchMClient, WDGIF_VAR, WDGIF_CONST) gptrinfSchMClient_WdgIf = &WdgIf;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgWdgIf.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_WdgIf, WDGIF_VAR) WdgIf(
   {
         WDGIF_AR_RELEASE_VERSION_MAJOR
      ,  WDGIF_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, WDGIF_CODE) module_WdgIf::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, WDGIF_CONFIG_DATA, WDGIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == WdgIf_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == WdgIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == WdgIf_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgWdgIf;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == WdgIf_InitCheck)
   }
#endif
}

FUNC(void, WDGIF_CODE) module_WdgIf::DeInitFunction(void){
#if(STD_ON == WdgIf_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == WdgIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == WdgIf_InitCheck)
   }
#endif
}

FUNC(void, WDGIF_CODE) module_WdgIf::MainFunction(void){
#if(STD_ON == WdgIf_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == WdgIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == WdgIf_InitCheck)
   }
#endif
}

FUNC(void, WDGIF_CODE) class_WdgIf_Functionality::SetMode(void){
}

FUNC(void, WDGIF_CODE) class_WdgIf_Functionality::SetTriggerCondition(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

