#Find
	def BINARY_Cube_Open(self, npcVNUM):
		self.currentCubeNPC = npcVNUM

#Change
	def BINARY_Cube_Open(self, npcVNUM, reload = 0):
		self.currentCubeNPC = npcVNUM
		if app.CUBE_RELOAD_FIX and reload:
			self.cubeInformation.clear()