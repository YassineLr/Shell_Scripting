#!/bin/bash

#Syntax of functions

#function_name

# function function_name(){
#     #code
# }

# function1(){
#     #code
# }

function test_sudoers(){
    if [ -e /etc/sudoers ];
    then
        echo "Yes it exists"
    else
        echo "it doesn't exists"
    fi
}

function test_passwords(){
    if [ -e /etc/passwd ];
    then
        echo "Yes it exists"
    else
        echo "it doesn't exists"
    fi
}


test_sudoers
test_passwords