#include "atmosphere_callbacks.h"

//HEADER START

//HEADER END

void ATMO_Setup() {


}


ATMO_Status_t AirQualityCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t AirQualityCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(AirQualityCharacteristic, instance),
		&ATMO_VARIABLE(AirQualityCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(AirQualityCharacteristic, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(AirQualityCharacteristic, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(AirQualityCharacteristic, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(AirQualityCharacteristic, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(AirQualityCharacteristic, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(AirQualityCharacteristic, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(AirQualityCharacteristic, writeDataType), ATMO_PROPERTY(AirQualityCharacteristic, readDataType), ATMO_PROPERTY(AirQualityCharacteristic, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(AirQualityCharacteristic, instance),
		&ATMO_VARIABLE(AirQualityCharacteristic, bleCharacteristicHandle), 
		ATMO_VARIABLE(AirQualityCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(AirQualityCharacteristic, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(AirQualityCharacteristic, instance),
		ATMO_VARIABLE(AirQualityCharacteristic, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(AirQualityCharacteristic, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQualityCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(AirQualityCharacteristic, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(AirQualityCharacteristic, instance),
		ATMO_VARIABLE(AirQualityCharacteristic, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQualityCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(AirQualityCharacteristic, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQualityCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t AirQualityCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t TemperatureCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t TemperatureCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(TemperatureCharacteristic, instance),
		&ATMO_VARIABLE(TemperatureCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(TemperatureCharacteristic, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(TemperatureCharacteristic, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(TemperatureCharacteristic, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(TemperatureCharacteristic, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(TemperatureCharacteristic, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(TemperatureCharacteristic, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(TemperatureCharacteristic, writeDataType), ATMO_PROPERTY(TemperatureCharacteristic, readDataType), ATMO_PROPERTY(TemperatureCharacteristic, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(TemperatureCharacteristic, instance),
		&ATMO_VARIABLE(TemperatureCharacteristic, bleCharacteristicHandle), 
		ATMO_VARIABLE(TemperatureCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(TemperatureCharacteristic, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(TemperatureCharacteristic, instance),
		ATMO_VARIABLE(TemperatureCharacteristic, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(TemperatureCharacteristic, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t TemperatureCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(TemperatureCharacteristic, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(TemperatureCharacteristic, instance),
		ATMO_VARIABLE(TemperatureCharacteristic, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t TemperatureCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(TemperatureCharacteristic, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t TemperatureCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t TemperatureCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t HumidityCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t HumidityCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(HumidityCharacteristic, instance),
		&ATMO_VARIABLE(HumidityCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(HumidityCharacteristic, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(HumidityCharacteristic, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(HumidityCharacteristic, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(HumidityCharacteristic, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(HumidityCharacteristic, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(HumidityCharacteristic, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(HumidityCharacteristic, writeDataType), ATMO_PROPERTY(HumidityCharacteristic, readDataType), ATMO_PROPERTY(HumidityCharacteristic, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(HumidityCharacteristic, instance),
		&ATMO_VARIABLE(HumidityCharacteristic, bleCharacteristicHandle), 
		ATMO_VARIABLE(HumidityCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(HumidityCharacteristic, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(HumidityCharacteristic, instance),
		ATMO_VARIABLE(HumidityCharacteristic, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(HumidityCharacteristic, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t HumidityCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(HumidityCharacteristic, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(HumidityCharacteristic, instance),
		ATMO_VARIABLE(HumidityCharacteristic, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t HumidityCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(HumidityCharacteristic, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t HumidityCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t HumidityCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t PressureCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t PressureCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(PressureCharacteristic, instance),
		&ATMO_VARIABLE(PressureCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(PressureCharacteristic, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(PressureCharacteristic, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(PressureCharacteristic, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(PressureCharacteristic, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(PressureCharacteristic, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(PressureCharacteristic, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(PressureCharacteristic, writeDataType), ATMO_PROPERTY(PressureCharacteristic, readDataType), ATMO_PROPERTY(PressureCharacteristic, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(PressureCharacteristic, instance),
		&ATMO_VARIABLE(PressureCharacteristic, bleCharacteristicHandle), 
		ATMO_VARIABLE(PressureCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(PressureCharacteristic, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(PressureCharacteristic, instance),
		ATMO_VARIABLE(PressureCharacteristic, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(PressureCharacteristic, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t PressureCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(PressureCharacteristic, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(PressureCharacteristic, instance),
		ATMO_VARIABLE(PressureCharacteristic, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t PressureCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(PressureCharacteristic, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t PressureCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t PressureCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t AmbientLightCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t AmbientLightCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(AmbientLightCharacteristic, instance),
		&ATMO_VARIABLE(AmbientLightCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(AmbientLightCharacteristic, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(AmbientLightCharacteristic, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(AmbientLightCharacteristic, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(AmbientLightCharacteristic, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(AmbientLightCharacteristic, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(AmbientLightCharacteristic, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(AmbientLightCharacteristic, writeDataType), ATMO_PROPERTY(AmbientLightCharacteristic, readDataType), ATMO_PROPERTY(AmbientLightCharacteristic, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(AmbientLightCharacteristic, instance),
		&ATMO_VARIABLE(AmbientLightCharacteristic, bleCharacteristicHandle), 
		ATMO_VARIABLE(AmbientLightCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(AmbientLightCharacteristic, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(AmbientLightCharacteristic, instance),
		ATMO_VARIABLE(AmbientLightCharacteristic, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(AmbientLightCharacteristic, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t AmbientLightCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(AmbientLightCharacteristic, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(AmbientLightCharacteristic, instance),
		ATMO_VARIABLE(AmbientLightCharacteristic, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t AmbientLightCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(AmbientLightCharacteristic, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t AmbientLightCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t AmbientLightCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_setup(ATMO_Value_t *in, ATMO_Value_t *out) {
	ATMO_SX9500_Config_t config;
	config.address = ATMO_PROPERTY(SX9500Touch, i2cAddress);
	config.i2cDriverInstance = ATMO_PROPERTY(SX9500Touch, i2cInstance);
	config.gpioDriverInstance = ATMO_PROPERTY(SX9500Touch, gpioInstance);
	config.interruptEnabled = ATMO_PROPERTY(SX9500Touch, interruptEnabled);
	config.interruptPin = ATMO_PROPERTY(SX9500Touch, interruptGpio);
	ATMO_SX9500_Init(&config);
	ATMO_SX9500_RegisterTouchedAbilityHandle(SX9500_Touched_Up, ATMO_ABILITY(SX9500Touch, pressUp));
	ATMO_SX9500_RegisterTouchedAbilityHandle(SX9500_Touched_Down, ATMO_ABILITY(SX9500Touch, pressDown));
	ATMO_SX9500_RegisterTouchedAbilityHandle(SX9500_Touched_Left, ATMO_ABILITY(SX9500Touch, pressLeft));
	ATMO_SX9500_RegisterTouchedAbilityHandle(SX9500_Touched_Right, ATMO_ABILITY(SX9500Touch, pressRight));
	return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_getTouchData(ATMO_Value_t *in, ATMO_Value_t *out) {
	return;
}


ATMO_Status_t SX9500Touch_pressUp(ATMO_Value_t *in, ATMO_Value_t *out) {
SX9500_TouchState_t touchState;
ATMO_GetBinary(in, &touchState, sizeof(touchState));
ATMO_CreateValueBinary(out, &touchState, sizeof(touchState));
return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_pressDown(ATMO_Value_t *in, ATMO_Value_t *out) {
SX9500_TouchState_t touchState;
ATMO_GetBinary(in, &touchState, sizeof(touchState));
ATMO_CreateValueBinary(out, &touchState, sizeof(touchState));
return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_pressLeft(ATMO_Value_t *in, ATMO_Value_t *out) {
SX9500_TouchState_t touchState;
ATMO_GetBinary(in, &touchState, sizeof(touchState));
ATMO_CreateValueBinary(out, &touchState, sizeof(touchState));
return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_pressRight(ATMO_Value_t *in, ATMO_Value_t *out) {
SX9500_TouchState_t touchState;
ATMO_GetBinary(in, &touchState, sizeof(touchState));
ATMO_CreateValueBinary(out, &touchState, sizeof(touchState));
return ATMO_Status_Success;
}


ATMO_Status_t Temperature_P_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Temperature_P_displayPage(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_DisplayPageByCoord(ATMO_PROPERTY(Temperature_P, x), ATMO_PROPERTY(Temperature_P, y), false);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Temperature_P_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
    
}


ATMO_Status_t Temperature_P_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Temperature_P_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Temperature_P_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Temperature_P_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Temperature_P_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    ATMO_UI_PAGE_Config_t config;
	config.hidden = ATMO_PROPERTY(Temperature_P, pageHidden);
	config.textColor = ATMO_PROPERTY(Temperature_P, textColor);
    config.activeButtons = ATMO_UI_Page_GetButtonMask(ATMO_PROPERTY(Temperature_P, topRightButtonEnabled),
    ATMO_PROPERTY(Temperature_P,bottomRightButtonEnabled), ATMO_PROPERTY(Temperature_P, topLeftButtonEnabled), ATMO_PROPERTY(Temperature_P, bottomLeftButtonEnabled));
	config.x = ATMO_PROPERTY(Temperature_P, x);
    config.x = ATMO_PROPERTY(Temperature_P, x);
    config.y = ATMO_PROPERTY(Temperature_P, y);
	strncpy(config.topLeftButtonLabel, ATMO_PROPERTY(Temperature_P, topLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.topRightButtonLabel, ATMO_PROPERTY(Temperature_P, topRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomLeftButtonLabel, ATMO_PROPERTY(Temperature_P, bottomLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomRightButtonLabel, ATMO_PROPERTY(Temperature_P, bottomRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
    config.spanX = ATMO_PROPERTY(Temperature_P, spanX);
	config.spanY = ATMO_PROPERTY(Temperature_P, spanY);
    config.title = ATMO_PROPERTY(Temperature_P, pageTitle);
    config.titleHidden = ATMO_PROPERTY(Temperature_P, titleHidden);
	ATMO_UI_SINGLEICONTEXT_Init(&config);
	ATMO_VARIABLE(Temperature_P, pageHandle) = config.templateInstance;
    ATMO_UI_SINGLEICONTEXT_SetMainText(config.templateInstance, ATMO_PROPERTY(Temperature_P, label));
    ATMO_UI_SINGLEICONTEXT_SetIcon(config.templateInstance, ATMO_PROPERTY(Temperature_P, icon));
    ATMO_UI_SINGLEICONTEXT_RegisterOnDisplayedAbilityHandle(ATMO_VARIABLE(Temperature_P,pageHandle), ATMO_ABILITY(Temperature_P, onDisplayed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Temperature_P,pageHandle), 1, ATMO_ABILITY(Temperature_P, topRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Temperature_P,pageHandle), 2, ATMO_ABILITY(Temperature_P, bottomRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Temperature_P,pageHandle), 3, ATMO_ABILITY(Temperature_P, topLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Temperature_P,pageHandle), 4, ATMO_ABILITY(Temperature_P, bottomLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterOnLeaveAbilityHandle(config.templateInstance, ATMO_ABILITY(Temperature_P, onLeave));
	return ATMO_Status_Success;
    
}


ATMO_Status_t Temperature_P_onLeave(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Temperature_P_setLabel(ATMO_Value_t *in, ATMO_Value_t *out) {

    char label[32];
    if(ATMO_GetString(in, label, 32) == ATMO_Status_Success)
    {
        ATMO_UI_SINGLEICONTEXT_SetMainText(ATMO_VARIABLE(Temperature_P,pageHandle), label);
    }
    else
    {
        return ATMO_Status_Fail;
    }

    return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedPageController_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedPageController_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_PAGE_CONTROLLER_Config_t config;
	config.enableUpDownNavLabels = ATMO_PROPERTY(EmbeddedPageController, upDownNavigationLabelsEnabled);
	config.enableLeftRightNavLabels = ATMO_PROPERTY(EmbeddedPageController, leftRightNavigationLabelsEnabled);
	ATMO_UI_Page_SetConfiguration(&config);
    return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_displayRootPage(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	ATMO_UI_Page_DisplayRootPage();
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_navigateUp(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessNavButton(ATMO_UI_PAGE_NAV_UP);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_navigateDown(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessNavButton(ATMO_UI_PAGE_NAV_DOWN);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_navigateLeft(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessNavButton(ATMO_UI_PAGE_NAV_LEFT);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_navigateRight(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessNavButton(ATMO_UI_PAGE_NAV_RIGHT);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_processTopRightButton(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessUserButton(1);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_processBottomRightButton(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessUserButton(2);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_processTopLeftButton(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessUserButton(3);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_processBottomLeftButton(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessUserButton(4);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Humidity_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Humidity_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_DisplayPageByCoord(ATMO_PROPERTY(Humidity_Pag, x), ATMO_PROPERTY(Humidity_Pag, y), false);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Humidity_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
    
}


ATMO_Status_t Humidity_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Humidity_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Humidity_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Humidity_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Humidity_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    ATMO_UI_PAGE_Config_t config;
	config.hidden = ATMO_PROPERTY(Humidity_Pag, pageHidden);
	config.textColor = ATMO_PROPERTY(Humidity_Pag, textColor);
    config.activeButtons = ATMO_UI_Page_GetButtonMask(ATMO_PROPERTY(Humidity_Pag, topRightButtonEnabled),
    ATMO_PROPERTY(Humidity_Pag,bottomRightButtonEnabled), ATMO_PROPERTY(Humidity_Pag, topLeftButtonEnabled), ATMO_PROPERTY(Humidity_Pag, bottomLeftButtonEnabled));
	config.x = ATMO_PROPERTY(Humidity_Pag, x);
    config.x = ATMO_PROPERTY(Humidity_Pag, x);
    config.y = ATMO_PROPERTY(Humidity_Pag, y);
	strncpy(config.topLeftButtonLabel, ATMO_PROPERTY(Humidity_Pag, topLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.topRightButtonLabel, ATMO_PROPERTY(Humidity_Pag, topRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomLeftButtonLabel, ATMO_PROPERTY(Humidity_Pag, bottomLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomRightButtonLabel, ATMO_PROPERTY(Humidity_Pag, bottomRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
    config.spanX = ATMO_PROPERTY(Humidity_Pag, spanX);
	config.spanY = ATMO_PROPERTY(Humidity_Pag, spanY);
    config.title = ATMO_PROPERTY(Humidity_Pag, pageTitle);
    config.titleHidden = ATMO_PROPERTY(Humidity_Pag, titleHidden);
	ATMO_UI_SINGLEICONTEXT_Init(&config);
	ATMO_VARIABLE(Humidity_Pag, pageHandle) = config.templateInstance;
    ATMO_UI_SINGLEICONTEXT_SetMainText(config.templateInstance, ATMO_PROPERTY(Humidity_Pag, label));
    ATMO_UI_SINGLEICONTEXT_SetIcon(config.templateInstance, ATMO_PROPERTY(Humidity_Pag, icon));
    ATMO_UI_SINGLEICONTEXT_RegisterOnDisplayedAbilityHandle(ATMO_VARIABLE(Humidity_Pag,pageHandle), ATMO_ABILITY(Humidity_Pag, onDisplayed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Humidity_Pag,pageHandle), 1, ATMO_ABILITY(Humidity_Pag, topRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Humidity_Pag,pageHandle), 2, ATMO_ABILITY(Humidity_Pag, bottomRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Humidity_Pag,pageHandle), 3, ATMO_ABILITY(Humidity_Pag, topLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Humidity_Pag,pageHandle), 4, ATMO_ABILITY(Humidity_Pag, bottomLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterOnLeaveAbilityHandle(config.templateInstance, ATMO_ABILITY(Humidity_Pag, onLeave));
	return ATMO_Status_Success;
    
}


ATMO_Status_t Humidity_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Humidity_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out) {

    char label[32];
    if(ATMO_GetString(in, label, 32) == ATMO_Status_Success)
    {
        ATMO_UI_SINGLEICONTEXT_SetMainText(ATMO_VARIABLE(Humidity_Pag,pageHandle), label);
    }
    else
    {
        return ATMO_Status_Fail;
    }

    return ATMO_Status_Success;
    
}


ATMO_Status_t Pressure_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Pressure_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_DisplayPageByCoord(ATMO_PROPERTY(Pressure_Pag, x), ATMO_PROPERTY(Pressure_Pag, y), false);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Pressure_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
    
}


ATMO_Status_t Pressure_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Pressure_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Pressure_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Pressure_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Pressure_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    ATMO_UI_PAGE_Config_t config;
	config.hidden = ATMO_PROPERTY(Pressure_Pag, pageHidden);
	config.textColor = ATMO_PROPERTY(Pressure_Pag, textColor);
    config.activeButtons = ATMO_UI_Page_GetButtonMask(ATMO_PROPERTY(Pressure_Pag, topRightButtonEnabled),
    ATMO_PROPERTY(Pressure_Pag,bottomRightButtonEnabled), ATMO_PROPERTY(Pressure_Pag, topLeftButtonEnabled), ATMO_PROPERTY(Pressure_Pag, bottomLeftButtonEnabled));
	config.x = ATMO_PROPERTY(Pressure_Pag, x);
    config.x = ATMO_PROPERTY(Pressure_Pag, x);
    config.y = ATMO_PROPERTY(Pressure_Pag, y);
	strncpy(config.topLeftButtonLabel, ATMO_PROPERTY(Pressure_Pag, topLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.topRightButtonLabel, ATMO_PROPERTY(Pressure_Pag, topRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomLeftButtonLabel, ATMO_PROPERTY(Pressure_Pag, bottomLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomRightButtonLabel, ATMO_PROPERTY(Pressure_Pag, bottomRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
    config.spanX = ATMO_PROPERTY(Pressure_Pag, spanX);
	config.spanY = ATMO_PROPERTY(Pressure_Pag, spanY);
    config.title = ATMO_PROPERTY(Pressure_Pag, pageTitle);
    config.titleHidden = ATMO_PROPERTY(Pressure_Pag, titleHidden);
	ATMO_UI_SINGLEICONTEXT_Init(&config);
	ATMO_VARIABLE(Pressure_Pag, pageHandle) = config.templateInstance;
    ATMO_UI_SINGLEICONTEXT_SetMainText(config.templateInstance, ATMO_PROPERTY(Pressure_Pag, label));
    ATMO_UI_SINGLEICONTEXT_SetIcon(config.templateInstance, ATMO_PROPERTY(Pressure_Pag, icon));
    ATMO_UI_SINGLEICONTEXT_RegisterOnDisplayedAbilityHandle(ATMO_VARIABLE(Pressure_Pag,pageHandle), ATMO_ABILITY(Pressure_Pag, onDisplayed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Pressure_Pag,pageHandle), 1, ATMO_ABILITY(Pressure_Pag, topRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Pressure_Pag,pageHandle), 2, ATMO_ABILITY(Pressure_Pag, bottomRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Pressure_Pag,pageHandle), 3, ATMO_ABILITY(Pressure_Pag, topLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(Pressure_Pag,pageHandle), 4, ATMO_ABILITY(Pressure_Pag, bottomLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterOnLeaveAbilityHandle(config.templateInstance, ATMO_ABILITY(Pressure_Pag, onLeave));
	return ATMO_Status_Success;
    
}


ATMO_Status_t Pressure_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t Pressure_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out) {

    char label[32];
    if(ATMO_GetString(in, label, 32) == ATMO_Status_Success)
    {
        ATMO_UI_SINGLEICONTEXT_SetMainText(ATMO_VARIABLE(Pressure_Pag,pageHandle), label);
    }
    else
    {
        return ATMO_Status_Fail;
    }

    return ATMO_Status_Success;
    
}


ATMO_Status_t ConvertPressur_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	unsigned int pressurePa = 0;
	ATMO_GetUnsignedInt(in, &pressurePa);
	ATMO_CreateValueUnsignedInt(out, pressurePa / 100);
	return ATMO_Status_Success;
}


ATMO_Status_t AmientLight_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t AmientLight_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_DisplayPageByCoord(ATMO_PROPERTY(AmientLight_Pag, x), ATMO_PROPERTY(AmientLight_Pag, y), false);
	return ATMO_Status_Success;
	
}


ATMO_Status_t AmientLight_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
    
}


ATMO_Status_t AmientLight_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AmientLight_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AmientLight_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AmientLight_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AmientLight_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    ATMO_UI_PAGE_Config_t config;
	config.hidden = ATMO_PROPERTY(AmientLight_Pag, pageHidden);
	config.textColor = ATMO_PROPERTY(AmientLight_Pag, textColor);
    config.activeButtons = ATMO_UI_Page_GetButtonMask(ATMO_PROPERTY(AmientLight_Pag, topRightButtonEnabled),
    ATMO_PROPERTY(AmientLight_Pag,bottomRightButtonEnabled), ATMO_PROPERTY(AmientLight_Pag, topLeftButtonEnabled), ATMO_PROPERTY(AmientLight_Pag, bottomLeftButtonEnabled));
	config.x = ATMO_PROPERTY(AmientLight_Pag, x);
    config.x = ATMO_PROPERTY(AmientLight_Pag, x);
    config.y = ATMO_PROPERTY(AmientLight_Pag, y);
	strncpy(config.topLeftButtonLabel, ATMO_PROPERTY(AmientLight_Pag, topLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.topRightButtonLabel, ATMO_PROPERTY(AmientLight_Pag, topRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomLeftButtonLabel, ATMO_PROPERTY(AmientLight_Pag, bottomLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomRightButtonLabel, ATMO_PROPERTY(AmientLight_Pag, bottomRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
    config.spanX = ATMO_PROPERTY(AmientLight_Pag, spanX);
	config.spanY = ATMO_PROPERTY(AmientLight_Pag, spanY);
    config.title = ATMO_PROPERTY(AmientLight_Pag, pageTitle);
    config.titleHidden = ATMO_PROPERTY(AmientLight_Pag, titleHidden);
	ATMO_UI_SINGLEICONTEXT_Init(&config);
	ATMO_VARIABLE(AmientLight_Pag, pageHandle) = config.templateInstance;
    ATMO_UI_SINGLEICONTEXT_SetMainText(config.templateInstance, ATMO_PROPERTY(AmientLight_Pag, label));
    ATMO_UI_SINGLEICONTEXT_SetIcon(config.templateInstance, ATMO_PROPERTY(AmientLight_Pag, icon));
    ATMO_UI_SINGLEICONTEXT_RegisterOnDisplayedAbilityHandle(ATMO_VARIABLE(AmientLight_Pag,pageHandle), ATMO_ABILITY(AmientLight_Pag, onDisplayed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AmientLight_Pag,pageHandle), 1, ATMO_ABILITY(AmientLight_Pag, topRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AmientLight_Pag,pageHandle), 2, ATMO_ABILITY(AmientLight_Pag, bottomRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AmientLight_Pag,pageHandle), 3, ATMO_ABILITY(AmientLight_Pag, topLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AmientLight_Pag,pageHandle), 4, ATMO_ABILITY(AmientLight_Pag, bottomLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterOnLeaveAbilityHandle(config.templateInstance, ATMO_ABILITY(AmientLight_Pag, onLeave));
	return ATMO_Status_Success;
    
}


ATMO_Status_t AmientLight_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AmientLight_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out) {

    char label[32];
    if(ATMO_GetString(in, label, 32) == ATMO_Status_Success)
    {
        ATMO_UI_SINGLEICONTEXT_SetMainText(ATMO_VARIABLE(AmientLight_Pag,pageHandle), label);
    }
    else
    {
        return ATMO_Status_Fail;
    }

    return ATMO_Status_Success;
    
}


ATMO_Status_t AirQuality_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t AirQuality_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_DisplayPageByCoord(ATMO_PROPERTY(AirQuality_Pag, x), ATMO_PROPERTY(AirQuality_Pag, y), false);
	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
    
}


ATMO_Status_t AirQuality_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    ATMO_UI_PAGE_Config_t config;
	config.hidden = ATMO_PROPERTY(AirQuality_Pag, pageHidden);
	config.textColor = ATMO_PROPERTY(AirQuality_Pag, textColor);
    config.activeButtons = ATMO_UI_Page_GetButtonMask(ATMO_PROPERTY(AirQuality_Pag, topRightButtonEnabled),
    ATMO_PROPERTY(AirQuality_Pag,bottomRightButtonEnabled), ATMO_PROPERTY(AirQuality_Pag, topLeftButtonEnabled), ATMO_PROPERTY(AirQuality_Pag, bottomLeftButtonEnabled));
	config.x = ATMO_PROPERTY(AirQuality_Pag, x);
    config.x = ATMO_PROPERTY(AirQuality_Pag, x);
    config.y = ATMO_PROPERTY(AirQuality_Pag, y);
	strncpy(config.topLeftButtonLabel, ATMO_PROPERTY(AirQuality_Pag, topLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.topRightButtonLabel, ATMO_PROPERTY(AirQuality_Pag, topRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomLeftButtonLabel, ATMO_PROPERTY(AirQuality_Pag, bottomLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomRightButtonLabel, ATMO_PROPERTY(AirQuality_Pag, bottomRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
    config.spanX = ATMO_PROPERTY(AirQuality_Pag, spanX);
	config.spanY = ATMO_PROPERTY(AirQuality_Pag, spanY);
    config.title = ATMO_PROPERTY(AirQuality_Pag, pageTitle);
    config.titleHidden = ATMO_PROPERTY(AirQuality_Pag, titleHidden);
	ATMO_UI_SINGLEICONTEXT_Init(&config);
	ATMO_VARIABLE(AirQuality_Pag, pageHandle) = config.templateInstance;
    ATMO_UI_SINGLEICONTEXT_SetMainText(config.templateInstance, ATMO_PROPERTY(AirQuality_Pag, label));
    ATMO_UI_SINGLEICONTEXT_SetIcon(config.templateInstance, ATMO_PROPERTY(AirQuality_Pag, icon));
    ATMO_UI_SINGLEICONTEXT_RegisterOnDisplayedAbilityHandle(ATMO_VARIABLE(AirQuality_Pag,pageHandle), ATMO_ABILITY(AirQuality_Pag, onDisplayed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AirQuality_Pag,pageHandle), 1, ATMO_ABILITY(AirQuality_Pag, topRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AirQuality_Pag,pageHandle), 2, ATMO_ABILITY(AirQuality_Pag, bottomRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AirQuality_Pag,pageHandle), 3, ATMO_ABILITY(AirQuality_Pag, topLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AirQuality_Pag,pageHandle), 4, ATMO_ABILITY(AirQuality_Pag, bottomLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterOnLeaveAbilityHandle(config.templateInstance, ATMO_ABILITY(AirQuality_Pag, onLeave));
	return ATMO_Status_Success;
    
}


ATMO_Status_t AirQuality_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out) {

    char label[32];
    if(ATMO_GetString(in, label, 32) == ATMO_Status_Success)
    {
        ATMO_UI_SINGLEICONTEXT_SetMainText(ATMO_VARIABLE(AirQuality_Pag,pageHandle), label);
    }
    else
    {
        return ATMO_Status_Fail;
    }

    return ATMO_Status_Success;
    
}


ATMO_Status_t Interval_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Interval_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_INTERVAL_Handle_t intervalHandle;
    ATMO_INTERVAL_AddAbilityInterval(
		ATMO_PROPERTY(Interval, instance), 
		ATMO_ABILITY(Interval, interval), 
		ATMO_PROPERTY(Interval, time), 
		&intervalHandle
	);
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t Interval_interval(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t TSL2572AmbientLight_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t TSL2572AmbientLight_setup(ATMO_Value_t *in, ATMO_Value_t *out) {
	ATMO_TSL2572_Config_t config;
	config.address = ATMO_PROPERTY(TSL2572AmbientLight, i2cAddress);
	config.i2cDriverInstance = ATMO_PROPERTY(TSL2572AmbientLight, i2cInstance);

	return ( ATMO_TSL2572_Init(&config) == ATMO_TSL2572_Status_Success ) ? ATMO_Status_Success : ATMO_Status_Fail;

}


ATMO_Status_t TSL2572AmbientLight_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_TSL2572_SetEnabled(true);
return ATMO_Status_Success;
}


ATMO_Status_t TSL2572AmbientLight_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_TSL2572_SetEnabled(false);
return ATMO_Status_Success;
}


ATMO_Status_t TSL2572AmbientLight_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
bool enabled = false;
ATMO_GetBool(in, &enabled);
ATMO_TSL2572_SetEnabled(enabled);
return ATMO_Status_Success;
}


ATMO_Status_t TSL2572AmbientLight_readAmbientLight(ATMO_Value_t *in, ATMO_Value_t *out) {
    float lightLux;
    if(ATMO_TSL2572_GetAmbientLight(&lightLux) != ATMO_TSL2572_Status_Success)
    {
        ATMO_CreateValueVoid(out);
        return ATMO_Status_Fail;
    }
    ATMO_CreateValueInt(out, (int)lightLux);
    return ATMO_Status_Success;
}


ATMO_Status_t GetTempStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	float temp = 0;
	ATMO_GetFloat(in, &temp);
	char str[32];
	sprintf(str, "%.1f C", temp);
	ATMO_CreateValueString(out, str);
	return ATMO_Status_Success;
}


ATMO_Status_t GetHumidityStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	float temp = 0;
	ATMO_GetFloat(in, &temp);
	char str[32];
	sprintf(str, "%.1f %%rh", temp);
	ATMO_CreateValueString(out, str);
	return ATMO_Status_Success;
}


ATMO_Status_t GetPressureStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	int temp = 0;
	ATMO_GetInt(in, &temp);
	char str[32];
	sprintf(str, "%d hPa", temp);
	ATMO_CreateValueString(out, str);
	return ATMO_Status_Success;
}


ATMO_Status_t GetLightStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	int temp = 0;
	ATMO_GetInt(in, &temp);
	char str[32];
	sprintf(str, "%d lx", temp);
	ATMO_CreateValueString(out, str);
	return ATMO_Status_Success;
}


ATMO_Status_t GetAirQualityStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	int temp = 0;
	ATMO_GetInt(in, &temp);
	char str[32];
	sprintf(str, "%d ppb", temp);
	ATMO_CreateValueString(out, str);
	return ATMO_Status_Success;
}


ATMO_Status_t ENS210TemperatureHumidity_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t ENS210TemperatureHumidity_setup(ATMO_Value_t *in, ATMO_Value_t *out) {
	ATMO_ENS210_Config_t config;
	config.address = ATMO_PROPERTY(ENS210TemperatureHumidity, i2cAddress);
	config.i2cDriverInstance = ATMO_PROPERTY(ENS210TemperatureHumidity, i2cInstance);
	config.tempCalibrationOffset = ATMO_PROPERTY(ENS210TemperatureHumidity, tempCalibrationOffset);

	return ( ATMO_ENS210_Init(&config) == ATMO_ENS210_Status_Success ) ? ATMO_Status_Success : ATMO_Status_Fail;

}


ATMO_Status_t ENS210TemperatureHumidity_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_ENS210_SetEnabled(true);
return ATMO_Status_Success;
}


ATMO_Status_t ENS210TemperatureHumidity_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_ENS210_SetEnabled(false);
return ATMO_Status_Success;
}


ATMO_Status_t ENS210TemperatureHumidity_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
bool enabled = false;
ATMO_GetBool(in, &enabled);
ATMO_ENS210_SetEnabled(enabled);
return ATMO_Status_Success;
}


ATMO_Status_t ENS210TemperatureHumidity_readTemperature(ATMO_Value_t *in, ATMO_Value_t *out) {
    float tempC;
    
    if(ATMO_ENS210_GetTemperatureFloat(&tempC) == ATMO_ENS210_Status_Success)
    {
        ATMO_CreateValueFloat(out, tempC);
    }
    else
    {
        ATMO_CreateValueVoid(out);
    }
    
    return ATMO_Status_Success;
}


ATMO_Status_t ENS210TemperatureHumidity_readHumidity(ATMO_Value_t *in, ATMO_Value_t *out) {
    float humidityPct;

    if(ATMO_ENS210_GetHumidityFloat(&humidityPct) == ATMO_ENS210_Status_Success)
    {
        ATMO_CreateValueFloat(out, humidityPct);
    }
    else
    {
        ATMO_CreateValueVoid(out);
    }
    
    return ATMO_Status_Success;
}


ATMO_Status_t MPL3115Pressure_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t MPL3115Pressure_setup(ATMO_Value_t *in, ATMO_Value_t *out) {
	ATMO_MPL3115_Config_t config;
	config.address = ATMO_PROPERTY(MPL3115Pressure, i2cAddress);
	config.i2cDriverInstance = ATMO_PROPERTY(MPL3115Pressure, i2cInstance);
	config.MPLsettings.mode = MPL_MODE_PRESSURE;
	config.MPLsettings.oversample = MPL_OS_0;			// oversampling = 1
	config.MPLsettings.autoAcquisitionTime = MPL_ST_0;	// Auto acquisition time = 1s
	config.MPLsettings.pressureOffset = ATMO_PROPERTY(MPL3115Pressure, pressureOffset);	// Offset pressure correction = 4*-128 = -512Pa (8 bits signed integer)
	config.MPLsettings.altitudeOffset = ATMO_PROPERTY(MPL3115Pressure, altitudeOffset);	// Offset altitude correction = 128m (signed 8 bits integer)
	config.MPLsettings.tempOffset = ATMO_PROPERTY(MPL3115Pressure, tempOffset);			// Offset temperature correction -8°C (0.0625°C/LSB)
	config.MPLsettings.fifoMode = FIFO_DISABLED;		// FIFO mode disabled
	config.MPLsettings.fifoWatermark = 5;				// 6 bits to set the number of FIFO samples required to trigger a watermark interrupt.
	config.MPLsettings.fifoINTpin = FIFO_INT1;			// set pin INT1 as output for FIFO interrupt

	return ( ATMO_MPL3115_Init(&config) == ATMO_MPL3115_Status_Success ) ? ATMO_Status_Success : ATMO_Status_Fail;

}


ATMO_Status_t MPL3115Pressure_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_MPL3115_SetEnabled(true);
return ATMO_Status_Success;
}


ATMO_Status_t MPL3115Pressure_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_MPL3115_SetEnabled(false);
return ATMO_Status_Success;
}


ATMO_Status_t MPL3115Pressure_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
bool enabled = false;
ATMO_GetBool(in, &enabled);
ATMO_MPL3115_SetEnabled(enabled);
return ATMO_Status_Success;
}


ATMO_Status_t MPL3115Pressure_readAltitude(ATMO_Value_t *in, ATMO_Value_t *out) {
    uint32_t altitudeMeters;
    if(ATMO_MPL3115_GetAltitude(&altitudeMeters) != ATMO_MPL3115_Status_Success)
    {
        ATMO_CreateValueVoid(out);
        return ATMO_Status_Fail;
    }
    ATMO_CreateValueInt(out, (int)altitudeMeters);
    return ATMO_Status_Success;
}


ATMO_Status_t MPL3115Pressure_readPressure(ATMO_Value_t *in, ATMO_Value_t *out) {
    uint32_t pressurePa;
    if(ATMO_MPL3115_GetPressure(&pressurePa) != ATMO_MPL3115_Status_Success)
    {
        ATMO_CreateValueVoid(out);
        return ATMO_Status_Fail;
    }
    ATMO_CreateValueInt(out, (int)pressurePa);
    return ATMO_Status_Success;
}


ATMO_Status_t MPL3115Pressure_readPressureKpa(ATMO_Value_t *in, ATMO_Value_t *out) {
    uint32_t pressurePa;
    if(ATMO_MPL3115_GetPressure(&pressurePa) != ATMO_MPL3115_Status_Success)
    {
        ATMO_CreateValueVoid(out);
        return ATMO_Status_Fail;
    }
    ATMO_CreateValueInt(out, (int)(pressurePa/1000));
    return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_setup(ATMO_Value_t *in, ATMO_Value_t *out) {
	ATMO_CCS811_Config_t config;
	config.operatingMode = ATMO_PROPERTY(CCS811AirQuality, operatingMode);
	config.address = ATMO_PROPERTY(CCS811AirQuality, i2cAddress);
	config.i2cDriverInstance = ATMO_PROPERTY(CCS811AirQuality, i2cInstance);

	return ( ATMO_CCS811_Init(&config) == ATMO_CCS811_Status_Success ) ? ATMO_Status_Success : ATMO_Status_Fail;

}


ATMO_Status_t CCS811AirQuality_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_CCS811_SetEnabled(true);
return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_CCS811_SetEnabled(false);
return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
bool enabled = false;
ATMO_GetBool(in, &enabled);
ATMO_CCS811_SetEnabled(enabled);
return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_readTVOC(ATMO_Value_t *in, ATMO_Value_t *out) {
    uint16_t tvoc;

    if(ATMO_CCS811_GetTVOC(&tvoc) == ATMO_CCS811_Status_Success)
    {
        ATMO_CreateValueUnsignedInt(out, (unsigned int)tvoc);
    }
    else
    {
        ATMO_CreateValueVoid(out);
    }
    
    return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_readCO2(ATMO_Value_t *in, ATMO_Value_t *out) {
    uint16_t co2;
    
    if(ATMO_CCS811_GetCO2(&co2) == ATMO_CCS811_Status_Success)
    {
        ATMO_CreateValueInt(out, (int)co2);
    }
    else
    {
        ATMO_CreateValueVoid(out);
    }
  
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedNxpRpkBacklight_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedNxpRpkBacklight_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    Backlight_SetLevel(ATMO_PROPERTY(EmbeddedNxpRpkBacklight, initialSetting));
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightOff(ATMO_Value_t *in, ATMO_Value_t *out) {

    Backlight_SetLevel(BLIGHT_LEVEL_OFF);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightLow(ATMO_Value_t *in, ATMO_Value_t *out) {

    Backlight_SetLevel(BLIGHT_LEVEL_LOW);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightMedium(ATMO_Value_t *in, ATMO_Value_t *out) {

    Backlight_SetLevel(BLIGHT_LEVEL_MEDIUM);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightHigh(ATMO_Value_t *in, ATMO_Value_t *out) {

    Backlight_SetLevel(BLIGHT_LEVEL_HIGH);
	return ATMO_Status_Success;
	
}

//FOOTER START

//FOOTER END

