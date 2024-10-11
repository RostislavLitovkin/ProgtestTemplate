#!/bin/bash

PROG=./a.out

for IN_FILE in tests/*_in.txt ; do
  echo -n $IN_FILE
  REF_FILE=`echo -n $IN_FILE | sed -e 's/_in\(\..*\)$/_out\1/' #'s/$\(.*\)_in/\1_out/'`
  echo $REF_FILE
  $PROG < $IN_FILE > out.txt
  if ! diff $REF_FILE out.txt ; then
    echo "Failed: $IN_FILE";
    exit
  else
    echo "Ok: $IN_FILE";
  fi
done
