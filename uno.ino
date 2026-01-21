int pin[]={2,3,4,5};
int wait_time=1000;
void setup() {
  for(int i:pin){
    pinMode(i,OUTPUT);
  }

}
String s[]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};  

void loop() {
  for(String son:s){
    if(son[0]=='1') digitalWrite(pin[0],1);
    if(son[1]=='1') digitalWrite(pin[1],1);
    if(son[2]=='1') digitalWrite(pin[2],1);
    if(son[3]=='1') digitalWrite(pin[3],1);

    delay(wait_time);
    for(int i:pin) digitalWrite(i,0);
    delay(wait_time);
  }  

}
