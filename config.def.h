/* user and group to drop privileges to */
static const char *user  = "dms";
static const char *group = "dms";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#ffb340",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
