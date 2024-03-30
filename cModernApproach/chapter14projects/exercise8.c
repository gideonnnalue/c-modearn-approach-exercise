#define STRINGIZE(x) #x
#define EXPAND_MACRO(x) STRINGIZE(x)
#define LINE_FILE ("Line " EXPAND_MACRO(__LINE__) " of file " __FILE__)

const char *str = LINE_FILE;

// expands to
const char *str = "Line 10 of file foo.c";