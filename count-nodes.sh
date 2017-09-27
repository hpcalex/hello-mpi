#!/bin/sh

# Count nodes allocated in slurm-*.out files.

for i in slurm-*.out;do echo $i;echo;sed -n 's/.* running on \(comp.*\)/\1/;Tx;p;:x' $i|sort|uniq -c;done
