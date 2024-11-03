#!/bin/bash

PROG=./a.out
RED='\033[0;31m'
GREEN='\033[0;32m'
NO_COLOR='\033[0m'

for IN_FILE in tests/*_in.txt ; do
  echo -n $IN_FILE
  REF_FILE=`echo -n $IN_FILE | sed -e 's/_in\(\..*\)$/_out\1/' #'s/$\(.*\)_in/\1_out/'`
  echo $REF_FILE
  $PROG < $IN_FILE > out.txt
  if ! diff $REF_FILE out.txt ; then
    echo -e "${RED}Failed:${NO_COLOR} $IN_FILE";
  else
    echo -e "${GREEN}Ok:${NO_COLOR} $IN_FILE";
  fi
done
