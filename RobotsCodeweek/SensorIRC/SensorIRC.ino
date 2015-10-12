#include <Makeblock.h>
#include <SoftwareSerial.h>
#include <Wire.h>

int _ABVAR_1_velocidad = 0 ;
int _ABVAR_2_velo_min = 0 ;
int _ABVAR_3_factor = 0 ;
MeInfraredReceiver infraredReceiver6(PORT_6);
int _ABVAR_4_irRead = 0 ;
MeDCMotor dcMotor1(M1);
MeDCMotor dcMotor2(M2);

void Atras();
void Paro();
void Adelante();
void Izquierda();
void Derecha();

void setup()
{
  infraredReceiver6.begin();
  _ABVAR_1_velocidad = 190 ;

  _ABVAR_2_velo_min = 55 ;

  _ABVAR_3_factor = 23 ;

}

void loop()
{

  if(infraredReceiver6.buttonState()==1){
    _ABVAR_4_irRead=infraredReceiver6.read();

    if (( ( _ABVAR_4_irRead ) == ( 64 ) ))
    {
      Adelante();
    }

    if (( ( _ABVAR_4_irRead ) == ( 25 ) ))
    {
      Atras();
    }

    if (( ( _ABVAR_4_irRead ) == ( 7 ) ))
    {
      Izquierda();
    }

    if (( ( _ABVAR_4_irRead ) == ( 9 ) ))
    {
      Derecha();
    }


  }
  else{

    Paro();


  };
}

void Paro()
{
  dcMotor1.stop();
  dcMotor2.stop();
}

void Derecha()
{
  dcMotor1.run(( _ABVAR_1_velocidad * -1 ));
  dcMotor2.run(( _ABVAR_1_velocidad * 1 ));
}

void Atras()
{
  dcMotor1.run(( _ABVAR_1_velocidad * -1 ));
  dcMotor2.run(( _ABVAR_1_velocidad * -1 ));
}

void Adelante()
{
  dcMotor1.run(_ABVAR_1_velocidad);
  dcMotor2.run(_ABVAR_1_velocidad);
}

void Izquierda()
{
  dcMotor1.run(( _ABVAR_1_velocidad * 1 ));
  dcMotor2.run(( _ABVAR_1_velocidad * -1 ));
}


