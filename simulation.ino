
typedef struct {
  float mode;
  float gps_isValid;
  float gps_lat;
  float gps_lng;
  float gps_hdop_value;
  float gps_satellites_value;
  float gps_altitude_meters;
  float gps_course_deg;
  float gps_speed_kmph;
  float bpm_temperature;
  float bpm_altitude;
  float bpm_pressure;
  float status_sd;
  float bar_speed;
  float is_open;  
  float checksum; 
}package;

package p1;
package *ptrPackage = &p1;

void setup() {  
  Serial.begin(19200);
  (*ptrPackage).mode = 1.35;
}

void loop() {  
  set_mode(&p1);
  set_gps_isValid(&p1);
  set_gps_lat(&p1);
  set_gps_lng(&p1);
  set_gps_hdop_value(&p1);
  set_gps_satellites_value(&p1);
  set_gps_altitude_meters(&p1);
  set_gps_course_deg(&p1);
  set_gps_speed_kmph(&p1);
  set_bpm_temperature(&p1);
  set_bpm_altitude(&p1);
  set_bpm_pressure(&p1);
  set_status_sd(&p1);
  set_bar_speed(&p1);
  set_is_open(&p1);
  set_checksum(&p1);
  Serial.println(get_mode(&p1),DEC);
  Serial.println(get_gps_isValid(&p1),DEC);
  Serial.println(get_gps_lat(&p1),DEC);
  Serial.println(get_gps_lng(&p1),DEC);
  Serial.println(get_gps_hdop_value(&p1),DEC);
  Serial.println(get_gps_satellites_value(&p1),DEC);
  Serial.println(get_gps_altitude_meters(&p1),DEC);
  Serial.println(get_gps_course_deg(&p1),DEC);
  Serial.println(get_gps_speed_kmph(&p1),DEC);
  Serial.println(get_bpm_temperature(&p1),DEC);
  Serial.println(get_bpm_altitude(&p1),DEC);
  Serial.println(get_bpm_pressure(&p1),DEC);
  Serial.println(get_status_sd(&p1),DEC);
  Serial.println(get_bar_speed(&p1),DEC);
  Serial.println(get_is_open(&p1),DEC);
  Serial.println(get_checksum(&p1),DEC);
  delay(1000);
}

void set_mode(package *){
  (*ptrPackage).mode = (*ptrPackage).mode * -0.3;
}
void set_gps_isValid(package *){
  (*ptrPackage).gps_isValid = 0;
}
void set_gps_lat(package *){
  (*ptrPackage).gps_lat = 0;
}
void set_gps_lng(package *){
  (*ptrPackage).gps_lng = 0;
}
void set_gps_hdop_value(package *){
  (*ptrPackage).gps_hdop_value = 0;
}
void set_gps_satellites_value(package *){
  (*ptrPackage).gps_satellites_value = 0;
}
void set_gps_altitude_meters(package *){
  (*ptrPackage).gps_altitude_meters = 0;
}
void set_gps_course_deg(package *){
  (*ptrPackage).gps_course_deg = 0;
}
void set_gps_speed_kmph(package *){
  (*ptrPackage).gps_speed_kmph = 0;
}
void set_bpm_temperature(package *){
  (*ptrPackage).bpm_temperature = 0;
}
void set_bpm_altitude(package *){
  (*ptrPackage).bpm_altitude = 0;
}
void set_bpm_pressure(package *){
  (*ptrPackage).bpm_pressure = 0;
}
void set_status_sd(package *){
  (*ptrPackage).status_sd = 0;
}
void set_bar_speed(package *){
  (*ptrPackage).bar_speed = 0;
}
void set_is_open(package *){
  (*ptrPackage).is_open = 0;
}
void set_checksum(package *){
  (*ptrPackage).checksum = 0;
}

float get_mode(package *){
  return (*ptrPackage).mode;
}
float get_gps_isValid(package *){
  return (*ptrPackage).gps_isValid;
}
float get_gps_lat(package *){
  return (*ptrPackage).gps_lat;
}
float get_gps_lng(package *){
  return (*ptrPackage).gps_lng;
}
float get_gps_hdop_value(package *){
  return (*ptrPackage).gps_hdop_value;
}
float get_gps_satellites_value(package *){
  return (*ptrPackage).gps_satellites_value;
}
float get_gps_altitude_meters(package *){
  return (*ptrPackage).gps_altitude_meters;
}
float get_gps_course_deg(package *){
  return (*ptrPackage).gps_course_deg;
}
float get_gps_speed_kmph(package *){
  return (*ptrPackage).gps_speed_kmph;
}
float get_bpm_temperature(package *){
  return (*ptrPackage).bpm_temperature;
}
float get_bpm_altitude(package *){
  return (*ptrPackage).bpm_altitude;
}
float get_bpm_pressure(package *){
  return (*ptrPackage).bpm_pressure;
}
float get_status_sd(package *){
  return (*ptrPackage).status_sd;
}
float get_bar_speed(package *){
  return (*ptrPackage).bar_speed;
}
float get_is_open(package *){
  return (*ptrPackage).is_open;
}
float get_checksum(package *){
  return (*ptrPackage).checksum;
}
