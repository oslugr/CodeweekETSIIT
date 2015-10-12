#include <Makeblock.h>
#include <SoftwareSerial.h>
#include <Wire.h>

int _ABVAR_1_velocidad = 0 ;
int _ABVAR_2_velo_min = 0 ;
int _ABVAR_3_factor = 0 ;
int _ABVAR_4_Distancia = 0 ;
MeUltrasonicSensor ultraSensor7(PORT_7);
MeDCMotor dcMotor1(M1);
MeDCMotor dcMotor2(M2);

void Paro();
void Atras();
void Adelante();
void Derecha();
void Izquierda();

void setup()
{
  _ABVAR_1_velocidad = 190 ;

  _ABVAR_2_velo_min = 55 ;

  _ABVAR_3_factor = 23 ;

  _ABVAR_4_Distancia = ultraSensor7.distanceCm() ;

}

void loop()
{
  _ABVAR_4_Distancia = ultraSensor7.distanceCm() ;
  while ( ( ( _ABVAR_4_Distancia ) >= ( 5 ) ) )
  {
    Adelante();
    _ABVAR_4_Distancia = ultraSensor7.distanceCm() ;
  }

  Paro();
}

void Izquierda()
{
  dcMotor1.run(( _ABVAR_1_velocidad * 1 ));
  dcMotor2.run(( _ABVAR_1_velocidad * -1 ));
}

void Atras()
{
  dcMotor1.run(( _ABVAR_1_velocidad * -1 ));
  dcMotor2.run(( _ABVAR_1_velocidad * -1 ));
}

void Paro()
{
  dcMotor1.stop();
  dcMotor2.stop();
}

void Adelante()
{
  dcMotor1.run(_ABVAR_1_velocidad);
  dcMotor2.run(_ABVAR_1_velocidad);
}

void Derecha()
{
  dcMotor1.run(( _ABVAR_1_velocidad * -1 ));
  dcMotor2.run(( _ABVAR_1_velocidad * 1 ));
}


