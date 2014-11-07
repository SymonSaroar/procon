#include <string>
void test(std::string input, std::string expect);
void testloader(){ //insert test cases here
/*0*/ test( "befi", "14,16,24,26" );    
/*1*/ test( "abc", "14,15,16,24,25,26,34,35,36" );    
/*2*/ test( "de", "14,15,16,24,26,34,35,36" );    
/*3*/ test( "fghi", "14,15,16,24,25,26,34,35,36" );    
/*4*/ test( "abcdefghi", "-" );    
/*5*/ test( "ag", "24,25,26,34,35,36" );    
/*6*/ test( "dh", "14,15,16,34,35,36" );    
/*7*/ test( "bf", "14,15,16,24,25,26" );    
/*8*/ test( "ch", "15,25,35" );    
/*9*/ test( "be", "14,16,24,26,34,36" );    
/*10*/ test( "ci", "14,15,24,25,34,35" );    
/*11*/ test( "cgi", "15,24,25,35" );    
/*12*/ test( "acgi", "24,25,35" );    
/*13*/ test( "cdefghi", "15,35" );    
/*14*/ test( "acdefghi", "35" );    
/*15*/ test( "cdegi", "15,24,35" );    
/*16*/ test( "bcdegi", "24" );    
/*17*/ test( "afh", "14,15,16,24,25,26,34,35,36" );    
/*18*/ test( "abfh", "14,15,16,24,25,26" );    
/*19*/ test( "dfh", "14,15,16,34,35,36" );    
/*20*/ test( "cdfh", "15,35" );    
/*21*/ test( "deh", "14,15,16,34,35,36" );    
/*22*/ test( "cdeh", "15,35" );    
/*23*/ test( "abefgh", "24,26" );    
/*24*/ test( "abdefgh", "-" );    
/*25*/ test( "acfghi", "25,35" );    
/*26*/ test( "acdfghi", "35" );    
/*27*/ test( "cegi", "15,24,35" );    
/*28*/ test( "abcfhi", "15,25" );    
/*29*/ test( "abcefhi", "-" );    
/*30*/ test( "abdi", "14,15,16,24,34,35,36" );    
/*31*/ test( "abdfi", "14,15,16,24" );    
/*32*/ test( "bdi", "14,15,16,24,34,35,36" );    
/*33*/ test( "bdfi", "14,15,16,24" );    
/*34*/ test( "adfh", "14,15,16,34,35,36" );    
/*35*/ test( "adfgh", "34,35,36" );    
/*36*/ test( "acdfhi", "15,35" );    
/*37*/ test( "bcdfgi", "24" );    
/*38*/ test( "bcdfghi", "-" );    
/*39*/ test( "defi", "14,15,16,24,34,35,36" );    
/*40*/ test( "defhi", "14,15,16,34,35,36" );    
/*41*/ test( "cdefg", "15,24,26,35" );    
/*42*/ test( "cdefgi", "15,24,35" );    
/*43*/ test( "bdefg", "24,26" );    
/*44*/ test( "bdefgi", "24" );
}