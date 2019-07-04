/*
const int segmentPins[8]={7,6,5,4,3,2,8};//  . G F E C D C B A

void setup() {
 
for(int i=0; i<9; i++)
{
  pinMode(segmentPins[i],OUTPUT);//设置为输出  
  }
}

void loop() {

digitalWrite(8,HIGH);
digitalWrite(2,HIGH);
//digitalWrite(8,LOW);
} */



void setup() {
 
  pinMode(2,OUTPUT);  
  pinMode(3,OUTPUT); 
  pinMode(4,OUTPUT); 
  pinMode(5,OUTPUT); 
  pinMode(6,OUTPUT); 
  pinMode(7,OUTPUT); 
  pinMode(8,OUTPUT); 
  Serial.begin(9600);
}

int income=0;
void loop() {
  
  if(Serial.available()>0)
  {
    for(int n=0; n<9; n++)
  {
   digitalWrite(n,HIGH); 
  }
 
  int temp=0;
    income = Serial.read();
     switch(income)//数码管显示数字
  {
    case '1':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     break;
     case '2':
     digitalWrite(3,LOW);
     digitalWrite(2,LOW);
     digitalWrite(8,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
     break;
     case '3':
     digitalWrite(5,LOW);
     digitalWrite(4,LOW);
     digitalWrite(8,LOW);
     digitalWrite(3,LOW);
     digitalWrite(2,LOW);
     break;
     case '4':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(7,LOW);
     digitalWrite(8,LOW);
     break;
     case '5':
     digitalWrite(2,LOW);
     digitalWrite(4,LOW);
     digitalWrite(7,LOW);
     digitalWrite(8,LOW);
     digitalWrite(5,LOW);
     break;
     case '6':
     digitalWrite(2,LOW);
     digitalWrite(4,LOW);
     digitalWrite(7,LOW);
     digitalWrite(8,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
     break;
     case '7':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(2,LOW);
     break;
     case '8':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
     digitalWrite(7,LOW);
     digitalWrite(8,LOW);
     digitalWrite(2,LOW);
     break;
     case '9':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(2,LOW);
     digitalWrite(8,LOW);
     digitalWrite(7,LOW);
     break;
     case '0':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(2,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
     digitalWrite(7,LOW);
     break;
     default:
     break;
 
  }   
    
  }
  }
  
  
  
  /*delay(500);//延迟保证工作顺利
  
 
  switch(income)//数码管显示数字
  {
    case'1':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     break;
     case'2':
     digitalWrite(3,LOW);
     digitalWrite(2,LOW);
     digitalWrite(1,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
     break;
     case'3':
     digitalWrite(5,LOW);
     digitalWrite(4,LOW);
     digitalWrite(1,LOW);
     digitalWrite(3,LOW);
     digitalWrite(2,LOW);
     break;
     case'4':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(7,LOW);
     digitalWrite(1,LOW);
     break;
     case'5':
     digitalWrite(2,LOW);
     digitalWrite(4,LOW);
     digitalWrite(7,LOW);
     digitalWrite(1,LOW);
     digitalWrite(5,LOW);
     break;
     case'6':
     digitalWrite(2,LOW);
     digitalWrite(4,LOW);
     digitalWrite(7,LOW);
     digitalWrite(1,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
     break;
     case'7':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(2,LOW);
     break;
     case'8':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
     digitalWrite(7,LOW);
     digitalWrite(1,LOW);
     digitalWrite(2,LOW);
     break;
     case'9':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(2,LOW);
     digitalWrite(1,LOW);
     digitalWrite(7,LOW);
     break;
     case'0':
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(2,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
     digitalWrite(7,LOW);
     break;
     default:
     break;
 
  }   */
