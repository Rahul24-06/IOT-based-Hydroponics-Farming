
#ifndef ATMO_INTERRUPTS_HANDLER_H
#define ATMO_INTERRUPTS_HANDLER_H

#ifdef __cplusplus
	extern "C"{
#endif

#include "../atmo/core.h"
#define ATMO_INTERRUPT(ELEMENT, NAME) ATMO_ ## ELEMENT ## _INTERRUPT_  ## NAME

void ATMO_AirQualityCharacteristic_INTERRUPT_trigger();
void ATMO_AirQualityCharacteristic_INTERRUPT_setup();
void ATMO_AirQualityCharacteristic_INTERRUPT_setValue();
void ATMO_AirQualityCharacteristic_INTERRUPT_written();
void ATMO_AirQualityCharacteristic_INTERRUPT_subscibed();
void ATMO_AirQualityCharacteristic_INTERRUPT_unsubscribed();

void ATMO_TemperatureCharacteristic_INTERRUPT_trigger();
void ATMO_TemperatureCharacteristic_INTERRUPT_setup();
void ATMO_TemperatureCharacteristic_INTERRUPT_setValue();
void ATMO_TemperatureCharacteristic_INTERRUPT_written();
void ATMO_TemperatureCharacteristic_INTERRUPT_subscibed();
void ATMO_TemperatureCharacteristic_INTERRUPT_unsubscribed();

void ATMO_HumidityCharacteristic_INTERRUPT_trigger();
void ATMO_HumidityCharacteristic_INTERRUPT_setup();
void ATMO_HumidityCharacteristic_INTERRUPT_setValue();
void ATMO_HumidityCharacteristic_INTERRUPT_written();
void ATMO_HumidityCharacteristic_INTERRUPT_subscibed();
void ATMO_HumidityCharacteristic_INTERRUPT_unsubscribed();

void ATMO_PressureCharacteristic_INTERRUPT_trigger();
void ATMO_PressureCharacteristic_INTERRUPT_setup();
void ATMO_PressureCharacteristic_INTERRUPT_setValue();
void ATMO_PressureCharacteristic_INTERRUPT_written();
void ATMO_PressureCharacteristic_INTERRUPT_subscibed();
void ATMO_PressureCharacteristic_INTERRUPT_unsubscribed();

void ATMO_AmbientLightCharacteristic_INTERRUPT_trigger();
void ATMO_AmbientLightCharacteristic_INTERRUPT_setup();
void ATMO_AmbientLightCharacteristic_INTERRUPT_setValue();
void ATMO_AmbientLightCharacteristic_INTERRUPT_written();
void ATMO_AmbientLightCharacteristic_INTERRUPT_subscibed();
void ATMO_AmbientLightCharacteristic_INTERRUPT_unsubscribed();

void ATMO_SX9500Touch_INTERRUPT_trigger();
void ATMO_SX9500Touch_INTERRUPT_setup();
void ATMO_SX9500Touch_INTERRUPT_getTouchData();
void ATMO_SX9500Touch_INTERRUPT_pressUp();
void ATMO_SX9500Touch_INTERRUPT_pressDown();
void ATMO_SX9500Touch_INTERRUPT_pressLeft();
void ATMO_SX9500Touch_INTERRUPT_pressRight();

void ATMO_Temperature_P_INTERRUPT_trigger();
void ATMO_Temperature_P_INTERRUPT_displayPage();
void ATMO_Temperature_P_INTERRUPT_onDisplayed();
void ATMO_Temperature_P_INTERRUPT_topRightButtonPressed();
void ATMO_Temperature_P_INTERRUPT_bottomRightButtonPressed();
void ATMO_Temperature_P_INTERRUPT_topLeftButtonPressed();
void ATMO_Temperature_P_INTERRUPT_bottomLeftButtonPressed();
void ATMO_Temperature_P_INTERRUPT_setup();
void ATMO_Temperature_P_INTERRUPT_onLeave();
void ATMO_Temperature_P_INTERRUPT_setLabel();

void ATMO_EmbeddedPageController_INTERRUPT_trigger();
void ATMO_EmbeddedPageController_INTERRUPT_setup();
void ATMO_EmbeddedPageController_INTERRUPT_displayRootPage();
void ATMO_EmbeddedPageController_INTERRUPT_navigateUp();
void ATMO_EmbeddedPageController_INTERRUPT_navigateDown();
void ATMO_EmbeddedPageController_INTERRUPT_navigateLeft();
void ATMO_EmbeddedPageController_INTERRUPT_navigateRight();
void ATMO_EmbeddedPageController_INTERRUPT_processTopRightButton();
void ATMO_EmbeddedPageController_INTERRUPT_processBottomRightButton();
void ATMO_EmbeddedPageController_INTERRUPT_processTopLeftButton();
void ATMO_EmbeddedPageController_INTERRUPT_processBottomLeftButton();

void ATMO_Humidity_Pag_INTERRUPT_trigger();
void ATMO_Humidity_Pag_INTERRUPT_displayPage();
void ATMO_Humidity_Pag_INTERRUPT_onDisplayed();
void ATMO_Humidity_Pag_INTERRUPT_topRightButtonPressed();
void ATMO_Humidity_Pag_INTERRUPT_bottomRightButtonPressed();
void ATMO_Humidity_Pag_INTERRUPT_topLeftButtonPressed();
void ATMO_Humidity_Pag_INTERRUPT_bottomLeftButtonPressed();
void ATMO_Humidity_Pag_INTERRUPT_setup();
void ATMO_Humidity_Pag_INTERRUPT_onLeave();
void ATMO_Humidity_Pag_INTERRUPT_setLabel();

void ATMO_Pressure_Pag_INTERRUPT_trigger();
void ATMO_Pressure_Pag_INTERRUPT_displayPage();
void ATMO_Pressure_Pag_INTERRUPT_onDisplayed();
void ATMO_Pressure_Pag_INTERRUPT_topRightButtonPressed();
void ATMO_Pressure_Pag_INTERRUPT_bottomRightButtonPressed();
void ATMO_Pressure_Pag_INTERRUPT_topLeftButtonPressed();
void ATMO_Pressure_Pag_INTERRUPT_bottomLeftButtonPressed();
void ATMO_Pressure_Pag_INTERRUPT_setup();
void ATMO_Pressure_Pag_INTERRUPT_onLeave();
void ATMO_Pressure_Pag_INTERRUPT_setLabel();

void ATMO_ConvertPressur_INTERRUPT_trigger();

void ATMO_AmientLight_Pag_INTERRUPT_trigger();
void ATMO_AmientLight_Pag_INTERRUPT_displayPage();
void ATMO_AmientLight_Pag_INTERRUPT_onDisplayed();
void ATMO_AmientLight_Pag_INTERRUPT_topRightButtonPressed();
void ATMO_AmientLight_Pag_INTERRUPT_bottomRightButtonPressed();
void ATMO_AmientLight_Pag_INTERRUPT_topLeftButtonPressed();
void ATMO_AmientLight_Pag_INTERRUPT_bottomLeftButtonPressed();
void ATMO_AmientLight_Pag_INTERRUPT_setup();
void ATMO_AmientLight_Pag_INTERRUPT_onLeave();
void ATMO_AmientLight_Pag_INTERRUPT_setLabel();

void ATMO_AirQuality_Pag_INTERRUPT_trigger();
void ATMO_AirQuality_Pag_INTERRUPT_displayPage();
void ATMO_AirQuality_Pag_INTERRUPT_onDisplayed();
void ATMO_AirQuality_Pag_INTERRUPT_topRightButtonPressed();
void ATMO_AirQuality_Pag_INTERRUPT_bottomRightButtonPressed();
void ATMO_AirQuality_Pag_INTERRUPT_topLeftButtonPressed();
void ATMO_AirQuality_Pag_INTERRUPT_bottomLeftButtonPressed();
void ATMO_AirQuality_Pag_INTERRUPT_setup();
void ATMO_AirQuality_Pag_INTERRUPT_onLeave();
void ATMO_AirQuality_Pag_INTERRUPT_setLabel();

void ATMO_Interval_INTERRUPT_trigger();
void ATMO_Interval_INTERRUPT_setup();
void ATMO_Interval_INTERRUPT_interval();

void ATMO_TSL2572AmbientLight_INTERRUPT_trigger();
void ATMO_TSL2572AmbientLight_INTERRUPT_setup();
void ATMO_TSL2572AmbientLight_INTERRUPT_setEnabled();
void ATMO_TSL2572AmbientLight_INTERRUPT_setDisabled();
void ATMO_TSL2572AmbientLight_INTERRUPT_setEnabledDisabled();
void ATMO_TSL2572AmbientLight_INTERRUPT_readAmbientLight();

void ATMO_GetTempStr_INTERRUPT_trigger();

void ATMO_GetHumidityStr_INTERRUPT_trigger();

void ATMO_GetPressureStr_INTERRUPT_trigger();

void ATMO_GetLightStr_INTERRUPT_trigger();

void ATMO_GetAirQualityStr_INTERRUPT_trigger();

void ATMO_ENS210TemperatureHumidity_INTERRUPT_trigger();
void ATMO_ENS210TemperatureHumidity_INTERRUPT_setup();
void ATMO_ENS210TemperatureHumidity_INTERRUPT_setEnabled();
void ATMO_ENS210TemperatureHumidity_INTERRUPT_setDisabled();
void ATMO_ENS210TemperatureHumidity_INTERRUPT_setEnabledDisabled();
void ATMO_ENS210TemperatureHumidity_INTERRUPT_readTemperature();
void ATMO_ENS210TemperatureHumidity_INTERRUPT_readHumidity();

void ATMO_MPL3115Pressure_INTERRUPT_trigger();
void ATMO_MPL3115Pressure_INTERRUPT_setup();
void ATMO_MPL3115Pressure_INTERRUPT_setEnabled();
void ATMO_MPL3115Pressure_INTERRUPT_setDisabled();
void ATMO_MPL3115Pressure_INTERRUPT_setEnabledDisabled();
void ATMO_MPL3115Pressure_INTERRUPT_readAltitude();
void ATMO_MPL3115Pressure_INTERRUPT_readPressure();
void ATMO_MPL3115Pressure_INTERRUPT_readPressureKpa();

void ATMO_CCS811AirQuality_INTERRUPT_trigger();
void ATMO_CCS811AirQuality_INTERRUPT_setup();
void ATMO_CCS811AirQuality_INTERRUPT_setEnabled();
void ATMO_CCS811AirQuality_INTERRUPT_setDisabled();
void ATMO_CCS811AirQuality_INTERRUPT_setEnabledDisabled();
void ATMO_CCS811AirQuality_INTERRUPT_readTVOC();
void ATMO_CCS811AirQuality_INTERRUPT_readCO2();

void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_trigger();
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setup();
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightOff();
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightLow();
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightMedium();
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightHigh();


#ifdef __cplusplus
}
#endif

#endif
