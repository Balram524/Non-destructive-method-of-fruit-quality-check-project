#  **Non-destructive method of fruit quality check project**

  <center>
  <img src="/project images/Orange_Quality check.jpeg" width="600" height="225">
  </center>
   <br>
## Description: 

In this project, We would check the quality of the pome fruits like apple,orange and sapota etc. without cutting them internally. 
we have used the multiple gas sensors and multispectral sensors for getting the data of different fruits and uploaded to the machine learning model to detect the quality of that fruits.
The integration of multiple sensors, including MQ-3, MQ-4, DHT11, Infrared (IR), Ultrasonic, and Sound sensors with an Arduino Uno on a breadboard to develop a non-destructive 
method for fruit spoilage detection. After this, it will outline the successful integration of the AS7265x spectral sensor with an Arduino Uno microcontroller to capture the
data on the serial monitor and display 18 different spectral readings using the serial plotter.

## Hardware used:

1. <ins>MQ3-Alcohol sensors:</ins>
The MQ-3 gas sensor is a crucial component in the field of gas detection and monitoring of fruit ripening condittions andspoilage through the emitted gases concentrations
like ethanol. This sensor is widely used in applications such as gas leakdetection,breath analysis, and industrial safety.

**Working Principle:**

The MQ-3 gas sensor operates based on the principle of semiconductor conductivity. It consists of a sensing element made of tin dioxide (SnO2),
which exhibits a change in electrical conductivity in the presence of specific gases. When the target gas comes into contact with the sensor,
it causes a change in resistance, leading to a measurable electrical signal.

   <center>
   <img src="https://i0.wp.com/srituhobby.com/wp-content/uploads/2021/03/5-16.jpg?resize=1024%2C576&ssl=1" width="400" height="225">
   </center>
2. <ins>MQ-4 Methane Gas Sensor:</ins>
MQ-4 is a type of gas sensor commonly used for detecting various gases in the environment, particularly methane (CH4), natural gas, propane, and other combustible gases.
When the fruits get spoiled it releases the significant amount of this gas in the nearby enviornment and we will measure that concentration of data which will help us identify the 
fruit quality check.
It operates on the principle of metal oxide semiconductors.

**Gas detection:**

When the sensor is powered on, the heating element heats the metal oxide semiconductor coating on the sensing element. In the presence of target gases such as methane or propane,
the conductivity of the metal oxide semiconductor changes. This change in conductivity is due to the chemical reaction between the gas molecules and the metal oxide surface.

   <center>
   <img src="https://www.semiconductorforu.com/wp-content/uploads/2022/08/mq4-circuit.jpg" width="400" height="225">
   </center>

3. <ins>MQ-135 Air Quality Gas Sensor:</ins>
The MQ-135 is a gas sensor widely used for detecting a variety of air pollutants such as ammonia (NH3), nitrogen oxides (NOx), benzene, smoke, and other harmful gases.
the MQ-135 includes a built-in heating element, typically made of a fine coil of platinum wire. This heating element heats the sensing element to a specific temperature
(usually around 200-400°C) required for the sensor to operate.

**Output Signal:** 

The MQ-135 sensor provides an output voltage or current signal that is proportional to the concentration of the target gas in the environment. 
This signal can be processed and interpreted by a microcontroller
or other electronic devices to determine the presence and concentration of the gas.
 <center>
   <img src="https://moviltronics.com/wp-content/uploads/2021/02/M30032-1.jpg" width="400" height="225">
   </center>
4.<ins>DHT11 Temperature and Humidity Sensor:</ins>
The DHT11 is a widely-used digital temperature and humidity sensor, known for its simplicity, affordability, and reliability.The DHT11 sensor is designed 
to measure both temperature and humidity in a single device, providing a convenient solution for environmental monitoring.

**Working Principle:** 

The DHT11 sensor operates based on a capacitive humidity 
sensing element and a thermistor for temperature measurement. The humidity sensing element measures changes in capacitance, while the thermistor 
measures temperature. The sensor converts these measurements into digital signals, providing accurate and easy-to-read data.
<center>
   <img src="https://th.bing.com/th/id/OIP.KLrGwnSP2cZjBG4HqgCKQAHaE5?rs=1&pid=ImgDetMain" width="400" height="225">
   </center>
