//Find
	if (false == s_isInitializedCubeMaterialInformation)
	{
		Cube_InformationInitialize();
	}
	
///Add Above(!)
#if defined(CUBE_RELOAD_FIX)
	const auto reload = !s_isInitializedCubeMaterialInformation;
#endif

//Find
	ch->ChatPacket(CHAT_TYPE_COMMAND, "cube open %d", npc->GetRaceNum());
	
///Change
#if defined(CUBE_RELOAD_FIX)
	ch->ChatPacket(CHAT_TYPE_COMMAND, "cube open %d %d", npc->GetRaceNum(), reload);
#else
	ch->ChatPacket(CHAT_TYPE_COMMAND, "cube open %d", npc->GetRaceNum());
#endif

//Find
	s_cube_proto.clear();
	
///Add
#if defined(CUBE_RELOAD_FIX)
	cube_info_map.clear();
	cube_result_info_map_by_npc.clear();
	s_isInitializedCubeMaterialInformation = false;
#endif