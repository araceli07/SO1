# SO1
- sistemas opretivos 1 
 - Araceli Lucero Cardona
 - M.S.C Eduardo Flores Gallegos
 - TEMARIO
Unidad - Temas - Subtemas
- 1 Introducción a los sistemas
operativos.
- 1.1 Definición y concepto.
- 1.2 Funciones y características.
- 1.3 Evolución histórica.
- 1.4 Clasificación.
- 1.5 Estructura (niveles o estratos de
diseño).
-  1.6 Núcleo.
-  1.6.1 Interrupciones (FLIH).
- 1.6.2 Despachador(Scheduler).
- 1.6.3 Primitivas de
comunicación(IPC).
- 2 Administración de
procesos
y del procesador.
- 2.1 Concepto de proceso.
- 2.2 Estados y transiciones de los procesos
- 2.3 Procesos ligeros (Hilos o hebras).
- 2.4 Concurrencia y secuenciabilidad.
- 2.4.1 Exclusión mutua de secciones
criticas.
- 2.4.2 Sincronización de procesos en
S.C.
- 2.4.2.1 Mecanismo de
semáforos.
- 2.4.2.2 Mecanismo de
monitores.
- 2.4.3 Interbloqueo (DeadLock).
- 2.4.3.1 Prevención.
- 2.4.3.2 Detección.
- 2.4.3.3 Recuperación.
- 2.5 Niveles, objetivos y criterios de
planificación.
- 2.6 Técnicas de administración del
planificador.
- 2.6.1 FIFO
- 2.6.2 SJF
- 2.6.3 RR
- 2.6.4 Queves multi-level.
- 2.6.5 Multi-level feedback queves. 
- TEMARIO (Continuación)
- 3 Administración de
memoria.
- 3.1 Política y filosofía.
- 3.2 Memoria real.
- 3.2.1 Administración de
almacenamiento.
- 3.2.2 Jerarquía.
- 3.2.3 Estrategia de administración de
memoria.
- 3.2.4 Asignación contigua v.s. no
contigua.
- 3.2.5 Multiprogramación de partición
fija, partición variable, con
intercambio de
almacenamiento.
- 3.3 Organización de memoria virtual.
- 3.3.1 Evaluación de las
organizaciones de
almacenamiento.
- 3.3.2 Paginación.
- 3.3.3 Segmentación.
- 3.3.4 Sistemas de paginación
segmentación.
- 3.4 Administración de memoria virtual.
- 3.4.1 Estrategias de administración.
- 3.4.2 Técnicas de reemplazo de
páginas.
- 3.4.3 Paginación por demanda.
- 3.4.4 Paginación anticipada.
- 3.4.5 Liberación de página.
- 3.4.6 Tamaño de página.
- 4 Administración de
entrada/salida.
- 4.1 Dispositivos y manejadores de
dispositivos (device drivers).
- 4.2 Mecanismos y funciones de los
manejadores de dispositivos (device
drivers).
- 4.3 Estructuras de datos para manejo de
dispositivos.
- 4.4 Operaciones de Entrada /salida. 
- 5.- TEMARIO (Continuación)
- 5 Sistema de archivos. 5.1 Concepto.
- 5.2 Noción de archivo real y virtual.
- 5.3 Componentes de un sistema de
archivos.
- 5.4 Organización lógica y física.
- 5.5 Mecanismos de acceso a los archivos.
- 5.6 Manejo de espacio en memoria
secundaria.
- 5.7 Modelo jerárquico.
- 5.8 Mecanismos de recuperación en caso
de falla.
- 6 Protección y seguridad. 6.1 Concepto y objetivos de protección.
- 6.2 Funciones del sistema de protección.
- 6.3 Implantación de matrices de acceso.
- 6.4 Protección basada en el lenguaje.
- 6.5 Concepto de seguridad.
- 6.6 Clasificaciones de la seguridad.
- 6.7 Validación y amenazas al sistema.
- 6.8 Cifrado. 
 - examen de diagnostico
 - ¿que es un sistema operativo? es lo que hace que funcione una computadora.
 - ¿que sistemas operativos conoces? windows 7, 10 y linux solo lo he escuvhado mencionar
 - ¿que diferiencia entre estos sistemas operativos identifica? 
 - ¿que diferencia hay entre memoria logica y fisica? ps que la logica almacenda datos en la nube y la fisca los almacena en fisco.
 - ¿que tipo de sistema de archivos conoce?
 - ¿que es la criptografia? es donde se guardan los datos y no es falcil de recuperarlos.
 _____________________________________________________________________________________________
 ##glosario
 - RDIM:registro de direccion de memoria 
  - RDAM: registro de datos
  __________________________________________________________________________________________________________
   - guia de examen: sacamos 10 preguntas del libro fundamentos de sistemas operativo para hacer nuestra primera evalucion
   _______________________________________________________________________________________________________________________________________
    - realizar tres programas en c:
     - programar un hola mundo donde lo imprima
     - una calculadora en c funciones basicas
     - un array onde nos va sumando los numero del menor al mayor
