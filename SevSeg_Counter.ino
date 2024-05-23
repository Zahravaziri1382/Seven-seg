/* SevSeg Counter Example
 
 Copyright 2017 Dean Reading
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 
 This example demonstrates a very simple use of the SevSeg library with a 4
 digit display. It displays a counter that counts up, showing deci-seconds.
 */

#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment controller object

void setup() {
  byte numDigits = 1;
  byte digitPins[] = {};
  byte segmentPins[] = {3,2,8,7,6,4,5,9};
  bool resistorsOnSegments = true;
   byte hardwareConfig=COMMON_ANODE;// 'false' means resistors are on digit pins
sevseg.begin(COMMON_ANODE,numDigits,digitPins, segmentPins,resistorsOnSegments);

  sevseg.setBrightness(90);
}

void loop() {
 for(int i=0;i<10;i++)
 {
sevseg.setNumber(i);
sevseg.refreshDisplay();
delay(2000);
 }
}
/// END ///
