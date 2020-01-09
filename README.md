# NTUOSS Arduino Workshop
> By [Jay Gupta](https://github.com/guptajay) for [NTU Open Source Society](https://github.com/ntuoss)
  

![Arduino](https://upload.wikimedia.org/wikipedia/commons/thumb/8/87/Arduino_Logo.svg/640px-Arduino_Logo.svg.png)
  

This workshop is based on Arduino Uno and assumes elementary knowledge of C Programming.

> **Disclaimer** - This document is only meant to serve as a reference for the attendees of the workshop.
> It does not cover all the concepts or implementation details discussed during the actual workshop.

### Workshop Details
**When:** Friday, 14 Feb 2020. 6:30 PM - 8:30 PM   
**Where:** LHN-TR+17, The Arc - Learning Hub North (LHN), Nanyang Technological University   
**Who:** NTU Open Source Society   

### Errors
If you find any mistake (typo or anything else), please make a pull request or post an issue! Thanks!


***


### Foundations

A microcontroller is a computer system on a chip that does a job. It contains an integrated processor, memory (a small amount of RAM, program memory, or both), and programmable input/output peripherals, which are used to interact with things connected to the chip. A microcontroller is different than a microprocessor, which only contains a CPU.

Arduino is an open-source electronics platform based on easy-to-use hardware and software. 

Arduino boards are able to read inputs - light on a sensor, a finger on a button, or a Twitter message - and turn it into an output - activating a motor, turning on an LED, publishing something online. You can tell your board what to do by sending a set of instructions to the microcontroller on the board.

![Arduino Uno](https://upload.wikimedia.org/wikipedia/commons/3/38/Arduino_Uno_-_R3.jpg)
> **We are going to use Arduino Uno for this Workshop**

### Arduino Board Structure

![Arduino Uno Board](img/Arduino_Uno_Board.png)

* **Vin, 5V, 3.5V, GND** -  To provide power and ground the circuit.  
* **Reset** - Resets the microcontroller.  
* **Analog Pins (A0-A5)** - Receive Analog Input (0 - 5V).  
* **Digital Pins (0-13)** - Receive and Transmit Digital Data.  
* **Rx(0), Tx(1)** - Receive and Transmit Serial Data.  
* **Interrupt Pins (2, 3)** - Trigger an external Interrupt.  
* **PWM Pins (3, 5, 6, 9, 10, 11)** - Provide PWN Output. PWM is a technique to get analog results with digital means.  
* **SPI Pins (10, 11, 12, 13)** - Used for SPI Communication.  
* **InBuilt LED (13)** - Trigger the in-built LED.  


***


### References
