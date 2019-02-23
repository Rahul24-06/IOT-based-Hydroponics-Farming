
#ifndef ATMO_PROPERTIES_H
#define ATMO_PROPERTIES_H

#ifdef __cplusplus
	extern "C"{
#endif

#define ATMO_PROPERTY(ELEMENT, NAME) ATMO_ ## ELEMENT ## _PROPERTY_  ## NAME

#define ATMO_AirQualityCharacteristic_PROPERTY_errorData NULL
#define ATMO_AirQualityCharacteristic_PROPERTY_codeUserChanged NULL
#define ATMO_AirQualityCharacteristic_PROPERTY_instance ATMO_DRIVERINSTANCE_BLE_BLE1
#define ATMO_AirQualityCharacteristic_PROPERTY_bleServiceUuid "1493dd8e-8c3e-4e74-a4ff-6f0cd50005f9"
#define ATMO_AirQualityCharacteristic_PROPERTY_bleCharacteristicUuid "1493dd8e-8c3e-4e75-a4ff-6f0cd50005f9"
#define ATMO_AirQualityCharacteristic_PROPERTY_read true
#define ATMO_AirQualityCharacteristic_PROPERTY_write true
#define ATMO_AirQualityCharacteristic_PROPERTY_notify true
#define ATMO_AirQualityCharacteristic_PROPERTY_readDataType ATMO_DATATYPE_UNSIGNED_INT
#define ATMO_AirQualityCharacteristic_PROPERTY_writeDataType ATMO_DATATYPE_UNSIGNED_INT
#define ATMO_AirQualityCharacteristic_PROPERTY_notifyDataType ATMO_DATATYPE_UNSIGNED_INT

#define ATMO_TemperatureCharacteristic_PROPERTY_errorData NULL
#define ATMO_TemperatureCharacteristic_PROPERTY_codeUserChanged NULL
#define ATMO_TemperatureCharacteristic_PROPERTY_instance ATMO_DRIVERINSTANCE_BLE_BLE1
#define ATMO_TemperatureCharacteristic_PROPERTY_bleServiceUuid "1493dd8e-8c3e-4e74-a4ff-6f0cd50005f9"
#define ATMO_TemperatureCharacteristic_PROPERTY_bleCharacteristicUuid "1493dd8e-8c3e-4e76-a4ff-6f0cd50005f9"
#define ATMO_TemperatureCharacteristic_PROPERTY_read true
#define ATMO_TemperatureCharacteristic_PROPERTY_write true
#define ATMO_TemperatureCharacteristic_PROPERTY_notify true
#define ATMO_TemperatureCharacteristic_PROPERTY_readDataType ATMO_DATATYPE_FLOAT
#define ATMO_TemperatureCharacteristic_PROPERTY_writeDataType ATMO_DATATYPE_FLOAT
#define ATMO_TemperatureCharacteristic_PROPERTY_notifyDataType ATMO_DATATYPE_FLOAT

#define ATMO_HumidityCharacteristic_PROPERTY_errorData NULL
#define ATMO_HumidityCharacteristic_PROPERTY_codeUserChanged NULL
#define ATMO_HumidityCharacteristic_PROPERTY_instance ATMO_DRIVERINSTANCE_BLE_BLE1
#define ATMO_HumidityCharacteristic_PROPERTY_bleServiceUuid "1493dd8e-8c3e-4e74-a4ff-6f0cd50005f9"
#define ATMO_HumidityCharacteristic_PROPERTY_bleCharacteristicUuid "1493dd8e-8c3e-4e77-a4ff-6f0cd50005f9"
#define ATMO_HumidityCharacteristic_PROPERTY_read true
#define ATMO_HumidityCharacteristic_PROPERTY_write true
#define ATMO_HumidityCharacteristic_PROPERTY_notify true
#define ATMO_HumidityCharacteristic_PROPERTY_readDataType ATMO_DATATYPE_FLOAT
#define ATMO_HumidityCharacteristic_PROPERTY_writeDataType ATMO_DATATYPE_FLOAT
#define ATMO_HumidityCharacteristic_PROPERTY_notifyDataType ATMO_DATATYPE_FLOAT

#define ATMO_PressureCharacteristic_PROPERTY_errorData NULL
#define ATMO_PressureCharacteristic_PROPERTY_codeUserChanged NULL
#define ATMO_PressureCharacteristic_PROPERTY_instance ATMO_DRIVERINSTANCE_BLE_BLE1
#define ATMO_PressureCharacteristic_PROPERTY_bleServiceUuid "1493dd8e-8c3e-4e74-a4ff-6f0cd50005f9"
#define ATMO_PressureCharacteristic_PROPERTY_bleCharacteristicUuid "1493dd8e-8c3e-4e78-a4ff-6f0cd50005f9"
#define ATMO_PressureCharacteristic_PROPERTY_read true
#define ATMO_PressureCharacteristic_PROPERTY_write true
#define ATMO_PressureCharacteristic_PROPERTY_notify true
#define ATMO_PressureCharacteristic_PROPERTY_readDataType ATMO_DATATYPE_UNSIGNED_INT
#define ATMO_PressureCharacteristic_PROPERTY_writeDataType ATMO_DATATYPE_UNSIGNED_INT
#define ATMO_PressureCharacteristic_PROPERTY_notifyDataType ATMO_DATATYPE_UNSIGNED_INT

#define ATMO_AmbientLightCharacteristic_PROPERTY_errorData NULL
#define ATMO_AmbientLightCharacteristic_PROPERTY_codeUserChanged NULL
#define ATMO_AmbientLightCharacteristic_PROPERTY_instance ATMO_DRIVERINSTANCE_BLE_BLE1
#define ATMO_AmbientLightCharacteristic_PROPERTY_bleServiceUuid "1493dd8e-8c3e-4e74-a4ff-6f0cd50005f9"
#define ATMO_AmbientLightCharacteristic_PROPERTY_bleCharacteristicUuid "1493dd8e-8c3e-4e79-a4ff-6f0cd50005f9"
#define ATMO_AmbientLightCharacteristic_PROPERTY_read true
#define ATMO_AmbientLightCharacteristic_PROPERTY_write true
#define ATMO_AmbientLightCharacteristic_PROPERTY_notify true
#define ATMO_AmbientLightCharacteristic_PROPERTY_readDataType ATMO_DATATYPE_UNSIGNED_INT
#define ATMO_AmbientLightCharacteristic_PROPERTY_writeDataType ATMO_DATATYPE_UNSIGNED_INT
#define ATMO_AmbientLightCharacteristic_PROPERTY_notifyDataType ATMO_DATATYPE_UNSIGNED_INT

#define ATMO_SX9500Touch_PROPERTY_errorData NULL
#define ATMO_SX9500Touch_PROPERTY_codeUserChanged NULL
#define ATMO_SX9500Touch_PROPERTY_i2cInstance ATMO_DRIVERINSTANCE_I2C_I2C2
#define ATMO_SX9500Touch_PROPERTY_gpioInstance ATMO_DRIVERINSTANCE_GPIO_GPIO1
#define ATMO_SX9500Touch_PROPERTY_interruptEnabled true
#define ATMO_SX9500Touch_PROPERTY_interruptGpio PTA9
#define ATMO_SX9500Touch_PROPERTY_i2cAddress 0x28

#define ATMO_Temperature_P_PROPERTY_errorData NULL
#define ATMO_Temperature_P_PROPERTY_codeUserChanged NULL
#define ATMO_Temperature_P_PROPERTY_textColor GUI_BLACK
#define ATMO_Temperature_P_PROPERTY_pageTitle "Temperature"
#define ATMO_Temperature_P_PROPERTY_titleHidden false
#define ATMO_Temperature_P_PROPERTY_pageHidden false
#define ATMO_Temperature_P_PROPERTY_topRightButtonLabel ""
#define ATMO_Temperature_P_PROPERTY_topRightButtonEnabled false
#define ATMO_Temperature_P_PROPERTY_bottomRightButtonLabel ""
#define ATMO_Temperature_P_PROPERTY_bottomRightButtonEnabled false
#define ATMO_Temperature_P_PROPERTY_topLeftButtonLabel ""
#define ATMO_Temperature_P_PROPERTY_topLeftButtonEnabled false
#define ATMO_Temperature_P_PROPERTY_bottomLeftButtonLabel ""
#define ATMO_Temperature_P_PROPERTY_bottomLeftButtonEnabled false
#define ATMO_Temperature_P_PROPERTY_x 0
#define ATMO_Temperature_P_PROPERTY_y 0
#define ATMO_Temperature_P_PROPERTY_spanX 1
#define ATMO_Temperature_P_PROPERTY_spanY 1
#define ATMO_Temperature_P_PROPERTY_icon icon_applications_thermostat
#define ATMO_Temperature_P_PROPERTY_label "N/A"

#define ATMO_EmbeddedPageController_PROPERTY_errorData NULL
#define ATMO_EmbeddedPageController_PROPERTY_codeUserChanged NULL
#define ATMO_EmbeddedPageController_PROPERTY_upDownNavigationLabelsEnabled true
#define ATMO_EmbeddedPageController_PROPERTY_leftRightNavigationLabelsEnabled true

#define ATMO_Humidity_Pag_PROPERTY_errorData NULL
#define ATMO_Humidity_Pag_PROPERTY_codeUserChanged NULL
#define ATMO_Humidity_Pag_PROPERTY_textColor GUI_BLACK
#define ATMO_Humidity_Pag_PROPERTY_pageTitle "Humidity"
#define ATMO_Humidity_Pag_PROPERTY_titleHidden false
#define ATMO_Humidity_Pag_PROPERTY_pageHidden false
#define ATMO_Humidity_Pag_PROPERTY_topRightButtonLabel ""
#define ATMO_Humidity_Pag_PROPERTY_topRightButtonEnabled false
#define ATMO_Humidity_Pag_PROPERTY_bottomRightButtonLabel ""
#define ATMO_Humidity_Pag_PROPERTY_bottomRightButtonEnabled false
#define ATMO_Humidity_Pag_PROPERTY_topLeftButtonLabel ""
#define ATMO_Humidity_Pag_PROPERTY_topLeftButtonEnabled false
#define ATMO_Humidity_Pag_PROPERTY_bottomLeftButtonLabel ""
#define ATMO_Humidity_Pag_PROPERTY_bottomLeftButtonEnabled false
#define ATMO_Humidity_Pag_PROPERTY_x 1
#define ATMO_Humidity_Pag_PROPERTY_y 0
#define ATMO_Humidity_Pag_PROPERTY_spanX 1
#define ATMO_Humidity_Pag_PROPERTY_spanY 1
#define ATMO_Humidity_Pag_PROPERTY_icon icon_applications_humidity
#define ATMO_Humidity_Pag_PROPERTY_label "N/A"

#define ATMO_Pressure_Pag_PROPERTY_errorData NULL
#define ATMO_Pressure_Pag_PROPERTY_codeUserChanged NULL
#define ATMO_Pressure_Pag_PROPERTY_textColor GUI_BLACK
#define ATMO_Pressure_Pag_PROPERTY_pageTitle "Pressure"
#define ATMO_Pressure_Pag_PROPERTY_titleHidden false
#define ATMO_Pressure_Pag_PROPERTY_pageHidden false
#define ATMO_Pressure_Pag_PROPERTY_topRightButtonLabel ""
#define ATMO_Pressure_Pag_PROPERTY_topRightButtonEnabled false
#define ATMO_Pressure_Pag_PROPERTY_bottomRightButtonLabel ""
#define ATMO_Pressure_Pag_PROPERTY_bottomRightButtonEnabled false
#define ATMO_Pressure_Pag_PROPERTY_topLeftButtonLabel ""
#define ATMO_Pressure_Pag_PROPERTY_topLeftButtonEnabled false
#define ATMO_Pressure_Pag_PROPERTY_bottomLeftButtonLabel ""
#define ATMO_Pressure_Pag_PROPERTY_bottomLeftButtonEnabled false
#define ATMO_Pressure_Pag_PROPERTY_x 2
#define ATMO_Pressure_Pag_PROPERTY_y 0
#define ATMO_Pressure_Pag_PROPERTY_spanX 1
#define ATMO_Pressure_Pag_PROPERTY_spanY 1
#define ATMO_Pressure_Pag_PROPERTY_icon icon_applications_pressure
#define ATMO_Pressure_Pag_PROPERTY_label "N/A"

#define ATMO_ConvertPressur_PROPERTY_errorData NULL
#define ATMO_ConvertPressur_PROPERTY_codeUserChanged NULL

#define ATMO_AmientLight_Pag_PROPERTY_errorData NULL
#define ATMO_AmientLight_Pag_PROPERTY_codeUserChanged NULL
#define ATMO_AmientLight_Pag_PROPERTY_textColor GUI_BLACK
#define ATMO_AmientLight_Pag_PROPERTY_pageTitle "Ambient Light"
#define ATMO_AmientLight_Pag_PROPERTY_titleHidden false
#define ATMO_AmientLight_Pag_PROPERTY_pageHidden false
#define ATMO_AmientLight_Pag_PROPERTY_topRightButtonLabel ""
#define ATMO_AmientLight_Pag_PROPERTY_topRightButtonEnabled false
#define ATMO_AmientLight_Pag_PROPERTY_bottomRightButtonLabel ""
#define ATMO_AmientLight_Pag_PROPERTY_bottomRightButtonEnabled false
#define ATMO_AmientLight_Pag_PROPERTY_topLeftButtonLabel ""
#define ATMO_AmientLight_Pag_PROPERTY_topLeftButtonEnabled false
#define ATMO_AmientLight_Pag_PROPERTY_bottomLeftButtonLabel ""
#define ATMO_AmientLight_Pag_PROPERTY_bottomLeftButtonEnabled false
#define ATMO_AmientLight_Pag_PROPERTY_x 3
#define ATMO_AmientLight_Pag_PROPERTY_y 0
#define ATMO_AmientLight_Pag_PROPERTY_spanX 1
#define ATMO_AmientLight_Pag_PROPERTY_spanY 1
#define ATMO_AmientLight_Pag_PROPERTY_icon icon_applications_light
#define ATMO_AmientLight_Pag_PROPERTY_label "N/A"

#define ATMO_AirQuality_Pag_PROPERTY_errorData NULL
#define ATMO_AirQuality_Pag_PROPERTY_codeUserChanged NULL
#define ATMO_AirQuality_Pag_PROPERTY_textColor GUI_BLACK
#define ATMO_AirQuality_Pag_PROPERTY_pageTitle "Air TVOC"
#define ATMO_AirQuality_Pag_PROPERTY_titleHidden false
#define ATMO_AirQuality_Pag_PROPERTY_pageHidden false
#define ATMO_AirQuality_Pag_PROPERTY_topRightButtonLabel ""
#define ATMO_AirQuality_Pag_PROPERTY_topRightButtonEnabled false
#define ATMO_AirQuality_Pag_PROPERTY_bottomRightButtonLabel ""
#define ATMO_AirQuality_Pag_PROPERTY_bottomRightButtonEnabled false
#define ATMO_AirQuality_Pag_PROPERTY_topLeftButtonLabel ""
#define ATMO_AirQuality_Pag_PROPERTY_topLeftButtonEnabled false
#define ATMO_AirQuality_Pag_PROPERTY_bottomLeftButtonLabel ""
#define ATMO_AirQuality_Pag_PROPERTY_bottomLeftButtonEnabled false
#define ATMO_AirQuality_Pag_PROPERTY_x 5
#define ATMO_AirQuality_Pag_PROPERTY_y 0
#define ATMO_AirQuality_Pag_PROPERTY_spanX 4
#define ATMO_AirQuality_Pag_PROPERTY_spanY 1
#define ATMO_AirQuality_Pag_PROPERTY_icon icon_applications_airq
#define ATMO_AirQuality_Pag_PROPERTY_label ""

#define ATMO_Interval_PROPERTY_errorData NULL
#define ATMO_Interval_PROPERTY_codeUserChanged NULL
#define ATMO_Interval_PROPERTY_instance ATMO_DRIVERINSTANCE_INTERVAL_INTERVAL1
#define ATMO_Interval_PROPERTY_time 10000

#define ATMO_TSL2572AmbientLight_PROPERTY_errorData NULL
#define ATMO_TSL2572AmbientLight_PROPERTY_codeUserChanged NULL
#define ATMO_TSL2572AmbientLight_PROPERTY_i2cInstance ATMO_DRIVERINSTANCE_I2C_I2C2
#define ATMO_TSL2572AmbientLight_PROPERTY_i2cAddress 0x39

#define ATMO_GetTempStr_PROPERTY_errorData NULL
#define ATMO_GetTempStr_PROPERTY_codeUserChanged NULL

#define ATMO_GetHumidityStr_PROPERTY_errorData NULL
#define ATMO_GetHumidityStr_PROPERTY_codeUserChanged NULL

#define ATMO_GetPressureStr_PROPERTY_errorData NULL
#define ATMO_GetPressureStr_PROPERTY_codeUserChanged NULL

#define ATMO_GetLightStr_PROPERTY_errorData NULL
#define ATMO_GetLightStr_PROPERTY_codeUserChanged NULL

#define ATMO_GetAirQualityStr_PROPERTY_errorData NULL
#define ATMO_GetAirQualityStr_PROPERTY_codeUserChanged NULL

#define ATMO_ENS210TemperatureHumidity_PROPERTY_errorData NULL
#define ATMO_ENS210TemperatureHumidity_PROPERTY_codeUserChanged NULL
#define ATMO_ENS210TemperatureHumidity_PROPERTY_i2cInstance ATMO_DRIVERINSTANCE_I2C_I2C2
#define ATMO_ENS210TemperatureHumidity_PROPERTY_i2cAddress 0x43
#define ATMO_ENS210TemperatureHumidity_PROPERTY_tempCalibrationOffset -7

#define ATMO_MPL3115Pressure_PROPERTY_errorData NULL
#define ATMO_MPL3115Pressure_PROPERTY_codeUserChanged NULL
#define ATMO_MPL3115Pressure_PROPERTY_i2cInstance ATMO_DRIVERINSTANCE_I2C_I2C2
#define ATMO_MPL3115Pressure_PROPERTY_i2cAddress 0x60
#define ATMO_MPL3115Pressure_PROPERTY_pressureOffset 0
#define ATMO_MPL3115Pressure_PROPERTY_altitudeOffset 0
#define ATMO_MPL3115Pressure_PROPERTY_tempOffset 0

#define ATMO_CCS811AirQuality_PROPERTY_errorData NULL
#define ATMO_CCS811AirQuality_PROPERTY_codeUserChanged NULL
#define ATMO_CCS811AirQuality_PROPERTY_i2cInstance ATMO_DRIVERINSTANCE_I2C_I2C2
#define ATMO_CCS811AirQuality_PROPERTY_i2cAddress 0x5A
#define ATMO_CCS811AirQuality_PROPERTY_operatingMode ATMO_CCS811_OperatingMode_2

#define ATMO_EmbeddedNxpRpkBacklight_PROPERTY_errorData NULL
#define ATMO_EmbeddedNxpRpkBacklight_PROPERTY_codeUserChanged NULL
#define ATMO_EmbeddedNxpRpkBacklight_PROPERTY_initialSetting BLIGHT_LEVEL_LOW


#ifdef __cplusplus
}
#endif

#endif