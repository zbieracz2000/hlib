#include <Hlib.h> 
Hlib bridge(5, 6, 7, 8, 9, 10); //EN_A, EN_B, IN_1A, IN_1B, IN_2A, IN_2B 
 
void setup() {}
 
void loop() {
 bridge.FWD_A(70);
 bridge.FWD_B(70); 
 delay(1000);
 bridge.FWD_A(200);
 bridge.FWD_B(200); 
 delay(1000);
 bridge.STOP_A();
 bridge.STOP_B(); 
 delay(100);
 bridge.BWD_A(200);
 bridge.BWD_B(200); 
 delay(1000); 
 bridge.BWD_A(70);
 bridge.BWD_B(70);  
 delay(1000);
 bridge.STOP_A();
 bridge.STOP_B(); 
 delay(100); 
}
