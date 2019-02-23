#include "atmosphere_elementSetup.h"

#ifdef __cplusplus
	extern "C"{
#endif

void ATMO_ElementSetup() {
	ATMO_Value_t inOutValue;
	ATMO_InitValue(&inOutValue);
	AirQualityCharacteristic_setup(&inOutValue, &inOutValue);
	TemperatureCharacteristic_setup(&inOutValue, &inOutValue);
	HumidityCharacteristic_setup(&inOutValue, &inOutValue);
	PressureCharacteristic_setup(&inOutValue, &inOutValue);
	AmbientLightCharacteristic_setup(&inOutValue, &inOutValue);
	SX9500Touch_setup(&inOutValue, &inOutValue);
	Temperature_P_setup(&inOutValue, &inOutValue);
	EmbeddedPageController_setup(&inOutValue, &inOutValue);
	Humidity_Pag_setup(&inOutValue, &inOutValue);
	Pressure_Pag_setup(&inOutValue, &inOutValue);
	AmientLight_Pag_setup(&inOutValue, &inOutValue);
	AirQuality_Pag_setup(&inOutValue, &inOutValue);
	Interval_setup(&inOutValue, &inOutValue);
	TSL2572AmbientLight_setup(&inOutValue, &inOutValue);
	ENS210TemperatureHumidity_setup(&inOutValue, &inOutValue);
	MPL3115Pressure_setup(&inOutValue, &inOutValue);
	CCS811AirQuality_setup(&inOutValue, &inOutValue);
	EmbeddedNxpRpkBacklight_setup(&inOutValue, &inOutValue);
}

#ifdef __cplusplus
}
#endif
