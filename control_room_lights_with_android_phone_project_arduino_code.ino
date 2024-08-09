/*
Code Name: 12 Channel Bluetooth App Controlled Home Automation
Code URI: https://circuitbest.com/category/arduino-projects/
Author: Creative Creator
Author URI: https://www.youtube.com/channel/UCJoXoKcfAo4j9XWDlxCWMyg 
Description: 12 Channel Bluetooth Home Automation with Arduino Nano and Android App
PCB Gerber URI: http://bit.ly/2UnIFFb
App URI: http://bit.ly/2OvxeaG
Version: 1.0
License: Remixing or Changing this Thing is allowed. Commercial use is not allowed.
*/

String readString;
#define relay_1 2      //Connect relay_1  to pin 2
#define relay_2 3      //Connect relay_2  to pin 3
#define relay_3 4      //Connect relay_3  to pin 4
#define relay_4 5      //Connect relay_4  to pin 5
#define relay_5 6      //Connect relay_5  to pin 6
#define relay_6 7      //Connect relay_6  to pin 7
#define relay_7 8      //Connect relay_7  to pin 8
#define relay_8 9      //Connect relay_8  to pin 9
#define relay_9 10     //Connect relay_9  to pin 10
#define relay_10 11    //Connect relay_10 to pin 10
#define relay_11 12    //Connect relay_11 to pin 10
#define relay_12 13    //Connect relay_12 to pin 13

