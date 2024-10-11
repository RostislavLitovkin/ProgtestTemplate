# Progtest template

A template for quick finishing of progtests.

# Structure

All helper methods must be written in a single file, because this file is being submitted to progtest.

Yes, it looks ugly, but it is what it is.

# Useful commands

## Compile the code

```bash
g++ -Wall -pedantic main.c
```

## Run shell script e2e tests

```bash
./test.sh
```

## Run both

```bash
g++ -Wall -pedantic main.c ; ./test.sh
```