5.<ins>Infrared Sensor:</ins>
Infrared sensors are devices that detect and measure infrared radiation emitted or reflected by objects.

**Working Principle:**

Infrared sensors operate based on the principle that all objects with a temperature above absolute zero emit infrared radiation.
These sensors detect this radiation and convert it into an electrical signalthat can be interpreted by electronic devices.
The sensor then converts this radiation into an electrical signal, enabling the measurement and analysis of temperature or the presence of objects.
<center>
   <img src="https://1.bp.blogspot.com/-ajhjn0zFnHU/Xj7MF95SdXI/AAAAAAAAAuY/4BfOksMpZcMDVKICPcVh5ska2HE81qw-ACLcBGAsYHQ/s1600/ir.jpg" width="400" height="225">
   </center>
6. <ins> Ultrasonic Sensor: </ins>
Ultrasonic sensors are devices that use ultrasonic sound waves to detect the presence, distance, and characteristics of objects in their vicinity.
Ultrasonic distance sensors measure the distance to an object and are often used inapplications such as parking assistance systems, liquid level measurement, 
and object detection in industrial settings.

**Working Principle:**

 Ultrasonic sensors emit high-frequency sound waves (ultrasonic waves) and measure the time it takes for the sound waves to bounce back after hitting an object.
 By calculating the time taken for the sound waves to return and knowing the speed of sound in the medium, the sensor can determine the distance to the object.
 The basic setup includes a transducer that converts electrical energy into ultrasonic waves and vice versa.
  <br>
<div style="display:flex;">
    <img src="https://potentiallabs.com/cart/image/cache/catalog/sensor-de-distancia-ultrasonico-hc-sr04-D_NQ_NP_1363-MCO2913268742_072012-O-1000x1000w.jpg" alt="Image 1" style="width:50%;">
    <img src="https://th.bing.com/th/id/OIP.kDDlalwjv7SEJg7x20WzKQHaDa?rs=1&pid=ImgDetMain" alt="Image 2" style="width:50%;">

</div>

7. <ins>Sound Sensor:</ins>
Sound sensors, also known as sound detectors or acoustic sensors, are essential components in various technological applications, enabling the detection and 
analysis of sound waves. A sound sensor typically consists of a microphone, a power amplifier, and an output actuator. The microphone converts the sound signal 
into an electrical signal, which is then amplified and processed by the power amplifier. The output actuator, such as a loudspeaker, converts the electrical signal
back into a sound signal for listening.

## Working Principle:

Sound sensors operate based on the conversion of acoustic waves into electrical signals. They typically consist of a microphone or a transducer that converts 
variations in air pressure caused by sound waves into electrical voltage. The generated electrical signal can then be processed and analysed for various applications.
<center>
   <img src="https://th.bing.com/th/id/OIP.9N4T_pEBkGW5aFsAifTB5QHaG1?rs=1&pid=ImgDetMain" width="400" height="300">
   </center>
   
8. <ins>Arduino Uno Microcontroller:</ins>
The Arduino Uno is a widely-used open-source microcontroller board that has gained immense popularity in the maker and electronics communities.
Developed by Arduino LLC, the Arduino Uno is recognized for its versatility, ease of use, and robust capabilities.

## Key Features:

<p style="color:blue">
>> Microcontroller: The Arduino Uno is built around the Atmel ATmega328P microcontroller, providing a clock speed of 16 MHz.<br>
>> Digital and Analog I/O Pins: It features 14 digital input/output pins and 6 analog input pins, offering flexibility for a wide range of projects.<br>
>> USB Interface: The board is equipped with a USB interface, simplifying the process of programming and power supply.<br> 
>>Integrated Development Environment (IDE): Arduino Uno is programmed using the Arduino IDE, providing a user-friendly platform for code development and uploading.<br>
</p>
<center>
   <img src="https://1.bp.blogspot.com/-RxYW5bGrV5w/X7BeNBOwvHI/AAAAAAAAKAQ/jTmAoVpkftEHENKfqfAVO7O6DgTqvewzgCLcBGAsYHQ/s2048/Arduino%20UNO%20Pinout.png" width="400" height="300">
   </center> <br>
