static const char norm_fg[] = "#526971";
static const char norm_bg[] = "#040506";
static const char norm_border[] = "#040506";

static const char sel_fg[] = "#040506";
static const char sel_bg[] = "#526971";
static const char sel_border[] = "#424344";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
