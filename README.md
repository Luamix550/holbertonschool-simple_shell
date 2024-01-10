<h1>Simple Shell</h1>

<p>Este es un simple shell de línea de comandos desarrollado en C. Permite a los usuarios ejecutar comandos
    básicos y interactuar con el sistema operativo.</p>

<h2>Características</h2>

<ul>
    <li>Ejecución de comandos simples.</li>
    <li>Tokenización de comandos para separar palabras.</li>
    <li>Creación de procesos para ejecutar comandos externos.</li>
    <li>Interfaz de línea de comandos básica.</li>
</ul>

<h2>Uso</h2>

<ol>
    <li><strong>Compilación:</strong></li>
    <pre><code>gcc main.c tokenization.c process.c -o simple_shell</code></pre>

    <li><strong>Ejecución:</strong></li>
    <pre><code>./simple_shell</code></pre>

    <li><strong>Comandos de ejemplo:</strong></li>
    <ul>
        <li><code>ls</code></li>
        <li><code>echo Hola Mundo</code></li>
        <li><code>exit</code></li>
    </ul>
</ol>

<h2>Estructura del Código</h2>

<ul>
    <li><code>main.c:</code> Contiene el código principal del simple shell.</li>
    <li><code>tokenization.c:</code> Funciones para la tokenización de comandos.</li>
    <li><code>process.c:</code> Funciones para la creación y ejecución de procesos.</li>
</ul>

<h2>Contribuir</h2>

<p>Si deseas contribuir a este proyecto, sigue estos pasos:</p>

<ol>
    <li>Haz un fork del repositorio.</li>
    <li>Crea una nueva rama para tus cambios: <code>git checkout -b feature/nueva-caracteristica</code>.</li>
    <li>Realiza tus cambios y haz commit: <code>git commit -m "Añadir nueva característica"</code>.</li>
    <li>Haz push de tus cambios: <code>git push origin feature/nueva-caracteristica</code>.</li>
    <li>Crea un pull request en GitHub.</li>
</ol>

<h2>Problemas conocidos</h2>

<ul>
    <li>No se manejan redirecciones ni tuberías en este momento.</li>
    <li>Puede haber problemas con ciertos comandos avanzados.</li>
</ul>

<h2>Contacto</h2>

<p>Para cualquier problema o sugerencia, por favor contacta a [Tu Nombre] a través de [tu.email@example.com].</p>

<p>¡Gracias por usar Simple Shell!</p>
