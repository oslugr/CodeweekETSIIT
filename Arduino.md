# CODEWEEK 
----------------------------------

## MIS PRIMEROS PASOS CON ARDUINO

## ¿Que sabes de Arduino?

* ¿Qué es Arduino?
* ¿Para qué sirve?
* ¿Qué es la robótica?
* ¿Para qué se usa?

![](/img/arduino1.png)


### ¿Que podemos hacer con Arduino?

![](/img/arduino2.png)

![](/img/arduino3.png)

![](/img/arduino4.png)

![](/img/arduino5.png)

### Algunos datos

* Maximo Banzi 2005
* Un bar le da nombre
* Color azul (No Placas Convencionales)
* Lider en DIY (Do It Yourself)
* Plug and Play
* Precio objetivo 30$
* 100% free source

![](/img/arduino5.png)

![](/img/arduino7.png)


### Familia Arduino

![Arduino UNO](/img/arduino8.png) ![Arduino LyliPad](/img/arduino9.png) ![Arduino Mega 2560](/img/arduino10.png) ![Arduino FIO](/img/arduino11.png) ![Arduino PRO](/img/arduino12.png) ![Arduino Mega ADK](/img/arduino13.png) ![Arduino Ethernet](/img/arduino14.png) ![Arduino Mega 2560](/img/arduino15.png) ![Arduino Nano](/img/arduino16.png) ![Arduino Mega ADK ](/img/arduino17.png)


# Conceptos Básicos de Electrónica

> Alimentación y tierra

> Tipos de señales

> Circuitos Básicos


## Alimentación y Tierra

* Los circuitos tienen dos conexiones (+) y (-)
* Ningún circuito puede tener una única conexión
* Los circuitos tiene que estar alimentados para funcionar

![](/img/arduino18.png)

# Tipos de señales

![](/img/arduino19.png)   
> Señales analógicas:
> Pueden tener cualquier valor dentro de un rango.
> En Arduino entre `0 y 5 v`

![](/img/arduino20.png)
> Señales digitales
>Tienen dos estados: `High (H) entre 4,5 y 5,3 v` `Low (L) entre -0,3 y 0,5v`

# Circuitos básicos

![](/img/arduino21.png)  ![](/img/arduino22.png)    ![](/img/arduino23.png)  ![](/img/arduino24.png)
> Conexiones de un Led    
> Conexiones de un botón    
> Conexión de un relé      
> Conexión de un altavoz


# TOMA DE CONTACTO

### Instalación del Software
### Entorno de desarrollo
### Configuración del puerto Usb
### Compilación


## Instalación del software

