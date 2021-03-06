#ifdef HAVE_CONFIG_H
#include <fc_config.h>
#endif

#ifndef FCAI__ATTITUDEAI_H
#define FCAI__ATTITUDEAI_H

/* util */
#include "fc_types.h"

const char *fc_ai_attitude_capstr(void);
bool fc_ai_attitude_setup(struct ai_type *ai);
bool leader_has_attitude(struct nation_leader pleader);
bool threaded_ai_enabled(void);

void att_player_alloc(struct player *pplayer);
void att_player_free(struct player *pplayer);
#endif /* FCAI__ATTITUDEAI_H */
