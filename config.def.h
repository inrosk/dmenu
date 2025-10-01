/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                        /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy  = 1;                        /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int centered = 0;                      /* -c option; centers dmenu on screen */
static int min_width = 948;                   /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"SFMono Nerd Font:size=8",
	"monospace:size=8"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                           fg         bg     */
	[SchemeNorm] =          { "#ebdbb2", "#1d2021" },
	[SchemeSel] =           { "#fbf1c7", "#32302f" },
	[SchemeSelHighlight] =  { "#fabd2f", "#32302f" },
	[SchemeNormHighlight] = { "#fabd2f", "#1d2021" },
	[SchemeOut] =           { "#0d1011", "#83a598" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
