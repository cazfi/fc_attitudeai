/*gen_headers*/
#include "freeciv_config.h"

/*utility*/
#include "fcintl.h"
#include "fc_types.h"

#include "requirements.h"

/*convert a string to all uppercase letters*/
const char *strtoupper(const char *src);
/* Calculate a halflife as v' = floor(v*pow(0.5, (t/h))) */
int calc_halflife(int value, int halflife, int turns);
/*compare 2 universals by universal_number*/
int universalcmp(const struct universal *u1, const struct universal *u2);
