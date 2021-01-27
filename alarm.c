struct sigaction sa;
sigset_t mask;


sigemptyset(&mask);
sigaddset(&mask, SIGALRM);
sigprocmask(SIG_BLOCK,&mask, NULL);
sa.sa_handler = &funcion_alarma;
sa.sa_flags = SA_RESTART; 
sigfillset(&sa.sa_mask);

sigfillset(&mask);
sigdelset(&mask, SIGALRM);
sigdelset(&mask, SIGINT);
sigsuspend(&mask);
alarm(10);
