#!/bin/bash

# help test

#The first script to know if the directory exists or not
if [ -d /path_of_directory];
then
    echo "Yes it exists"
else
    echo "The directory does not exist"

#This second  script to know if the file exists or not

if [ -e /path_of_file];
then
    echo "Yes it exists"
else
    echo "The directory does not exist"
