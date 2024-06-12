/******************************************************************************/
/* File   : EcuabWdgIf.cpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "EcuabWdgIf.hpp"
#include "infEcuabWdgIf_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_EcuabWdgIf, ECUABWDGIF_VAR) EcuabWdgIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABWDGIF_CODE) module_EcuabWdgIf::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABWDGIF_CONST,       ECUABWDGIF_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABWDGIF_CONFIG_DATA, ECUABWDGIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabWdgIf_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == EcuabWdgIf_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EcuabWdgIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EcuabWdgIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABWDGIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABWDGIF_CODE) module_EcuabWdgIf::DeInitFunction(
   void
){
#if(STD_ON == EcuabWdgIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabWdgIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EcuabWdgIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABWDGIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABWDGIF_CODE) module_EcuabWdgIf::MainFunction(
   void
){
#if(STD_ON == EcuabWdgIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabWdgIf_InitCheck)
   }
   else{
#if(STD_ON == EcuabWdgIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABWDGIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABWDGIF_CODE) module_EcuabWdgIf::SetMode(
   void
){
}

FUNC(void, ECUABWDGIF_CODE) module_EcuabWdgIf::SetTriggerCondition(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

