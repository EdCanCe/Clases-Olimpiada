# Descripción

Edmundo quiere probar las habilidades de los candidatos para saber como la llevan, así que les quiere poner un problema pero no está seguro de si su redacción está correcta, para eso quiere pedirte tu ayuda.
#
Se te va a dar una cadena $msj$ que va a tener una palabra en él. Verifica si la palabra está bien escrita.
#
$msj$ va a estar bien escrita cuando cumpla una de las siguientes condiciones:
#
* Todas sus letras son minúsculas.
* Todas sus letras son mayúsculas.
* Su primera letra es mayúscula, el resto minúsculas.
#
Si la palabra está bien escrita, imprimir un "SI" sin las comillas, en caso contrario imprime un "NO".

# Ejemplo

||input
Hola
||output
SI
||description
Se aplica la tercera regla.
||input
HOLA
||output
SI
||description
Se aplica la segunda regla.
||input
hola
||output
SI
||description
Se aplica la primera regla.
||input
holA
||output
NO
||description
No se cumple ninguna regla.
||end

# Ayuda por si la necesitan
Se puede saber si una letra es mayúscula con su valor correspondiendo a su código ascii. En otras palabras si $msj_i>96$ = $minúscula$.