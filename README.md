# AirCooler
Personal project, making an AC prototype with raspberry pi.
I will use a dht11 sensor to read the temperature. Based on the temperature, a motor with a fan blade pointed at the sensor will activate, in order to control the temperature. This will all run on a raspberry pi model 3B + .

# Progress
09.11.2019
I have found working code for the temperature sensor, which sends the data through SSH.
My next step is to make the motor work, hopefully on the raspberry pi. I will then bridge them by making an application that reads the output of the sensor and activates the motor based on the temperature.