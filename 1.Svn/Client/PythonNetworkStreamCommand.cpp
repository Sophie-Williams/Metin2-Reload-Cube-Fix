//Find in : else if (!strcmpi(szCmd, "cube"))
			if (3 > TokenVector.size())

///Change
#if defined(CUBE_RELOAD_FIX)
			if (3+1 > TokenVector.size())
#else
			if (3 > TokenVector.size())
#endif

//Find
			PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_Cube_Open", Py_BuildValue("(i)", npcVNUM));
			
///Change
#if defined(CUBE_RELOAD_FIX)
			PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_Cube_Open", Py_BuildValue("(ii)", npcVNUM, std::stoi(TokenVector[3])));
#else
			PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_Cube_Open", Py_BuildValue("(i)", npcVNUM));
#endif

https://puu.sh/F4z7Z/f59b8bd040.png