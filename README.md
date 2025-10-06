# 📚 Sistema de Biblioteca Estructuras de Datos

Este proyecto implementa un **Sistema de Gestión de Biblioteca** utilizando **árboles AVL, Árbol B y Árbol B+**, desarrollado en **C++** y visualizado con **Graphviz**.  
Forma parte del curso de **Estructuras de Datos** y tiene como objetivo aplicar algoritmos eficientes para almacenar, buscar y eliminar libros a partir de un archivo CSV.

---

## 🚀 Características principales

- Lectura de archivo CSV con validación de datos.
- Inserción, búsqueda y eliminación de libros.
- Estructuras:
  - Árbol AVL (ordenado por año o título)
  - Árbol B (almacenamiento balanceado por bloques)
  - Árbol B+ (optimizado para consultas por rango)
- Gráficas automáticas en formato PNG generadas con **Graphviz**.
- Comparación de rendimiento entre estructuras.
- Interfaz de consola simple e intuitiva.

---

## 🛠️ Requisitos del sistema

- **Sistema operativo:** Windows 10 o superior  
- **Compilador:** MinGW o MSVC compatible con C++20  
- **IDE recomendado:** CLion (JetBrains)  
- **Dependencias:**  
  - [Graphviz](https://graphviz.org/download/) (añadir al PATH)
  - CMake (se incluye con CLion)
  - Git (opcional para control de versiones)

---

## ⚙️ Instalación y configuración

### 1️⃣ Instalar CLion
Descargar desde [https://www.jetbrains.com/clion](https://www.jetbrains.com/clion)  
Durante la instalación:
- Asegurarse de marcar la opción **Add CMake to PATH**.

### 2️⃣ Instalar Graphviz
Descargar el instalador para Windows desde:  
👉 [https://graphviz.org/download/](https://graphviz.org/download/)

Instalar y **agregar la ruta** al PATH:
C:\Program Files\Graphviz\bin


Verificar instalación:
dot -V

### 3️⃣ Compilar el proyecto
Desde CMD o la terminal de CLion:
```bash
mkdir build
cd build
cmake ..
cmake --build .

4️⃣ Ejecutar el programa

Ejecuta el binario generado:

.\untitled.exe

🧩 Estructura de carpetas
BibliotecaEdd/
├── Arboles/
│   ├── ArbolAVL.cpp
│   ├── ArbolB.cpp
│   ├── ArbolBmas.cpp
│   └── ListaNoOrdenada.cpp
├── Libro/
│   ├── Libro.cpp
│   └── Libro.h
├── LeerArchivo.cpp
├── main.cpp
├── CMakeLists.txt
└── /build/
🧠 Complejidad Algorítmica (Big O)
Algoritmo	Estructura	Complejidad	Justificación
Inserción	AVL	O(log n)	Se reequilibra el árbol tras cada inserción.
Búsqueda	AVL	O(log n)	Búsqueda binaria en árbol balanceado.
Eliminación	AVL	O(log n)	Rebalanceo tras eliminación.
Inserción	Árbol B	O(log n)	Inserción recursiva con división de nodos.
Búsqueda	Árbol B	O(log n)	Se recorre el número de niveles proporcional a log(n).
Eliminación	Árbol B	O(log n)	Combinación y redistribución de nodos.
Inserción	B+	O(log n)	Inserción hasta hoja, división en nodos si es necesario.
Búsqueda por rango	B+	O(log n + k)	Log(n) para ubicar el rango, k elementos recorridos.
🧑‍💻 Autores

Ana Pérez
Estudiante de Ingeniería en Sistemas
Universidad De San Carlos de Guatemal
Centro Universitario de Occidente
