#include "license_pbs.h" /* See here for the software license */
#include <stdlib.h>
#include <stdio.h> /* fprintf */

#include "libpbs.h" /* connect_handle */
#include "pbs_ifl.h" /* PBS_MAXUSER */
#include "attribute.h" /* attrl */

struct connect_handle connection[10];
char pbs_current_user[PBS_MAXUSER];
const char *dis_emsg[10];


struct tcp_chan *DIS_tcp_setup(int fd)
  {
  fprintf(stderr, "The call to DIS_tcp_setup needs to be mocked!!\n");
  exit(1);
  }

int DIS_tcp_wflush(int fd)
  {
  fprintf(stderr, "The call to DIS_tcp_wflush needs to be mocked!!\n");
  exit(1);
  }

int encode_DIS_ReqHdr(struct tcp_chan *chan, int reqt, char *user)
  {
  fprintf(stderr, "The call to encode_DIS_ReqHdr needs to be mocked!!\n");
  exit(1);
  }

int encode_DIS_ReqExtend(struct tcp_chan *chan, char *extend)
  {
  fprintf(stderr, "The call to encode_DIS_ReqExtend needs to be mocked!!\n");
  exit(1);
  }

int encode_DIS_Status(struct tcp_chan *chan, char *objid, struct attrl *pattrl)
  {
  fprintf(stderr, "The call to encode_DIS_Status needs to be mocked!!\n");
  exit(1);
  }

void DIS_tcp_cleanup(struct tcp_chan *chan)
  {
  }
