#!/bin/bash
for i in ./*/; 
do
  (cd "$i" && make);
done