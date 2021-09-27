#ifndef SURV_DATA_H
#define SURV_DATA_H
#include "core.h"
#include "vector.h"
#include "client.h"

#define SURV_MAX_HEALTH 20
#define SURV_MAX_OXYGEN 10
#define SURV_MAX_BREAKPRG 10

extern cs_uint16 SurvData_AssocType;

typedef struct {
	Client *client;
	cs_uint16 inventory[254];
	SVec lastClick;
	Vec lastPos;
	cs_byte health, oxygen, hackScore;
	cs_bool showOxygen, godMode, pvpMode;
	cs_uint16 regenTimer, breakTimer;
	cs_bool breakStarted;
	cs_byte breakProgress;
	BlockID breakBlock;
} SrvData;

void SurvData_Create(Client *client);
void SurvData_Free(Client *client);
SrvData *SurvData_Get(Client *client);
SrvData *SurvData_GetByID(ClientID id);
#endif // SURV_DATA_H
