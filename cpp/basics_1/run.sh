#bash script to run c, cpp, java and python programs.
#by Aditya Dayal

#!/bin/bash

if [ $# -ne 1 ]; 

    then

       echo

       echo "Write the file name you wanna compile : "

       read FILE

else

    FILE=$1
    
fi

echo

echo "Here's the result!"

echo

if [ "${FILE##*.}" = "cpp" ];

#if [ $FILE = *.cpp ];

then

	echo "-------------------------- processing --------------------------"

	g++ $FILE

	#g++ $FILE -o a.exe

	echo

	./a.out

	#./a.exe

	echo

	echo "-----------------------------!done!-----------------------------"

	echo

	rm a.out

#elif [ $FILE = *.c ];

elif [ "${FILE##*.}" = "c" ];

then

	echo "-------------------------- processing --------------------------"

	g++ $FILE

	echo

	./a.out

	echo

	echo "-----------------------------!done!-----------------------------"

	rm a.out

	echo

elif [ "${FILE##*.}" = "java" ];

#elif [ $FILE = *.java ];

then

	echo "-------------------------- processing --------------------------"

	java $FILE

	echo

	echo "-----------------------------!done!-----------------------------"

	echo

#elif [ $FILE = *.py ];

elif [ "${FILE##*.}" = "py" ];

then

	echo "-------------------------- processing --------------------------"

	python3 $FILE

	echo

	echo "-----------------------------!done!-----------------------------"

	echo

else

	echo "There is a problem!"

	echo

fi