# UnionFind

Estructura de datos para conjuntos disjuntos.

## Objetivo

Diseñar y desarrollar la estructura de datos Union Find:
* Version Normal
* Version con Comprension
* Version con Rangos

## Prueba Inicial
*Fuente: Compsci 201 Percolation+Union-Find, Jeff Forbes, 2018*

<img src="Example.png" alt="Percolation example" width="600"/>  

## Requisitos
* Utilizar contenedores STL
* La estructura debe ser generica de modo que pueda utilizar cualquier tipo de contenedor secuencial.
* Sobrecargar los operadores sub-indice y >> para realizar la siguiente operacion: 
  ```
    UnionFind<int> uf(25);
    uf[8] >> uf[3] // El nodo 3 es el padre del nodo 8 
  ```
* Incluir TDD o Pruebas unitarias utilizando asserts.  
__NOTA:__ *No se aceptara una solucion sin un set minimo de pruebas que confirme su correcto funcionamiento.*

## Opcional
* Verificar si es factible crear una funcion variadic que permita generar la union de más de 2 puntos a la vez.
* Analizar que tan factible es desarrollar este algoritmo utilizando contenedores asociativos.

## Referencias
* https://www.cs.princeton.edu/~rs/AlgsDS07/01UnionFind.pdf
* https://en.wikipedia.org/wiki/Disjoint-set_data_structure
* https://jariasf.wordpress.com/2012/04/02/disjoint-set-union-find/
