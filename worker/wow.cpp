#include "wow.h"
#include "offsets.h"

namespace WoW {
	_ConsolePrintf ConsolePrintf = (_ConsolePrintf) CONSOLEPRINTF_FUN_PTR;
	_ConsoleCommandRegister ConsoleCommandRegister = (_ConsoleCommandRegister) CONSOLECOMMANDREGISTER_FUN_PTR;
	_Spell_C_CastSpell Spell_C_CastSpell = (_Spell_C_CastSpell) SPELL_C_CASTSPELL_FUN_PTR;
}