9.  <p style="color:Yellow">AS7265x Spectral Sensor:</p>
The AS7265x is a multispectral sensor designed for spectral analysis, allowing precise measurement of differnt intensities at various wavelengths of light. Developed by ams AG, this sensor is known for its integration of Eighteen independent optical filters, providing accurate spectral data.
The AS7265x is the simplest Triad Spectroscopy Sensor from Sparkfun which can also be called a Spectrophotometer. The sensor is formed by combining three sensors AS72651, AS72652 & AS72653.
The AS72651 is for measuring the visible light spectrum. Similarly, AS72652 is for measuring UV Light. The AS72653 is an IR Sensor for measuring IR Radiation. 
The sensor also has a 4Mbit EEPROM which is loaded by the firmware which drives the system. The EEPROM is read by the AS72651 at power on.<br>
The AS7265x Triad Spectroscopy Spectral Sensor detects the light from a wavelength of 410nm to 940nm. The sensor has the ability to measure 18 individual light
frequencies with precision down to 28.6 nW/cm2 and accuracy of +/-12%. The sensor operates at a typical voltage of 3.3V.
The sensor has I2C pins as SDA (Serial Data) & SCL (Serial Clock) with an I2C address of 0x49. The default baud rate for the sensor is 115200.
<br>
<div style="display:flex;">
    <img src="https://how2electronics.com/wp-content/uploads/2021/01/AS7265x-Triad-Spectroscopy-Sensor-640x345.jpg" alt="Image 1" style="width:50%;">
    <img src="https://how2electronics.com/wp-content/uploads/2021/01/AS7265x-Pins-300x200.jpg" alt="Image 2" style="width:50%;">
</div>

## Features:<br>

>> Eighteen Independent Channels: The AS7265x sensor features Eighteen independent spectral channels, covering wavelengths from approximately 410 nm to 940 nm.<br>
>> Integration of Filters: Each channel includes a filter that allows selective measurement of specific wavelength ranges, enabling accurate spectral analysis.<br>
>> Digital Interface: The sensor communicates with external devices through an I2C digital interface, facilitating easy integration into various electronic systems.<br>

### For more information follow the links: <br>

