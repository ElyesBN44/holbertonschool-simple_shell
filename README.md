<h1>Simple Shell Project 🖥️</h1>
<img src="https://cdn.static-media.blent.ai/photos/blog/photo-1629654297299-c8506221ca97.jpg" alt="Description Image" style="max-width: 100%; height: auto;">
<h2>Description 📝</h2>
<p>The Simple Shell Project is a foundational implementation of a UNIX command line interpreter. It is designed to execute commands entered by the user, interacting with the operating system to perform tasks. While limited in functionality compared to robust shells, this project focuses on core concepts such as command execution and handling environment variables. Its primary purpose is educational, providing insights into how shells work at a fundamental level.</p>
<h2>Features 🚀</h2>
<p></p>
<h2>How to Run 👨🏻‍💻</h2>
<p>To compile and run the Simple Shell, you can follow these steps:</p>
<ol>
<li>Open your terminal.</li>
<li>Access the directory that contains the project files.</li>
<li>Compile the source files using the following command:</li>
</ol>
<pre><code>gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh</code></pre>
<ol start="4">
<li>Run the compiled executable:</li>
</ol>
<pre><code>./hsh</code></pre>
<h2>Allowed functions ⚙️</h2>
<h3>List of allowed functions and system calls</h3>
<ul>
    <li>All functions from <code>string.h</code></li>
    <li><code>access</code> (man 2 access)</li>
    <li><code>chdir</code> (man 2 chdir)</li>
    <li><code>close</code> (man 2 close)</li>
    <li><code>closedir</code> (man 3 closedir)</li>
    <li><code>execve</code> (man 2 execve)</li>
    <li><code>exit</code> (man 3 exit)</li>
    <li><code>_exit</code> (man 2 _exit)</li>
    <li><code>fflush</code> (man 3 fflush)</li>
    <li><code>fork</code> (man 2 fork)</li>
    <li><code>free</code> (man 3 free)</li>
    <li><code>getcwd</code> (man 3 getcwd)</li>
    <li><code>getline</code> (man 3 getline)</li>
    <li><code>getpid</code> (man 2 getpid)</li>
    <li><code>isatty</code> (man 3 isatty)</li>
    <li><code>kill</code> (man 2 kill)</li>
    <li><code>malloc</code> (man 3 malloc)</li>
    <li><code>open</code> (man 2 open)</li>
    <li><code>opendir</code> (man 3 opendir)</li>
    <li><code>perror</code> (man 3 perror)</li>
    <li><code>printf</code> (man 3 printf)</li>
    <li><code>fprintf</code> (man 3 fprintf)</li>
    <li><code>vfprintf</code> (man 3 vfprintf)</li>
    <code>sprintf</code> (man 3 sprintf)</li>
    <li><code>putchar</code> (man 3 putchar)</li>
    <li><code>read</code> (man 2 read)</li>
    <li><code>readdir</code> (man 3 readdir)</li>
    <li><code>signal</code> (man 2 signal)</li>
    <li><code>stat (__xstat)</code> (man 2 stat)</li>
    <li><code>lstat (__lxstat)</code> (man 2 lstat)</li>
    <li><code>fstat (__fxstat)</code> (man 2 fstat)</li>
    <li><code>strtok</code> (man 3 strtok)</li>
    <li><code>wait</code> (man 2 wait)</li>
    <li><code>waitpid</code> (man 2 waitpid)</li>
    <li><code>wait3</code> (man 2 wait3)</li>
    <li><code>wait4</code> (man 2 wait4)</li>
    <li><code>write</code> (man 2 write)</li>
</ul>