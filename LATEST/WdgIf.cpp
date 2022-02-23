/*****************************************************/
/* File   : WdgIf.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "WdgIf_EcuM.h"
#include "WdgIf_SchM.h"
#include "WdgIf_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_WdgIf:
      public abstract_module
   ,  public interface_WdgIf_EcuM
   ,  public interface_WdgIf_SchM
{
   public:
      FUNC(void, WDGIF_CODE) InitFunction   (void);
      FUNC(void, WDGIF_CODE) DeInitFunction (void);
      FUNC(void, WDGIF_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_WdgIf WdgIf;

interface_WdgIf_EcuM *EcuM_Client_ptr_WdgIf = &WdgIf;
interface_WdgIf_SchM *SchM_Client_ptr_WdgIf = &WdgIf;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, WDGIF_CODE) module_WdgIf::InitFunction(void){
}

FUNC(void, WDGIF_CODE) module_WdgIf::DeInitFunction(void){
}

FUNC(void, WDGIF_CODE) module_WdgIf::MainFunction(void){
}

FUNC(void, WDGIF_CODE) class_WdgIf_Unused::SetMode(void){
}

FUNC(void, WDGIF_CODE) class_WdgIf_Unused::SetTriggerCondition(void){
}

FUNC(void, WDGIF_CODE) class_WdgIf_Unused::GetVersionInfo(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

