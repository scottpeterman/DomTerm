#ifndef COMMAND_SOCKET_H
#define COMMAND_SOCKET_H

// Set PASS_STDFILES_UNIX_SOCKET if passing file descriptors
// over socket from client command to server, using sendmsg/recvmsg.
// I can't get this to work on MacOS.
// Alternatively, multiplex stdout, stderr, and exit code on connection socket.
// (PASS_STDFILES_UNIX_SOCKET seems in principle preferable, but isn't
// available on all platforms, and until there is a clear advantage,
// it seems better to disable for platform consistency and simpler testing.)
#define PREFER_PASS_STDFILES_UNIX_SOCKET 0
#define USING_NAMED_PIPES_FOR_CLIENT 0 /*for now*/
#if defined(__APPLE__) || USING_NAMED_PIPES_FOR_CLIENT || !PREFER_PASS_STDFILES_UNIX_SOCKET
#define PASS_STDFILES_UNIX_SOCKET 0
// Multiplex stdout, stderr, and exit code on connection socket.
// Next byte is exit code.
#define PASS_STDFILES_EXIT_CODE '\001'
// Send following bytes to stdout.
#define PASS_STDFILES_SWITCH_TO_STDOUT '\002'
// Send following bytes to stderr.
#define PASS_STDFILES_SWITCH_TO_STDERR '\003'
//#define PASS_STDFILES_SWITCH_TO_STDERR_STRING "\003"
#else
#define PASS_STDFILES_UNIX_SOCKET 1
#endif
struct cmd_socket_client {
    int socket;
    int exit_code;
    size_t rsize;
    unsigned char *rbuffer;
};

extern int client_connect (char *socket_path);
extern int client_send_command(int socket, int argc, char *const*argv,
                               char *const *env);
extern int create_command_socket(const char *);
#endif
