if [ -e $1.cc ]; then
  redo-ifchange $1.cc
  gcc -o $3 $1.cc -lstdc++
fi
