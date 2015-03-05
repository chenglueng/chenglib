#ifndef _CHENG_PING_H_
#define _CHENG_PING_H_
struct ping_report
{
	int tries;
	int success;
	int failed;
	int lastFailReason;
};
// you need to have already had a valid ptr to a report
// whether obj is in stack or heap doesn't matter
int init_ping_report(struct ping_report *rpt);
int generate_ping_report(struct ping_report *rpt, int tries, int success);
ping_main(char *ip, int intv, int count);
#endif
