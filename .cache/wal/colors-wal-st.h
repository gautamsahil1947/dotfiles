const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#040506", /* black   */
  [1] = "#3E5861", /* red     */
  [2] = "#455258", /* green   */
  [3] = "#475C63", /* yellow  */
  [4] = "#526971", /* blue    */
  [5] = "#696A6D", /* magenta */
  [6] = "#637B83", /* cyan    */
  [7] = "#c0c0c0", /* white   */

  /* 8 bright colors */
  [8]  = "#424344",  /* black   */
  [9]  = "#3E5861",  /* red     */
  [10] = "#455258", /* green   */
  [11] = "#475C63", /* yellow  */
  [12] = "#526971", /* blue    */
  [13] = "#696A6D", /* magenta */
  [14] = "#637B83", /* cyan    */
  [15] = "#c0c0c0", /* white   */

  /* special colors */
  [256] = "#040506", /* background */
  [257] = "#c0c0c0", /* foreground */
  [258] = "#c0c0c0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
