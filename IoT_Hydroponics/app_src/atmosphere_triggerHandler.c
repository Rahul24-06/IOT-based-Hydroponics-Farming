#include "atmosphere_triggerHandler.h"
#include "atmosphere_abilityHandler.h"

#ifdef __cplusplus
	extern "C"{
#endif

void ATMO_TriggerHandler(unsigned int triggerHandleId, ATMO_Value_t *value) {
	switch(triggerHandleId) {
		case ATMO_TRIGGER(AirQualityCharacteristic, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(AirQualityCharacteristic, written):
		{
			break;
		}

		case ATMO_TRIGGER(AirQualityCharacteristic, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQualityCharacteristic, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(TemperatureCharacteristic, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(TemperatureCharacteristic, written):
		{
			break;
		}

		case ATMO_TRIGGER(TemperatureCharacteristic, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(TemperatureCharacteristic, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(HumidityCharacteristic, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(HumidityCharacteristic, written):
		{
			break;
		}

		case ATMO_TRIGGER(HumidityCharacteristic, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(HumidityCharacteristic, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(PressureCharacteristic, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(PressureCharacteristic, written):
		{
			break;
		}

		case ATMO_TRIGGER(PressureCharacteristic, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(PressureCharacteristic, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(AmbientLightCharacteristic, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(AmbientLightCharacteristic, written):
		{
			break;
		}

		case ATMO_TRIGGER(AmbientLightCharacteristic, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(AmbientLightCharacteristic, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, touchDataRead):
		{
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, upPressed):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedPageController, navigateUp), value);
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, downPressed):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedPageController, navigateDown), value);
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, leftPressed):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedPageController, navigateLeft), value);
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, rightPressed):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedPageController, navigateRight), value);
			break;
		}

		case ATMO_TRIGGER(Temperature_P, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Temperature_P, onDisplayed):
		{
			break;
		}

		case ATMO_TRIGGER(Temperature_P, topRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Temperature_P, bottomRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Temperature_P, topLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Temperature_P, bottomLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Temperature_P, onLeave):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, navigateUp):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, navigateDown):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, navigateLeft):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, navigateRight):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, processTopRightButton):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, processBottomRightButton):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, processTopLeftButton):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, processBottomLeftButton):
		{
			break;
		}

		case ATMO_TRIGGER(Humidity_Pag, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Humidity_Pag, onDisplayed):
		{
			break;
		}

		case ATMO_TRIGGER(Humidity_Pag, topRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Humidity_Pag, bottomRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Humidity_Pag, topLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Humidity_Pag, bottomLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Humidity_Pag, onLeave):
		{
			break;
		}

		case ATMO_TRIGGER(Pressure_Pag, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Pressure_Pag, onDisplayed):
		{
			break;
		}

		case ATMO_TRIGGER(Pressure_Pag, topRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Pressure_Pag, bottomRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Pressure_Pag, topLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Pressure_Pag, bottomLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(Pressure_Pag, onLeave):
		{
			break;
		}

		case ATMO_TRIGGER(ConvertPressur, triggered):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(PressureCharacteristic, setValue), value);
			ATMO_AbilityHandler(ATMO_ABILITY(GetPressureStr, trigger), value);
			break;
		}

		case ATMO_TRIGGER(AmientLight_Pag, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(AmientLight_Pag, onDisplayed):
		{
			break;
		}

		case ATMO_TRIGGER(AmientLight_Pag, topRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AmientLight_Pag, bottomRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AmientLight_Pag, topLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AmientLight_Pag, bottomLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AmientLight_Pag, onLeave):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, onDisplayed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, topRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, bottomRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, topLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, bottomLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, onLeave):
		{
			break;
		}

		case ATMO_TRIGGER(Interval, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Interval, interval):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(TSL2572AmbientLight, readAmbientLight), value);
			ATMO_AbilityHandler(ATMO_ABILITY(ENS210TemperatureHumidity, readTemperature), value);
			ATMO_AbilityHandler(ATMO_ABILITY(ENS210TemperatureHumidity, readHumidity), value);
			ATMO_AbilityHandler(ATMO_ABILITY(MPL3115Pressure, readPressure), value);
			ATMO_AbilityHandler(ATMO_ABILITY(CCS811AirQuality, readTVOC), value);
			break;
		}

		case ATMO_TRIGGER(TSL2572AmbientLight, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(TSL2572AmbientLight, ambientLightRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(AmbientLightCharacteristic, setValue), value);
			ATMO_AbilityHandler(ATMO_ABILITY(GetLightStr, trigger), value);
			break;
		}

		case ATMO_TRIGGER(GetTempStr, triggered):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(Temperature_P, setLabel), value);
			break;
		}

		case ATMO_TRIGGER(GetHumidityStr, triggered):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(Humidity_Pag, setLabel), value);
			break;
		}

		case ATMO_TRIGGER(GetPressureStr, triggered):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(Pressure_Pag, setLabel), value);
			break;
		}

		case ATMO_TRIGGER(GetLightStr, triggered):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(AmientLight_Pag, setLabel), value);
			break;
		}

		case ATMO_TRIGGER(GetAirQualityStr, triggered):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(AirQuality_Pag, setLabel), value);
			break;
		}

		case ATMO_TRIGGER(ENS210TemperatureHumidity, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(ENS210TemperatureHumidity, temperatureRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(GetTempStr, trigger), value);
			ATMO_AbilityHandler(ATMO_ABILITY(TemperatureCharacteristic, setValue), value);
			break;
		}

		case ATMO_TRIGGER(ENS210TemperatureHumidity, humidityRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(HumidityCharacteristic, setValue), value);
			ATMO_AbilityHandler(ATMO_ABILITY(GetHumidityStr, trigger), value);
			break;
		}

		case ATMO_TRIGGER(MPL3115Pressure, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(MPL3115Pressure, altitudeRead):
		{
			break;
		}

		case ATMO_TRIGGER(MPL3115Pressure, pressureRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(ConvertPressur, trigger), value);
			break;
		}

		case ATMO_TRIGGER(MPL3115Pressure, pressureReadKpa):
		{
			break;
		}

		case ATMO_TRIGGER(CCS811AirQuality, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(CCS811AirQuality, TVOCRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(AirQualityCharacteristic, setValue), value);
			ATMO_AbilityHandler(ATMO_ABILITY(GetAirQualityStr, trigger), value);
			break;
		}

		case ATMO_TRIGGER(CCS811AirQuality, CO2Read):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkBacklight, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkBacklight, backlightSet):
		{
			break;
		}

	}

}

#ifdef __cplusplus
}
#endif
