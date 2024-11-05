
# Huertas_MicaelaAdriana_ExamenCPP
Instrucciones de Entrega
Repositorio en GitHub:

Crea un repositorio privado en GitHub para este examen y compártelo solo después de la revisión si así lo deseas.
Fichero ZIP:

Al finalizar, descarga tu repositorio como un archivo ZIP con el nombre Apellido_Nombre_ExamenCPP.zip.
Archivo README.md:

Incluye un archivo README.md en el repositorio, que contenga:
Un enlace directo al repositorio.
Una breve descripción de cada ejercicio resuelto y el archivo donde se encuentra.
Usa Markdown para estructurar tu README.
Entrega:

Sube el archivo ZIP a la plataforma indicada antes de la fecha límite.
Aspectos Adicionales:

Organiza y comenta tu código para que sea fácil de leer y entender.
Si utilizas referencias externas, inclúyelas en el README.md.
Parte 2: Problemas de Codificación (70 puntos en total)
Ejercicio 1: Identificación de Número Positivo, Negativo o Cero
Escribe un programa en C++ que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero". 

Creo una variable para almacenar el número, y uso cin para recibir el valor ingresado por el usuario.Utilizo una estructura if, else if, else para determinar el tipo de número.Si el número es mayor que cero ( if), "El número es positivo".Si el número es menor que cero ( else if),"El número es negativo".En caso contrario ( else),"El número es 0".

Hecho con CHATGPT

Ejercicio 2: Día de la Semana
Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 

Pido al usuario que ingrese un número del 1 al 7 y uso un switch para identificar el día de la semana Con el switch, evalúo el valor de dia.Si el número es 1 ( case 1), imprime "Lunes" y termina el caso con break.Si el número es 2 ( case 2), imprime "Martes", y continúa así hasta el 7, que imprime "Domingo".
Si el número no está en el rango de 1 a 7, utilice el default para mostrar "Número inválido"

Hecho con CHATGPT

Ejercicio 3: Cálculo de Promedio de Calificaciones
Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones. 

Pido al usuario que ingrese las calificaciones de 8 ejercicios y utilice un bucle for para calcular el promedio. Declaro una variable totalNotas con el valor 8 para representar la cantidad de calificaciones a ingresar. También inicializo las variables nota y suma en 0.Con un bucle for, itero desde 1 hasta 8. En cada iteración, pido al usuario que ingrese la calificación del ejercicio correspondiente y se almacena el valor en nota. Luego, se suma esta calificación a la variable suma.
Al finalizar el bucle, calcula el promedio dividiendo el sumatotal de calificaciones entre totalNotas.

Hecho con CHATGPT

Ejercicio 4: Promoción de "3 por 2" en Tienda
En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.

Declaro tres variables ( precio1, precio2, precio3) para almacenar los precios de los artículos y pido al usuario que ingrese cada uno.Se guardan los precios en el array precios.Utilice la función sort de la biblioteca <algorithm> para ordenar los precios de menor a mayor.Se calcula el total a pagar sumando los dos precios más altos.Al final se muestra el total a pagar bajo la promoción.

Hecho con CHATGPT