________________________________________________________________________________________________________________________________
 - conceptos:
 - carga: Es una parte que asigna el sistema operativo el cual ubica en la memoria principal el tipo de archivos que se va a ejecutar se puede realizar de tres maneras.
 - carga absoluta: este tipo de carga consiste en que el módulo de carga ocupara siempre la misma posición en memoria principal.
 - carga real en tiempo real dinamica: en tiempo real un programa se carga en cualquier región de la memoria principal, el programa se puede intercambiar entre disco y memoria.
 - carga reubicable: el ensamblador o el compilador no generan direcciones reales sino directas relativas a algún punto conocido.
- Compactacion: El proceso de compactación son unas instancias particulares del problema de asignación de memoria dinámica, y esta se  refiere a  satisfacer  una necesidad de tamaño (N) en una lista de huecos libres.
 - comparticon: La idea de compartición de recursos no es nueva ni aparece en el marco de los sistemas distribuidos. Los sistemas multiusuario clásicos desde siempre han provisto compartición de recursos entre sus usuarios. Sin embargo, los recursos de una computadora multiusuario se comparten de manera natural entre todos sus usuarios. Por el contrario, los usuarios de estaciones de trabajo monousuario o computadoras personales dentro de un sistema distribuido no obtienen automáticamente los beneficios de la compartición de recursos.
 - Direccion fisica: es una posición real en la memoria principal.
 - Direccion logica: es una referencia a una posición de memoria independiente de la asignación actual de datos a la memoria
 - Direccion relativa: cual la dirección de memoria se expresa como una posición relativa a algún punto conocido, normalmente el principio del programa.
 - Editor de enlaces: Es el que establece la combinación de programas mencionada y también crea una imagen de carga a memoria, que resguarda en el almacenamiento secundario (disco), para usos futuros.
