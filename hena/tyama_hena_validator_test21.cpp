#include <string>
void test(const std::string &input, const std::string &expect);
void testloader(){ //insert test cases here
/*0*/ test( "1_12345", "1_1" );
/*1*/ test( "30_32451", "3_30" );
/*2*/ test( "1_12345|2_12345", "1_1:2" );
/*3*/ test( "3_12345|2_12345|1_12345", "1_1:2:3" );
/*4*/ test( "1_23415|2_12435|3_42135", "1_2|2_1|4_3" );
/*5*/ test( "1_23415|2_12435|3_42135|4_31245|5_53124", "1_2|2_1|3_4|4_3|5_5" );
/*6*/ test( "40_12345|21_12345|3_12345|61_12345|10_12345", "1_3:21:40:61|2_10" );
/*7*/ test( "1_23415|2_12435|3_42135|4_54321|5_12345|6_13524|7_42351|8_31254|9_24513|10_12345", "1_2:5:6:10|2_1:9|3_8|4_3:7|5_4" );
/*8*/ test( "1_54321|2_54321|3_54321|4_54321|5_54321|6_54321|7_54321|8_54321|9_54321|10_54321|11_54321|12_54321|13_54321|14_54321|15_54321|16_54321|17_54321|18_54321|19_54321|20_54321|21_54321", "1_17:18:19:20|2_13:14:15:16|3_9:10:11:12|4_5:6:7:8|5_1:2:3:4" );
/*9*/ test( "1_34152|2_23514|3_41325|4_15342|5_45312|6_35124|7_21453|8_52431|9_13245|10_54123|11_13245", "1_4:9:11|2_2:7|3_1:6|4_3:5|5_8:10" );
/*10*/ test("92_41532|58_14325|40_25413|5_45132|71_35124|23_13452|60_35241|77_31542|53_13542|72_12354", "1_23:53:58:72|2_40|3_60:71:77|4_5:92" );
/*11*/ test("55_24153|91_24531|9_12543|41_34215|72_15423|44_42531|6_42351|79_15243|21_35412|31_52413|74_24135|83_31254|33_35421|84_53421|89_53241|16_32415|36_15234|92_34521|62_12345|14_23415|40_23415|88_43251|52_45213|77_32154|59_53241", "1_9:36:72:79|2_14:55:74:91|3_21:33:41:83|4_6:44:52:88|5_31:59:84:89" );
/*12*/ test( "62_52341|57_12543|6_52431", "1_57|5_6:62" );
/*13*/ test( "71_52143|16_24531|7_14523|99_41532|37_54123|72_43251", "1_7|2_16|4_72:99|5_37:71" );
/*14*/ test( "29_23541|37_32145|28_34215|59_15234|27_35142|77_51324|23_31245|62_15342|46_23145|47_41523|7_52341|68_12534|5_43251", "1_59:62:68|2_29:46|3_23:27:28:37|4_5:47|5_7:77" );
/*15*/ test( "17_34152|89_23451|49_43152|61_32541|15_25413|63_34521|16_31452|8_41352|54_41532|42_34521|53_12453|88_34251|4_21453|93_34512|18_25134|67_25134|50_14523","1_50:53|2_4:15:18:89|3_16:17:61:63|4_8:42:49:54|5_67:88:93" );
/*16*/ test( "10_23145|80_32154|41_41532|20_31254|96_45231|50_23514|28_12534|13_31425|52_12435|88_23541|69_34215|46_53241|22_24531|53_42351|84_15243|97_14352|8_24135|59_13524", "1_28:52:84:97|2_10:22:50:88|3_13:20:69:80|4_8:41:53:96|5_46:59" );
/*17*/ test( "90_21453|58_43521|69_42351|12_51432|34_14352|23_45321|77_35421|71_24531|95_24153|49_13254|9_45231|78_21534|15_43512|54_41532|52_54321|59_24513|57_41532|75_35214|24_12435|97_52341|39_12453|53_12435|48_51234|32_51234", "1_24:34:39:49|2_71:78:90:95|3_15:54:75:77|4_9:23:58:69|5_12:48:52:97" );
/*18*/ test( "99_42153|44_42351|88_14523|58_51234|82_14523|15_25134|74_25134|77_32145|60_13425|46_34512|45_12345|63_32145|98_15234|96_41325|38_43521|61_14325|26_21543|37_24153|40_31542|57_23415|97_12543|30_45231|56_41523|22_34512|83_31245|86_35412|16_54321", "1_45:60:82:88|2_15:26:37:74|3_40:46:63:77|4_38:44:96:99|5_16:30:58:98" );
/*19*/ test( "55_13524|64_41523|40_23451|99_25314|65_21453|69_31524|77_45231|62_51432|21_13542|81_13452|66_21534|33_41352|5_52314|90_31452|6_42135|93_42351|84_43125|54_45213|76_21453|19_52134|50_21435|61_13542|30_35421|43_25431|24_25341|31_15234|39_15243|20_51423|67_13524", "1_21:55:61:81|2_40:65:66:99|3_30:69:84:90|4_6:33:64:77|5_5:19:20:62" );
}
