#!/bin/bash

if [ $1 ]
then
	find $1* -maxdepth 0 -printf "%u %f\n"
fi
