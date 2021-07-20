gcc -Wl,-z,norelro -z execstack -no-pie -fno-stack-protector -o ../bof bof.c
gcc -Wl,-z,norelro -z execstack -no-pie -o ../bof2 bof.c

