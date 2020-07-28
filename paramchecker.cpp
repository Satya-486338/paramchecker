
bool IsboBpmRateAreOk(float bpm) {
  bool boBpmRate = true;
  if(bpm < 70 || bpm > 150)  {
    boBpmRate = false;
  }
  return boBpmRate;
}
bool IsSpo2RateAreOk(float spo2) {
  bool boSpo2Rate = true;
  if(spo2 < 80) {
    boSpo2Rate = false;
  }
  return boSpo2Rate;
}
bool ISRespRateAreOk(float respRate) {
  bool boRespRate = true;
  if(respRate < 30 || respRate > 60) {
    boRespRate = false;
  }
  return boRespRate;
}
bool vitalsRespAreOk(float bpm,float spo2,float respRate) {
  bool boBpmRate,boSpo2Rate,boRespRate;
  boBpmRate = IsboBpmRateAreOk(bpm);
  boSpo2Rate =IsSpo2RateAreOk(spo2);
  boRespRate = ISRespRateAreOk(respRate);
  return (boBpmRate && boSpo2Rate&& boRespRate);
}
