[**INTRODUCTION TO PROJECT:**

 The continuous increasing demand of food requires the rapid improvement in food  production and technology .In country like India , where the economy is mainly based on agriculture and the climatic conditions are isotropic, still we are not able to make full use of agriculture resources.

But now a days farmers are facing  many problems due to change in climatic conditions.
As we all know that many farmers are taking their lifes by their own due to their situtations that which  we can’t handle .More than 90% of the villagers do farming because that is the only resource of theior income. Technology is the only thing which can make their lives bit better than earlier.
  
Smart irrigation controllers moniter the weather, soil conditions, evaporation and plant water use to automatiocally adjust the weather schedule to actual conditions of the site .Smart irriagtion is the technique of providing favourable environmental conditions for well growth of crops.
 
This is a technology by which we can over come the major problem of the farmer in the fields in rainy season which is nothing but the over flow of water in the fields and we even control major system in the fields automatically .The use of smart irrigation is mainly to reduce the work of farmer and to get to know  the information of his field status.

**PURPOSE OF THE PROJECT:**

In rainy reason,one of the major problem faced by the farmers is that over flow of water in the faced which leads to the crop diseases and heavy loss to the farmer.So, there should be some alternative or some process to save the crops for the farmer by which he can overcome this major problem.

It is hard for the farmer to water the fields by reaching that area so, we are doing it by detecting the moisture content and sending this information to the water by which will be able to know whether the water is suplied to the fields or not.

**EXPLANATION :**


This block diagram consists of ultrasonic sensor which collects the data of extra level of water,after collectiong the data,if there is any extra level of water in the fields the motor gets ON automatically which can be done even by using the relay as switch.Soil moisture sensor which collects the data of moisture content in soil,after collecting that data,if there is low level of moisture content then the motor gets ON and the water is pumped to the fields.DHT11 sensor collects the data of  temperature and humidity ,this information is collected sent to the farmer as the message with the help of GSM module.Solar panels are used to convert sunlight into electricity and stored in batteries,which can be used for the agriculture or some other purpose.Water pumped out after the data collected from ultrasonic sensor is purified using the activated carbon filter and stored in storage tanks.

**WORKING MODEL :**

STEP1: Collecting the data from sensors

ULTRASONIC SENSOR(HC-SR04):

Firstly,the ultrasonic sensor is connected in a way that it detects the level of extra water
in the fields when there are heavy rains.It has 4 pins they are Vcc,echo, GND and trigger.
The Vcc pin is connected to the 5V of arduino,echo pin is taken as output,triggering pin is taken as input,and the level is detected by calculating the distance.

DHT11 SENSOR:

It detects the temperature and humidity.It has 3 pins they are DATA,GND,Vcc.
The Vcc pin is connected to the 3.3V ,GND is connected to ground of the arduino and the information is collected in the form of temperature and humidity . It is sent through DATA pin in the sensor to the output pin .

SOIL MOISTURE SENSOR (YL-69) :

It detects the volumetric content of water.It has 4 pins they are analog pin, digital pin, GND and Vcc. The Vcc pin is connected to the 5V of arduino, the GND is connected to ground of the arduino,here we read the data regarding the moisture content from the analog pin .
It has a potentiometer which sets the moisture value to the threshold value and the comparator checks the moisture level and that data is displayed at the output pin of the arduino.

STEP 2: Making motors ON and purifying water

Here as the ultrasonic sensor detects the water level if their is any extra water it is pumped out with the help of the submergable motor which is connected with relay  and battery of 9V .The water which is pumped out is purified with the help of activated carbon filter and that water is stored in the storage tanks .
When the soil moisture sensor detects the moisture content if there is less moisture the motor automatically gets ON and the water is pumped in the fields.

STEP 3 : Sending message to the farmer

The data collected whether the motor is ON or OFF and regarding the water supply to the fields is sent as a message to the farmer with the help of GSM module by which the farmer can be able to know information regarding the fields 

STEP 4 : Utilizing the solar power

Here we connect solar panel which converts solar energy into electrical energy, which we can use further .This energy is stored in the  storage batteries.

**USERS:**
Farmers


**INSTALLATION REQUIREMENTS:**


1.ARDUINO IDE INSTALLATION- coding
2.DHT STABLE LIBRARIES    - ROB HILLART ARDUINO LIBRARIE
3.Knowing about moisture containt in the soil
4.Convetion of solar energy and storing

**CONCLUSION:**

•	The smart irrigation system is feasible and cost effective for optiming water resoures for agriculture prodution.

•	The irrigation system allows cultivation in places with water scarcity thereby improving sustainability.

•	The use of solar power in this system is significantly important for organic crops.


•	The objectives of this is to overcome problems of the heavy rains in fields  by using water detector and using the extra water for other purpose.

•	Smart irrigation control technology is easily deployable and can be controlled manually or automatically without physical presence at the system or field.¬


**FUTURE SCOPE:**


•	Freedom box usage instead of GSM module

•	To use the web application to control the irriagtion

•	Data analysis for   various crops as they need various water limits for their growth

**LICENSE:**

Eclipse Public License -  1.0

[https://code.swecha.org/agriculture/smart-irrigation/blob/master/LICENSE]


