#!/bin/bash

# The syntax
#if [comdition];
#then
#	instructions
#fi

#example

# NAME="Yassine"

# if [ "$NAME" = "Yassine" ];   # we nedd to use a space betwen "$NAME" and = to compare not afecting
# then
# 	echo "Welcome $NAME"
# fi

#if [condition];
#then
#	instructions
#else
#	instuctions
#fi

echo "Please enter your First Name"
read NAME

if [ "$NAME" = "Jhon" ]
then
	read -p "Enter your Last Name " LNAME

else if [ "$NAME" = "Yassine" ]
then
	read -p "Enter your Last Name " LNAME
else
	echo "Sorry your name is not listed in our database"
fi
fi