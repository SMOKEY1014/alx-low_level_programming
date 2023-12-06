  if (strcmp(args[0], "cd") == 0) {
            chdir(args[1]);
            return;
            } else if (strcmp(args[0], "exit") == 0) {
                exit(EXIT_SUCCESS);
                } else if (strcmp(args[0], "ls") == 0) {
                    system("/bin/ls");
                    return;
                    } else if (strcmp(args[0], "pwd") == 0) {
                        system("/bin/pwd");
                        return;
                        } else if (strcmp(args[0], "cat") == 0) {
                            system("/usr/bin/cat");
                            return;
                            } else if (strcmp(args[0], "echo") == 0) {
                                system("/bin/echo");
                                return;
                                } else if (strcmp(args[0], "grep") == 0) {
                                    system("/bin/grep");
                                    return;
                                    } else if (strcmp(args[0], "kill") == 0) {
                                        system("/bin/kill");
                                        return;
                                        } else if (strcmp(args[0], "mkdir") == 0) {
                                            system("/bin/mkdir");
                                            return;
                                            } else if (strcmp(args[0], "rm") == 0) {
                                                system("/bin/rm");
                                                return;
                                                } else if (strcmp(args[0], "touch") == 0) {
                                                    system("/bin/touch");
                                                    return;
                                                    } else if (strcmp(args[0], "wc") == 0) {
                                                        system("/bin/wc");
                                                        return;
                                                        } else if (strcmp(args[0], "whoami") == 0) {
                                                            system("/usr/bin/id -un");
                                                            return;
                                                            } else if (strcmp(args[0], "chmod") == 0) {
                                                                system("/bin/chmod");
                                                                return;
                                                                } else if (strcmp(args[0], "cp") == 0) {
                                                                    system("/bin/cp");
                                                                    return;
                                                                    } else if (strcmp(args[0], "mv") == 0) {
                                                                        system("/bin/mv");
                                                                        return;
                                                                        } else if (strcmp(args[0], "ln") == 0) {
                                                                            system("/bin/ln");
                                                                            return;
                                                                        }
   