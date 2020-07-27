
bool vitalsBpmRateAreOk(float bpm) {
  bool boVitalArea = true;
  if(bpm < 70 || bpm > 150)  {
    boVitalArea = false;
  }
  return boVitalArea;
}
bool vitalsSpo2RateAreOk(float spo2) {
  bool boVitalArea = true;
  if(spo2 < 80) {
    boVitalArea = false;
  }
  return boVitalArea;
}
bool vitalsRespRateAreOk(float respRate) {
  bool boVitalArea = true;
  if(respRate < 30 || respRate > 60) {
    boVitalArea = false;
  }
  return boVitalArea;
}
