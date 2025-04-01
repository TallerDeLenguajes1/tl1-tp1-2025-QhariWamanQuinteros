[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

### Ejercicio 2, apartado a
El archivo _.gitignore_ es conveniente de incluir porque **le dice a Git que archivos o carpetas ignorar al hacer un _commit_**, es util para evitar que se incluyan en el repositorio contraseñas, claves de API o archivos de configuracion
El archivo _.gitignore_ se debe incluir en el repositorio cuando se hayan identificado los archivos que no deben incluirse

##### Como crear y configurar un archivo _.gitignore_

1. Abrimos Git Bash y navegamos hasta la raiz de nuestro repositorio
2. Creamos un archivo de extension _.gitignore_
3. Adentro del archivo **.gitignore** agregamos el nombre y la extension de los archivos que vayamos a ignorar
4. Añadimos la modificacion desde el working directory al staging area
5. Listo, solo nos queda hacer un commit y ya habremos finalizado con la configuración

#### Inciso 3, apartado c
Respuesta: Los archivos que veo son **tp1_1.c** _.gitignore_ _README.md_ **tp1_1.exe**. No hace falta que este el ejecutable.

#### Inciso 3, apartado g
Respuesta: Los resultados son los mismos y eso se debe a que la direccion de memoria de la variable es almacenada en el puntero. Luego, para mostrar en la salida una direccion de memoria de una variable le antepongo **_&_** y por eso en el punto 2 muestro _puntero_ y en el 3 _&letra_
En el punto 4 obtengo otro resultado que es el de la direccion de memoria del puntero...