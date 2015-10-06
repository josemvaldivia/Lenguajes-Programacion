def first_level():

	first_level_var = 0

	def second_level(first_level_var):
		second_level_var = 1
		first_level_var += second_level_var
		print first_level_var
	

		def third_level(first_level_var):
			third_level_var = 3
			print first_level_var
	
		third_level(first_level_var);
	
	second_level(first_level_var);



first_level();