/******************************************************************************/
/* File   : WdgIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgWdgIf.hpp"
#include "WdgIf_core.hpp"
#include "infWdgIf_Exp.hpp"
#include "infWdgIf_Imp.hpp"

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
      INTERFACES_EXPORTED_WDGIF
      public abstract_module
   ,  public class_WdgIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

   public:
      module_WdgIf(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, WDGIF_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, WDGIF_CONFIG_DATA, WDGIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, WDGIF_CODE) DeInitFunction (void);
      FUNC(void, WDGIF_CODE) MainFunction   (void);
      WDGIF_CORE_FUNCTIONALITIES
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

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_WdgIf, WDGIF_VAR) WdgIf(
   {
#if(STD_ON == _ReSIM)
   char strModuleName[6] = "WDGIF";
#else
#endif
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
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgWdgIf;
         }
      }
      else{
#if(STD_ON == WdgIf_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == WdgIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == WdgIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  WDGIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, WDGIF_CODE) module_WdgIf::DeInitFunction(void){
#if(STD_ON == WdgIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == WdgIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == WdgIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  WDGIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, WDGIF_CODE) module_WdgIf::MainFunction(void){
#if(STD_ON == WdgIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == WdgIf_InitCheck)
   }
   else{
#if(STD_ON == WdgIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  WDGIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, WDGIF_CODE) module_WdgIf::SetMode(void){
}

FUNC(void, WDGIF_CODE) module_WdgIf::SetTriggerCondition(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

