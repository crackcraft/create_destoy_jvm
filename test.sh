rm test.bin
gcc -g -O2 \
  -I/usr/java/jdk1.8.0_65/include \
  -I/usr/java/jdk1.8.0_65/include/linux \
  -I/usr/lib/jvm/java-1.8.0-openjdk-1.8.0.65-2.b17.el7_1.x86_64/include \
  -I/usr/lib/jvm/java-1.8.0-openjdk-1.8.0.65-2.b17.el7_1.x86_64/include/linux \
  -L/usr/java/jdk1.8.0_65/jre/lib/amd64/server \
  -L/usr/lib/jvm/jre/lib/amd64/server \
  -ljvm  -o test.bin test.c
./test.bin
