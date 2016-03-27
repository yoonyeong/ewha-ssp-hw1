/*
 * ewha_ssp_hw1_1.cpp
 *
 * 37269-01 Smart Software Project
 * GitHub Setup Homework 
 * Instructor: Prof. HyungJune Lee
 *
 * Coded by Kim Yoonyeong
 * Mar 27, 2016
 *
 */

// Add #define pre-processor below

 
void setup() {
  //Add your code of Lab Assignment #1
  pinMode(FRONT_LED_PIN,OUTPUT);
  pinMode(REAR_LED_PIN,OUTPUT);

}

void loop() {
  //Add your code of Lab Assignment #1  
    analogWrite(FRONT_LED_PIN,i);
    analogWrite(REAR_LED_PIN,j);
    delay(11);
    if(j==0) temp=1;
    if(j==255) temp=0;
    if(temp==1)
    {
     	j=j+1;
     	i=i-1;
    }
    else
    {
    	 i=i+1;
    	 j=j-1;
    }
}
