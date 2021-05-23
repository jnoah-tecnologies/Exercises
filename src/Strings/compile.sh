gcc -o sample1 sample1.c
gcc -fexec-charset=SHIFT_JIS -o sample2_sjis sample2.c
gcc -fexec-charset=EUC-JP -o sample2_eucjp sample2.c
gcc -fexec-charset=utf8 -o sample2_utf8 sample2.c
gcc -fexec-charset=SHIFT_JIS -o sample3_sjis sample3.c
gcc -fexec-charset=EUC-JP -o sample3_eucjp sample3.c
gcc -fexec-charset=utf8 -o sample3_utf8 sample3.c
