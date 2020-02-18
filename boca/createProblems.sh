#!/bin/bash

folders=$(find . -type d -maxdepth 1 | cut -d '/' -f2 | grep -v "\.")

for folder in $folders; do
   cd $folder
   zip -r ../${folder}.zip *
   cd ..
done
