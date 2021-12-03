
repair:
	export JAVA_HOME=/usr/lib/jvm/java-8-openjdk-amd64
	export PATH=$PATH:$JAVA_HOME/bin

build-header-file:
	
	javah -jni -classpath . Calculator
	
build-class-java:
	javac Calculator.java

build-so-file:
	sudo gcc -shared -fPIC -I $$JAVA_HOME/include -I $$JAVA_HOME/include/linux calculator.c -o libcalculator.so
	
run-program:
	java -Djava.library.path=. Calculator
	

