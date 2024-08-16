/* 
 *  Fernbedienungstastatur
 *  Werkzeuge -> USB-Typ muss auf Tastatur eingestellt werden
*/

const int remoteA_pin = 11;  
const int remoteB_pin = 12;  
const int remoteC_pin = 13;  
const int remoteD_pin = 14;  
const int tasterA_pin = 0;  
const int tasterB_pin = 1;  
const int tasterC_pin = 2;  
const int tasterD_pin = 3;  
const int LED_r_pin = 5;  
const int LED_g_pin = 4;  
const int LED_b_pin = 9;  
const int wartekurz = 50;
const int wartelang = 500;

bool remoteAzustand = 0;
bool remoteBzustand = 0;
bool remoteCzustand = 0;
bool remoteDzustand = 0;
bool TasterAzustand = 1;
bool TasterBzustand = 1;
bool TasterCzustand = 1;
bool TasterDzustand = 1;



void setup() {
    pinMode(0, INPUT_PULLUP);
    pinMode(1, INPUT_PULLUP);
    pinMode(2, INPUT_PULLUP);
    pinMode(3, INPUT_PULLUP);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(11, INPUT);
    pinMode(12, INPUT);
    pinMode(13, INPUT);
    pinMode(14, INPUT);

}

cdabcd
void loop() {
    remoteAzustand = digitalRead(remoteA_pin);
    remoteBzustand = digitalRead(remoteB_pin);
    remoteCzustand = digitalRead(remoteC_pin);
    remoteDzustand = digitalRead(remoteD_pin);
    TasterAzustand = digitalRead(tasterA_pin);
    TasterBzustand = digitalRead(tasterB_pin);
    TasterCzustand = digitalRead(tasterC_pin);
    TasterDzustand = digitalRead(tasterD_pin);
      if(remoteAzustand == 1 || TasterAzustand == 0){
        LED_rot();
        Keyboard.set_modifier(MODIFIERKEY_CTRL);
        Keyboard.send_now();
        delay(wartekurz);
        Keyboard.set_key1(KEY_1);
        Keyboard.send_now();
        delay(wartekurz);
        Keyboard.set_modifier(0);
        Keyboard.set_key1(0);
        Keyboard.send_now();
        delay(wartelang);
        LED_aus();
      }
      if(remoteBzustand == 1 || TasterBzustand == 0){
        LED_gelb();
        Keyboard.set_modifier(MODIFIERKEY_CTRL);
        Keyboard.send_now();
        delay(wartekurz);
        Keyboard.set_key1(KEY_2);
        Keyboard.send_now();
        delay(wartekurz);
        Keyboard.set_modifier(0);
        Keyboard.set_key1(0);
        Keyboard.send_now();
        delay(wartelang);
        LED_aus();
      }
      if(remoteCzustand == 1 || TasterCzustand == 0){
        LED_gruen();
        Keyboard.set_modifier(MODIFIERKEY_CTRL);
        Keyboard.send_now();
        delay(wartekurz);
        Keyboard.set_key1(KEY_3);
        Keyboard.send_now();
        delay(wartekurz);
        Keyboard.set_modifier(0);
        Keyboard.set_key1(0);
        Keyboard.send_now();
        delay(wartelang);
        LED_aus();
      }
      if(remoteDzustand == 1 || TasterDzustand == 0){
        LED_blau();
        Keyboard.set_modifier(MODIFIERKEY_CTRL);
        Keyboard.send_now();
        delay(wartekurz);
        Keyboard.set_key1(KEY_4);
        Keyboard.send_now();
        delay(wartekurz);
        Keyboard.set_modifier(0);
        Keyboard.set_key1(0);
        Keyboard.send_now();
        delay(wartelang);
        LED_aus();
      }
}


void LED_rot() {
  analogWrite(LED_r_pin, 240);
  analogWrite(LED_g_pin, 0);
  analogWrite(LED_b_pin, 0);
}

void LED_gelb() {
  analogWrite(LED_r_pin, 180);
  analogWrite(LED_g_pin, 190);
  analogWrite(LED_b_pin, 0);
}

void LED_gruen() {
  analogWrite(LED_r_pin, 0);
  analogWrite(LED_g_pin, 255);
  analogWrite(LED_b_pin, 0);
}

void LED_blau() {
  analogWrite(LED_r_pin, 0);
  analogWrite(LED_g_pin, 0);
  analogWrite(LED_b_pin, 255);
}

void LED_aus() {
  analogWrite(LED_r_pin, 0);
  analogWrite(LED_g_pin, 0);
  analogWrite(LED_b_pin, 0);
}
