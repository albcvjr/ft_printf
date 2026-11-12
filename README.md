*Este proyecto ha sido creado como parte del currículo de 42 por acuevas.*

# ft_printf

## Descripción

Este proyecto consiste en recrear la función `printf()` de la biblioteca estándar de C, implementando un sistema propio de impresión de caracteres y diferentes tipos de datos mediante el uso de argumentos variables.

El proyecto permite comprender cómo funcionan las funciones variádicas mediante el uso de `va_list`, `va_start`, `va_arg` y `va_end`, así como profundizar en el tratamiento de cadenas de formato, conversiones de tipos y gestión de los valores de retorno.

La implementación utiliza la función `write()` para imprimir directamente en la salida estándar y reproduce el comportamiento de las conversiones obligatorias establecidas en el enunciado.

### Conversiones implementadas

| Especificador | Descripción | Ejemplo |
|:---:|---|---|
| `%c` | Imprime un carácter. | `A` |
| `%s` | Imprime una cadena de caracteres. | `Hola 42` |
| `%p` | Imprime una dirección de memoria en hexadecimal. | `0x7ffee...` |
| `%d` | Imprime un número decimal con signo. | `-42` |
| `%i` | Imprime un entero decimal con signo. | `42` |
| `%u` | Imprime un número decimal sin signo. | `4294967295` |
| `%x` | Imprime un número hexadecimal en minúsculas. | `ff` |
| `%X` | Imprime un número hexadecimal en mayúsculas. | `FF` |
| `%%` | Imprime el carácter `%`. | `%` |

## Estructura del proyecto

El proyecto está organizado en diferentes archivos `.c`, separando las responsabilidades de cada función para facilitar su mantenimiento y comprensión.

### Gestión del formato

| Archivo | Función | Responsabilidad |
|---|---|---|
| `ft_printf.c` | `ft_printf` | Función principal. Gestiona los argumentos variables y devuelve el resultado final. |
| `ft_check_format.c` | `ft_check_format` | Recorre la cadena de formato e identifica los caracteres y especificadores. |
| `ft_print_format.c` | `ft_print_format` | Distribuye cada especificador a la función correspondiente. |

### Impresión de caracteres y cadenas

| Archivo | Función | Responsabilidad |
|---|---|---|
| `ft_print_char_len.c` | `ft_print_char_len` | Imprime un carácter mediante `write()` y devuelve el número de caracteres escritos o `-1` si ocurre un error. |
| `ft_print_str.c` | `ft_print_str` | Imprime una cadena de caracteres y gestiona el caso de punteros nulos. |
| `ft_print_csp.c` | `ft_print_csp` | Gestiona las conversiones `%c`, `%s` y `%p`. |
| `ft_print_mem.c` | `ft_print_mem` | Convierte e imprime una dirección de memoria con el prefijo `0x`. |

### Impresión de números

| Archivo | Función | Responsabilidad |
|---|---|---|
| `ft_print_nums.c` | `ft_print_nums` | Distribuye las conversiones numéricas. |
| `ft_print_signed.c` | `ft_print_signed` | Gestiona los enteros con signo (`%d` e `%i`). |
| `ft_print_unsigned.c` | `ft_print_unsigned` | Gestiona los enteros sin signo (`%u`). |
| `ft_print_unsigned_hex.c` | `ft_print_unsigned_hex` | Gestiona las conversiones hexadecimales sin signo (`%x` y `%X`). |
| `ft_print_decimal.c` | `ft_print_decimal` | Imprime números en formato decimal mediante recursividad. |
| `ft_print_hex.c` | `ft_print_hex` | Imprime números en hexadecimal y permite seleccionar entre minúsculas y mayúsculas. |

### Otros archivos

| Archivo | Descripción |
|---|---|
| `libftprintf.h` | Contiene las cabeceras, dependencias y prototipos necesarios para el proyecto. |
| `Makefile` | Automatiza la compilación de los archivos y la creación de la biblioteca estática `libftprintf.a`. |

## Instrucciones

### Compilación

Para compilar la biblioteca, ejecuta:

```bash
make
```

El comando generará la biblioteca estática:

```text
libftprintf.a
```

El Makefile también incluye las siguientes reglas:

| Comando | Función |
|---|---|
| `make` | Compila el proyecto y genera la biblioteca. |
| `make clean` | Elimina los archivos objeto (`.o`). |
| `make fclean` | Elimina los archivos objeto y la biblioteca. |
| `make re` | Realiza una recompilación completa. |

### Uso de la biblioteca

Para utilizar `ft_printf()` en otro proyecto, incluye el archivo de cabecera:

```c
#include "ft_printf.h"
```

Compila tu programa enlazando la biblioteca:

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o programa
```

A continuación, puedes utilizar la función:

```c
ft_printf("Hola %s, tienes %d puntos.\n", "42", 100);
```

## Recursos

Durante el desarrollo se han utilizado los siguientes recursos:

- **Man pages de Linux:** documentación de `printf()`, `write()` y las funciones de gestión de argumentos variables.
- **Documentación de C:** consulta de tipos de datos, conversiones, operaciones aritméticas y comportamiento de las funciones variádicas.
- **Pruebas comparativas:** ejecución de diferentes casos con `printf()` y `ft_printf()` para comprobar que las salidas y los valores de retorno coinciden.
- **Herramientas de desarrollo:** compilador `cc` con las opciones `-Wall -Wextra -Werror` y Norminette para verificar el cumplimiento de las normas de 42.

### Inteligencia artificial

Se ha utilizado inteligencia artificial como herramienta de apoyo durante el desarrollo y el aprendizaje del proyecto.

Su uso se ha centrado en resolver dudas conceptuales, analizar la estructura de las funciones, revisar posibles errores, plantear casos de prueba y comprender el funcionamiento de las funciones variádicas.

La implementación del código y las decisiones sobre su estructura se han trabajado de forma progresiva, buscando comprender el funcionamiento de cada parte y poder justificarla durante la defensa del proyecto.