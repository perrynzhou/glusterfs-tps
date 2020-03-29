/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CHANGELOG_XDR_H_RPCGEN
#define _CHANGELOG_XDR_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#include <glusterfs/compat.h>

struct changelog_probe_req {
	u_int filter;
	char sock[UNIX_PATH_MAX];
};
typedef struct changelog_probe_req changelog_probe_req;

struct changelog_probe_rsp {
	int op_ret;
};
typedef struct changelog_probe_rsp changelog_probe_rsp;

struct changelog_event_req {
	u_quad_t seq;
	u_quad_t tv_sec;
	u_quad_t tv_usec;
};
typedef struct changelog_event_req changelog_event_req;

struct changelog_event_rsp {
	int op_ret;
	u_quad_t seq;
};
typedef struct changelog_event_rsp changelog_event_rsp;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_changelog_probe_req (XDR *, changelog_probe_req*);
extern  bool_t xdr_changelog_probe_rsp (XDR *, changelog_probe_rsp*);
extern  bool_t xdr_changelog_event_req (XDR *, changelog_event_req*);
extern  bool_t xdr_changelog_event_rsp (XDR *, changelog_event_rsp*);

#else /* K&R C */
extern bool_t xdr_changelog_probe_req ();
extern bool_t xdr_changelog_probe_rsp ();
extern bool_t xdr_changelog_event_req ();
extern bool_t xdr_changelog_event_rsp ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CHANGELOG_XDR_H_RPCGEN */
