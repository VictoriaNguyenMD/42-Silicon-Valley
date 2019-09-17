# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map_generator.pl                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/30 01:58:47 by vinguyen          #+#    #+#              #
#    Updated: 2019/07/30 01:59:04 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;

=pod
$ --> Scalar (aka 1 item)
@ --> Array of scalar items
If the program does not have a scalar argument (eg. reference, number, string) 
count of 3, then teh program will print x, y to the standard error and exit the program
=cut
die "program x y density" unless (scalar(@ARGV) == 3); 

=pod
my is a function that indicates what variables are for this file
=cut
my ($x, $y, $density) = @ARGV;

=pod
(# rows)(Empty symbol)(obstacle symbol)(full symbol)
	y = # rows
	Empty = .
	Obstacle = o
	Full = x
=cut
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) { /* For each row */
	for (my $j = 0; $j < $x; $j++) { /* For each col */
		if (int(rand($y) * 2) < $density) { 
			/*The int rand randomly generates a number based on the row size. If its less than the density size, print o */
			print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}