#ifndef SNAKE_HELPERS
#define SNAKE_HELPERS

#define debug(x...) fprintf(stderr,x)

#define fatal(x...) { \
fprintf(stderr, "[-] ERROR: " x); \
exit(1); \
}\

#define output(x...) { \
fprintf(stderr, "[%s] %d %s\t", process_username, process_pid, process_name);\
fprintf(stderr, x);\
}\

#endif
