/*
 * shell.h
 *
 *  Created on: 2013-5-17
 *      Author: alzhao
 */

#ifndef SHELL_H_
#define SHELL_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Get the output of shell command
 * Return 0 sucess, -1 failed, can be multiline
 */
extern int getShellCommandReturn(const char *command, char * value);
extern char * getShellCommandReturnDynamic(const char *command);
extern int fork_exec(const char * command);
extern int fork_exec_with_lock(char * command, const char* lock_name, int delay);

/* Only get the first line */
extern int getUciReturn(const char *command, char *value);
extern int getShellCommandReturnLine(const char *command, char *value);

extern void sha256(char * string, char* hash_hex);
extern int get_mac_hex(unsigned char* mac_hex);

extern int execCommand(const char *command);

#ifdef __cplusplus
}
#endif

#endif /* SHELL_H_ */