void setup()
{
  Serial.begin(9600);             //Set rate for communicating with phone
  pinMode(relay_1, OUTPUT);       //Set relay_1  as an output
  pinMode(relay_2, OUTPUT);       //Set relay_2  as an output
  pinMode(relay_3, OUTPUT);       //Set relay_3  as an output
  pinMode(relay_4, OUTPUT);       //Set relay_4  as an output
  pinMode(relay_5, OUTPUT);       //Set relay_5  as an output
  pinMode(relay_6, OUTPUT);       //Set relay_6  as an output
  pinMode(relay_7, OUTPUT);       //Set relay_7  as an output
  pinMode(relay_8, OUTPUT);       //Set relay_8  as an output
  pinMode(relay_9, OUTPUT);       //Set relay_9  as an output
  pinMode(relay_10, OUTPUT);      //Set relay_10 as an output
  pinMode(relay_11, OUTPUT);      //Set relay_11 as an output
  pinMode(relay_12, OUTPUT);      //Set relay_12 as an output

  
  digitalWrite(relay_1, LOW);     //Switch relay_1  off
  digitalWrite(relay_2, LOW);     //Swtich relay_2  off
  digitalWrite(relay_3, LOW);     //Switch relay_3  off
  digitalWrite(relay_4, LOW);     //Swtich relay_4  off
  digitalWrite(relay_5, LOW);     //Swtich relay_5  off
  digitalWrite(relay_6, LOW);     //Swtich relay_6  off
  digitalWrite(relay_7, LOW);     //Swtich relay_7  off
  digitalWrite(relay_8, LOW);     //Swtich relay_8  off
  digitalWrite(relay_9, LOW);     //Swtich relay_9  off
  digitalWrite(relay_10, LOW);    //Swtich relay_10 off
  digitalWrite(relay_11, LOW);    //Switch relay_11 off
  digitalWrite(relay_12, LOW);    //Swtich relay_12 off
  
}
void loop()
{
  while(Serial.available())             //Check if there are available bytes to read
  {
    delay(10);                          //Delay to make it stable
    char c = Serial.read();             //Conduct a serial read
    if (c == '#'){
      break;                            //Stop the loop once # is detected after a word
    }
    readString += c;                    //Means readString = readString + c
  }
    if (readString.length() >0)
    {
      Serial.println(readString);
      if(readString == "switch all on"){
        allSwitchesOn();
      }               
      else if(readString == "switch all off"){
        allSwitchesOff();
      }             
      else if(readString == "relay_1 on"){   
        digitalWrite(relay_1, HIGH);
      }
      else if(readString == "relay_1 off"){
        digitalWrite(relay_1, LOW);
      }
       else if(readString == "relay_2 on"){   
        digitalWrite(relay_2, HIGH);
      }
      else if(readString == "relay_2 off"){
        digitalWrite(relay_2, LOW);
      }
       else if(readString == "relay_3 on"){   
        digitalWrite(relay_3, HIGH);
      }
      else if(readString == "relay_3 off"){
        digitalWrite(relay_3, LOW);
      }
      else if(readString == "relay_4 on"){
        digitalWrite(relay_4, HIGH);
      }
      else if(readString == "relay_4 off"){
        digitalWrite(relay_4, LOW);
      }
      else if(readString == "relay_5 on"){
        digitalWrite(relay_5, HIGH);
      }
      else if(readString == "relay_5 off"){
        digitalWrite(relay_5, LOW);
      }
      else if(readString == "relay_6 on"){
        digitalWrite(relay_6, HIGH);
      }
      else if(readString == "relay_6 off"){
        digitalWrite(relay_6, LOW);
      }
      else if(readString == "relay_7 on"){
        digitalWrite(relay_7, HIGH);
      }
      else if(readString == "relay_7 off"){
        digitalWrite(relay_7, LOW);
      }
      else if(readString == "relay_8 on"){
        digitalWrite(relay_8, HIGH);
      }
      else if(readString == "relay_8 off"){
        digitalWrite(relay_8, LOW);
      }
      else if(readString == "relay_9 on"){
        digitalWrite(relay_9, HIGH);
      }
      else if(readString == "relay_9 off"){
        digitalWrite(relay_9, LOW);
      }
      else if(readString == "relay_10 on"){
        digitalWrite(relay_10, HIGH);
      }
      else if(readString == "relay_10 off"){
        digitalWrite(relay_10, LOW);
      } 
      else if(readString == "relay_11 on"){
        digitalWrite(relay_11, HIGH);
      }
      else if(readString == "relay_11 off"){
        digitalWrite(relay_11, LOW);
      }
            else if(readString == "relay_12 on"){
        digitalWrite(relay_12, HIGH);
      }
      else if(readString == "relay_12 off"){
        digitalWrite(relay_12, LOW);
      }
      readString="";
    }
}
void allSwitchesOff()               //Function for turning OFF all relays
{
  digitalWrite(relay_1, LOW);       //Switch relay_1  off
  digitalWrite(relay_2, LOW);       //Swtich relay_2  off
  digitalWrite(relay_3, LOW);       //Switch relay_3  off
  digitalWrite(relay_4, LOW);       //Swtich relay_4  off
  digitalWrite(relay_5, LOW);       //Swtich relay_5  off
  digitalWrite(relay_6, LOW);       //Swtich relay_6  off
  digitalWrite(relay_7, LOW);       //Swtich relay_7  off
  digitalWrite(relay_8, LOW);       //Swtich relay_8  off
  digitalWrite(relay_9, LOW);       //Swtich relay_9  off
  digitalWrite(relay_10, LOW);      //Swtich relay_10 off
  digitalWrite(relay_11, LOW);      //Swtich relay_11 off
  digitalWrite(relay_12, LOW);      //Swtich relay_12 off
}
void allSwitchesOn()                //Function for turning ON all relays
{
  digitalWrite(relay_1, HIGH);      //Swtich relay_1  off
  digitalWrite(relay_2, HIGH);      //Swtich relay_2  off
  digitalWrite(relay_3, HIGH);      //Swtich relay_3  off
  digitalWrite(relay_4, HIGH);      //Swtich relay_4  off
  digitalWrite(relay_5, HIGH);      //Swtich relay_5  off
  digitalWrite(relay_6, HIGH);      //Swtich relay_6  off
  digitalWrite(relay_7, HIGH);      //Swtich relay_7  off
  digitalWrite(relay_8, HIGH);      //Swtich relay_8  off
  digitalWrite(relay_9, HIGH);      //Swtich relay_9  off
  digitalWrite(relay_10, HIGH);     //Swtich relay_10 off
  digitalWrite(relay_11, HIGH);     //Swtich relay_11 off
  digitalWrite(relay_12, HIGH);     //Swtich relay_12 off
}