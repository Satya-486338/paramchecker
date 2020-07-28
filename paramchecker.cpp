#define BPM_HIGH_LIMIT (150)
#define BPM_LOW_LIMIT (80)
#define SPO2_HIGH_LIMIT (0xFFFF)
#define SPO2_LOW_LIMIT (80)
#define RESP_HIGH_LIMIT (60)
#define RESP_LOW_LIMIT (30)



bool checkVitalOk(float val,int minilimit,int maxlimit){
  bool boVital = true;
  if ((val < minilimit) || (val > maxlimit) ){
    boVital = false;
  }
  return (boVital);
    
}
bool vitalsRespAreOk(float bpm,float spo2,float respRate) {

  return (checkVitalOk(bpm,BPM_LOW_LIMIT,BPM_HIGH_LIMIT)
          && checkVitalOk(spo2,SPO2_LOW_LIMIT,SPO2_HIGH_LIMIT)
          && checkVitalOk(respRate,RESP_LOW_LIMIT,RESP_HIGH_LIMIT));
}
