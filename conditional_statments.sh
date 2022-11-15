#!/bin/bash

# The syntax
#if [comdition];
#then
#	instructions
#fi

#example

NAME="Yassine"

if [ "$NAME" = "Yassine" ];   # we nedd to use a space betwen "$NAME" and = to compare not afecting
then
	echo "Welcome $NAME"
fi

#if [condition];
#then
#	instructions
#else
#	instuctions
#fi

echo "Please enter you username"
read NAME

