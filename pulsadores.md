# EJERCICIOS DE PULSADORES


![](/img/pulsadores1.jpg)

> ROJO 1: 5V – POSITIVO PROTOBOARD
AZUL: LED LARGO - BOTON
AMARILLO:BOTON-POSITIVO PROT.
NEGRO:GND-POSITIVO PROT.
RESISTENCIA:+PROT.-LED CORTO
LED:LARGO RESIST.-CORTO A CABLE AZUL


![](/img/pulsadores2.jpg)

> NARANJA:BOTON 1 IZQUIERDO -BOTON 1 IZQUIERDO
RESISTENCIA :BOTON 1 -NEGATIVO PROTO--- BOTON 2 -NEGATIVO PROTO
AMARILLO:BOTON-5V
NEGRO:GND-NEGATIVO PROTOBOARD
AZUL: PIN 13 – LARGO LED
ROJO: PIN 10- BOTON ---- PIN 2-BOTON

`int LED = 13; //LED
int pulsador1 = 2; // primer pulsador
int pulsador2 = 10; // segundo pulsador

void setup () { 
  pinMode (LED, OUTPUT); //configurado como salida
  pinMode (pulsador1,INPUT); //configurado de entrada
  pinMode (pulsador2, INPUT);
}

void loop () {
  if (digitalRead(pulsador1) == HIGH){ //si el pulsador1 está en alto
    digitalWrite (LED, HIGH); //encender el LED
  }
  else if (digitalRead(pulsador2) == HIGH){ //si el pulsador2 está en alto
    digitalWrite (LED, LOW); // apagar el LED
  }
}`
