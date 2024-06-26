# CPP07
C++ - Module 07 C++ templates

## ex 00

### Plantillas

#### Definicion

- Una plantilla se puede usar tanto para clases como para funciones 

 - Ejemplo de como se puede definir una plantilla

```c++
	template <typename T>
	T minimum(const T& lhs, const T& rhs)
	{
		return lhs < rhs ? lhs : rhs;
	}
 
 ```

 - Como C++ es un lenguaje fuertamente tipado, tenemos que recurrir a plantillas si queremos que una funcion nos sirva para varios tipos de datos, esta funcion servira tanto para int como para long o strings, o clases( si el operador de igualdad esta bien echo ), cuando se llama a la funcion de la plantilla, es el compilador el que se encarga de crear una nueva funcion para el tipo de dato que le pasamos a la funcion.

#### Ventajas de las Plantillas
- Reutilización de Código: Permite escribir algoritmos y estructuras de datos una vez y utilizarlos con diferentes tipos de datos sin modificar el código original.

- Abstracción y Flexibilidad: Facilita la creación de código genérico que puede manejar diferentes tipos de datos de manera transparente.

- Eficiencia: Las plantillas en C++ se resuelven en tiempo de compilación, lo que significa que no hay sobrecarga en tiempo de ejecución.

### Plantillas vs Sobrecarga de funciones
- Cuándo usar cada una
- Plantillas: Utiliza plantillas cuando necesitas escribir código que funcione con múltiples tipos de datos de manera genérica y no quieres duplicar código. Las plantillas son ideales para algoritmos y estructuras de datos genéricas.

- Sobrecarga de Funciones: Usa la sobrecarga de funciones cuando necesitas proporcionar diferentes implementaciones de una función para diferentes tipos de datos. Es útil cuando cada versión tiene un comportamiento específico que no se puede generalizar fácilmente con una plantilla.

Resumen: Las plantillas es cuando el codigo se va a comportar igual, 
la sobrecarga es cuando van hacer cosas diferentes segun el tipo de dato


## ex 01

- Consolidar lo aprendido en el ejercicio anterior pero con arrays
```c++
template <typename T>
void	display( T element ) {
	std::cout << element << std::endl;
}

template <typename T1, typename T2, typename FNC>
void	iter( T1 *array, T2 len, FNC display ) {
	for (T2 i = 0; i < len; i++) {
		display(array[i]);
	}
}
```
- Simplemente saber como recibir un array de cualquier tipo, que vamos a iterar ese array con el argumento T2 y vamos a aplicar la funcion display;

## ex 02
## Clase con Plantillas

### Implementación de Métodos y Constructores:

- Todos los métodos y constructores de la clase plantilla deben ser definidos dentro del archivo de encabezado (.hpp). Esto es necesario porque el compilador necesita tener acceso al código fuente completo para generar las versiones específicas de los métodos según los tipos de datos que se usen con la clase.

