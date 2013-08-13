// -*- C++ -*-
/*!
 * @file  GLUTInput.cpp
 * @brief GLUTInput Component
 * @date $Date$
 *
 * $Id$
 */

#include "GLUTInput.h"

// Module specification
// <rtc-template block="module_spec">
static const char* glutinput_spec[] =
  {
    "implementation_id", "GLUTInput",
    "type_name",         "GLUTInput",
    "description",       "GLUTInput Component",
    "version",           "1.0",
    "vendor",            "ssr",
    "category",          "Experimental",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    // Configuration variables
    "conf.default.debug", "0",
    // Widget
    "conf.__widget__.debug", "text",
    // Constraints
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
GLUTInput::GLUTInput(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_lPOut("lP", m_lP),
    m_lROut("lR", m_lR),
    m_rglSlider0Out("rglSlider0", m_rglSlider0),
    m_rglSlider1Out("rglSlider1", m_rglSlider1),
    m_POV0Out("POV0", m_POV0),
    m_POV1Out("POV1", m_POV1),
    m_rgbButtonsOut("rgbButtons", m_rgbButtons)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
GLUTInput::~GLUTInput()
{
}



RTC::ReturnCode_t GLUTInput::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  addOutPort("lP", m_lPOut);
  addOutPort("lR", m_lROut);
  addOutPort("rglSlider0", m_rglSlider0Out);
  addOutPort("rglSlider1", m_rglSlider1Out);
  addOutPort("POV0", m_POV0Out);
  addOutPort("POV1", m_POV1Out);
  addOutPort("rgbButtons", m_rgbButtonsOut);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // Bind variables and configuration variable
  bindParameter("debug", m_debug, "0");
  // </rtc-template>
  
  return RTC::RTC_OK;
}


RTC::ReturnCode_t GLUTInput::onFinalize()
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t GLUTInput::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t GLUTInput::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t GLUTInput::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t GLUTInput::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t GLUTInput::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t GLUTInput::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t GLUTInput::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t GLUTInput::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t GLUTInput::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t GLUTInput::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void GLUTInputInit(RTC::Manager* manager)
  {
    coil::Properties profile(glutinput_spec);
    manager->registerFactory(profile,
                             RTC::Create<GLUTInput>,
                             RTC::Delete<GLUTInput>);
  }
  
};


