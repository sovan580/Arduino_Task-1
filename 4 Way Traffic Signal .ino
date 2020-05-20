int L1[]={1,2,3};//Pin no. for R,Y,G 
int L2[]={4,5,6};//Pin no. for R,Y,G 
int L3[]={7,8,9};//Pin no. for R,Y,G 
int L4[]={10,11,12};//Pin no. for R,Y,G 

void setup() 
{
  // put your setup code here, to run once:
  for(int i=0;i<3;i++)
  {
    pinMode(L1[i],OUTPUT);
    pinMode(L2[i],OUTPUT);
    pinMode(L3[i],OUTPUT);
    pinMode(L4[i],OUTPUT);//Initialising the pinMode
}
  for(int j=0;j<3;j++)
  {
    digitalWrite(L1[j],LOW);
    digitalWrite(L2[j],LOW);
    digitalWrite(L3[j],LOW);
    digitalWrite(L4[j],LOW);//Assigning the values 
   }
}

void loop() 
{
  
  digitalWrite(L1[2],HIGH);
  digitalWrite(L2[0],HIGH);
  digitalWrite(L3[0],HIGH);
  digitalWrite(L4[0],HIGH);//Initial condition for 1st lane to give go signal 
  delay(10000);
  digitalWrite(L1[1],HIGH);
  digitalWrite(L2[1],HIGH);
  digitalWrite(L1[2],LOW);
  digitalWrite(L2[0],LOW);//When lane-1 is about give stop signal and lane-2 is about to give go signal
  delay(4000);
  digitalWrite(L1[1],LOW);
  digitalWrite(L2[1],LOW);
  digitalWrite(L1[0],HIGH);
  digitalWrite(L2[2],HIGH);//When lane-2 gives go signal and lane-1 gives stop signal
  delay(10000);
  digitalWrite(L2[2],LOW);
  digitalWrite(L3[0],LOW);
  digitalWrite(L2[1],HIGH);
  digitalWrite(L3[1],HIGH);//When lane-2 to is about to give stop signal and lane-3 to give go signal
  delay(4000);
  digitalWrite(L2[1],LOW);
  digitalWrite(L3[1],LOW);
  digitalWrite(L2[0],HIGH);
  digitalWrite(L3[2],HIGH);//When lane-3 gives go signal and lane-2 gives stop signal 
  delay(10000);
  digitalWrite(L3[2],LOW);
  digitalWrite(L4[0],LOW);
  digitalWrite(L4[1],HIGH);
  digitalWrite(L3[1],HIGH);//When lane-3 is about to give stop signal and lane-4 to give go signal
  delay(4000);
  digitalWrite(L3[1],LOW);
  digitalWrite(L4[1],LOW);
  digitalWrite(L3[0],HIGH);
  digitalWrite(L4[2],HIGH);//When lane-4 gives go signal and lane-3 gives stop signal
  delay(10000);
  digitalWrite(L1[1],HIGH);
  digitalWrite(L4[1],HIGH);
  digitalWrite(L4[2],LOW);
  digitalWrite(L1[0},LOW);//When lane4 is about to give stop signal and lane1 is about to give go signal
  delay(4000);
}
