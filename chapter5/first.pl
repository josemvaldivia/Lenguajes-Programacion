$variable = 0;

sub foo {
	return $variable;
}

sub staticScope {
	my $variable = 10;
	return foo();

}

sub dynamicScope {
	local $variable = 10;
	return foo();
	
}
print "Static : \t ";
print staticScope();
print "\n";
print "Dinamyc : \t ";
print dynamicScope();
print "\n";