#include "atmosphere_abilityHandler.h"
#include "atmosphere_triggerHandler.h"

#ifdef __cplusplus
	extern "C"{
#endif

void ATMO_AbilityHandler(unsigned int abilityHandleId, ATMO_Value_t *value) {
	switch(abilityHandleId) {
		case ATMO_ABILITY(AirQualityCharacteristic, trigger):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_trigger(value, &AirQualityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQualityCharacteristic, triggered), &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AirQualityCharacteristic, setup):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_setup(value, &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AirQualityCharacteristic, setValue):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_setValue(value, &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AirQualityCharacteristic, written):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_written(value, &AirQualityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQualityCharacteristic, written), &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AirQualityCharacteristic, subscibed):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_subscibed(value, &AirQualityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQualityCharacteristic, subscibed), &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AirQualityCharacteristic, unsubscribed):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_unsubscribed(value, &AirQualityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQualityCharacteristic, unsubscribed), &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(TemperatureCharacteristic, trigger):
		{
			ATMO_Value_t TemperatureCharacteristic_Value;
			ATMO_InitValue(&TemperatureCharacteristic_Value);
			TemperatureCharacteristic_trigger(value, &TemperatureCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(TemperatureCharacteristic, triggered), &TemperatureCharacteristic_Value);
			ATMO_FreeValue(&TemperatureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(TemperatureCharacteristic, setup):
		{
			ATMO_Value_t TemperatureCharacteristic_Value;
			ATMO_InitValue(&TemperatureCharacteristic_Value);
			TemperatureCharacteristic_setup(value, &TemperatureCharacteristic_Value);
			ATMO_FreeValue(&TemperatureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(TemperatureCharacteristic, setValue):
		{
			ATMO_Value_t TemperatureCharacteristic_Value;
			ATMO_InitValue(&TemperatureCharacteristic_Value);
			TemperatureCharacteristic_setValue(value, &TemperatureCharacteristic_Value);
			ATMO_FreeValue(&TemperatureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(TemperatureCharacteristic, written):
		{
			ATMO_Value_t TemperatureCharacteristic_Value;
			ATMO_InitValue(&TemperatureCharacteristic_Value);
			TemperatureCharacteristic_written(value, &TemperatureCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(TemperatureCharacteristic, written), &TemperatureCharacteristic_Value);
			ATMO_FreeValue(&TemperatureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(TemperatureCharacteristic, subscibed):
		{
			ATMO_Value_t TemperatureCharacteristic_Value;
			ATMO_InitValue(&TemperatureCharacteristic_Value);
			TemperatureCharacteristic_subscibed(value, &TemperatureCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(TemperatureCharacteristic, subscibed), &TemperatureCharacteristic_Value);
			ATMO_FreeValue(&TemperatureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(TemperatureCharacteristic, unsubscribed):
		{
			ATMO_Value_t TemperatureCharacteristic_Value;
			ATMO_InitValue(&TemperatureCharacteristic_Value);
			TemperatureCharacteristic_unsubscribed(value, &TemperatureCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(TemperatureCharacteristic, unsubscribed), &TemperatureCharacteristic_Value);
			ATMO_FreeValue(&TemperatureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(HumidityCharacteristic, trigger):
		{
			ATMO_Value_t HumidityCharacteristic_Value;
			ATMO_InitValue(&HumidityCharacteristic_Value);
			HumidityCharacteristic_trigger(value, &HumidityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(HumidityCharacteristic, triggered), &HumidityCharacteristic_Value);
			ATMO_FreeValue(&HumidityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(HumidityCharacteristic, setup):
		{
			ATMO_Value_t HumidityCharacteristic_Value;
			ATMO_InitValue(&HumidityCharacteristic_Value);
			HumidityCharacteristic_setup(value, &HumidityCharacteristic_Value);
			ATMO_FreeValue(&HumidityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(HumidityCharacteristic, setValue):
		{
			ATMO_Value_t HumidityCharacteristic_Value;
			ATMO_InitValue(&HumidityCharacteristic_Value);
			HumidityCharacteristic_setValue(value, &HumidityCharacteristic_Value);
			ATMO_FreeValue(&HumidityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(HumidityCharacteristic, written):
		{
			ATMO_Value_t HumidityCharacteristic_Value;
			ATMO_InitValue(&HumidityCharacteristic_Value);
			HumidityCharacteristic_written(value, &HumidityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(HumidityCharacteristic, written), &HumidityCharacteristic_Value);
			ATMO_FreeValue(&HumidityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(HumidityCharacteristic, subscibed):
		{
			ATMO_Value_t HumidityCharacteristic_Value;
			ATMO_InitValue(&HumidityCharacteristic_Value);
			HumidityCharacteristic_subscibed(value, &HumidityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(HumidityCharacteristic, subscibed), &HumidityCharacteristic_Value);
			ATMO_FreeValue(&HumidityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(HumidityCharacteristic, unsubscribed):
		{
			ATMO_Value_t HumidityCharacteristic_Value;
			ATMO_InitValue(&HumidityCharacteristic_Value);
			HumidityCharacteristic_unsubscribed(value, &HumidityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(HumidityCharacteristic, unsubscribed), &HumidityCharacteristic_Value);
			ATMO_FreeValue(&HumidityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(PressureCharacteristic, trigger):
		{
			ATMO_Value_t PressureCharacteristic_Value;
			ATMO_InitValue(&PressureCharacteristic_Value);
			PressureCharacteristic_trigger(value, &PressureCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(PressureCharacteristic, triggered), &PressureCharacteristic_Value);
			ATMO_FreeValue(&PressureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(PressureCharacteristic, setup):
		{
			ATMO_Value_t PressureCharacteristic_Value;
			ATMO_InitValue(&PressureCharacteristic_Value);
			PressureCharacteristic_setup(value, &PressureCharacteristic_Value);
			ATMO_FreeValue(&PressureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(PressureCharacteristic, setValue):
		{
			ATMO_Value_t PressureCharacteristic_Value;
			ATMO_InitValue(&PressureCharacteristic_Value);
			PressureCharacteristic_setValue(value, &PressureCharacteristic_Value);
			ATMO_FreeValue(&PressureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(PressureCharacteristic, written):
		{
			ATMO_Value_t PressureCharacteristic_Value;
			ATMO_InitValue(&PressureCharacteristic_Value);
			PressureCharacteristic_written(value, &PressureCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(PressureCharacteristic, written), &PressureCharacteristic_Value);
			ATMO_FreeValue(&PressureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(PressureCharacteristic, subscibed):
		{
			ATMO_Value_t PressureCharacteristic_Value;
			ATMO_InitValue(&PressureCharacteristic_Value);
			PressureCharacteristic_subscibed(value, &PressureCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(PressureCharacteristic, subscibed), &PressureCharacteristic_Value);
			ATMO_FreeValue(&PressureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(PressureCharacteristic, unsubscribed):
		{
			ATMO_Value_t PressureCharacteristic_Value;
			ATMO_InitValue(&PressureCharacteristic_Value);
			PressureCharacteristic_unsubscribed(value, &PressureCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(PressureCharacteristic, unsubscribed), &PressureCharacteristic_Value);
			ATMO_FreeValue(&PressureCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AmbientLightCharacteristic, trigger):
		{
			ATMO_Value_t AmbientLightCharacteristic_Value;
			ATMO_InitValue(&AmbientLightCharacteristic_Value);
			AmbientLightCharacteristic_trigger(value, &AmbientLightCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AmbientLightCharacteristic, triggered), &AmbientLightCharacteristic_Value);
			ATMO_FreeValue(&AmbientLightCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AmbientLightCharacteristic, setup):
		{
			ATMO_Value_t AmbientLightCharacteristic_Value;
			ATMO_InitValue(&AmbientLightCharacteristic_Value);
			AmbientLightCharacteristic_setup(value, &AmbientLightCharacteristic_Value);
			ATMO_FreeValue(&AmbientLightCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AmbientLightCharacteristic, setValue):
		{
			ATMO_Value_t AmbientLightCharacteristic_Value;
			ATMO_InitValue(&AmbientLightCharacteristic_Value);
			AmbientLightCharacteristic_setValue(value, &AmbientLightCharacteristic_Value);
			ATMO_FreeValue(&AmbientLightCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AmbientLightCharacteristic, written):
		{
			ATMO_Value_t AmbientLightCharacteristic_Value;
			ATMO_InitValue(&AmbientLightCharacteristic_Value);
			AmbientLightCharacteristic_written(value, &AmbientLightCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AmbientLightCharacteristic, written), &AmbientLightCharacteristic_Value);
			ATMO_FreeValue(&AmbientLightCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AmbientLightCharacteristic, subscibed):
		{
			ATMO_Value_t AmbientLightCharacteristic_Value;
			ATMO_InitValue(&AmbientLightCharacteristic_Value);
			AmbientLightCharacteristic_subscibed(value, &AmbientLightCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AmbientLightCharacteristic, subscibed), &AmbientLightCharacteristic_Value);
			ATMO_FreeValue(&AmbientLightCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AmbientLightCharacteristic, unsubscribed):
		{
			ATMO_Value_t AmbientLightCharacteristic_Value;
			ATMO_InitValue(&AmbientLightCharacteristic_Value);
			AmbientLightCharacteristic_unsubscribed(value, &AmbientLightCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AmbientLightCharacteristic, unsubscribed), &AmbientLightCharacteristic_Value);
			ATMO_FreeValue(&AmbientLightCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, trigger):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_trigger(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, triggered), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, setup):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_setup(value, &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, getTouchData):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_getTouchData(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, touchDataRead), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, pressUp):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_pressUp(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, upPressed), &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, touchDataRead), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, pressDown):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_pressDown(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, downPressed), &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, touchDataRead), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, pressLeft):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_pressLeft(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, leftPressed), &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, touchDataRead), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, pressRight):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_pressRight(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, rightPressed), &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, touchDataRead), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(Temperature_P, trigger):
		{
			ATMO_Value_t Temperature_P_Value;
			ATMO_InitValue(&Temperature_P_Value);
			Temperature_P_trigger(value, &Temperature_P_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Temperature_P, triggered), &Temperature_P_Value);
			ATMO_FreeValue(&Temperature_P_Value);
			break;
		}
		case ATMO_ABILITY(Temperature_P, displayPage):
		{
			ATMO_Value_t Temperature_P_Value;
			ATMO_InitValue(&Temperature_P_Value);
			Temperature_P_displayPage(value, &Temperature_P_Value);
			ATMO_FreeValue(&Temperature_P_Value);
			break;
		}
		case ATMO_ABILITY(Temperature_P, onDisplayed):
		{
			ATMO_Value_t Temperature_P_Value;
			ATMO_InitValue(&Temperature_P_Value);
			Temperature_P_onDisplayed(value, &Temperature_P_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Temperature_P, onDisplayed), &Temperature_P_Value);
			ATMO_FreeValue(&Temperature_P_Value);
			break;
		}
		case ATMO_ABILITY(Temperature_P, topRightButtonPressed):
		{
			ATMO_Value_t Temperature_P_Value;
			ATMO_InitValue(&Temperature_P_Value);
			Temperature_P_topRightButtonPressed(value, &Temperature_P_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Temperature_P, topRightButtonPressed), &Temperature_P_Value);
			ATMO_FreeValue(&Temperature_P_Value);
			break;
		}
		case ATMO_ABILITY(Temperature_P, bottomRightButtonPressed):
		{
			ATMO_Value_t Temperature_P_Value;
			ATMO_InitValue(&Temperature_P_Value);
			Temperature_P_bottomRightButtonPressed(value, &Temperature_P_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Temperature_P, bottomRightButtonPressed), &Temperature_P_Value);
			ATMO_FreeValue(&Temperature_P_Value);
			break;
		}
		case ATMO_ABILITY(Temperature_P, topLeftButtonPressed):
		{
			ATMO_Value_t Temperature_P_Value;
			ATMO_InitValue(&Temperature_P_Value);
			Temperature_P_topLeftButtonPressed(value, &Temperature_P_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Temperature_P, topLeftButtonPressed), &Temperature_P_Value);
			ATMO_FreeValue(&Temperature_P_Value);
			break;
		}
		case ATMO_ABILITY(Temperature_P, bottomLeftButtonPressed):
		{
			ATMO_Value_t Temperature_P_Value;
			ATMO_InitValue(&Temperature_P_Value);
			Temperature_P_bottomLeftButtonPressed(value, &Temperature_P_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Temperature_P, bottomLeftButtonPressed), &Temperature_P_Value);
			ATMO_FreeValue(&Temperature_P_Value);
			break;
		}
		case ATMO_ABILITY(Temperature_P, setup):
		{
			ATMO_Value_t Temperature_P_Value;
			ATMO_InitValue(&Temperature_P_Value);
			Temperature_P_setup(value, &Temperature_P_Value);
			ATMO_FreeValue(&Temperature_P_Value);
			break;
		}
		case ATMO_ABILITY(Temperature_P, onLeave):
		{
			ATMO_Value_t Temperature_P_Value;
			ATMO_InitValue(&Temperature_P_Value);
			Temperature_P_onLeave(value, &Temperature_P_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Temperature_P, onLeave), &Temperature_P_Value);
			ATMO_FreeValue(&Temperature_P_Value);
			break;
		}
		case ATMO_ABILITY(Temperature_P, setLabel):
		{
			ATMO_Value_t Temperature_P_Value;
			ATMO_InitValue(&Temperature_P_Value);
			Temperature_P_setLabel(value, &Temperature_P_Value);
			ATMO_FreeValue(&Temperature_P_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, trigger):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_trigger(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, triggered), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, setup):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_setup(value, &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, displayRootPage):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_displayRootPage(value, &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, navigateUp):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_navigateUp(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, navigateUp), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, navigateDown):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_navigateDown(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, navigateDown), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, navigateLeft):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_navigateLeft(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, navigateLeft), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, navigateRight):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_navigateRight(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, navigateRight), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, processTopRightButton):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_processTopRightButton(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, processTopRightButton), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, processBottomRightButton):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_processBottomRightButton(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, processBottomRightButton), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, processTopLeftButton):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_processTopLeftButton(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, processTopLeftButton), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, processBottomLeftButton):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_processBottomLeftButton(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, processBottomLeftButton), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(Humidity_Pag, trigger):
		{
			ATMO_Value_t Humidity_Pag_Value;
			ATMO_InitValue(&Humidity_Pag_Value);
			Humidity_Pag_trigger(value, &Humidity_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Humidity_Pag, triggered), &Humidity_Pag_Value);
			ATMO_FreeValue(&Humidity_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Humidity_Pag, displayPage):
		{
			ATMO_Value_t Humidity_Pag_Value;
			ATMO_InitValue(&Humidity_Pag_Value);
			Humidity_Pag_displayPage(value, &Humidity_Pag_Value);
			ATMO_FreeValue(&Humidity_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Humidity_Pag, onDisplayed):
		{
			ATMO_Value_t Humidity_Pag_Value;
			ATMO_InitValue(&Humidity_Pag_Value);
			Humidity_Pag_onDisplayed(value, &Humidity_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Humidity_Pag, onDisplayed), &Humidity_Pag_Value);
			ATMO_FreeValue(&Humidity_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Humidity_Pag, topRightButtonPressed):
		{
			ATMO_Value_t Humidity_Pag_Value;
			ATMO_InitValue(&Humidity_Pag_Value);
			Humidity_Pag_topRightButtonPressed(value, &Humidity_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Humidity_Pag, topRightButtonPressed), &Humidity_Pag_Value);
			ATMO_FreeValue(&Humidity_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Humidity_Pag, bottomRightButtonPressed):
		{
			ATMO_Value_t Humidity_Pag_Value;
			ATMO_InitValue(&Humidity_Pag_Value);
			Humidity_Pag_bottomRightButtonPressed(value, &Humidity_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Humidity_Pag, bottomRightButtonPressed), &Humidity_Pag_Value);
			ATMO_FreeValue(&Humidity_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Humidity_Pag, topLeftButtonPressed):
		{
			ATMO_Value_t Humidity_Pag_Value;
			ATMO_InitValue(&Humidity_Pag_Value);
			Humidity_Pag_topLeftButtonPressed(value, &Humidity_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Humidity_Pag, topLeftButtonPressed), &Humidity_Pag_Value);
			ATMO_FreeValue(&Humidity_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Humidity_Pag, bottomLeftButtonPressed):
		{
			ATMO_Value_t Humidity_Pag_Value;
			ATMO_InitValue(&Humidity_Pag_Value);
			Humidity_Pag_bottomLeftButtonPressed(value, &Humidity_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Humidity_Pag, bottomLeftButtonPressed), &Humidity_Pag_Value);
			ATMO_FreeValue(&Humidity_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Humidity_Pag, setup):
		{
			ATMO_Value_t Humidity_Pag_Value;
			ATMO_InitValue(&Humidity_Pag_Value);
			Humidity_Pag_setup(value, &Humidity_Pag_Value);
			ATMO_FreeValue(&Humidity_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Humidity_Pag, onLeave):
		{
			ATMO_Value_t Humidity_Pag_Value;
			ATMO_InitValue(&Humidity_Pag_Value);
			Humidity_Pag_onLeave(value, &Humidity_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Humidity_Pag, onLeave), &Humidity_Pag_Value);
			ATMO_FreeValue(&Humidity_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Humidity_Pag, setLabel):
		{
			ATMO_Value_t Humidity_Pag_Value;
			ATMO_InitValue(&Humidity_Pag_Value);
			Humidity_Pag_setLabel(value, &Humidity_Pag_Value);
			ATMO_FreeValue(&Humidity_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Pressure_Pag, trigger):
		{
			ATMO_Value_t Pressure_Pag_Value;
			ATMO_InitValue(&Pressure_Pag_Value);
			Pressure_Pag_trigger(value, &Pressure_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Pressure_Pag, triggered), &Pressure_Pag_Value);
			ATMO_FreeValue(&Pressure_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Pressure_Pag, displayPage):
		{
			ATMO_Value_t Pressure_Pag_Value;
			ATMO_InitValue(&Pressure_Pag_Value);
			Pressure_Pag_displayPage(value, &Pressure_Pag_Value);
			ATMO_FreeValue(&Pressure_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Pressure_Pag, onDisplayed):
		{
			ATMO_Value_t Pressure_Pag_Value;
			ATMO_InitValue(&Pressure_Pag_Value);
			Pressure_Pag_onDisplayed(value, &Pressure_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Pressure_Pag, onDisplayed), &Pressure_Pag_Value);
			ATMO_FreeValue(&Pressure_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Pressure_Pag, topRightButtonPressed):
		{
			ATMO_Value_t Pressure_Pag_Value;
			ATMO_InitValue(&Pressure_Pag_Value);
			Pressure_Pag_topRightButtonPressed(value, &Pressure_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Pressure_Pag, topRightButtonPressed), &Pressure_Pag_Value);
			ATMO_FreeValue(&Pressure_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Pressure_Pag, bottomRightButtonPressed):
		{
			ATMO_Value_t Pressure_Pag_Value;
			ATMO_InitValue(&Pressure_Pag_Value);
			Pressure_Pag_bottomRightButtonPressed(value, &Pressure_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Pressure_Pag, bottomRightButtonPressed), &Pressure_Pag_Value);
			ATMO_FreeValue(&Pressure_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Pressure_Pag, topLeftButtonPressed):
		{
			ATMO_Value_t Pressure_Pag_Value;
			ATMO_InitValue(&Pressure_Pag_Value);
			Pressure_Pag_topLeftButtonPressed(value, &Pressure_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Pressure_Pag, topLeftButtonPressed), &Pressure_Pag_Value);
			ATMO_FreeValue(&Pressure_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Pressure_Pag, bottomLeftButtonPressed):
		{
			ATMO_Value_t Pressure_Pag_Value;
			ATMO_InitValue(&Pressure_Pag_Value);
			Pressure_Pag_bottomLeftButtonPressed(value, &Pressure_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Pressure_Pag, bottomLeftButtonPressed), &Pressure_Pag_Value);
			ATMO_FreeValue(&Pressure_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Pressure_Pag, setup):
		{
			ATMO_Value_t Pressure_Pag_Value;
			ATMO_InitValue(&Pressure_Pag_Value);
			Pressure_Pag_setup(value, &Pressure_Pag_Value);
			ATMO_FreeValue(&Pressure_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Pressure_Pag, onLeave):
		{
			ATMO_Value_t Pressure_Pag_Value;
			ATMO_InitValue(&Pressure_Pag_Value);
			Pressure_Pag_onLeave(value, &Pressure_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Pressure_Pag, onLeave), &Pressure_Pag_Value);
			ATMO_FreeValue(&Pressure_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Pressure_Pag, setLabel):
		{
			ATMO_Value_t Pressure_Pag_Value;
			ATMO_InitValue(&Pressure_Pag_Value);
			Pressure_Pag_setLabel(value, &Pressure_Pag_Value);
			ATMO_FreeValue(&Pressure_Pag_Value);
			break;
		}
		case ATMO_ABILITY(ConvertPressur, trigger):
		{
			ATMO_Value_t ConvertPressur_Value;
			ATMO_InitValue(&ConvertPressur_Value);
			ConvertPressur_trigger(value, &ConvertPressur_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(ConvertPressur, triggered), &ConvertPressur_Value);
			ATMO_FreeValue(&ConvertPressur_Value);
			break;
		}
		case ATMO_ABILITY(AmientLight_Pag, trigger):
		{
			ATMO_Value_t AmientLight_Pag_Value;
			ATMO_InitValue(&AmientLight_Pag_Value);
			AmientLight_Pag_trigger(value, &AmientLight_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AmientLight_Pag, triggered), &AmientLight_Pag_Value);
			ATMO_FreeValue(&AmientLight_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AmientLight_Pag, displayPage):
		{
			ATMO_Value_t AmientLight_Pag_Value;
			ATMO_InitValue(&AmientLight_Pag_Value);
			AmientLight_Pag_displayPage(value, &AmientLight_Pag_Value);
			ATMO_FreeValue(&AmientLight_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AmientLight_Pag, onDisplayed):
		{
			ATMO_Value_t AmientLight_Pag_Value;
			ATMO_InitValue(&AmientLight_Pag_Value);
			AmientLight_Pag_onDisplayed(value, &AmientLight_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AmientLight_Pag, onDisplayed), &AmientLight_Pag_Value);
			ATMO_FreeValue(&AmientLight_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AmientLight_Pag, topRightButtonPressed):
		{
			ATMO_Value_t AmientLight_Pag_Value;
			ATMO_InitValue(&AmientLight_Pag_Value);
			AmientLight_Pag_topRightButtonPressed(value, &AmientLight_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AmientLight_Pag, topRightButtonPressed), &AmientLight_Pag_Value);
			ATMO_FreeValue(&AmientLight_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AmientLight_Pag, bottomRightButtonPressed):
		{
			ATMO_Value_t AmientLight_Pag_Value;
			ATMO_InitValue(&AmientLight_Pag_Value);
			AmientLight_Pag_bottomRightButtonPressed(value, &AmientLight_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AmientLight_Pag, bottomRightButtonPressed), &AmientLight_Pag_Value);
			ATMO_FreeValue(&AmientLight_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AmientLight_Pag, topLeftButtonPressed):
		{
			ATMO_Value_t AmientLight_Pag_Value;
			ATMO_InitValue(&AmientLight_Pag_Value);
			AmientLight_Pag_topLeftButtonPressed(value, &AmientLight_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AmientLight_Pag, topLeftButtonPressed), &AmientLight_Pag_Value);
			ATMO_FreeValue(&AmientLight_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AmientLight_Pag, bottomLeftButtonPressed):
		{
			ATMO_Value_t AmientLight_Pag_Value;
			ATMO_InitValue(&AmientLight_Pag_Value);
			AmientLight_Pag_bottomLeftButtonPressed(value, &AmientLight_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AmientLight_Pag, bottomLeftButtonPressed), &AmientLight_Pag_Value);
			ATMO_FreeValue(&AmientLight_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AmientLight_Pag, setup):
		{
			ATMO_Value_t AmientLight_Pag_Value;
			ATMO_InitValue(&AmientLight_Pag_Value);
			AmientLight_Pag_setup(value, &AmientLight_Pag_Value);
			ATMO_FreeValue(&AmientLight_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AmientLight_Pag, onLeave):
		{
			ATMO_Value_t AmientLight_Pag_Value;
			ATMO_InitValue(&AmientLight_Pag_Value);
			AmientLight_Pag_onLeave(value, &AmientLight_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AmientLight_Pag, onLeave), &AmientLight_Pag_Value);
			ATMO_FreeValue(&AmientLight_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AmientLight_Pag, setLabel):
		{
			ATMO_Value_t AmientLight_Pag_Value;
			ATMO_InitValue(&AmientLight_Pag_Value);
			AmientLight_Pag_setLabel(value, &AmientLight_Pag_Value);
			ATMO_FreeValue(&AmientLight_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, trigger):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_trigger(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, triggered), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, displayPage):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_displayPage(value, &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, onDisplayed):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_onDisplayed(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, onDisplayed), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, topRightButtonPressed):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_topRightButtonPressed(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, topRightButtonPressed), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, bottomRightButtonPressed):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_bottomRightButtonPressed(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, bottomRightButtonPressed), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, topLeftButtonPressed):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_topLeftButtonPressed(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, topLeftButtonPressed), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, bottomLeftButtonPressed):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_bottomLeftButtonPressed(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, bottomLeftButtonPressed), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, setup):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_setup(value, &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, onLeave):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_onLeave(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, onLeave), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, setLabel):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_setLabel(value, &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Interval, trigger):
		{
			ATMO_Value_t Interval_Value;
			ATMO_InitValue(&Interval_Value);
			Interval_trigger(value, &Interval_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Interval, triggered), &Interval_Value);
			ATMO_FreeValue(&Interval_Value);
			break;
		}
		case ATMO_ABILITY(Interval, setup):
		{
			ATMO_Value_t Interval_Value;
			ATMO_InitValue(&Interval_Value);
			Interval_setup(value, &Interval_Value);
			ATMO_FreeValue(&Interval_Value);
			break;
		}
		case ATMO_ABILITY(Interval, interval):
		{
			ATMO_Value_t Interval_Value;
			ATMO_InitValue(&Interval_Value);
			Interval_interval(value, &Interval_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Interval, interval), &Interval_Value);
			ATMO_FreeValue(&Interval_Value);
			break;
		}
		case ATMO_ABILITY(TSL2572AmbientLight, trigger):
		{
			ATMO_Value_t TSL2572AmbientLight_Value;
			ATMO_InitValue(&TSL2572AmbientLight_Value);
			TSL2572AmbientLight_trigger(value, &TSL2572AmbientLight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(TSL2572AmbientLight, triggered), &TSL2572AmbientLight_Value);
			ATMO_FreeValue(&TSL2572AmbientLight_Value);
			break;
		}
		case ATMO_ABILITY(TSL2572AmbientLight, setup):
		{
			ATMO_Value_t TSL2572AmbientLight_Value;
			ATMO_InitValue(&TSL2572AmbientLight_Value);
			TSL2572AmbientLight_setup(value, &TSL2572AmbientLight_Value);
			ATMO_FreeValue(&TSL2572AmbientLight_Value);
			break;
		}
		case ATMO_ABILITY(TSL2572AmbientLight, setEnabled):
		{
			ATMO_Value_t TSL2572AmbientLight_Value;
			ATMO_InitValue(&TSL2572AmbientLight_Value);
			TSL2572AmbientLight_setEnabled(value, &TSL2572AmbientLight_Value);
			ATMO_FreeValue(&TSL2572AmbientLight_Value);
			break;
		}
		case ATMO_ABILITY(TSL2572AmbientLight, setDisabled):
		{
			ATMO_Value_t TSL2572AmbientLight_Value;
			ATMO_InitValue(&TSL2572AmbientLight_Value);
			TSL2572AmbientLight_setDisabled(value, &TSL2572AmbientLight_Value);
			ATMO_FreeValue(&TSL2572AmbientLight_Value);
			break;
		}
		case ATMO_ABILITY(TSL2572AmbientLight, setEnabledDisabled):
		{
			ATMO_Value_t TSL2572AmbientLight_Value;
			ATMO_InitValue(&TSL2572AmbientLight_Value);
			TSL2572AmbientLight_setEnabledDisabled(value, &TSL2572AmbientLight_Value);
			ATMO_FreeValue(&TSL2572AmbientLight_Value);
			break;
		}
		case ATMO_ABILITY(TSL2572AmbientLight, readAmbientLight):
		{
			ATMO_Value_t TSL2572AmbientLight_Value;
			ATMO_InitValue(&TSL2572AmbientLight_Value);
			TSL2572AmbientLight_readAmbientLight(value, &TSL2572AmbientLight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(TSL2572AmbientLight, ambientLightRead), &TSL2572AmbientLight_Value);
			ATMO_FreeValue(&TSL2572AmbientLight_Value);
			break;
		}
		case ATMO_ABILITY(GetTempStr, trigger):
		{
			ATMO_Value_t GetTempStr_Value;
			ATMO_InitValue(&GetTempStr_Value);
			GetTempStr_trigger(value, &GetTempStr_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(GetTempStr, triggered), &GetTempStr_Value);
			ATMO_FreeValue(&GetTempStr_Value);
			break;
		}
		case ATMO_ABILITY(GetHumidityStr, trigger):
		{
			ATMO_Value_t GetHumidityStr_Value;
			ATMO_InitValue(&GetHumidityStr_Value);
			GetHumidityStr_trigger(value, &GetHumidityStr_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(GetHumidityStr, triggered), &GetHumidityStr_Value);
			ATMO_FreeValue(&GetHumidityStr_Value);
			break;
		}
		case ATMO_ABILITY(GetPressureStr, trigger):
		{
			ATMO_Value_t GetPressureStr_Value;
			ATMO_InitValue(&GetPressureStr_Value);
			GetPressureStr_trigger(value, &GetPressureStr_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(GetPressureStr, triggered), &GetPressureStr_Value);
			ATMO_FreeValue(&GetPressureStr_Value);
			break;
		}
		case ATMO_ABILITY(GetLightStr, trigger):
		{
			ATMO_Value_t GetLightStr_Value;
			ATMO_InitValue(&GetLightStr_Value);
			GetLightStr_trigger(value, &GetLightStr_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(GetLightStr, triggered), &GetLightStr_Value);
			ATMO_FreeValue(&GetLightStr_Value);
			break;
		}
		case ATMO_ABILITY(GetAirQualityStr, trigger):
		{
			ATMO_Value_t GetAirQualityStr_Value;
			ATMO_InitValue(&GetAirQualityStr_Value);
			GetAirQualityStr_trigger(value, &GetAirQualityStr_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(GetAirQualityStr, triggered), &GetAirQualityStr_Value);
			ATMO_FreeValue(&GetAirQualityStr_Value);
			break;
		}
		case ATMO_ABILITY(ENS210TemperatureHumidity, trigger):
		{
			ATMO_Value_t ENS210TemperatureHumidity_Value;
			ATMO_InitValue(&ENS210TemperatureHumidity_Value);
			ENS210TemperatureHumidity_trigger(value, &ENS210TemperatureHumidity_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(ENS210TemperatureHumidity, triggered), &ENS210TemperatureHumidity_Value);
			ATMO_FreeValue(&ENS210TemperatureHumidity_Value);
			break;
		}
		case ATMO_ABILITY(ENS210TemperatureHumidity, setup):
		{
			ATMO_Value_t ENS210TemperatureHumidity_Value;
			ATMO_InitValue(&ENS210TemperatureHumidity_Value);
			ENS210TemperatureHumidity_setup(value, &ENS210TemperatureHumidity_Value);
			ATMO_FreeValue(&ENS210TemperatureHumidity_Value);
			break;
		}
		case ATMO_ABILITY(ENS210TemperatureHumidity, setEnabled):
		{
			ATMO_Value_t ENS210TemperatureHumidity_Value;
			ATMO_InitValue(&ENS210TemperatureHumidity_Value);
			ENS210TemperatureHumidity_setEnabled(value, &ENS210TemperatureHumidity_Value);
			ATMO_FreeValue(&ENS210TemperatureHumidity_Value);
			break;
		}
		case ATMO_ABILITY(ENS210TemperatureHumidity, setDisabled):
		{
			ATMO_Value_t ENS210TemperatureHumidity_Value;
			ATMO_InitValue(&ENS210TemperatureHumidity_Value);
			ENS210TemperatureHumidity_setDisabled(value, &ENS210TemperatureHumidity_Value);
			ATMO_FreeValue(&ENS210TemperatureHumidity_Value);
			break;
		}
		case ATMO_ABILITY(ENS210TemperatureHumidity, setEnabledDisabled):
		{
			ATMO_Value_t ENS210TemperatureHumidity_Value;
			ATMO_InitValue(&ENS210TemperatureHumidity_Value);
			ENS210TemperatureHumidity_setEnabledDisabled(value, &ENS210TemperatureHumidity_Value);
			ATMO_FreeValue(&ENS210TemperatureHumidity_Value);
			break;
		}
		case ATMO_ABILITY(ENS210TemperatureHumidity, readTemperature):
		{
			ATMO_Value_t ENS210TemperatureHumidity_Value;
			ATMO_InitValue(&ENS210TemperatureHumidity_Value);
			ENS210TemperatureHumidity_readTemperature(value, &ENS210TemperatureHumidity_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(ENS210TemperatureHumidity, temperatureRead), &ENS210TemperatureHumidity_Value);
			ATMO_FreeValue(&ENS210TemperatureHumidity_Value);
			break;
		}
		case ATMO_ABILITY(ENS210TemperatureHumidity, readHumidity):
		{
			ATMO_Value_t ENS210TemperatureHumidity_Value;
			ATMO_InitValue(&ENS210TemperatureHumidity_Value);
			ENS210TemperatureHumidity_readHumidity(value, &ENS210TemperatureHumidity_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(ENS210TemperatureHumidity, humidityRead), &ENS210TemperatureHumidity_Value);
			ATMO_FreeValue(&ENS210TemperatureHumidity_Value);
			break;
		}
		case ATMO_ABILITY(MPL3115Pressure, trigger):
		{
			ATMO_Value_t MPL3115Pressure_Value;
			ATMO_InitValue(&MPL3115Pressure_Value);
			MPL3115Pressure_trigger(value, &MPL3115Pressure_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(MPL3115Pressure, triggered), &MPL3115Pressure_Value);
			ATMO_FreeValue(&MPL3115Pressure_Value);
			break;
		}
		case ATMO_ABILITY(MPL3115Pressure, setup):
		{
			ATMO_Value_t MPL3115Pressure_Value;
			ATMO_InitValue(&MPL3115Pressure_Value);
			MPL3115Pressure_setup(value, &MPL3115Pressure_Value);
			ATMO_FreeValue(&MPL3115Pressure_Value);
			break;
		}
		case ATMO_ABILITY(MPL3115Pressure, setEnabled):
		{
			ATMO_Value_t MPL3115Pressure_Value;
			ATMO_InitValue(&MPL3115Pressure_Value);
			MPL3115Pressure_setEnabled(value, &MPL3115Pressure_Value);
			ATMO_FreeValue(&MPL3115Pressure_Value);
			break;
		}
		case ATMO_ABILITY(MPL3115Pressure, setDisabled):
		{
			ATMO_Value_t MPL3115Pressure_Value;
			ATMO_InitValue(&MPL3115Pressure_Value);
			MPL3115Pressure_setDisabled(value, &MPL3115Pressure_Value);
			ATMO_FreeValue(&MPL3115Pressure_Value);
			break;
		}
		case ATMO_ABILITY(MPL3115Pressure, setEnabledDisabled):
		{
			ATMO_Value_t MPL3115Pressure_Value;
			ATMO_InitValue(&MPL3115Pressure_Value);
			MPL3115Pressure_setEnabledDisabled(value, &MPL3115Pressure_Value);
			ATMO_FreeValue(&MPL3115Pressure_Value);
			break;
		}
		case ATMO_ABILITY(MPL3115Pressure, readAltitude):
		{
			ATMO_Value_t MPL3115Pressure_Value;
			ATMO_InitValue(&MPL3115Pressure_Value);
			MPL3115Pressure_readAltitude(value, &MPL3115Pressure_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(MPL3115Pressure, altitudeRead), &MPL3115Pressure_Value);
			ATMO_FreeValue(&MPL3115Pressure_Value);
			break;
		}
		case ATMO_ABILITY(MPL3115Pressure, readPressure):
		{
			ATMO_Value_t MPL3115Pressure_Value;
			ATMO_InitValue(&MPL3115Pressure_Value);
			MPL3115Pressure_readPressure(value, &MPL3115Pressure_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(MPL3115Pressure, pressureRead), &MPL3115Pressure_Value);
			ATMO_FreeValue(&MPL3115Pressure_Value);
			break;
		}
		case ATMO_ABILITY(MPL3115Pressure, readPressureKpa):
		{
			ATMO_Value_t MPL3115Pressure_Value;
			ATMO_InitValue(&MPL3115Pressure_Value);
			MPL3115Pressure_readPressureKpa(value, &MPL3115Pressure_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(MPL3115Pressure, pressureReadKpa), &MPL3115Pressure_Value);
			ATMO_FreeValue(&MPL3115Pressure_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, trigger):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_trigger(value, &CCS811AirQuality_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CCS811AirQuality, triggered), &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, setup):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_setup(value, &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, setEnabled):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_setEnabled(value, &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, setDisabled):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_setDisabled(value, &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, setEnabledDisabled):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_setEnabledDisabled(value, &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, readTVOC):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_readTVOC(value, &CCS811AirQuality_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CCS811AirQuality, TVOCRead), &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, readCO2):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_readCO2(value, &CCS811AirQuality_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CCS811AirQuality, CO2Read), &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, trigger):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_trigger(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkBacklight, triggered), &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, setup):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_setup(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightOff):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_setBacklightOff(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkBacklight, backlightSet), &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightLow):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_setBacklightLow(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkBacklight, backlightSet), &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightMedium):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_setBacklightMedium(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkBacklight, backlightSet), &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightHigh):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_setBacklightHigh(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkBacklight, backlightSet), &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
	}

}

#ifdef __cplusplus
}
#endif
