void setup()
{
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(3, OUTPUT);
    Serial.begin(9600);
}
unsigned int in=0;
int zhan[4]={0};
void weihu(int a)
{for(int i=3;i>=1;i--)
    zhan[i]=zhan[i-1];
    zhan[0]=a;
}
void change(int b)
{switch(b)
    {case 4:
            digitalWrite(4, LOW);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            break;
        case 5: digitalWrite(5, LOW);
            digitalWrite(4, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            break;
        case 6: digitalWrite(6, LOW);
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(7, HIGH);
            break;
        case 7: digitalWrite(7, LOW);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(4, HIGH);
            break;
        default :;}
    
}
void lock(int b)
{digitalWrite(b, HIGH);
    
}
void loop()

{ int i=5;
    if(Serial.available()>0)
    {in=Serial.read();
        in=in-'0';
        weihu(in);
        Serial.print(zhan[0],BIN);
        Serial.print(in,BIN);
        for(i=4;i<=7;i++)
        { change(i);
            
            digitalWrite(10, (zhan[i-4]&1)?HIGH:LOW); //按位与操作获得各位的二进制数字
            
            
            digitalWrite(11, (zhan[i-4]&2)?HIGH:LOW);
            digitalWrite(12, (zhan[i-4]&4)?HIGH:LOW);
            digitalWrite(13, (zhan[i-4]&8)?HIGH:LOW);
            lock(i);}}
    
}