* Descargamos la última versión de: [Arduino 1.6.5](https://www.arduino.cc/en/Main/Software)

* Descargar e instalar Java por repositorios en [Debian Jessie](https://www.debian.org/CD/http-ftp/)

`su -`

`echo "deb http://ppa.launchpad.net/webupd8team/java/ubuntu trusty main" | tee /etc/apt/sources.list.d/webupd8team-java.list`

`echo "deb-src http://ppa.launchpad.net/webupd8team/java/ubuntu trusty main" | tee -a /etc/apt/sources.list.d/webupd8team-java.list`

`apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys EEA14886`

`apt-get update`

`apt-get install oracle-java7-installer`

`exit`

Y en [Ubuntu 14.04 LTS](http://www.ubuntu.com/download/desktop)

`sudo add-apt-repository ppa:webupd8team/java`

`sudo apt-get update`

`sudo apt-get install oracle-java7-installer`


### El software consta de dos partes
* Entorno de desarrollo
* Puerto virtual FTDI (Serie)

### Entorno de desarrollo

![](/img/arduino25.png)

* Apariencia muy sencilla
* 4 Secciones básicas.
* En Archivos tenemos:
> Proyectos de demostración.
* En Programa tenemos:
> Opciones de compilación.
* En Herramientas tenemos:
> Configuración de la plataforma
> Configuración del puerto

### Entornos de desarrollo

![](/img/arduino26.png)   

* Seleccionar tarjeta correcta:
`tools >> Arduino Uno`

![](/img/arduino27.png)

* Seleccionar puerto serie
- (Virtual)
- Depende del sistema operativo
`Serial port >> tty.xxx`
`Serial port >> COMx`

**Si todo está correcto el led I/O 13 parpadea**

## BLOQUES BASICOS
## INSTRUCCIONES BASICAS
## ESTRUCTURAS DE CONTROL
## PRIMER PROGRAMA



## Bloques básicos de código

![](/img/arduino28.png)  * setup > Se ejcuta una sola vez
                         * loop  > Se ejecuta infinitamente


# Instrucciones básicas

![](/img/arduino29.png)

> pinMode(nº Pin, Configuración)
  nº Pin: entre 0 y 13.
   Configuración: INPUT o OUTPUT

> digitalWrite(nº Pin, Estado)
  nº Pin: entre 0 y 13.
   Estado: HIGH o LOW

> digitalRead(nº Pin)
  nº Pin: entre 0 y 13.
 
> analogRead(nº Pin);
  nº Pin: entre 0 y 5.


# Instrucciones básicas-I

![](/img/arduino30.png)

`Serial.begin(Velocidad) Velocidad: típicamente 9600`

`Serial.println(Variable) Variable: Dato a mandar`

`Serial. Read()`

`Delay(ms) ms: Tiempo de espera en milisegundos`

* Todas las funciones en: [Reference](https://www.arduino.cc/en/Reference/HomePage)

![](/img/arduino31.png)


![](/img/arduino32.png)


### NUESTRO PRIMER PROGRAMA

![](/img/arduino33.png)

* ENCENDER PRIMER LED

![](/img/arduino34.png)


## Shields Arduino

![Motores](/img/arduino35.png)    ![Relés](/img/arduino36.png)    ![Matriz de leds](/img/arduino37.png)
![WiiChuck](/img/arduino38.png)   ![Midi](/img/arduino39.png)    ![GPS](/img/arduino40.png)


## Familia Arduino-I

![Display 7 segmentos](/img/arduino41.png)  ![Display LCD Alfanum.](/img/arduino42.png)    ![Display LCD Matricial](/img/arduino43.png)
![Ethernet](/img/arduino44.png)     ![Arduino PRO](/img/arduino45.png)             ![Arduino Mega ADK](/img/arduino46.png)


### ¿Para qué sirve Fritzing?

* Software de apoyo para el diseño de circuitos con Arduino
* Dispone de componentes comunes:
* Resistencias, Leds, Alimentaciones, Motores, Sensores...

### Diseño con protoboard

![](/img/arduino48.png) 
* Dispone de una amplia librería de proyectos
* Se pueden añadir componentes nuevos.
* Representa gráficamente las conexiones en la protoboard.
* Los montajes son fácilmente entendibles.

### Diseño con esquemático
* Todos los cambios del diseño con protoboard se importan automáticamente y viceversa.

![](/img/arduino49.png) ![](/img/arduino50.png)


### Segundo Ejercicio

![](/img/arduino51.png)


### Montaje y encendido de primer led
* Necesitamos:

![](/img/arduino52.png)     
* Led         
* Placa de Arduino

### Tercer Ejercicio

![](/img/arduino53.png)

### Montaje y encendido de primer led
* Necesitamos:

![](/img/arduino54.png)
* Led           
* Protoboard           
* Resistencias           
* Cables           
* Placa Arduino


![](/img/arduino55.png)


### Semáforo

![](/img/arduino56.png)
* Led (Amarillo, Rojo, Verde)
* Protoboard
* Resistencias
* Cables
* Placa Arduino


### solución imagén

![](/img/arduino57.png)


### Solución

![](/img/arduino58.png)  
`void setup() {
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
}
void loop() {
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);
delay(1000);
digitalWrite(12, HIGH);
delay(1000);
digitalWrite(12, LOW);
delay(1000);
digitalWrite(11, HIGH);
delay(1000);
digitalWrite(11, LOW);
delay(1000);
}`

### Semáforo Viene y Va

![](/img/arduino59.png)

* Led (Amarillo, Rojo y Verde)
* Protoboard
* Resistencias
* Cables
* Placa Arduino

`if (condicion){
....
} else {
....
}`

> Ejecuta el bloque separado por **{}** siempre y
cuando se cumpla la condición, acompañada
a esta estructura existe else (si nó) que es
para el caso contrario a la condición, sin
tener que evaluar la condición negada.


`for (inicial;condición;repetición){
....
}`

> Se ejecuta la sentencia inicial, y si se cumple la
condición se ejecuta el código en el interior de
la llaves, una vez que se termina se ejecuta la
repetición y se vuelve a comparar la condición,
mientras la condición sea cierta el bloque
encerrado entre llaves se seguirá ejecutando.

`while (condición){
....
}`

> Mientras se cumpla la condición entre
paréntesis, se ejecuta el código en el
interior de **{}** de manera infinita hasta.


`switch (varieble numérica){
case num1:
.....
break;
case num2:
.....
break;
default:
}`

`switch ($i)
{
case 0:
echo "i es igual a 0";
case 1:
echo "i es igual a 1";
case 2:
echo "i es igual a 2";
}`

> La sentencia switch es un tanto compleja y
probabilísticamente poco usada ya que no
puede usarse con objetos y las comparaciones
son primitivas, en algunos trozos o segmentos
de código es crucial para optimizar la
velocidad de nuestro programa, de acuerdo al
contenido de la variable numérica se ejecuta
la sentencia case que coincida, cada bloque
de código debe terminar con break, ya que en
caso contrario se seguirá ejecutando la
siguiente cláusula case, existe una opción
default que es para cuando ninguno de los
casos resulta ser el correcto.

`do{
...
}while(condición);`

> El bloque dentro de la palabra clave **d**o,
se ejecutará al menos una vez y si la
condición de while se cumple, se repetirá
mientras sea cierta.

* Arrays

> Una matriz es un conjunto de
variables que se accede con un
número de índice.

```
`//Ejercicio con un array y con un contador para recorrer el array//
int leds[3]={11,12,13};
int tiempo=100;
int led=0;
void setup()
{
for(led=0;led<=3;led++)
{pinMode (leds[led],OUTPUT); }
}
void loop()
{ for(led=0;led<=3;led++)
{
digitalWrite(leds[led],HIGH);
delay(tiempo);
digitalWrite(leds[led],LOW);
delay(tiempo);
}
for(int led=3;led>=0;led--)
{ digitalWrite(leds[led],HIGH);
delay(tiempo);
digitalWrite(leds[led],LOW);
delay(tiempo);
}
}`


`int tiempo=10;
int led;
void setup()
{
for (led=8;led<=12;led++)
{
pinMode(led,OUTPUT);
}
}
void loop()
{
for (led=8;led<=12;led++)
{
digitalWrite(led,HIGH);
delay(tiempo);
digitalWrite(led,LOW);
delay(tiempo);
}
}`
```

![Renato, José Alonso y Manu](/img/arduino60.jpg).

<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/"><img alt="Licencia de Creative Commons" style="border-width:0" src="https://i.creativecommons.org/l/by-sa/4.0/88x31.png" /></a><br />Este obra está bajo una <a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">licencia de Creative Commons Reconocimiento-CompartirIgual 4.0 Internacional</a>.
