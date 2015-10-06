function first_level(){

	var first_level_var = 0;

	function second_level(){
		var second_level_var = 1;
		first_level_var += second_level_var;
		console.log(first_level_var);
	
		function third_level(){
			var third_level_var = 3;
			console.log(first_level_var);
		}
		third_level();
	}
	second_level();


}

first_level();