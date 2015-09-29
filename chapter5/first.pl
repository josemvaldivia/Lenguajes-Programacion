$variable = 0;

sub foo {
	# Function that returns the Variable
	return $variable;
}

sub staticScope {
	#my makes the $variable be only at this scope
	my $variable = 10;
	return foo();

}

sub dynamicScope {
	#local takes de $variable to his scope
	local $variable = 10;
	return foo();
	
}
print "Static : \t ";
print staticScope();
print "\n";
print "Dinamyc : \t ";
print dynamicScope();
print "\n";