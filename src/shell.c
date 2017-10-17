#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

/*Short main : loads config file (find a default location, fe ~) then launches main routine:
   prints prompt([user@machine curr dir]$), waits for input, tokenizes it, checks if first word is a
   known command (a known command is a C program located somewhere which performs a specific action).
   If it's the case, fork() and the child gives the tokenized string to the program.
   */

int load_config(){
    //TODO alias, autocompletion, customized prompt
    errno = ECANCELED;
    return 0;
}

//TODO : tokenisation propre
void routine(){
    int ID_SIZE = 22; //TODO a ajouter dans une struct avec les declarations suivantes
    int MAX_ARGS = 128;
    char *id= "[ekrips@ekrips-laptop ";
    char *prompt = malloc(sizeof(char*) * ID_SIZE);
    
    char *input = NULL, *token = NULL;
    char **tok_input = malloc (sizeof(char*) * MAX_ARGS);
    size_t len = 0;
    ssize_t nread;
    strcpy(prompt, id);
    strcat(prompt, "DUMMY"); //TODO remplacer dummy par le rep courant
    printf("%s] $ ", prompt);
    nread = getline(&input, &len, stdin);
    if (nread > 0){
        int i = 0;
        while ((token = strtok(input, " ")) != NULL){
            strcpy(tok_input[i], token);
        }
    }
}

int main(){
    int i;
    if ((i = load_config()) != 0){
        perror("config file load");
        exit(EXIT_FAILURE);
    }
    routine();
    return EXIT_SUCCESS;
}
