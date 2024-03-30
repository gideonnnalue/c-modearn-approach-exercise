#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))
/*
a:
strcpy(s, "abcd");
i = 0;
putchar(TOUPPER(s[++i]));

Solution
putchar(TOUPPER(s[++i]));
putchar(('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])))
putchar(('a'<=(s[1])&&(s[2])<='z'?(s[++i])-'a'+'A':(s[3])));
putchar('D');

output: D.
*/

/*
b:
strcpy(s, "0123");
i = 0;
putchar(TOUPPER(s[++i]));

Solution
putchar(TOUPPER(s[++i]));
putchar(('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])))
putchar(('a'<=(s[1])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[2])));
putchar('3');

output: '3'
*/