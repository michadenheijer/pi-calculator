echo "Building Pi-Calculator for C"
gcc -o c/pi c/pi.c -lm
echo "Build finished"
echo "Running Pi-Calculator for C"
./c/pi
