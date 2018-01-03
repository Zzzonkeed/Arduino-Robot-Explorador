# Arduino-Robot-Explorador
Robot explorador autónomo utilizando Arduino

El robot cuenta con un chasis extraído de un auto RC 4x4, la idea es que el manejo de los motores se encuentre aislado
de la lógica, es por ello que se utilizara un microcontrolador dedicado exclusivamente a ello, conectado mediante I2c al 
microcontrolador Master.

El proyecto se divide en esas dos etapas (por ahora), el control de motores y la placa master que leerá los sensores y 
enviara por medio de I2C los comando al controlador de motores, ambas placas utilizaran un microcontrolador
Atmega328P con el Bootloader de Arduino UNO.

