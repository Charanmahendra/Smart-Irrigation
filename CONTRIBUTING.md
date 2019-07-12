                                  **SMART IRRIGATION**

**COMPONENTS DESCRIPTION**

**1.ULTRASONIC SENSOR**
Ultrasonic Sensor Pin Configuration

Pin Number     Pin Name         Description
 
1              Vcc              The Vcc pin powers the sensor, typically with +5V
 
2              Trigger          Trigger pin is an Input pin. This pin has to be kept high for  10us to initialize measurement by sending US wave.
 
3              Echo             Echo pin is an Output pin. This pin goes high for a period of time which will be equal to the time taken for the US wave to return back to the sensor.
 
4              Ground           This pin is connected to the Ground of the system. 
 

HC-SR04 Sensor Features
•Operating voltage: +5V
•Theoretical  Measuring Distance: 2cm to 450cm
•Practical Measuring Distance: 2cm to 80cm
•Accuracy: 3mm
•Measuring angle covered: <15°
•Operating Current: <15mA
•Operating Frequency: 40Hz

 

Equivalent distance measuring Sensors:

US transmitter Receiver pair, IR sensor module, IR sensor pair, IR Analog distance sensor,

 
**HC-SR04 Ultrasonic Sensor - Working**

The HC-SR04 Ultrasonic (US) sensor is a 4 pin module, whose pin names are Vcc, Trigger, Echo and Ground respectively. This sensor is a very popular sensor used in many applications where measuring distance or sensing objects are required. The module has two eyes like projects in the front which forms the Ultrasonic transmitter and Receiver. The sensor works with the simple high school formula that

                         **Distance = Speed × Time**

The Ultrasonic transmitter transmits an ultrasonic wave, this wave travels in air and when it gets objected by any material it gets reflected back toward the sensor this reflected wave is observed by the Ultrasonic receiver module as shown in the picture below

**Ultrasonic Sensor Working**

Now, to calculate the distance using the above formulae, we should know the Speed and time. Since we are using the Ultrasonic wave we know the universal speed of US wave at room conditions which is 330m/s. The circuitry inbuilt on the module will calculate the time taken for the US wave to come back and turns on the echo pin high for that same particular amount of time, this way we can also know the time taken. Now simply calculate the distance using a microcontroller or microprocessor.

 

**How to use the HC-SR04 Ultrasonic Sensor**

HC-SR04 distance sensor is commonly used with both microcontroller and microprocessor platforms like Arduino, ARM, PIC, Raspberry Pie etc. The following guide is universally since it has to be followed irrespective of the type of computational device used.

  Power the Sensor using a regulated +5V through the Vcc ad Ground pins of the sensor. The current consumed by the sensor is less than 15mA and hence can be directly powered by the on board 5V pins (If available). The Trigger and the Echo pins are both I/O pins and hence they can be connected to I/O pins of the microcontroller. To start the measurement, the trigger pin has to be made high for 10uS and then turned off. This action will trigger an ultrasonic wave at frequency of 40Hz from the transmitter and the receiver will wait for the wave to return. Once the wave is returned after it getting reflected by any object the Echo pin goes high for a particular amount of time which will be equal to the time taken for the wave to return back to the sensor.

The amount of time during which the Echo pin stays high is measured by the MCU/MPU as it gives the information about the time taken for the wave to return back to the Sensor. Using this information the distance is measured as explained in the above heading.


**2.SOIL MOISTURE SENSOR**
Soil moisture sensors measure the volumetric water content in soil.[1] Since the direct gravimetric measurement of free soil moisture requires removing, drying, and weighting of a sample, soil moisture sensors measure the volumetric water content indirectly by using some other property of the soil, such as electrical resistance, dielectric constant, or interaction with neutrons, as a proxy for the moisture content. 

The relation between the measured property and soil moisture must be calibrated and may vary depending on environmental factors such as soil type, temperature, or electric conductivity. Reflected microwave radiation is affected by the soil moisture and is used for remote sensing in hydrology and agriculture. Portable probe instruments can be used by farmers or gardeners. 

Soil moisture sensors typically refer to sensors that estimate volumetric water content. Another class of sensors measure another property of moisture in soils called water potential; these sensors are usually referred to as soil water potential sensors and include tensiometers and gypsum blocks

**Specifications:**

PCB size  71.65mm X 24.00mm X 1.6mm  
Working voltage  3.3 or 5V DC  
Operating voltage  3.3 or 5V DC  
Compatible interfaces .54 3-pin interface and 4-pin Grove interface(1)(2)  

Note 1： D for digital output port, A for analog output port, S for analog/digital output port ( defined according to the switch), V and G for voltage at the common collector and ground respectively 

Note 2： When setting as analog output, output range is 0-3.3V or 0-5V according to the working voltage; when setting as digital output, output is 0/3.3V or 0/5V according to the working voltage

**3.DHT11 SENSOR**
 A humidity sensor senses,measures and regularly reports the relative humidity in the air. It measures both moisture and air temperature.Relative humidity, expressed as a percent, is the ratio of actual moisture in the air to the highest amount of moisture air at that temperature can hold.The warmer the air is, the more moisture it can hold, so relative humidity changes with fluctuations in temperature. 

**Humidity Sensor**

Humidity sensors detect the relative humidity of the immediate environments in which they are placed. They measure both the moisture and temperature in the air and express relative humidity as a percentage of the ratio of moisture in the air to the maximum amount that can be held in the air at the current temperature. As air becomes hotter, it holds more moisture, so the relative humidity changes with the temperature. 

Most humidity sensors use capacitive measurement to determine the amount of moisture in the air. This type of measurement relies on two electrical conductors with a non-conductive polymer film laying between them to create an electrical field between them. Moisture from the air collects on the film and causes changes in the voltage levels between the two plates. This change is then converted into a digital measurement of the air’s relative humidity after taking the air temperature into account
