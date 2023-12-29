#include <Wire.h>
#include "Adafruit_MCP23008.h"

// Basic toggle test for i/o expansion. flips pin #0-#7 of a MCP23008 i2c
// pin expander up and down. Public domain


Adafruit_MCP23008 mcp;
  
void setup() {  
  mcp.begin();      // use default address 0

  mcp.pinMode(0, OUTPUT);   //setup output
  mcp.pinMode(1, OUTPUT);   //setup output
  mcp.pinMode(2, OUTPUT);   //setup output
  mcp.pinMode(3, OUTPUT);   //setup output
  mcp.pinMode(4, OUTPUT);   //setup output
  mcp.pinMode(5, OUTPUT);   //setup output
  mcp.pinMode(6, OUTPUT);   //setup output
  mcp.pinMode(7, OUTPUT);   //setup output
}


// flip the pin #0 up and down

void loop() {
  delay(100);

  mcp.digitalWrite(0, HIGH);
  delay(100);
  mcp.digitalWrite(0, LOW);
  mcp.digitalWrite(1, HIGH);
  delay(100);
  mcp.digitalWrite(1, LOW);
  mcp.digitalWrite(2, HIGH);
  delay(100);
  mcp.digitalWrite(2, LOW);
  mcp.digitalWrite(3, HIGH);
  delay(100);
  mcp.digitalWrite(3, LOW);
  mcp.digitalWrite(4, HIGH);
  delay(100);
  mcp.digitalWrite(4, LOW);
  mcp.digitalWrite(7, HIGH);  
//  delay(100);
//  mcp.digitalWrite(5, LOW);
//  mcp.digitalWrite(6, HIGH);
//  delay(100);
//  mcp.digitalWrite(6, LOW);
//  mcp.digitalWrite(7, HIGH);
  delay(100);
  mcp.digitalWrite(7, LOW);

  delay(1000);  
    
  mcp.digitalWrite(0, HIGH);
  mcp.digitalWrite(1, HIGH);
  mcp.digitalWrite(2, HIGH);  
  mcp.digitalWrite(3, HIGH);    
  mcp.digitalWrite(4, HIGH);
  mcp.digitalWrite(5, HIGH);
  mcp.digitalWrite(6, HIGH);
  mcp.digitalWrite(7, HIGH);

    
  delay(1000);

  mcp.digitalWrite(0, LOW);
  mcp.digitalWrite(1, LOW);
  mcp.digitalWrite(2, LOW);
  mcp.digitalWrite(3, LOW);
  mcp.digitalWrite(4, LOW);
  mcp.digitalWrite(5, LOW);
  mcp.digitalWrite(6, LOW);
  mcp.digitalWrite(7, LOW);  

  delay(1000);

    mcp.digitalWrite(0, HIGH);
  mcp.digitalWrite(1, HIGH);
  mcp.digitalWrite(2, HIGH);  
  mcp.digitalWrite(3, HIGH);    
  mcp.digitalWrite(4, HIGH);
  mcp.digitalWrite(5, HIGH);
  mcp.digitalWrite(6, HIGH);
  mcp.digitalWrite(7, HIGH);

    
  delay(1000);

  mcp.digitalWrite(0, LOW);
  mcp.digitalWrite(1, LOW);
  mcp.digitalWrite(2, LOW);
  mcp.digitalWrite(3, LOW);
  mcp.digitalWrite(4, LOW);
  mcp.digitalWrite(5, LOW);
  mcp.digitalWrite(6, LOW);
  mcp.digitalWrite(7, LOW);
}
