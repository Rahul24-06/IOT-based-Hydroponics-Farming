
#ifndef ATMO_CALLBACKS_H
#define ATMO_CALLBACKS_H

#include "atmosphere_platform.h"
#include "atmosphere_properties.h"
#include "atmosphere_variables.h"
#include "atmosphere_triggerHandler.h"
#include "atmosphere_interruptsHandler.h"
#include "atmosphere_embedded_libraries.h"
#include "atmosphere_abilityHandler.h"

#include "atmosphere_driverinstance.h"

#define ATMO_CALLBACK(ELEMENT, NAME) ELEMENT ## _ ## NAME

void ATMO_Setup();

ATMO_Status_t AirQualityCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQualityCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQualityCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQualityCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQualityCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQualityCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TemperatureCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TemperatureCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TemperatureCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TemperatureCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TemperatureCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TemperatureCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t HumidityCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t HumidityCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t HumidityCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t HumidityCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t HumidityCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t HumidityCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t PressureCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t PressureCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t PressureCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t PressureCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t PressureCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t PressureCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmbientLightCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmbientLightCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmbientLightCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmbientLightCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmbientLightCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmbientLightCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_getTouchData(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_pressUp(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_pressDown(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_pressLeft(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_pressRight(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Temperature_P_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Temperature_P_displayPage(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Temperature_P_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Temperature_P_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Temperature_P_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Temperature_P_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Temperature_P_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Temperature_P_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Temperature_P_onLeave(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Temperature_P_setLabel(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_displayRootPage(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_navigateUp(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_navigateDown(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_navigateLeft(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_navigateRight(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_processTopRightButton(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_processBottomRightButton(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_processTopLeftButton(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_processBottomLeftButton(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Humidity_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Humidity_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Humidity_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Humidity_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Humidity_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Humidity_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Humidity_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Humidity_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Humidity_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Humidity_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Pressure_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Pressure_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Pressure_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Pressure_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Pressure_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Pressure_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Pressure_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Pressure_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Pressure_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Pressure_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t ConvertPressur_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmientLight_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmientLight_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmientLight_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmientLight_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmientLight_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmientLight_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmientLight_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmientLight_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmientLight_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AmientLight_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval_interval(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TSL2572AmbientLight_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TSL2572AmbientLight_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TSL2572AmbientLight_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TSL2572AmbientLight_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TSL2572AmbientLight_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t TSL2572AmbientLight_readAmbientLight(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t GetTempStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t GetHumidityStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t GetPressureStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t GetLightStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t GetAirQualityStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t ENS210TemperatureHumidity_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t ENS210TemperatureHumidity_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t ENS210TemperatureHumidity_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t ENS210TemperatureHumidity_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t ENS210TemperatureHumidity_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t ENS210TemperatureHumidity_readTemperature(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t ENS210TemperatureHumidity_readHumidity(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t MPL3115Pressure_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t MPL3115Pressure_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t MPL3115Pressure_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t MPL3115Pressure_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t MPL3115Pressure_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t MPL3115Pressure_readAltitude(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t MPL3115Pressure_readPressure(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t MPL3115Pressure_readPressureKpa(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_readTVOC(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_readCO2(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightOff(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightLow(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightMedium(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightHigh(ATMO_Value_t *in, ATMO_Value_t *out);
#endif
