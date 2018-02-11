#!/bin/sh
#SBATCH --job-name=hello-mpi
#SBATCH --ntasks=24
#SBATCH --cpus-per-task=1
#SBATCH --time=00:15:00

mpirun -np "$SLURM_NTASKS" ./hello-mpi