Resulta ser muy ventajoso en ambientes de producción, pues la carga inmediata de la imagen de memoria anteriormente producida, impide un nuevo proceso de combinación de programas previo a cada ejecución. 
- Editor dinamico: El ligado dinámico ofrece algunas ventajas sobre los otros tipos de ligado. Proporciona la posibilidad de cargar las rutinas sólo cuando y si se necesitan. SI las subrutinas son grandes o tienen muchas referencias externas, se pueden conseguir ahorros considerables de tiempo y espacio de memoria.
- Enlazdo: Un enlace dinámico es aquel en el cual una biblioteca de código es enlazada cuando un determinado programa se ejecuta (en oposición a un enlace estático, que se produce en tiempo de compilación). La ventaja de este tipo de enlace es que el programa es más liviano, y que evita la duplicación de código (por ejemplo, cuando dos programas requieren usar la misma biblioteca, se necesita sólo una copia de ésta).
- Fragmentacion externa: Este tipo de fragmentación aparece como consecuencia de las distintas políticas de
Ajuste de bloques que tiene un sistema de ficheros, o al utilizar asignaciones dinámicas de Bloques en el caso de la memoria.
- Fragmentacion interna: La fragmentación interna es la pérdida de espacio en disco debido al hecho de que el
tamaño de un determinado archivo sea inferior al tamaño del cluster, ya que teóricamente el
archivo estaría obligado a ser referenciado como un cluster completo.
- Gestión de la memoria: la administración de memoria representa un vínculo delicado entre el rendimiento (tiempo de acceso) y la cantidad (espacio disponible). Siempre se busca obtener el mayor espacio disponible en la memoria, pero pocas veces existe la predisposición para comprometer el rendimiento. 
La administración de memoria debe realizar diversas funciones, como permitir que la memoria se comparta (en sistemas de multiprocesos), asignar bloques de espacio de memoria a distintas tareas, proteger los espacios de memoria utilizados (por ejemplo, evitar que un usuario modifique una tarea realizada por otro usuario), optimizar la cantidad de memoria disponible (específicamente a través de sistemas de expansión de memoria). 

- Marcas De Sistemas Operativos

 - DOS: El famoso DOS, que quiere decir Disk Operating System (sistema operativo de disco), es más conocido por los nombres de PC-DOS y MS-DOS. MS-DOS fue hecho por la compañía de software Microsoft y es en esencia el mismo SO que el PC-DOS.
La razón de su continua popularidad se debe al aplastante volumen de software disponible y a la base instalada de computadoras con procesador Intel.
Cuando Intel liberó el 80286, DOS se hizo tan popular y firme en el mercado que DOS y las aplicaciones DOS representaron la mayoría del mercado de software para PC. En aquel tiempo, la compatibilidad IBM, fue una necesidad para que los productos tuvieran éxito, y la "compatibilidad IBM" significaba computadoras que corrieran DOS tan bien como las computadoras IBM lo hacían.


- Organización lógica
La mayoría de las computadoras organizan los archivos en jerarquías llamadas carpetas, directorios o catálogos. (El concepto es el mismo independientemente de la terminología usada.) Cada carpeta puede contener un número arbitrario de archivos, y también puede contener otras carpetas. Las otras carpetas pueden contener todavía más archivos y carpetas, y así sucesivamente, construyéndose una estructura en árbol en la que una «carpeta raíz» (el nombre varía de una computadora a otra) puede contener cualquier número de niveles de otras carpetas y archivos. A las carpetas se les puede dar nombre exactamente igual que a los archivos (excepto para la carpeta raíz, que a menudo no tiene nombre). El uso de carpetas hace más fácil organizar los archivos de una manera lógica.
 - La mayor parte de las estructuras de organizaciones alternativas de archivos se encuentran dentro de estas cinco categorías:
Pilas
Es la forma más fácil de organizar un archivo. Los datos se recogen en el orden en que llegan.
Su objetivo es simplemente acumular una masa de datos y guardarla.
Los registros pueden tener campos diferentes o similares en un orden distinto. Cada campo debe ser autodescriptivo, incluyendo tanto un campo de nombre como el valor. La longitud de cada campo debe indicarse implícitamente con delimitadores, explícitamente incluidos como un subcampo más.
El acceso a los registros se hace por búsquedas exhaustiva y son fáciles de actualizar. Si se quiere encontrar un registro que contiene un campo particular y un valor determinado, es necesario examinar cada registro de la pila hasta encontrar el registro deseado. Si se quieren encontrar todos los registros que contienen un campo particular o que tienen un valor determinado para ese campo, debe buscarse el archivo entero.
Se aplica cuando los datos se recogen o almacenan antes de procesarlos o cuando no son fáciles de organizar. Esta clase de archivo aprovecha bien el espacio cuando los datos almacenados varían en tamaño y estructura. Fuera de estos usos limitados, este tipo de archivos no se adapta a la mayoría de las aplicaciones