1. For getting the spark fun triad spectroscopy (https://www.sparkfun.com/products/15050).</br>
2. AS7265x Multispectral Triad spectroscopy sensor userguide (https://ams.com/documents/20143/36005/AS7265x_UG000393_1-00.pdf/94834780-df46-557b-2fc7-2b87fb24aa52).<br>
3. Interfacing Triad Spectroscopy Sensor AS7265x with Arduino uno (https://how2electronics.com/interfacing-triad-spectroscopy-sensor-as7265x-with-arduino/).<br>
4. Datasheet and user information (https://cdn.sparkfun.com/assets/learn_tutorials/8/3/0/AS7265x_Datasheet.pdf).<br>
5. YouTube link for the interfacing the sensors (https://youtu.be/qdHy9j06gng).<br>
6. Github link for getting the library (https://github.com/sparkfun/SparkFun_AS7265x_Arduino_Library).<br>

### Near infrared rays: <br>

Thermal IR imaging detects the heat from the surface of the fruit. Due to defective tissues of fruit pulp, the non-uniform temperature difference is observed and sensed on the surface of the fruit.
Thermal IR Imaging:<br>
├── Infrared Radiation:
  	1. All objects emit infrared radiation.
  	2. Depends on temperature.
   <br>
├── Sensor Detection:
  	1. Infrared detectors (e.g., microbolometers).
  	2. Capture infrared radiation.
   <br>
├── Image Formation: 
   	1. Process electrical signals.
    <br>
├── Temperature Mapping:
   	1. Assign colors or shades based on temperature.
<br>
<center>
 <img src="https://www.ept.ca/wp-content/uploads/2016/10/16OTD202_TM2.jpg" width="400" height="300">
</center>
This is what we have made in our project and for that reference we have attached a image below which depict the working of near infrared rays imaging.
<br>
<center>
 <img src="https://jift.irost.ir/data/jift/coversheet/341651049290.jpg" width="400" height="300">
</center>
<br>
To understand the basic details of IR imaging go through the link below:<br>
 (https://youtu.be/7_fgNpi3Jrw?si=Szzk7JiQWpe-qLcx).<br>

## Literature work: <br>

### Model-1: Fruit Defect Prediction Model (FDPM).

### Based on: Thermal IR imaging, image processing and deep learning.

<br>
Preferred research paper:(https://link.springer.com/article/10.1007/s10921-021-00778-6)
<br>

### Outcomes:

The apple defect detection accuracy by the proposed Naïve Bayes classifier is observed to be 97.6% for thermal IR imaging samples whereas true color (RGB)based achieved only 59% for the same sample.
<br>

<div style="display:flex;">
    <img src="https://jift.irost.ir/data/jift/coversheet/341651049290.jpg" alt="Image 1" style="width:50%;">
    <img src="https://media.springernature.com/full/springer-static/image/art%3A10.1007%2Fs10921-021-00778-6/MediaObjects/10921_2021_778_Fig1_HTML.png?as=webp" alt="Image 2" style="width:50%;">
</div>
<br>
### Model-2: Scio the pocket-sized device 

The world’s first pocket-sized connected micro-spectrometer." Developed by San Francisco and Israel-based company [Consumer Physics](https://www.consumerphysics.com/business/about-consumer-physics/).
More more information: [click](https://learn.sparkfun.com/tutorials/scio-pocket-molecular-scanner-teardown-/all).

<div style="display:flex;">
    <img src="https://cdn.sparkfun.com/r/600-600/assets/learn_tutorials/6/5/7/SCiO_Teardown_01.jpg" alt="Image 1" style="width:50%;">
    <img src="/project images/scio.jpg" alt="Image 2" style="width:50%;">
</div>
<br>

## Thermal images by using the Flir Camera:

The FLIR ONE® Gen 3 is an affordable smartphone attachment thermal imaging camera designed to help professionals find problems faster and get more work done in less time. With MSX® (Multi-Spectral Dynamic Imaging) technology, which enhances thermal images by embossing details from the visual camera onto the thermal image. FLIR ONE® Gen 3 cameras also provide a OneFit™ connector that adjusts and extends up to 4 mm to fit many popular protective cases.
Whether inspecting electrical panels, looking for HVAC problems, or finding water damage, FLIR ONE® Gen 3 thermal imaging cameras enable users of all experience levels to work efficiently while on-the-go. The FLIR ONE Gen 3, FLIR ONE Pro, and FLIR ONE Pro LT are not compatible with iPhone 15 and later models. For iOS customers with USB-C ports, we recommend the FLIR ONE Edge or FLIR ONE Edge Pro. Check mobile devices compatibility.

## SPECIFICATIONS: <br>

Thermal Resolution:	80x60 <br>
Battery Life:	Approximately 1h <br>
Object Temperature Range:	-20°C — 120°C (–4°F — 248°F) <br>
Phone	:Android <br>
Accuracy	: ±3°C or ±5%, typical Percent ofthe difference between ambient and scene temperature. Applicable 60s after start-up when the unit is within 15 °C – 35 °C and the scene is within 5 °C – 120 °C. <br>
Operating Temperature:	0 °C – 35 °C (32°F – 95°F) , battery charging 0 °C – 30 °C (32°F – 86°F) <br>
Spot Meter	One spot meter (centered). <br>
<center>
 <img src="https://www.flir.com/globalassets/imported-assets/image/flirone-gen3-consumer.png" width="400" height="300">
</center>
<br>
For more information follow the link below:
(https://www.flir.com/search/?query=flir+one)
<br>
For step by step integration of flir one android camera to phone follow the youtube channel:

(https://www.youtube.com/user/FLIRThermography/search)
<br>
For user details manual guide: **(https://www.flir.com/globalassets/imported-assets/document/flir-one-pro-user-guide-3rd-gen-en.pdf)**.

## Some of the samples of thermal images of apple: 
<br>
<div style="display:flex;">
    <img src="/project images/3.jpeg" alt="Image 1" style="width:33%;">
    <img src="/project images/2.jpeg" alt="Image 2" style="width:33%;">
    <img src="/project images/6.jpeg" alt="Image 3" style="width:33%;">
</div>

Images at different temp:

<center>
 <img src="/project images/21.jpeg" width="400" height="300">
</center>
<br>
Analyze the images at different temp:
<img src="/project images/analyze thermal image.png" width="400" height="225">

## Tools and software for Simulation:

1. Arduino Ide to run the code and analyze the data.
2. For simulations of code we have used the TinkerCad software.
   For reference we have attached the image below:

   <center>
   <img src="/project images/21.jpeg" width="400" height="225">
   </center>
<br>
3. We have used the Fusion 360 designing software to design the model structure.

   Thanks to my team mate **@ [Ajaruddin Ansari(BTech,NIT Srinagar)](https://www.linkedin.com/in/ajaruddin-ansari-4b3793227/) and mentor @ Praveen Sir (PhD Scholar, Ele. dept IIT Kanpur)**.
   <center>
   <img src="/project images/box cage.jpg" width="600" height="225">
   </center>
<br>
   For better view [click here](https://drive.google.com/file/d/1cWxObDSwIwK7r6A5wAkmoK2MqrB4HHLq/view?usp=sharing).

4. Eagle Cad Software for the designing of the **PCB**.
   
   Thanks to my team mate **@ [Prateek kumar (BTech, NIT Srinagar)](https://www.linkedin.com/in/prateek-kumar09/) and mentor @ Vijay Panday sir (PhD Scholar, Ele. dept IIT Kanpur)**.

     <center>
     <img src="/project images/pcb.jpg" width="400" height="300">
     </center>
   <br>
5. Make the connection of circuit on zero order PCB with the help of soldering tools.
   Thanks to ** Ajay Kumar (MTech Student, IIT Kanpur)**.

## **Final results and readings of multispectral and gas sensors data and integrated device**.

### Final integration device:

 <br>
<div style="display:flex;">
    <img src="/project images/47.jpeg" alt="Image 1" style="width:33%;">
    <img src="/project images/42.jpeg" alt="Image 2" style="width:33%;">
    <img src="/project images/41.jpeg" alt="Image 3" style="width:33%;">
</div>
   <br>
~ ### Observation of different fruits:

 <br>
<div style="display:flex;">
    <img src="/project images/40.jpeg" alt="Image 1" style="width:33%;">
    <img src="/project images/analyze final readings.jpg" alt="Image 2" style="width:33%;">
    <img src="/project images/apple orange det..jpg" alt="Image 3" style="width:33%;">
</div>

<br>
~ Streaming data on MS-excel for better output analyzation through plotting.
<center>
     <img src="/project images/analyze 18 spectral.jpg" width="400" height="300">
     </center>
   <br>

## Some of the more **Research papers for the reference**.

1.[Paper_1](https://elibrary.asabe.org/azdez.aspsearch=1&JID=5&AID=48072&CID=spo2017&v=&i=&T=1&urlRedirect=%5Banywhere%3D&keyword=&abstract=&title=on&author=&references=&docnumber=&journals=All&searchstring=&pg=&allwords=&exactphrase=&OneWord=&Action=Go&Post=Y&qu=%5D&redirType=newresults.asp&utm_source=TrendMD&utm_medium=cpc&utm_campaign=Journal_of_the_ASABE_TrendMD_0)

2.[Paper_2](https://onlinelibrary.wiley.com/doi/full/10.1111/jfpe.13816)

3.[Paper_3](https://www.mdpi.com/2304-8158/12/15/2968)

4.[Paper_4](https://www.degruyter.com/document/doi/10.1515/revac-2016-0016/html)

                                                          *******

### Contributers:

1.[Balram NIshad(BTech,NIT Srinagar)](https://www.linkedin.com/in/balram-nishad/) (Project lead).
2.[Prateek kumar(BTech,NIT Srinagar](https://www.linkedin.com/in/prateek-kumar09/)
3.[Ajaruddin Ansari(BTech,NIT Srinagar)](https://www.linkedin.com/in/ajaruddin-ansari-4b3793227/)

### Special thanks to:

Our mentor @ [Prof. Tushar Sandhan (EE,IIT Kanpur)](https://www.linkedin.com/in/tushar-sandhan-67644122/) for their contineous support and guidance and all the lab members.

<center>
     <img src="/project images/analyze 18 spectral.jpg" width="400" height="300">
     </center>
   <br>






