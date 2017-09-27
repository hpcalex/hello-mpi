#include <stdio.h>
#include <string.h>

#include <mpi.h>

int
main (int argc, char **argv)
{
  char pname[MPI_MAX_PROCESSOR_NAME];
  int pnamelen;

  int size, rank;

  /* Initialize MPI */
  MPI_Init (&argc, &argv);

  /* How many processes? */
  MPI_Comm_size (MPI_COMM_WORLD, &size);

  /* What's my rank? */
  MPI_Comm_rank (MPI_COMM_WORLD, &rank);

  /* What's my name? */
  MPI_Get_processor_name (pname, &pnamelen);

  printf ("Rank %d of %d running on %s\n", rank, size, pname);

  MPI_Finalize ();
  return 0;
}
