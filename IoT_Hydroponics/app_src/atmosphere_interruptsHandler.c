#include "atmosphere_interruptsHandler.h"
#include "atmosphere_abilityHandler.h"

void ATMO_AirQualityCharacteristic_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, trigger), NULL);
}
void ATMO_AirQualityCharacteristic_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, setup), NULL);
}
void ATMO_AirQualityCharacteristic_INTERRUPT_setValue() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, setValue), NULL);
}
void ATMO_AirQualityCharacteristic_INTERRUPT_written() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, written), NULL);
}
void ATMO_AirQualityCharacteristic_INTERRUPT_subscibed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, subscibed), NULL);
}
void ATMO_AirQualityCharacteristic_INTERRUPT_unsubscribed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, unsubscribed), NULL);
}
void ATMO_TemperatureCharacteristic_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TemperatureCharacteristic, trigger), NULL);
}
void ATMO_TemperatureCharacteristic_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TemperatureCharacteristic, setup), NULL);
}
void ATMO_TemperatureCharacteristic_INTERRUPT_setValue() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TemperatureCharacteristic, setValue), NULL);
}
void ATMO_TemperatureCharacteristic_INTERRUPT_written() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TemperatureCharacteristic, written), NULL);
}
void ATMO_TemperatureCharacteristic_INTERRUPT_subscibed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TemperatureCharacteristic, subscibed), NULL);
}
void ATMO_TemperatureCharacteristic_INTERRUPT_unsubscribed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TemperatureCharacteristic, unsubscribed), NULL);
}
void ATMO_HumidityCharacteristic_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(HumidityCharacteristic, trigger), NULL);
}
void ATMO_HumidityCharacteristic_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(HumidityCharacteristic, setup), NULL);
}
void ATMO_HumidityCharacteristic_INTERRUPT_setValue() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(HumidityCharacteristic, setValue), NULL);
}
void ATMO_HumidityCharacteristic_INTERRUPT_written() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(HumidityCharacteristic, written), NULL);
}
void ATMO_HumidityCharacteristic_INTERRUPT_subscibed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(HumidityCharacteristic, subscibed), NULL);
}
void ATMO_HumidityCharacteristic_INTERRUPT_unsubscribed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(HumidityCharacteristic, unsubscribed), NULL);
}
void ATMO_PressureCharacteristic_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(PressureCharacteristic, trigger), NULL);
}
void ATMO_PressureCharacteristic_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(PressureCharacteristic, setup), NULL);
}
void ATMO_PressureCharacteristic_INTERRUPT_setValue() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(PressureCharacteristic, setValue), NULL);
}
void ATMO_PressureCharacteristic_INTERRUPT_written() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(PressureCharacteristic, written), NULL);
}
void ATMO_PressureCharacteristic_INTERRUPT_subscibed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(PressureCharacteristic, subscibed), NULL);
}
void ATMO_PressureCharacteristic_INTERRUPT_unsubscribed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(PressureCharacteristic, unsubscribed), NULL);
}
void ATMO_AmbientLightCharacteristic_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmbientLightCharacteristic, trigger), NULL);
}
void ATMO_AmbientLightCharacteristic_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmbientLightCharacteristic, setup), NULL);
}
void ATMO_AmbientLightCharacteristic_INTERRUPT_setValue() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmbientLightCharacteristic, setValue), NULL);
}
void ATMO_AmbientLightCharacteristic_INTERRUPT_written() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmbientLightCharacteristic, written), NULL);
}
void ATMO_AmbientLightCharacteristic_INTERRUPT_subscibed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmbientLightCharacteristic, subscibed), NULL);
}
void ATMO_AmbientLightCharacteristic_INTERRUPT_unsubscribed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmbientLightCharacteristic, unsubscribed), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, trigger), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, setup), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_getTouchData() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, getTouchData), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_pressUp() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, pressUp), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_pressDown() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, pressDown), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_pressLeft() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, pressLeft), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_pressRight() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, pressRight), NULL);
}
void ATMO_Temperature_P_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Temperature_P, trigger), NULL);
}
void ATMO_Temperature_P_INTERRUPT_displayPage() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Temperature_P, displayPage), NULL);
}
void ATMO_Temperature_P_INTERRUPT_onDisplayed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Temperature_P, onDisplayed), NULL);
}
void ATMO_Temperature_P_INTERRUPT_topRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Temperature_P, topRightButtonPressed), NULL);
}
void ATMO_Temperature_P_INTERRUPT_bottomRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Temperature_P, bottomRightButtonPressed), NULL);
}
void ATMO_Temperature_P_INTERRUPT_topLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Temperature_P, topLeftButtonPressed), NULL);
}
void ATMO_Temperature_P_INTERRUPT_bottomLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Temperature_P, bottomLeftButtonPressed), NULL);
}
void ATMO_Temperature_P_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Temperature_P, setup), NULL);
}
void ATMO_Temperature_P_INTERRUPT_onLeave() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Temperature_P, onLeave), NULL);
}
void ATMO_Temperature_P_INTERRUPT_setLabel() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Temperature_P, setLabel), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, trigger), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, setup), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_displayRootPage() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, displayRootPage), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_navigateUp() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, navigateUp), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_navigateDown() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, navigateDown), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_navigateLeft() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, navigateLeft), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_navigateRight() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, navigateRight), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_processTopRightButton() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, processTopRightButton), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_processBottomRightButton() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, processBottomRightButton), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_processTopLeftButton() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, processTopLeftButton), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_processBottomLeftButton() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, processBottomLeftButton), NULL);
}
void ATMO_Humidity_Pag_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Humidity_Pag, trigger), NULL);
}
void ATMO_Humidity_Pag_INTERRUPT_displayPage() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Humidity_Pag, displayPage), NULL);
}
void ATMO_Humidity_Pag_INTERRUPT_onDisplayed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Humidity_Pag, onDisplayed), NULL);
}
void ATMO_Humidity_Pag_INTERRUPT_topRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Humidity_Pag, topRightButtonPressed), NULL);
}
void ATMO_Humidity_Pag_INTERRUPT_bottomRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Humidity_Pag, bottomRightButtonPressed), NULL);
}
void ATMO_Humidity_Pag_INTERRUPT_topLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Humidity_Pag, topLeftButtonPressed), NULL);
}
void ATMO_Humidity_Pag_INTERRUPT_bottomLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Humidity_Pag, bottomLeftButtonPressed), NULL);
}
void ATMO_Humidity_Pag_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Humidity_Pag, setup), NULL);
}
void ATMO_Humidity_Pag_INTERRUPT_onLeave() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Humidity_Pag, onLeave), NULL);
}
void ATMO_Humidity_Pag_INTERRUPT_setLabel() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Humidity_Pag, setLabel), NULL);
}
void ATMO_Pressure_Pag_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Pressure_Pag, trigger), NULL);
}
void ATMO_Pressure_Pag_INTERRUPT_displayPage() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Pressure_Pag, displayPage), NULL);
}
void ATMO_Pressure_Pag_INTERRUPT_onDisplayed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Pressure_Pag, onDisplayed), NULL);
}
void ATMO_Pressure_Pag_INTERRUPT_topRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Pressure_Pag, topRightButtonPressed), NULL);
}
void ATMO_Pressure_Pag_INTERRUPT_bottomRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Pressure_Pag, bottomRightButtonPressed), NULL);
}
void ATMO_Pressure_Pag_INTERRUPT_topLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Pressure_Pag, topLeftButtonPressed), NULL);
}
void ATMO_Pressure_Pag_INTERRUPT_bottomLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Pressure_Pag, bottomLeftButtonPressed), NULL);
}
void ATMO_Pressure_Pag_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Pressure_Pag, setup), NULL);
}
void ATMO_Pressure_Pag_INTERRUPT_onLeave() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Pressure_Pag, onLeave), NULL);
}
void ATMO_Pressure_Pag_INTERRUPT_setLabel() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Pressure_Pag, setLabel), NULL);
}
void ATMO_ConvertPressur_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(ConvertPressur, trigger), NULL);
}
void ATMO_AmientLight_Pag_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmientLight_Pag, trigger), NULL);
}
void ATMO_AmientLight_Pag_INTERRUPT_displayPage() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmientLight_Pag, displayPage), NULL);
}
void ATMO_AmientLight_Pag_INTERRUPT_onDisplayed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmientLight_Pag, onDisplayed), NULL);
}
void ATMO_AmientLight_Pag_INTERRUPT_topRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmientLight_Pag, topRightButtonPressed), NULL);
}
void ATMO_AmientLight_Pag_INTERRUPT_bottomRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmientLight_Pag, bottomRightButtonPressed), NULL);
}
void ATMO_AmientLight_Pag_INTERRUPT_topLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmientLight_Pag, topLeftButtonPressed), NULL);
}
void ATMO_AmientLight_Pag_INTERRUPT_bottomLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmientLight_Pag, bottomLeftButtonPressed), NULL);
}
void ATMO_AmientLight_Pag_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmientLight_Pag, setup), NULL);
}
void ATMO_AmientLight_Pag_INTERRUPT_onLeave() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmientLight_Pag, onLeave), NULL);
}
void ATMO_AmientLight_Pag_INTERRUPT_setLabel() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AmientLight_Pag, setLabel), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, trigger), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_displayPage() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, displayPage), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_onDisplayed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, onDisplayed), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_topRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, topRightButtonPressed), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_bottomRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, bottomRightButtonPressed), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_topLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, topLeftButtonPressed), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_bottomLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, bottomLeftButtonPressed), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, setup), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_onLeave() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, onLeave), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_setLabel() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, setLabel), NULL);
}
void ATMO_Interval_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval, trigger), NULL);
}
void ATMO_Interval_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval, setup), NULL);
}
void ATMO_Interval_INTERRUPT_interval() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval, interval), NULL);
}
void ATMO_TSL2572AmbientLight_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TSL2572AmbientLight, trigger), NULL);
}
void ATMO_TSL2572AmbientLight_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TSL2572AmbientLight, setup), NULL);
}
void ATMO_TSL2572AmbientLight_INTERRUPT_setEnabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TSL2572AmbientLight, setEnabled), NULL);
}
void ATMO_TSL2572AmbientLight_INTERRUPT_setDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TSL2572AmbientLight, setDisabled), NULL);
}
void ATMO_TSL2572AmbientLight_INTERRUPT_setEnabledDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TSL2572AmbientLight, setEnabledDisabled), NULL);
}
void ATMO_TSL2572AmbientLight_INTERRUPT_readAmbientLight() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(TSL2572AmbientLight, readAmbientLight), NULL);
}
void ATMO_GetTempStr_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(GetTempStr, trigger), NULL);
}
void ATMO_GetHumidityStr_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(GetHumidityStr, trigger), NULL);
}
void ATMO_GetPressureStr_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(GetPressureStr, trigger), NULL);
}
void ATMO_GetLightStr_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(GetLightStr, trigger), NULL);
}
void ATMO_GetAirQualityStr_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(GetAirQualityStr, trigger), NULL);
}
void ATMO_ENS210TemperatureHumidity_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(ENS210TemperatureHumidity, trigger), NULL);
}
void ATMO_ENS210TemperatureHumidity_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(ENS210TemperatureHumidity, setup), NULL);
}
void ATMO_ENS210TemperatureHumidity_INTERRUPT_setEnabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(ENS210TemperatureHumidity, setEnabled), NULL);
}
void ATMO_ENS210TemperatureHumidity_INTERRUPT_setDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(ENS210TemperatureHumidity, setDisabled), NULL);
}
void ATMO_ENS210TemperatureHumidity_INTERRUPT_setEnabledDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(ENS210TemperatureHumidity, setEnabledDisabled), NULL);
}
void ATMO_ENS210TemperatureHumidity_INTERRUPT_readTemperature() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(ENS210TemperatureHumidity, readTemperature), NULL);
}
void ATMO_ENS210TemperatureHumidity_INTERRUPT_readHumidity() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(ENS210TemperatureHumidity, readHumidity), NULL);
}
void ATMO_MPL3115Pressure_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(MPL3115Pressure, trigger), NULL);
}
void ATMO_MPL3115Pressure_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(MPL3115Pressure, setup), NULL);
}
void ATMO_MPL3115Pressure_INTERRUPT_setEnabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(MPL3115Pressure, setEnabled), NULL);
}
void ATMO_MPL3115Pressure_INTERRUPT_setDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(MPL3115Pressure, setDisabled), NULL);
}
void ATMO_MPL3115Pressure_INTERRUPT_setEnabledDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(MPL3115Pressure, setEnabledDisabled), NULL);
}
void ATMO_MPL3115Pressure_INTERRUPT_readAltitude() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(MPL3115Pressure, readAltitude), NULL);
}
void ATMO_MPL3115Pressure_INTERRUPT_readPressure() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(MPL3115Pressure, readPressure), NULL);
}
void ATMO_MPL3115Pressure_INTERRUPT_readPressureKpa() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(MPL3115Pressure, readPressureKpa), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, trigger), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, setup), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_setEnabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, setEnabled), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_setDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, setDisabled), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_setEnabledDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, setEnabledDisabled), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_readTVOC() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, readTVOC), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_readCO2() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, readCO2), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, trigger), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setup), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightOff() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightOff), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightLow() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightLow), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightMedium() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightMedium), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightHigh() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightHigh), NULL);
}
