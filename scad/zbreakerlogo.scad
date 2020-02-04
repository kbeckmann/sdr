zblogow = 52;
zblogol = 8;
zblogob = 2;
zblogoh = 5;
module	zbreakerlogo() {
	linear_extrude(height=zblogoh) {
		union() {
			// Z
			polygon(points=[
				[0,0],
				[4,0],
				[5,1],
				[2,1],
				[9,8],
				[3,8],
				[2,7],
				[7,7] ]);
			// Dot on the 'i'
			polygon(points=[
				[5,2],
				[6,2],
				[7,3],
				[6,3] ]);
			// The 'p'
			polygon(points=[
				[3,-2],
				[4,-2],
				[8,2],
				[11,2],
				[10,1],
				[8,1],
				[7,0],
				[10,0],
				[12,2],
				[12,3],
				[8,3] ]);
			// The B
			polygon(points=[
				[12,0],
				[13,0],
				[19,6],
				[22,6],
				[20,4],
				[18,4],
				[17,3],
				[18,3],
				[18,2],
				[17,1],
				[15,1],
				[14,0],
				[17,0],
				[19,2],
				[19,3],
				[20,3],
				[23,6],
				[23,7],
				[19,7] ]);
			// R
			polygon(points=[
				[18,0],
				[19,0],
				[23,4],
				[25,4],
				[24,3],
				[23,3],
				[22,2],
				[22,0],
				[23,0],
				[23,2],
				[24,2],
				[26,4],
				[26,5],
				[23,5] ]);
			// E
			polygon(points=[
				[24,0],
				[28,0],
				[29,1],
				[26,1],
				[27,2],
				[28,2],
				[29,3],
				[28,3],
				[29,4],
				[32,4],
				[33,5],
				[29,5]]);
			// A
			polygon(points=[
				[29,0],
				[30,0],
				[34,4],
				[36,4],
				[35,3],
				[34,3],
				[33,2],
				[34,2],
				[32,0],
				[33,0],
				[37,4],
				[37,5],
				[34,5]]);
			// K
			polygon(points=[
				[34,0],
				[35,0],
				[37,2],
				[38,2],
				[38,1],
				[37,0],
				[38,0],
				[39,1],
				[39,2],
				[42,5],
				[41,5],
				[39,3],
				[38,3],
				[40,5],
				[39,5] ]);
			// E
			translate([15,0,0])
			polygon(points=[
				[24,0],
				[28,0],
				[29,1],
				[26,1],
				[27,2],
				[28,2],
				[29,3],
				[28,3],
				[29,4],
				[32,4],
				[33,5],
				[29,5]]);
			// R
			translate([44-18,0,0])
			polygon(points=[
				[18,0],
				[19,0],
				[23,4],
				[25,4],
				[24,3],
				[23,3],
				[22,2],
				[22,0],
				[23,0],
				[23,2],
				[24,2],
				[26,4],
				[26,5],
				[23,5] ]);
		}
	}
}

// zbreakerlogo();
// translate([0,-zblogob,-zblogoh]) color("red") cube([zblogow, zblogol+zblogob, zblogoh]);

