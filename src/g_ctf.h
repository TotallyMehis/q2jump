/*
Copyright (C) 1997-2001 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
#pragma once

#define CTF_VSTRING2(x) #x
#define CTF_VSTRING(x) CTF_VSTRING2(x)
#define CTF_STRING_VERSION CTF_VERSION_S

//#define STAT_CTF_TEAM1_PIC			17
#define CONFIG_JUMP_KEY_FORWARD	(CS_AIRACCEL-1)
#define CONFIG_JUMP_KEY_LEFT	(CS_AIRACCEL-2)
//#define CONFIG_JUMP_KEY_FPS	(CS_AIRACCEL-3)
#define CONFIG_JUMP_KEY_RIGHT	(CS_AIRACCEL-4)
#define CONFIG_JUMP_KEY_BACK	(CS_AIRACCEL-5)
#define CONFIG_JUMP_KEY_JUMP	(CS_AIRACCEL-6)
#define CONFIG_JUMP_KEY_CROUCH	(CS_AIRACCEL-7)
#define CONFIG_JUMP_KEY_ATTACK	(CS_AIRACCEL-8)
//

#define STAT_JUMP_0 0
//#define	STAT_HEALTH				1 in use
#define STAT_JUMP_VOTE_TYPE 2
//#define	STAT_AMMO				3 available
#define	STAT_JUMP_NEXT_MAP1	3
#define STAT_JUMP_GLUED 4
//#define	STAT_ARMOR				5 available
#define	STAT_JUMP_NEXT_MAP2 5
//#define	STAT_SELECTED_ICON		6 in use
#define STAT_JUMP_SPEED_MAX 7
#define STAT_JUMP_VOTE_INITIATED 8
#define STAT_JUMP_VOTE_REMAINING 9
#define STAT_JUMP_ADDED_TIME 10
#define STAT_JUMP_VOTE_CAST 11
//#define	STAT_SELECTED_ITEM		12 available
#define	STAT_JUMP_NEXT_MAP3 12
//#define	STAT_LAYOUTS			13 in use
//#define	STAT_FRAGS				14 in use
//#define	STAT_FLASHES			15 in use

#define STAT_JUMP_ANTIGLUE 32 //16
#define STAT_ITEM_TIMER 17
#define STAT_ITEM_TIMER2 19
#define STAT_JUMP_MAPCOUNT 18
#define STAT_JUMP_KEY_LEFT_RIGHT			20
#define STAT_JUMP_KEY_BACK			21
#define STAT_JUMP_KEY_JUMP			22
#define STAT_JUMP_FPS			23
#define STAT_JUMP_KEY_CROUCH			24
#define STAT_JUMP_KEY_ATTACK			16 
#define STAT_JUMP_TEAM 29
#define STAT_JUMP_CPS 26
#define STAT_JUMP_RACE 25

#define STAT_CTF_ID_VIEW			27
#define STAT_TIME_LEFT 28
#define STAT_JUMP_KEY_FORWARD			30
#define STAT_JUMP_REPLAY	31

#define CONFIG_JUMP_TEAM_EASY 1600
#define CONFIG_JUMP_TEAM_HARD 1601
#define CONFIG_JUMP_TEAM_OBSERVER 1602
#define CONFIG_JUMP_RACE_ON 1603
#define CONFIG_JUMP_RACE_OFF 1604
#define CONFIG_CP_ON 1605
#define CONFIG_CP_OFF 1606
#define CONFIG_JUMP_EMPTY 1609


#define CONFIG_JUMP_ANTIGLUE 1610
#define CONFIG_JUMP_ANTIGLUE_OFF 1611
#define CONFIG_JUMP_ADDED_TIME 1612
#define CONFIG_JUMP_ANTIGLUE_DISABLED 1613
//#define CONFIG_JUMP_ANTIGLUE_ENABLED 1614


#define CONFIG_JUMP_VOTE_REMAINING 1620
#define CONFIG_JUMP_VOTE_CAST 1621
#define CONFIG_JUMP_VOTE_TYPE 1622
#define CONFIG_JUMP_VOTE_INITIATED 1623

#define CONFIG_JUMP_MAPCOUNT 1630

#define CONFIG_JUMP_NEXT_MAP1 1640
#define CONFIG_JUMP_NEXT_MAP2 1641
#define CONFIG_JUMP_NEXT_MAP3 1642

#define CONFIG_JUMP_RACE_1 1643
#define CONFIG_JUMP_RACE_2 1644
#define CONFIG_JUMP_RACE_3 1645
#define CONFIG_JUMP_RACE_4 1646
#define CONFIG_JUMP_RACE_5 1647
#define CONFIG_JUMP_RACE_6 1648
#define CONFIG_JUMP_RACE_7 1649
#define CONFIG_JUMP_RACE_8 1650
#define CONFIG_JUMP_RACE_9 1651
#define CONFIG_JUMP_RACE_10 1652
#define CONFIG_JUMP_RACE_11 1653
#define CONFIG_JUMP_RACE_12 1654
#define CONFIG_JUMP_RACE_13 1655
#define CONFIG_JUMP_RACE_14 1656
#define CONFIG_JUMP_RACE_15 1657

#define CONFIG_CTF_MATCH (CS_AIRACCEL-1)
#define CONFIG_CTF_TEAMINFO	(CS_AIRACCEL-2)

typedef enum {
	CTF_NOTEAM,
	CTF_TEAM1,
	CTF_TEAM2
} ctfteam_t;

typedef enum {
	CTF_GRAPPLE_STATE_FLY,
	CTF_GRAPPLE_STATE_PULL,
	CTF_GRAPPLE_STATE_HANG
} ctfgrapplestate_t;

typedef struct ghost_s {
	char netname[16];
	int number;

	// stats
	int deaths;
	int kills;
	int caps;
	int basedef;
	int carrierdef;

	int code; // ghost code
	int team; // team
	int score; // frags at time of disconnect
	edict_t *ent;
} ghost_t;

extern cvar_t *ctf;

#define CTF_TEAM1_SKIN "ctf_r"
#define CTF_TEAM2_SKIN "ctf_b"

#define DF_CTF_FORCEJOIN	131072	
#define DF_ARMOR_PROTECT	262144
#define DF_CTF_NO_TECH      524288

#define CTF_CAPTURE_BONUS		15	// what you get for capture
#define CTF_TEAM_BONUS			10	// what your team gets for capture
#define CTF_RECOVERY_BONUS		1	// what you get for recovery
#define CTF_FLAG_BONUS			0	// what you get for picking up enemy flag
#define CTF_FRAG_CARRIER_BONUS	2	// what you get for fragging enemy flag carrier
#define CTF_FLAG_RETURN_TIME	40	// seconds until auto return

#define CTF_CARRIER_DANGER_PROTECT_BONUS	2	// bonus for fraggin someone who has recently hurt your flag carrier
#define CTF_CARRIER_PROTECT_BONUS			1	// bonus for fraggin someone while either you or your target are near your flag carrier
#define CTF_FLAG_DEFENSE_BONUS				1	// bonus for fraggin someone while either you or your target are near your flag
#define CTF_RETURN_FLAG_ASSIST_BONUS		1	// awarded for returning a flag that causes a capture to happen almost immediately
#define CTF_FRAG_CARRIER_ASSIST_BONUS		2	// award for fragging a flag carrier if a capture happens almost immediately

#define CTF_TARGET_PROTECT_RADIUS			400	// the radius around an object being defended where a target will be worth extra frags
#define CTF_ATTACKER_PROTECT_RADIUS			400	// the radius around an object being defended where an attacker will get extra frags when making kills

#define CTF_CARRIER_DANGER_PROTECT_TIMEOUT	8
#define CTF_FRAG_CARRIER_ASSIST_TIMEOUT		10
#define CTF_RETURN_FLAG_ASSIST_TIMEOUT		10

#define CTF_AUTO_FLAG_RETURN_TIMEOUT		30	// number of seconds before dropped flag auto-returns

#define CTF_TECH_TIMEOUT					60  // seconds before techs spawn again

#define CTF_GRAPPLE_SPEED					650 // speed of grapple in flight
#define CTF_GRAPPLE_PULL_SPEED				650	// speed player is pulled at

void CTFInit(void);
void CTFSpawn(void);
void CTFPrecache(void);

void SP_info_player_team1(edict_t *self);
void SP_info_player_team2(edict_t *self);

char *CTFTeamName(int team);
char *CTFOtherTeamName(int team);
void CTFAssignSkin(edict_t *ent, char *s);
void CTFAssignTeam(gclient_t *who);
edict_t *SelectCTFSpawnPoint (edict_t *ent);
qboolean CTFPickup_Flag(edict_t *ent, edict_t *other);
qboolean CTFDrop_Flag(edict_t *ent, gitem_t *item);
void CTFEffects(edict_t *player);
void CTFCalcScores(void);
void SetCTFStats(edict_t *ent);
void CTFDeadDropFlag(edict_t *self);
void CTFTeam_f (edict_t *ent);
void CTFID_f (edict_t *ent);
void CTFSay_Team(edict_t *who, char *msg);
void CTFFlagSetup (edict_t *ent);
void CTFResetFlag(int ctf_team);
void CTFFragBonuses(edict_t *targ, edict_t *inflictor, edict_t *attacker);
void CTFCheckHurtCarrier(edict_t *targ, edict_t *attacker);

// GRAPPLE
void CTFWeapon_Grapple (edict_t *ent);
void CTFPlayerResetGrapple(edict_t *ent);
void CTFGrapplePull(edict_t *self);
void CTFResetGrapple(edict_t *self);

//TECH
gitem_t *CTFWhat_Tech(edict_t *ent);
qboolean CTFPickup_Tech (edict_t *ent, edict_t *other);
void CTFDrop_Tech(edict_t *ent, gitem_t *item);
void CTFDeadDropTech(edict_t *ent);
void CTFSetupTechSpawn(void);
int CTFApplyResistance(edict_t *ent, int dmg);
int CTFApplyStrength(edict_t *ent, int dmg);
qboolean CTFApplyStrengthSound(edict_t *ent);
qboolean CTFApplyHaste(edict_t *ent);
void CTFApplyHasteSound(edict_t *ent);
void CTFApplyRegeneration(edict_t *ent);
void CTFApplyRegeneration2(edict_t *ent);
qboolean CTFHasRegeneration(edict_t *ent);
void CTFRespawnTech(edict_t *ent);
void CTFResetTech(void);

void CTFOpenJoinMenu(edict_t *ent);
qboolean CTFStartClient(edict_t *ent);
void CTFVoteYes(edict_t *ent);
void CTFVoteNo(edict_t *ent);
void CTFReady(edict_t *ent);
void CTFNotReady(edict_t *ent);
qboolean CTFNextMap(void);
qboolean CTFMatchSetup(void);
qboolean CTFMatchOn(void);
void CTFGhost(edict_t *ent);
void CTFAdmin(edict_t *ent);
qboolean CTFInMatch(void);
void CTFStats(edict_t *ent);
void CTFWarp(edict_t *ent);
void CTFBoot(edict_t *ent);
void CTFPlayerList(edict_t *ent);

qboolean CTFCheckRules(void);

void SP_misc_ctf_banner (edict_t *ent);
void SP_misc_ctf_small_banner (edict_t *ent);

extern char *ctf_statusbar;

void UpdateChaseCam(edict_t *ent);
void ChaseNext(edict_t *ent);
void ChasePrev(edict_t *ent);

void CTFObserver(edict_t *ent);

void SP_trigger_teleport (edict_t *ent);
void SP_info_teleport_destination (edict_t *ent);

void CTFSetPowerUpEffect(edict_t *ent, int def);

typedef enum match_s {
	MATCH_NONE,
	MATCH_SETUP,
	MATCH_PREGAME,
	MATCH_GAME,
	MATCH_POST
} match_t;

typedef enum {
	ELECT_NONE,
	ELECT_MATCH,
	ELECT_ADMIN,
	ELECT_MAP,
	ELECT_KICK,
	ELECT_SILENCE,
	ELECT_ADDTIME,
	ELECT_DUMMY,
	ELECT_RAND,
	ELECT_NOMINATE
} elect_t;

typedef struct ctfgame_s
{
	int team1, team2;
	int total1, total2; // these are only set when going into intermission!
	float last_flag_capture;
	int last_capture_team;

	match_t match;		// match state
	float matchtime;	// time for match start/end (depends on state)
	int lasttime;		// last time update
	qboolean countdown;	// has audio countdown started?

	elect_t election;	// election type
	edict_t *etarget;	// for admin election, who's being elected
	char elevel[32];	// for map election, target level
	int evotes;			// votes so far
	int needvotes;		// votes needed
	float electtime;	// remaining time until election times out
	int electframe;
	char emsg[256];		// election name
	int warnactive; // true if stat string 30 is active
	int	ekicknum;
	edict_t *ekick;
	qboolean fight;
	ghost_t ghosts[MAX_CLIENTS]; // ghost codes
	qboolean require_max;
} ctfgame_t;

extern ctfgame_t ctfgame;
