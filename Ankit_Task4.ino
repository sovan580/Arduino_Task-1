int v[3][1]={};
int M[4][3]={-0.35,0.35,025,-0.35,-0.35,0.25,0.35,-0.35,0.25,0.35,0.35,0.25};
int s[4][1]={0,0,0,0};
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  Serial.print("Provide the directions:");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<1;j++)
    {
      if (Serial.available())
      v[i][j]=Serial.read();
    }
  }
  for(int k=0;k<4;k++)
  {
    for(int l=0;l<1;l++)
    {
      for(int m=0;m<3;m++)
      s[k][l]+=M[k][m]*v[m][l]; 
    }
  }
  Serial.print("s =");
  for(int p=0;p<4;p++)
  {
    for(int q=0;q<1;q++)
    Serial.println(s[p][q]);
  }
  Serial.print("Speeds of the motors are:\n");
  Serial.print("s1=");
  Serial.println(s[0][0]);
  Serial.print("s2=");
  Serial.println(s[1][0]);
  Serial.print("s3=");
  Serial.println(s[2][0]);
  Serial.print("s4=");
  Serial.println(s[3][0]);
  
}
