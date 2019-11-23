//
// begin license header
//
// This file is part of Pixy CMUcam5 or "Pixy" for short
//
// All Pixy source code is provided under the terms of the
// GNU General Public License v2 (http://www.gnu.org/licenses/gpl-2.0.html).
// Those wishing to use Pixy source code, software and/or
// technologies under different licensing terms should contact us at
// cmucam@cs.cmu.edu. Such licensing terms are available for
// all portions of the Pixy codebase presented here.
//
// end license header
//

#include <Pixy2.h>
const uint16_t BLUE = 1;
const uint16_t PURPLE = 2;
const uint16_t RED = 3;
const uint16_t YELLOW = 4;

Pixy2 pixy;

void setup()
{
  Serial.begin(115200);
  Serial.print("Starting...\n");

  pixy.init();
}

void loop()
{
  int i;
  pixy.ccc.getBlocks();
 

  if (pixy.ccc.numBlocks) {
    Serial.print("Detected ");
    Serial.print(i);
    Serial.print(": ");
    if(pixy.ccc.blocks[i].m_signature == PURPLE) {
      Serial.print("FOUND PURPLE \n");
    } 
    if(pixy.ccc.blocks[i].m_signature == BLUE) {
      Serial.print("FOUND BLUE \n");
    }
    pixy.ccc.blocks[i].print();
  }

}
