
int in=0;
void setup()
{Serial.begin(9600);//设置串口
    

    
}
Morse morse(13);
#define d morse.dot()//定义h简称，方便使用
#define da morse.dash()
void loop() {
    if(Serial.available()>0)
    {in=Serial.read();
        switch(in)
        {case 32:digitalWrite(13,LOW); delay(250*7);break;
            case 'a': d;da;break;
            case 'b':da;d;d;d;break;
            case 'c':da;d;da;d;break;
            case 'd':da;d;d;break;
            case 'e':d;break;
            case 'f':d;d;da;d;break;
            case 'g':da;da;d;break;
            case 'h':d;d;d;d;break;
            case 'i':d;d;break;
            case 'j':d;da;da;da;break;
            case'k':da;d;da;break;
            case 'l':d;da;d;d;break;
            case 'm':da;da;break;
            case 'n':da;d;break;
            case 'o':da;da;da;break;
            case 'p':d;da;da;d;break;
            case 'q':da;da;d;da;break;
            case 'r':d;da;d;break;
            case 's':d;d;d;break;
            case 't':da;break;
            case'u':d;d;da;break;
            case 'v':d;d;d;da;break;
            case 'w':d;da;da;break;
            case 'x':da;d;d;da;break;
            case 'y':da;d;da;da;break;
            case 'z':da;da;d;d;break;
            case 13:digitalWrite(13,LOW); delay(250*7);break;
                
                
        }
        
