# "Hello, MPI": first MPI program in C

At the [Bibliotheca Alexandrina](https://www.bibalex.org), we have been
using this very basic MPI code example to introduce HPC users to the
[Message Passing
Interface](https://en.wikipedia.org/wiki/Message_Passing_Interface).

To compile for OpenMPI:

```
module load OpenMPI
make -f Makefile.openmpi
```

To compile for Intel MPI:

```
module load intel
export INTEL_LICENSE_FILE=28519@mgmt02
make -f Makefile.intel
```

Above, `28519` is the Intel license server port number, and `mgmt02` is
the host, which may vary.

If attempting to load the `intel` module after having already loaded the
`OpenMPI` module (or the other way around), there wil be a notice about
module reloading with a version change.  To avoid this, do a module
purge before loading the alternative module:

```
module purge
```

If attempting to compile while the `hello-mpi` binary file already
exists, clean it up first:

```
rm hello-mpi
```

To run via Slurm:

```
sbatch hello-mpi.sh
```
