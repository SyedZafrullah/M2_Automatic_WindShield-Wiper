# Introduction

The Automatic Windshield Wiper is used to wash the Windshield of cars and other heavy vehicles like buses and trucks during rainy conditions.It has been implemented by using Atmega328 in a simulation software named SimulIDE using C programming. We can install this system in cars or buses or trucks to clean the Windshield. It can prevent the vehicles from accidents during rainy climates where the driver may forget to operate the windshield so this system operates the windshield automatically. This uses optical sensors to detect if it is raining or not. The sensor projects infrared light into the windshield at a 45-degree angle. If the glass is dry, most of this light is reflected back into the sensor by the front of the windshield. If water droplets are on the glass, they reflect the light in different directions -- the wetter the glass, the less light makes it back into the sensor. We have interfaced two servo motors for movement of windshield wiper to clean the windshield glass.Accurate sensor information allows the processor to operate the system so that the electronic modules can optimize their performance and maximize their reliability no matter in any working conditions. This project can also be used in industries if the servomotor is functioned to operate the conveyors and also in packing processes in industries if it is modified to a little extent. The type of input sensor and signal needed may vary depending on the type of controlled process. Typical input sensors include optical sensors, Infrared sensors, humidity sensors. In this project we have used a voltage source with variable resistance to depict the change in potential of the optical sensor with respect to variation in light reflection from windshield.

# Features
- Low Cost.
- Works with variation in input potential.
- Optical Sensor is used
- Robust System.
# Research/State of Art

Mostly used in vehicles like car or bus or trucks to operate the WindShield Wiper during rainy conditions or washing. It is also used in Industries for sorting the products and it can also be used for packing machine purposesand as robotic arm in industries if the system is slightly modified. It takes an analog input and senses the intensity of infrared light via variation in potential of the optical sensor. Today’s modern vehicles are smart! Automobiles today have the ability to prevent front and rear end collisions; they help drivers accelerate and stop safely on cold and icy weather conditions;  an often overlooked smart system is the vehicle’s climate control. Most vehicles today can let you set the climate controls to automatic. Automatically the system works when it senses the windshield is covered with water.

# **SWOT Analysis:**

**Strength:**

- Stepper Motor works with minute angle changes variation.
- Cost effective.
- Water proof.

**Weakness:**
- Mostly applicable in countries with atleast minimum possiblity of rain.

**Opportunities:**

- By implementing in vehicles like cars, buses and trucks.
- By implementing in industries in robotic arm and packing purposes.

**Threats:**
- High electrical resistance could cause the sensor to overheat.

# **4W and 1H:**

**Why:**
To work as Automatic Windshield Wiping system in vehicles

**What:**
Automatic Windshield Wiping system for vehicles. 

**Where:**
Vehicles and Industries

**When:**
In vehicles as Automatic Windshield Wiper.

**How:**
By installing the system in Vehicles and Industries.


# High Level Requirements
| ID | Description | Status |
|----| ------------| -------|
|HLR1  | Sevo Motor interfacing with Atmega328 | Implemented |
|HLR2  | LED indication when the Servo Motor Works | Implemented | 	

# Low Level Requirements

| ID | Description | Status |
|-------|------|-------|
| LLR1 | Servo Motor functions when particular potential is applied  | Implemented |
| LLR2 | LED indication the level of voltage provided to motor | Implemented |
| LLR3 | Voltage varies by varying the variable resistor | Implemeted |
