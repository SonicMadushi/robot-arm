#include <IRremote.h>
IRrecv ir=IRrecv(8);
decode_results dr=decode_results();


#include <Servo.h>
Servo s1=Servo();
int x=90;

Servo s2=Servo();
int q=20;

Servo s3=Servo();
int t=50;

Servo s4=Servo();
int u=180;


void setup() {
  // put your setup code here, to run once:
  s1.attach(6);
  s2.attach(7);
  s3.attach(5);
  s4.attach(2);
  ir.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:

  int s=ir.decode(&dr);

  if(s==1){

    int v=dr.value;

    if(v==25245){                    // Left

      for(int y=0;y<180;y++){                  
        s1.write(x);
        x = x+1;
        delay(7);
  
        if(x>180){
          x = 180;  
        }      
      }
      
    }

ir.resume();

        
        if(v==-7651){                    //  Left idan 90 deg

      for(int y=0;y<180;y++){                  
        s1.write(x);
        x = x-1;
        delay(7);
  
        if(x<90){
          x = 90;  
        }      
      }
      
    }

 ir.resume();

    if(v== -25245){                          // Right

      for(int y=0;y<180;y++){
        s1.write(x);
        x = x-1;
        delay(7);
  
        if(x<0){
          x = 0;  
        }      
      }
      
    }




//********




    

 ir.resume();

      if(v==--15811){                          // uda pallehaa  (uda)

      for(int y=30;y<110;y++){
        s2.write(q);
        q = q-1;
        delay(7);
  
        if(q<20){
          q = 20;  
        }      
      }
      
    }

ir.resume();


  if(v==765){                          // uda pallehaa  (palleha)

      for(int y=20;y<130;y++){
        s2.write(q);
        q = q+1;
        delay(7);
  
        if(q>130){
          q = 130;  
        }      
      }
      
    }




//********





ir.resume();


      
        
        if(v==19899){                    //  atha kota karanda

      for(int y=50;y<180;y++){                  
        s3.write(t);
        t = t-1;
        delay(7);
  
        if(t<50){
          t = 50;  
        }      
      }
      
    }

 ir.resume();


           if(v==-16069){                    //  atha dik karanda

      for(int y=50;y<180;y++){                  
        s3.write(t);
        t = t+1;
        delay(7);
  
        if(t>180){
          t = 180;  
        }      
      }
      
    }






 //********




    if(v==-4645){                    // agili close

      for(int y=0;y<90;y++){                  
        s4.write(u);
        u = u-1;
        delay(7);
  
        if(u<0){
          u = 0;  
        }      
      }
      
    }

ir.resume();    

        
    if(v==-17025){                         // agili open 

      for(int y=0;y<90;y++){                  
        s4.write(u);
        u = u+1;
        delay(7);
  
        if(u>90){
          u =90;  
        }      
      }
      
    }
ir.resume();   
 
  }

}
