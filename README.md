# Arduino-Robot-Explorador
Robot explorador autonomo utilizando arduino

El robot cuenta con un chasis extraido de un auto RC 4x4, la idea es que el manejo de los motores se encuentre ahislado
de la logica, es por ello que se utilizara un microcontrolador dedicado exclusivamente a ello, conectado mediante I2c al 
microcontrolador Master.

El proyecto se divide en esas dos etapas (por ahora), el control de motores y la placa master que leera los sensores y 
enviara por medio de I2C los comando al controlador de motores, ambas placas utilizaran un microcontrolador
Atmega328P con el Bootloader de Arduino UNO.