- Organización física
Los datos son arreglados por su adyacencia física, es decir, de acuerdo con el dispositivo de almacenamiento secundario. Los registros son de tamaño fijo o de tamaño variable y pueden organizarse de varias formas para constituir archivos físicos. 

- Cinta magnética
En este dispositivo el archivo físico está formado por un conjunto de registros físicos, y los bloques están organizados en forma consecutiva, ya que se asigna en igual forma.
Además, tales registros pueden contener etiquetas que permitan un mayor control sobre los datos almacenados, y son las siguientes:
Etiqueta de volumen. - Contiene información que permite identificar la cinta, el nombre del propietario y cualquier información general requerida.
- Etiqueta de archivo. - Se utilizan por pares para indicar el inicio y fin del archivo, contiene información acerca del nombre del archivo, fecha de creación.
Etiqueta de usuario. - Sirven para guardar información adicional de importancia para el usuario; no son procesados por el sistema operativo.
- Discos Magnéticos:
El archivo físico en un disco es una colección de registros físicos de igual tamaño, los cuales pueden estar organizados en forma consecutiva, ligada o con una tabla de mapeo. 

- En la organización contigua, el archivo utiliza registros físicos contiguos, siguiendo la secuencia normal de direcciones.
La organización encadenada consiste un conjunto de bloques, cada uno de los cuales tiene un campo destinado para indicar la dirección del siguiente registro, o sea, para lo que se ha llamado enlace o liga.
Otra forma de organización es la tabla de mapeo que consiste en una tabla de apuntadores a los registros físicos que forman el archivo.

- Pagina 
INFORMÁTICA Cada una de las partes en que se organiza la memoria en un ordenador.
- Paginación 
- La paginación permite que la memoria de un proceso no sea contigua, y que a un proceso se le asigne memoria física donde quiera que ésta esté disponible. • La paginación evita el gran problema de acomodar trozos de memoria de tamaño variable en el almacenamiento auxiliar.
Cuando es necesario intercambiar fragmento de códigos o datos que residen en la memoria principal, hay que encontrarles espacio en el almacenamiento auxiliar. Por sus ventajas la 
paginación es de uso común en muchos SO.
- Particiones:
Un disco duro puede dividirse en varias particiones. Cada partición funciona como si fuera un disco duro independiente. La idea es que si sólo se tiene un disco, y se quieren tener, digamos, dos sistemas operativos en él, se pueda dividir el disco en dos particiones. Cada sistema operativo utilizará su propia partición tal y como se desea, y no tocará la otra. De esta forma los dos sistemas operativos pueden coexistir pacíficamente en el mismo disco duro. Sin particiones se tendría que comprar un disco duro para cada sistema operativo.
 - Los disquetes generalmente no se particionan. No hay ninguna razón técnica para ello, pero dado que son tan pequeños, particionarlos sería útil sólo en extrañas ocasiones. Los CD-ROM tampoco se suelen particionar, ya que es más fácil utilizarlos como un disco grande, y raramente existe la necesidad de tener varios sistemas operativos en uno de ellos.

- Particiones Fijas

El primer intento para posibilitar la multiprogramación fue la creación de particiones fijas o estáticas, en la memoria principal, una partición para cada tarea. El tamaño de la partición se especificaba al encender el sistema, cada partición podía re-configurarse al volver a encender el sistema o reiniciar el sistema.
Este esquema introdujo un factor esencial, la protección del espacio de memoria para la tarea. Una vez asignada una partición a una tarea, no se permitía que ninguna otra tarea entrara en sus fronteras. Este esquema de partición es más flexible que la de usuario único, porque permite que varios programas estén en memoria al mismo tiempo.
- PARTICIONES DINÁMICAS

