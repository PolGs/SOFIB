char buffer[80];

sprintf(buffer, "Soy el proceso: %d\n", getpid());
write(1,buffer,strlen(buffer));

execlp("ls", "ls", "-l", (char *) 0);
execlp("./prog", "prog", (char *) 0);

 waitpid(0,NULL,NULL);

pid = waitpid(-1, &exit_code, 0);
