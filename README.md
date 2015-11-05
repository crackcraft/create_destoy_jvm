Debian wheezy / OpenJDK 6
```
ii  openjdk-6-jdk:i386              6b36-1.13.8-1~deb7u1   i386  OpenJDK Development Kit (JDK)
ii  openjdk-6-jre:i386              6b36-1.13.8-1~deb7u1   i386  OpenJDK Java runtime, using Hotspot JIT
ii  openjdk-6-jre-headless:i386     6b36-1.13.8-1~deb7u1   i386  OpenJDK Java runtime, using Hotspot JIT (headless)
ii  openjdk-6-jre-lib               6b36-1.13.8-1~deb7u1   all   OpenJDK Java runtime (architecture independent libraries)


$ gcc -g -O2   -I/usr/lib/jvm/java-6-openjdk-i386/include/   -I/usr/lib/jvm/java-6-openjdk-i386/include/linux   -L/usr/lib/jvm/java-6-openjdk-i386/jre/lib/i386/server   -ljvm  -o test.bin test111.c
$ LD_LIBRARY_PATH=/usr/lib/jvm/java-6-openjdk-i386/jre/lib/i386/server ./test.bin
jvm is created: 0x8d90928
jvm is destroyed (0)
fail to create jvm: No such file or directory
```

CentOS 7  / OpenJDK 7
```
java-1.8.0-openjdk.x86_64                 1:1.8.0.65-2.b17.el7_1        @updates
java-1.8.0-openjdk-devel.x86_64           1:1.8.0.65-2.b17.el7_1        @updates
java-1.8.0-openjdk-headless.x86_64        1:1.8.0.65-2.b17.el7_1        @updates

$ LD_LIBRARY_PATH=/usr/lib/jvm/jre/lib/amd64/server ./test2
jvm is created: 0x1dd39e0
jvm is destroyed (0)
fail to create jvm: No such file or directory
```


CentOS 7 / Oracle JDK 8
```
jdk1.8.0_65.x86_64                  2000:1.8.0_65-fcs                  installed

$ LD_LIBRARY_PATH=/usr/java/jdk1.8.0_65/jre/lib/amd64/server ./test2
jvm is created: 0xc539f8
jvm is destroyed (0)
fail to create jvm: No such file or directory
```