- Las particiones dinámicas son variables en número y longitud, esto quiere decir que cuando se carga un proceso a memorial principal se le asigna el espacio que necesita en memoria y no más. Esta partición comienza siendo muy buena pero en el trascurso de uso deja un gran número de huecos pequeños en la memoria lo cual se le denomina fragmentación externa. Se debe usar la compactación para evitar esta fragmentación, el sistema operativo desplaza los procesos para que estén contiguos de forma que todos los espacios de memoria libre se agrupen en un bloque, es decir:

 - Protección
 La función principal de un Sistema Operativo (SO) es la de tomar todos los recursos físicos de un sistema de cómputo y brindarlos de manera virtual, esto es logrado por medio de una abstracción del hardware (HW). En la actualidad no es suficiente con permitir el manejo y uso del HW si no se maneja seguridad y protección. 
 Es importante en definir claramente las diferencias entre estos dos conceptos
	- La seguridad: es la ausencia de un riesgo. Aplicando esta definición a al tema correspondiente, se hace referencia al riesgo de accesos no autorizados, de manipulación de información, manipulación de las configuraciones, entre otros
	- La protección: son los diferentes mecanismos utilizados por el SO para cuidar la información, los procesos, los usuarios, etc.

- Reubicación Estática
Implica generalmente que la reubicación es realizada antes o durante la carga del proceso en memoria. Las constantes (valores literales), los desplazamientos relativos al PC, no dependen de esta condición y no necesitan ser ajustados durante la reubicación.

- Reubicación Dinámica
Implica que la correspondencia entre el espacio de direcciones virtuales y el espacio de direcciones físicas se efectúa en tiempo de ejecución. Usualmente con asistencia del hardware. Cuando el proceso en cuestión está siendo ejecutado, todas sus referencias a memoria son reubicadas durante la ejecución antes de acceder realmente a la memoria física.


- Segmentación
Esquema de administración de memoria que soporta la visión del usuario de la memoria.
Un programa es una colección de segmentos. Un segmento es una unidad lógica como, por ejemplo:
- •	Programa principal.
- •	Procedimientos.
- •	Funciones.
- •	Variables locales, variables globales.
- •	Bloques comunes.
- •	Pila.
- •	Tabla de símbolos, arreglos, etc.

- Tabla de paginación
Las tablas de paginación o tablas de páginas son una parte integral del Sistema de Memoria Virtual en sistemas operativos, cuando se utiliza paginación. Son usadas para realizar las traducciones de direcciones de memoria virtual (o lógica) a memoria real (o física) y en general el sistema operativo mantiene una por cada proceso corriendo en el sistema.
En cada entrada de la tabla de paginación (en inglés PTE, Page Table Entry) existe un bit de presencia, que está activado cuando la página se encuentra en memoria principal. Otro bit que puede encontrarse es el de modificado, que advierte que la página ha sido modificada desde que fue traída del disco, y por lo tanto deberá guardarse si es elegida para abandonar la memoria principal; y el bit de accedido, usado en el algoritmo de reemplazo de páginas llamado Menos Usado Recientemente (LRU, least recently used). También podría haber otros bits indicando los permisos que tiene el proceso sobre la página (leer, escribir, ejecutar
______________________________________________________________________________________________________________________________________
 - unidad 4
  - Asignación de fichero
 - Asignación de fichero indexado:
  - También conocido como asignación por "I-Nodes" (nodos indexados), este método lleva el rastro de que bloque pertenece a cada archivo, asignando un I-node con todos los punteros hacia los demás bloques en el orden correspondiente, para cada archivo existe un I-node. El I-node lista los atributos y las direcciones de bloques del archivo asociado, por lo que dado su I-nodo, es posible encontrar todos los bloques de un Archivo. Existe perdida de espacio ya que cada archivo necesitar un I-nodo independiente de cuantos datos contenga el bloque. El rendimiento depende del archivo si se accede de manera secuencial o aleatoria, o si el archivo es muy grande o muy pequeño.

 
