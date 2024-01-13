<!DOCTYPE html>
<html>


<body>

<h1>Simple Shell</h1>
<a href="https://imgur.com/9ZJamsi"><img src="https://i.imgur.com/9ZJamsi.png" title="Banner project " /></a>

<p>This project involves creating a simple UNIX command interpreter, commonly known as a shell. The shell is designed to read commands entered by the user, execute them, and display the results. The goal is to replicate some of the basic functionalities of the traditional shell (/bin/sh) and gain insights into the inner workings of a command-line interpreter.</p>

<h2>Flowchart Simple Shell</h2>
<a href="https://imgur.com/a/7TveCcv"><img src="https://i.imgur.com/y9LsXxP.jpg" title="Flowchart readme" /></a>

<h2>Table of Contents</h2>

<ol>
    <li><a href="#description">Description</a></li>
    <li><a href="#learning-objectives">Learning Objectives</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#compilation">Compilation</a></li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#functionalities">Functionalities</a></li>
    <li><a href="#tasks">Tasks</a></li>
    <li><a href="#authors">Authors</a></li>
</ol>

<hr>

<h2 id="description">Description</h2>

<p>This simple shell project aims to provide a fundamental understanding of how shells operate and the key concepts involved in their implementation. It covers topics such as process creation, execution, environment manipulation, and basic command parsing.</p>

<h2 id="learning-objectives">Learning Objectives</h2>

<p>By working on this project, you will develop a deep understanding of:</p>

<ul>
    <li>The design and implementation of the original Unix operating system.</li>
    <li>The role of Ken Thompson in the development of Unix and the creation of the B programming language.</li>
    <li>How shells work, including the basics of process management (PID, PPID).</li>
    <li>Manipulating the environment of the current process.</li>
    <li>The difference between functions and system calls.</li>
    <li>Creating processes and using system calls.</li>
    <li>Utilizing the PATH variable to locate executable programs.</li>
    <li>Executing other programs with the execve system call.</li>
    <li>Handling the suspension of process execution until a child process terminates.</li>
    <li>Dealing with EOF (end-of-file) conditions.</li>
</ul>

<h2 id="requirements">Requirements</h2>

<ul>
    <li>Allowed editors: vi, vim, emacs.</li>
    <li>Compilation on Ubuntu 20.04 LTS using gcc with the options: -Wall -Werror -Wextra -pedantic -std=gnu89.</li>
    <li>No memory leaks are allowed in the shell.</li>
    <li>All files should end with a new line.</li>
    <li>The code must adhere to the Betty style, checked using betty-style.pl and betty-doc.pl.</li>
    <li>No more than 5 functions per file.</li>
    <li>Include guards are required for all header files.</li>
    <li>Use system calls only when necessary.</li>
</ul>

<h2 id="compilation">Compilation</h2>

<p>Compile the shell using the following command:</p>

<pre>
<code>gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shell</code>
</pre>

<h2 id="usage">Usage</h2>

<p>Run the shell in interactive mode:</p>

<pre>
<code>$ ./simple_shell</code>
</pre>

<p>Run the shell in non-interactive mode:</p>

<pre>
<code>$ echo "command" | ./simple_shell</code>
</pre>

<h2 id="functionalities">Functionalities</h2>

<ol>
    <li>Display a prompt and wait for the user to enter a command.</li>
    <li>The prompt is redisplayed after each command execution.</li>
    <li>Commands are simple, single-word lines with no advanced features.</li>
    <li>Error handling for command not found and other relevant errors.</li>
    <li>Handle the "end of file" condition (Ctrl+D).</li>
</ol>

<h2 id="tasks">Tasks</h2>

<ol>
    <li><a href="#">README, man, AUTHORS</a></li>
        <ul>
            <li>Write a README.</li>
            <li>Create a man page for the shell.</li>
            <li>Include an AUTHORS file listing contributors.</li>
        </ul>
    <li><a href="#">Betty would be proud</a></li>
        <ul>
            <li>Write code that adheres to the Betty style.</li>
        </ul>
    <li><a href="#">Simple shell 0.1</a></li>
        <ul>
            <li>Write a basic UNIX command line interpreter.</li>
        </ul>
    <li><a href="#">Simple shell 0.2</a></li>
        <ul>
            <li>Handle command lines with arguments.</li>
        </ul>
    <li><a href="#">Simple shell 0.3</a></li>
        <ul>
            <li>Handle the PATH variable; avoid calling fork if the command doesn't exist.</li>
        </ul>
    <li><a href="#">Simple shell 0.4</a></li>
        <ul>
            <li>Implement the exit built-in, allowing the shell to exit gracefully.</li>
        </ul>
    <li><a href="#">Simple shell 1.0</a></li>
        <ul>
            <li>Implement the env built-in, printing the current environment.</li>
        </ul>
</ol>

<h2 id="authors">Authors</h2>

<ul>
    <li>Luis Alfonso Diaz Herrera</li>
    <li>Vanessa Requejo Porras</li>
</ul>

</body>

</html>
