Here is a sample output from the testing benchmark problems. I also wrote a Canonical A Star, and a Jump Point Search which I also included in the run. 
The output includes a run with normal A star, using the Octile Heuristic along, using just the 5 Differenctial Heuristics, and one using both. The Canonical A star and JPS both use all the heuristics.
The first few lines are from setting up the Differential Heuristic, and at the bottom there are average node expansions and average run time per algorithm.

Height: 194
world width: 194
randx: 109, randy: 134
randx: 171, randy: 86
dh1
Setting up heuristic Constructor.
start state: STATE:: CurX: 171, CurY: 86
randx: 137, randy: 185
randx: 150, randy: 108
dh2
Setting up heuristic Constructor.
start state: STATE:: CurX: 150, CurY: 108
dh3
Setting up heuristic Constructor.
start state: STATE:: CurX: 70, CurY: 149
dh4
Setting up heuristic Constructor.
start state: STATE:: CurX: 34, CurY: 83
dh5
Setting up heuristic Constructor.
start state: STATE:: CurX: 17, CurY: 128
here
asdfa
asdfzfadfa
(startX, startY): (10,113) goalX, goalY: (11,112)
Octile::			 A star my openlist elapsed time: 0.000010, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.414214
Differential Heuristic::	 A star my openlist elapsed time: 0.000008, Nodes Expanded: 1, Optimal Moves: 2, Optimal G cost: 1.414214
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000006, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.414214
Canonical A Star::A star my openlist elapsed time: 0.000007, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.414214
Jump Point Search::A star my openlist elapsed time: 0.000028, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.414214
(startX, startY): (10,129) goalX, goalY: (7,129)
Octile::			 A star my openlist elapsed time: 0.000012, Nodes Expanded: 3, Optimal Moves: 4, Optimal Gcost: 3.000000
Differential Heuristic::	 A star my openlist elapsed time: 0.000011, Nodes Expanded: 3, Optimal Moves: 4, Optimal G cost: 3.000000
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000011, Nodes Expanded: 3, Optimal Moves: 4, Optimal Gcost: 3.000000
Canonical A Star::A star my openlist elapsed time: 0.000008, Nodes Expanded: 3, Optimal Moves: 4, Optimal Gcost: 3.000000
Jump Point Search::A star my openlist elapsed time: 0.000043, Nodes Expanded: 1, Optimal Moves: 4, Optimal Gcost: 3.000000
(startX, startY): (10,77) goalX, goalY: (8,78)
Octile::			 A star my openlist elapsed time: 0.000011, Nodes Expanded: 3, Optimal Moves: 3, Optimal Gcost: 2.414214
Differential Heuristic::	 A star my openlist elapsed time: 0.000014, Nodes Expanded: 5, Optimal Moves: 3, Optimal G cost: 2.414214
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000011, Nodes Expanded: 3, Optimal Moves: 3, Optimal Gcost: 2.414214
Canonical A Star::A star my openlist elapsed time: 0.000010, Nodes Expanded: 3, Optimal Moves: 3, Optimal Gcost: 2.414214
Jump Point Search::A star my openlist elapsed time: 0.000039, Nodes Expanded: 1, Optimal Moves: 3, Optimal Gcost: 2.414214
(startX, startY): (100,17) goalX, goalY: (101,17)
Octile::			 A star my openlist elapsed time: 0.000006, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
Differential Heuristic::	 A star my openlist elapsed time: 0.000007, Nodes Expanded: 1, Optimal Moves: 2, Optimal G cost: 1.000000
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000006, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
Canonical A Star::A star my openlist elapsed time: 0.000007, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
Jump Point Search::A star my openlist elapsed time: 0.000065, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
(startX, startY): (100,41) goalX, goalY: (102,44)
Octile::			 A star my openlist elapsed time: 0.000013, Nodes Expanded: 4, Optimal Moves: 4, Optimal Gcost: 3.828427
Differential Heuristic::	 A star my openlist elapsed time: 0.000021, Nodes Expanded: 8, Optimal Moves: 4, Optimal G cost: 3.828427
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000012, Nodes Expanded: 3, Optimal Moves: 4, Optimal Gcost: 3.828427
Canonical A Star::A star my openlist elapsed time: 0.000010, Nodes Expanded: 3, Optimal Moves: 4, Optimal Gcost: 3.828427
Jump Point Search::A star my openlist elapsed time: 0.000055, Nodes Expanded: 1, Optimal Moves: 4, Optimal Gcost: 3.828427
(startX, startY): (100,47) goalX, goalY: (100,44)
Octile::			 A star my openlist elapsed time: 0.000011, Nodes Expanded: 3, Optimal Moves: 4, Optimal Gcost: 3.000000
Differential Heuristic::	 A star my openlist elapsed time: 0.000026, Nodes Expanded: 11, Optimal Moves: 4, Optimal G cost: 3.000000
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000013, Nodes Expanded: 3, Optimal Moves: 4, Optimal Gcost: 3.000000
Canonical A Star::A star my openlist elapsed time: 0.000009, Nodes Expanded: 3, Optimal Moves: 4, Optimal Gcost: 3.000000
Jump Point Search::A star my openlist elapsed time: 0.000077, Nodes Expanded: 1, Optimal Moves: 4, Optimal Gcost: 3.000000
(startX, startY): (101,16) goalX, goalY: (99,16)
Octile::			 A star my openlist elapsed time: 0.000009, Nodes Expanded: 2, Optimal Moves: 3, Optimal Gcost: 2.000000
Differential Heuristic::	 A star my openlist elapsed time: 0.000015, Nodes Expanded: 5, Optimal Moves: 3, Optimal G cost: 2.000000
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000009, Nodes Expanded: 2, Optimal Moves: 3, Optimal Gcost: 2.000000
Canonical A Star::A star my openlist elapsed time: 0.000007, Nodes Expanded: 2, Optimal Moves: 3, Optimal Gcost: 2.000000
Jump Point Search::A star my openlist elapsed time: 0.000055, Nodes Expanded: 1, Optimal Moves: 3, Optimal Gcost: 2.000000
(startX, startY): (101,40) goalX, goalY: (101,41)
Octile::			 A star my openlist elapsed time: 0.000006, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
Differential Heuristic::	 A star my openlist elapsed time: 0.000006, Nodes Expanded: 1, Optimal Moves: 2, Optimal G cost: 1.000000
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000006, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
Canonical A Star::A star my openlist elapsed time: 0.000007, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
Jump Point Search::A star my openlist elapsed time: 0.000053, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
(startX, startY): (102,152) goalX, goalY: (100,154)
Octile::			 A star my openlist elapsed time: 0.000009, Nodes Expanded: 2, Optimal Moves: 3, Optimal Gcost: 2.828427
Differential Heuristic::	 A star my openlist elapsed time: 0.000009, Nodes Expanded: 2, Optimal Moves: 3, Optimal G cost: 2.828427
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000008, Nodes Expanded: 2, Optimal Moves: 3, Optimal Gcost: 2.828427
Canonical A Star::A star my openlist elapsed time: 0.000008, Nodes Expanded: 2, Optimal Moves: 3, Optimal Gcost: 2.828427
Jump Point Search::A star my openlist elapsed time: 0.000073, Nodes Expanded: 1, Optimal Moves: 3, Optimal Gcost: 2.828427
(startX, startY): (102,29) goalX, goalY: (102,28)
Octile::			 A star my openlist elapsed time: 0.000006, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
Differential Heuristic::	 A star my openlist elapsed time: 0.000006, Nodes Expanded: 1, Optimal Moves: 2, Optimal G cost: 1.000000
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000005, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
Canonical A Star::A star my openlist elapsed time: 0.000006, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
Jump Point Search::A star my openlist elapsed time: 0.000044, Nodes Expanded: 1, Optimal Moves: 2, Optimal Gcost: 1.000000
(startX, startY): (10,109) goalX, goalY: (14,107)
Octile::			 A star my openlist elapsed time: 0.000018, Nodes Expanded: 8, Optimal Moves: 5, Optimal Gcost: 4.828427
Differential Heuristic::	 A star my openlist elapsed time: 0.000013, Nodes Expanded: 5, Optimal Moves: 5, Optimal G cost: 4.828427
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000013, Nodes Expanded: 5, Optimal Moves: 5, Optimal Gcost: 4.828427
Canonical A Star::A star my openlist elapsed time: 0.000011, Nodes Expanded: 5, Optimal Moves: 5, Optimal Gcost: 4.828427
Jump Point Search::A star my openlist elapsed time: 0.000032, Nodes Expanded: 1, Optimal Moves: 5, Optimal Gcost: 4.828427
(startX, startY): (10,121) goalX, goalY: (16,121)
Octile::			 A star my openlist elapsed time: 0.000026, Nodes Expanded: 11, Optimal Moves: 7, Optimal Gcost: 6.828427
Differential Heuristic::	 A star my openlist elapsed time: 0.000030, Nodes Expanded: 14, Optimal Moves: 7, Optimal G cost: 6.828427
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000025, Nodes Expanded: 10, Optimal Moves: 7, Optimal Gcost: 6.828427
Canonical A Star::A star my openlist elapsed time: 0.000018, Nodes Expanded: 10, Optimal Moves: 7, Optimal Gcost: 6.828427
Jump Point Search::A star my openlist elapsed time: 0.000046, Nodes Expanded: 2, Optimal Moves: 7, Optimal Gcost: 6.828427
(startX, startY): (100,115) goalX, goalY: (93,114)
Octile::			 A star my openlist elapsed time: 0.000019, Nodes Expanded: 9, Optimal Moves: 8, Optimal Gcost: 7.414214
Differential Heuristic::	 A star my openlist elapsed time: 0.000060, Nodes Expanded: 37, Optimal Moves: 8, Optimal G cost: 7.414214
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000020, Nodes Expanded: 9, Optimal Moves: 8, Optimal Gcost: 7.414214
Canonical A Star::A star my openlist elapsed time: 0.000014, Nodes Expanded: 9, Optimal Moves: 8, Optimal Gcost: 7.414214
Jump Point Search::A star my openlist elapsed time: 0.000048, Nodes Expanded: 2, Optimal Moves: 8, Optimal Gcost: 7.414214
(startX, startY): (100,15) goalX, goalY: (105,16)
Octile::			 A star my openlist elapsed time: 0.000023, Nodes Expanded: 9, Optimal Moves: 6, Optimal Gcost: 5.414214
Differential Heuristic::	 A star my openlist elapsed time: 0.000061, Nodes Expanded: 32, Optimal Moves: 6, Optimal G cost: 5.414214
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000024, Nodes Expanded: 9, Optimal Moves: 6, Optimal Gcost: 5.414214
Canonical A Star::A star my openlist elapsed time: 0.000018, Nodes Expanded: 9, Optimal Moves: 6, Optimal Gcost: 5.414214
Jump Point Search::A star my openlist elapsed time: 0.000058, Nodes Expanded: 1, Optimal Moves: 6, Optimal Gcost: 5.414214
(startX, startY): (100,186) goalX, goalY: (96,189)
Octile::			 A star my openlist elapsed time: 0.000019, Nodes Expanded: 7, Optimal Moves: 5, Optimal Gcost: 5.242640
Differential Heuristic::	 A star my openlist elapsed time: 0.000023, Nodes Expanded: 10, Optimal Moves: 5, Optimal G cost: 5.242640
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000015, Nodes Expanded: 4, Optimal Moves: 5, Optimal Gcost: 5.242640
Canonical A Star::A star my openlist elapsed time: 0.000011, Nodes Expanded: 4, Optimal Moves: 5, Optimal Gcost: 5.242640
Jump Point Search::A star my openlist elapsed time: 0.000148, Nodes Expanded: 1, Optimal Moves: 5, Optimal Gcost: 5.242640
(startX, startY): (100,93) goalX, goalY: (101,90)
Octile::			 A star my openlist elapsed time: 0.000012, Nodes Expanded: 4, Optimal Moves: 5, Optimal Gcost: 4.000000
Differential Heuristic::	 A star my openlist elapsed time: 0.000029, Nodes Expanded: 14, Optimal Moves: 5, Optimal G cost: 4.000000
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000012, Nodes Expanded: 4, Optimal Moves: 5, Optimal Gcost: 4.000000
Canonical A Star::A star my openlist elapsed time: 0.000009, Nodes Expanded: 4, Optimal Moves: 5, Optimal Gcost: 4.000000
Jump Point Search::A star my openlist elapsed time: 0.000038, Nodes Expanded: 2, Optimal Moves: 5, Optimal Gcost: 4.000000
(startX, startY): (101,15) goalX, goalY: (104,10)
Octile::			 A star my openlist elapsed time: 0.000022, Nodes Expanded: 9, Optimal Moves: 6, Optimal Gcost: 6.242641
Differential Heuristic::	 A star my openlist elapsed time: 0.000058, Nodes Expanded: 31, Optimal Moves: 6, Optimal G cost: 6.242641
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000023, Nodes Expanded: 9, Optimal Moves: 6, Optimal Gcost: 6.242641
Canonical A Star::A star my openlist elapsed time: 0.000018, Nodes Expanded: 9, Optimal Moves: 6, Optimal Gcost: 6.242641
Jump Point Search::A star my openlist elapsed time: 0.000059, Nodes Expanded: 2, Optimal Moves: 6, Optimal Gcost: 6.242641
(startX, startY): (101,17) goalX, goalY: (100,24)
Octile::			 A star my openlist elapsed time: 0.000027, Nodes Expanded: 13, Optimal Moves: 8, Optimal Gcost: 7.414214
Differential Heuristic::	 A star my openlist elapsed time: 0.000051, Nodes Expanded: 30, Optimal Moves: 8, Optimal G cost: 7.414214
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000029, Nodes Expanded: 13, Optimal Moves: 8, Optimal Gcost: 7.414214
Canonical A Star::A star my openlist elapsed time: 0.000019, Nodes Expanded: 13, Optimal Moves: 8, Optimal Gcost: 7.414214
Jump Point Search::A star my openlist elapsed time: 0.000057, Nodes Expanded: 1, Optimal Moves: 8, Optimal Gcost: 7.414214
(startX, startY): (101,171) goalX, goalY: (105,168)
Octile::			 A star my openlist elapsed time: 0.000019, Nodes Expanded: 7, Optimal Moves: 5, Optimal Gcost: 5.242640
Differential Heuristic::	 A star my openlist elapsed time: 0.000019, Nodes Expanded: 6, Optimal Moves: 5, Optimal G cost: 5.242640
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000015, Nodes Expanded: 4, Optimal Moves: 5, Optimal Gcost: 5.242640
Canonical A Star::A star my openlist elapsed time: 0.000013, Nodes Expanded: 4, Optimal Moves: 5, Optimal Gcost: 5.242640
Jump Point Search::A star my openlist elapsed time: 0.000131, Nodes Expanded: 1, Optimal Moves: 5, Optimal Gcost: 5.242640
(startX, startY): (101,179) goalX, goalY: (96,182)
Octile::			 A star my openlist elapsed time: 0.000024, Nodes Expanded: 10, Optimal Moves: 6, Optimal Gcost: 6.242640
Differential Heuristic::	 A star my openlist elapsed time: 0.000037, Nodes Expanded: 17, Optimal Moves: 6, Optimal G cost: 6.242640
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000023, Nodes Expanded: 8, Optimal Moves: 6, Optimal Gcost: 6.242640
Canonical A Star::A star my openlist elapsed time: 0.000015, Nodes Expanded: 8, Optimal Moves: 6, Optimal Gcost: 6.242640
Jump Point Search::A star my openlist elapsed time: 0.000125, Nodes Expanded: 1, Optimal Moves: 6, Optimal Gcost: 6.242640
(startX, startY): (10,69) goalX, goalY: (17,76)
Octile::			 A star my openlist elapsed time: 0.000028, Nodes Expanded: 13, Optimal Moves: 9, Optimal Gcost: 10.485281
Differential Heuristic::	 A star my openlist elapsed time: 0.000050, Nodes Expanded: 25, Optimal Moves: 9, Optimal G cost: 10.485281
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000023, Nodes Expanded: 8, Optimal Moves: 9, Optimal Gcost: 10.485281
Canonical A Star::A star my openlist elapsed time: 0.000016, Nodes Expanded: 8, Optimal Moves: 9, Optimal Gcost: 10.485281
Jump Point Search::A star my openlist elapsed time: 0.000040, Nodes Expanded: 2, Optimal Moves: 9, Optimal Gcost: 10.485281
(startX, startY): (10,78) goalX, goalY: (18,76)
Octile::			 A star my openlist elapsed time: 0.000036, Nodes Expanded: 20, Optimal Moves: 9, Optimal Gcost: 8.828427
Differential Heuristic::	 A star my openlist elapsed time: 0.000060, Nodes Expanded: 34, Optimal Moves: 9, Optimal G cost: 8.828427
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000038, Nodes Expanded: 20, Optimal Moves: 9, Optimal Gcost: 8.828427
Canonical A Star::A star my openlist elapsed time: 0.000027, Nodes Expanded: 20, Optimal Moves: 9, Optimal Gcost: 8.828427
Jump Point Search::A star my openlist elapsed time: 0.000034, Nodes Expanded: 2, Optimal Moves: 9, Optimal Gcost: 8.828427
(startX, startY): (10,84) goalX, goalY: (19,77)
Octile::			 A star my openlist elapsed time: 0.000026, Nodes Expanded: 9, Optimal Moves: 10, Optimal Gcost: 11.899494
Differential Heuristic::	 A star my openlist elapsed time: 0.000102, Nodes Expanded: 61, Optimal Moves: 10, Optimal G cost: 11.899494
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000025, Nodes Expanded: 9, Optimal Moves: 10, Optimal Gcost: 11.899494
Canonical A Star::A star my openlist elapsed time: 0.000019, Nodes Expanded: 9, Optimal Moves: 10, Optimal Gcost: 11.899494
Jump Point Search::A star my openlist elapsed time: 0.000039, Nodes Expanded: 2, Optimal Moves: 10, Optimal Gcost: 11.899494
(startX, startY): (100,105) goalX, goalY: (91,112)
Octile::			 A star my openlist elapsed time: 0.000044, Nodes Expanded: 21, Optimal Moves: 10, Optimal Gcost: 11.899494
Differential Heuristic::	 A star my openlist elapsed time: 0.000287, Nodes Expanded: 150, Optimal Moves: 10, Optimal G cost: 11.899494
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000050, Nodes Expanded: 21, Optimal Moves: 10, Optimal Gcost: 11.899494
Canonical A Star::A star my openlist elapsed time: 0.000031, Nodes Expanded: 21, Optimal Moves: 10, Optimal Gcost: 11.899494
Jump Point Search::A star my openlist elapsed time: 0.000048, Nodes Expanded: 1, Optimal Moves: 10, Optimal Gcost: 11.899494
(startX, startY): (100,141) goalX, goalY: (96,149)
Octile::			 A star my openlist elapsed time: 0.000045, Nodes Expanded: 17, Optimal Moves: 9, Optimal Gcost: 9.656854
Differential Heuristic::	 A star my openlist elapsed time: 0.000046, Nodes Expanded: 25, Optimal Moves: 9, Optimal G cost: 9.656855
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000035, Nodes Expanded: 16, Optimal Moves: 9, Optimal Gcost: 9.656855
Canonical A Star::A star my openlist elapsed time: 0.000022, Nodes Expanded: 16, Optimal Moves: 9, Optimal Gcost: 9.656855
Jump Point Search::A star my openlist elapsed time: 0.000141, Nodes Expanded: 2, Optimal Moves: 9, Optimal Gcost: 9.656855
(startX, startY): (100,148) goalX, goalY: (104,157)
Octile::			 A star my openlist elapsed time: 0.000100, Nodes Expanded: 26, Optimal Moves: 10, Optimal Gcost: 10.656854
Differential Heuristic::	 A star my openlist elapsed time: 0.000105, Nodes Expanded: 59, Optimal Moves: 10, Optimal G cost: 10.656855
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000049, Nodes Expanded: 24, Optimal Moves: 10, Optimal Gcost: 10.656854
Canonical A Star::A star my openlist elapsed time: 0.000031, Nodes Expanded: 25, Optimal Moves: 10, Optimal Gcost: 10.656855
Jump Point Search::A star my openlist elapsed time: 0.000068, Nodes Expanded: 1, Optimal Moves: 10, Optimal Gcost: 10.656855
(startX, startY): (100,153) goalX, goalY: (109,159)
Octile::			 A star my openlist elapsed time: 0.000047, Nodes Expanded: 26, Optimal Moves: 10, Optimal Gcost: 11.485281
Differential Heuristic::	 A star my openlist elapsed time: 0.000028, Nodes Expanded: 9, Optimal Moves: 10, Optimal G cost: 11.485281
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000027, Nodes Expanded: 9, Optimal Moves: 10, Optimal Gcost: 11.485281
Canonical A Star::A star my openlist elapsed time: 0.000020, Nodes Expanded: 9, Optimal Moves: 10, Optimal Gcost: 11.485281
Jump Point Search::A star my openlist elapsed time: 0.000081, Nodes Expanded: 1, Optimal Moves: 10, Optimal Gcost: 11.485281
(startX, startY): (100,154) goalX, goalY: (108,158)
Octile::			 A star my openlist elapsed time: 0.000033, Nodes Expanded: 17, Optimal Moves: 9, Optimal Gcost: 9.656854
Differential Heuristic::	 A star my openlist elapsed time: 0.000023, Nodes Expanded: 8, Optimal Moves: 9, Optimal G cost: 9.656855
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000022, Nodes Expanded: 8, Optimal Moves: 9, Optimal Gcost: 9.656855
Canonical A Star::A star my openlist elapsed time: 0.000016, Nodes Expanded: 8, Optimal Moves: 9, Optimal Gcost: 9.656855
Jump Point Search::A star my openlist elapsed time: 0.000079, Nodes Expanded: 2, Optimal Moves: 9, Optimal Gcost: 9.656855
(startX, startY): (100,173) goalX, goalY: (91,180)
Octile::			 A star my openlist elapsed time: 0.000044, Nodes Expanded: 21, Optimal Moves: 10, Optimal Gcost: 11.899494
Differential Heuristic::	 A star my openlist elapsed time: 0.000093, Nodes Expanded: 51, Optimal Moves: 10, Optimal G cost: 11.899494
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000037, Nodes Expanded: 15, Optimal Moves: 10, Optimal Gcost: 11.899494
Canonical A Star::A star my openlist elapsed time: 0.000025, Nodes Expanded: 15, Optimal Moves: 10, Optimal Gcost: 11.899494
Jump Point Search::A star my openlist elapsed time: 0.000127, Nodes Expanded: 1, Optimal Moves: 10, Optimal Gcost: 11.899494
(startX, startY): (100,177) goalX, goalY: (90,177)
Octile::			 A star my openlist elapsed time: 0.000027, Nodes Expanded: 10, Optimal Moves: 11, Optimal Gcost: 10.000000
Differential Heuristic::	 A star my openlist elapsed time: 0.000089, Nodes Expanded: 46, Optimal Moves: 11, Optimal G cost: 10.000000
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000030, Nodes Expanded: 10, Optimal Moves: 11, Optimal Gcost: 10.000000
Canonical A Star::A star my openlist elapsed time: 0.000016, Nodes Expanded: 10, Optimal Moves: 11, Optimal Gcost: 10.000000
Jump Point Search::A star my openlist elapsed time: 0.000127, Nodes Expanded: 1, Optimal Moves: 11, Optimal Gcost: 10.000000
(startX, startY): (10,127) goalX, goalY: (2,117)
Octile::			 A star my openlist elapsed time: 0.000072, Nodes Expanded: 42, Optimal Moves: 14, Optimal Gcost: 15.071067
Differential Heuristic::	 A star my openlist elapsed time: 0.000083, Nodes Expanded: 50, Optimal Moves: 14, Optimal G cost: 15.071067
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000070, Nodes Expanded: 38, Optimal Moves: 14, Optimal Gcost: 15.071067
Canonical A Star::A star my openlist elapsed time: 0.000043, Nodes Expanded: 38, Optimal Moves: 14, Optimal Gcost: 15.071067
Jump Point Search::A star my openlist elapsed time: 0.000043, Nodes Expanded: 2, Optimal Moves: 14, Optimal Gcost: 15.071067
(startX, startY): (10,65) goalX, goalY: (14,76)
Octile::			 A star my openlist elapsed time: 0.000039, Nodes Expanded: 22, Optimal Moves: 12, Optimal Gcost: 12.656853
Differential Heuristic::	 A star my openlist elapsed time: 0.000186, Nodes Expanded: 77, Optimal Moves: 12, Optimal G cost: 12.656855
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000044, Nodes Expanded: 25, Optimal Moves: 12, Optimal Gcost: 12.656854
Canonical A Star::A star my openlist elapsed time: 0.000032, Nodes Expanded: 29, Optimal Moves: 12, Optimal Gcost: 12.656855
Jump Point Search::A star my openlist elapsed time: 0.000051, Nodes Expanded: 2, Optimal Moves: 12, Optimal Gcost: 12.656855
(startX, startY): (10,75) goalX, goalY: (2,81)
Octile::			 A star my openlist elapsed time: 0.000049, Nodes Expanded: 30, Optimal Moves: 13, Optimal Gcost: 12.828426
Differential Heuristic::	 A star my openlist elapsed time: 0.000059, Nodes Expanded: 40, Optimal Moves: 13, Optimal G cost: 12.828426
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000050, Nodes Expanded: 28, Optimal Moves: 13, Optimal Gcost: 12.828426
Canonical A Star::A star my openlist elapsed time: 0.000036, Nodes Expanded: 29, Optimal Moves: 13, Optimal Gcost: 12.828427
Jump Point Search::A star my openlist elapsed time: 0.000042, Nodes Expanded: 6, Optimal Moves: 13, Optimal Gcost: 12.828427
(startX, startY): (100,103) goalX, goalY: (106,91)
Octile::			 A star my openlist elapsed time: 0.000052, Nodes Expanded: 28, Optimal Moves: 14, Optimal Gcost: 15.071067
Differential Heuristic::	 A star my openlist elapsed time: 0.000379, Nodes Expanded: 238, Optimal Moves: 14, Optimal G cost: 15.071067
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000059, Nodes Expanded: 28, Optimal Moves: 14, Optimal Gcost: 15.071067
Canonical A Star::A star my openlist elapsed time: 0.000038, Nodes Expanded: 33, Optimal Moves: 14, Optimal Gcost: 15.071068
Jump Point Search::A star my openlist elapsed time: 0.000068, Nodes Expanded: 3, Optimal Moves: 14, Optimal Gcost: 15.071068
(startX, startY): (100,110) goalX, goalY: (87,107)
Octile::			 A star my openlist elapsed time: 0.000060, Nodes Expanded: 27, Optimal Moves: 14, Optimal Gcost: 14.242640
Differential Heuristic::	 A star my openlist elapsed time: 0.000254, Nodes Expanded: 141, Optimal Moves: 14, Optimal G cost: 14.242640
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000066, Nodes Expanded: 26, Optimal Moves: 14, Optimal Gcost: 14.242640
Canonical A Star::A star my openlist elapsed time: 0.000029, Nodes Expanded: 25, Optimal Moves: 14, Optimal Gcost: 14.242640
Jump Point Search::A star my openlist elapsed time: 0.000028, Nodes Expanded: 1, Optimal Moves: 14, Optimal Gcost: 14.242640
(startX, startY): (100,144) goalX, goalY: (111,152)
Octile::			 A star my openlist elapsed time: 0.000041, Nodes Expanded: 18, Optimal Moves: 12, Optimal Gcost: 14.313706
Differential Heuristic::	 A star my openlist elapsed time: 0.000033, Nodes Expanded: 11, Optimal Moves: 12, Optimal G cost: 14.313707
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000031, Nodes Expanded: 11, Optimal Moves: 12, Optimal Gcost: 14.313707
Canonical A Star::A star my openlist elapsed time: 0.000023, Nodes Expanded: 11, Optimal Moves: 12, Optimal Gcost: 14.313707
Jump Point Search::A star my openlist elapsed time: 0.000133, Nodes Expanded: 1, Optimal Moves: 12, Optimal Gcost: 14.313707
(startX, startY): (100,153) goalX, goalY: (111,164)
Octile::			 A star my openlist elapsed time: 0.000029, Nodes Expanded: 11, Optimal Moves: 12, Optimal Gcost: 15.556347
Differential Heuristic::	 A star my openlist elapsed time: 0.000032, Nodes Expanded: 11, Optimal Moves: 12, Optimal G cost: 15.556347
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000030, Nodes Expanded: 11, Optimal Moves: 12, Optimal Gcost: 15.556347
Canonical A Star::A star my openlist elapsed time: 0.000022, Nodes Expanded: 11, Optimal Moves: 12, Optimal Gcost: 15.556347
Jump Point Search::A star my openlist elapsed time: 0.000079, Nodes Expanded: 1, Optimal Moves: 12, Optimal Gcost: 15.556347
(startX, startY): (100,180) goalX, goalY: (94,168)
Octile::			 A star my openlist elapsed time: 0.000049, Nodes Expanded: 25, Optimal Moves: 13, Optimal Gcost: 14.485280
Differential Heuristic::	 A star my openlist elapsed time: 0.000039, Nodes Expanded: 15, Optimal Moves: 13, Optimal G cost: 14.485281
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000032, Nodes Expanded: 12, Optimal Moves: 13, Optimal Gcost: 14.485281
Canonical A Star::A star my openlist elapsed time: 0.000021, Nodes Expanded: 12, Optimal Moves: 13, Optimal Gcost: 14.485281
Jump Point Search::A star my openlist elapsed time: 0.000127, Nodes Expanded: 1, Optimal Moves: 13, Optimal Gcost: 14.485281
(startX, startY): (100,183) goalX, goalY: (85,182)
Octile::			 A star my openlist elapsed time: 0.000062, Nodes Expanded: 29, Optimal Moves: 16, Optimal Gcost: 15.414213
Differential Heuristic::	 A star my openlist elapsed time: 0.000259, Nodes Expanded: 131, Optimal Moves: 16, Optimal G cost: 15.414213
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000063, Nodes Expanded: 28, Optimal Moves: 16, Optimal Gcost: 15.414213
Canonical A Star::A star my openlist elapsed time: 0.000033, Nodes Expanded: 28, Optimal Moves: 16, Optimal Gcost: 15.414213
Jump Point Search::A star my openlist elapsed time: 0.000120, Nodes Expanded: 1, Optimal Moves: 16, Optimal Gcost: 15.414213
(startX, startY): (100,23) goalX, goalY: (93,11)
Octile::			 A star my openlist elapsed time: 0.000066, Nodes Expanded: 33, Optimal Moves: 13, Optimal Gcost: 14.899493
Differential Heuristic::	 A star my openlist elapsed time: 0.000053, Nodes Expanded: 20, Optimal Moves: 13, Optimal G cost: 14.899494
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000033, Nodes Expanded: 12, Optimal Moves: 13, Optimal Gcost: 14.899494
Canonical A Star::A star my openlist elapsed time: 0.000022, Nodes Expanded: 12, Optimal Moves: 13, Optimal Gcost: 14.899494
Jump Point Search::A star my openlist elapsed time: 0.000046, Nodes Expanded: 1, Optimal Moves: 13, Optimal Gcost: 14.899494
(startX, startY): (10,104) goalX, goalY: (25,105)
Octile::			 A star my openlist elapsed time: 0.000066, Nodes Expanded: 34, Optimal Moves: 17, Optimal Gcost: 16.828426
Differential Heuristic::	 A star my openlist elapsed time: 0.000055, Nodes Expanded: 28, Optimal Moves: 17, Optimal G cost: 16.828426
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000053, Nodes Expanded: 27, Optimal Moves: 17, Optimal Gcost: 16.828426
Canonical A Star::A star my openlist elapsed time: 0.000031, Nodes Expanded: 27, Optimal Moves: 17, Optimal Gcost: 16.828426
Jump Point Search::A star my openlist elapsed time: 0.000035, Nodes Expanded: 3, Optimal Moves: 17, Optimal Gcost: 16.828426
(startX, startY): (10,108) goalX, goalY: (27,107)
Octile::			 A star my openlist elapsed time: 0.000065, Nodes Expanded: 32, Optimal Moves: 18, Optimal Gcost: 17.414213
Differential Heuristic::	 A star my openlist elapsed time: 0.000086, Nodes Expanded: 42, Optimal Moves: 18, Optimal G cost: 17.414213
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000065, Nodes Expanded: 29, Optimal Moves: 18, Optimal Gcost: 17.414213
Canonical A Star::A star my openlist elapsed time: 0.000046, Nodes Expanded: 30, Optimal Moves: 18, Optimal Gcost: 17.414213
Jump Point Search::A star my openlist elapsed time: 0.000036, Nodes Expanded: 3, Optimal Moves: 18, Optimal Gcost: 17.414213
(startX, startY): (10,73) goalX, goalY: (21,61)
Octile::			 A star my openlist elapsed time: 0.000083, Nodes Expanded: 55, Optimal Moves: 17, Optimal Gcost: 18.899492
Differential Heuristic::	 A star my openlist elapsed time: 0.000349, Nodes Expanded: 242, Optimal Moves: 17, Optimal G cost: 18.899492
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000091, Nodes Expanded: 55, Optimal Moves: 17, Optimal Gcost: 18.899492
Canonical A Star::A star my openlist elapsed time: 0.000061, Nodes Expanded: 58, Optimal Moves: 17, Optimal Gcost: 18.899494
Jump Point Search::A star my openlist elapsed time: 0.000046, Nodes Expanded: 4, Optimal Moves: 17, Optimal Gcost: 18.899494
(startX, startY): (10,74) goalX, goalY: (28,73)
Octile::			 A star my openlist elapsed time: 0.000070, Nodes Expanded: 35, Optimal Moves: 19, Optimal Gcost: 18.414213
Differential Heuristic::	 A star my openlist elapsed time: 0.000276, Nodes Expanded: 164, Optimal Moves: 19, Optimal G cost: 18.414213
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000077, Nodes Expanded: 35, Optimal Moves: 19, Optimal Gcost: 18.414213
Canonical A Star::A star my openlist elapsed time: 0.000035, Nodes Expanded: 35, Optimal Moves: 19, Optimal Gcost: 18.414213
Jump Point Search::A star my openlist elapsed time: 0.000031, Nodes Expanded: 1, Optimal Moves: 19, Optimal Gcost: 18.414213
(startX, startY): (10,91) goalX, goalY: (19,76)
Octile::			 A star my openlist elapsed time: 0.000058, Nodes Expanded: 30, Optimal Moves: 16, Optimal Gcost: 18.727921
Differential Heuristic::	 A star my openlist elapsed time: 0.000307, Nodes Expanded: 173, Optimal Moves: 16, Optimal G cost: 18.727921
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000065, Nodes Expanded: 30, Optimal Moves: 16, Optimal Gcost: 18.727921
Canonical A Star::A star my openlist elapsed time: 0.000049, Nodes Expanded: 40, Optimal Moves: 16, Optimal Gcost: 18.727921
Jump Point Search::A star my openlist elapsed time: 0.000055, Nodes Expanded: 2, Optimal Moves: 16, Optimal Gcost: 18.727921
(startX, startY): (10,94) goalX, goalY: (15,80)
Octile::			 A star my openlist elapsed time: 0.000078, Nodes Expanded: 51, Optimal Moves: 15, Optimal Gcost: 16.071066
Differential Heuristic::	 A star my openlist elapsed time: 0.000167, Nodes Expanded: 112, Optimal Moves: 15, Optimal G cost: 16.071066
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000090, Nodes Expanded: 51, Optimal Moves: 15, Optimal Gcost: 16.071066
Canonical A Star::A star my openlist elapsed time: 0.000053, Nodes Expanded: 59, Optimal Moves: 15, Optimal Gcost: 16.071068
Jump Point Search::A star my openlist elapsed time: 0.000032, Nodes Expanded: 1, Optimal Moves: 15, Optimal Gcost: 16.071068
(startX, startY): (100,142) goalX, goalY: (91,157)
Octile::			 A star my openlist elapsed time: 0.000060, Nodes Expanded: 31, Optimal Moves: 16, Optimal Gcost: 18.727921
Differential Heuristic::	 A star my openlist elapsed time: 0.000168, Nodes Expanded: 94, Optimal Moves: 16, Optimal G cost: 18.727921
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000066, Nodes Expanded: 30, Optimal Moves: 16, Optimal Gcost: 18.727921
Canonical A Star::A star my openlist elapsed time: 0.000039, Nodes Expanded: 30, Optimal Moves: 16, Optimal Gcost: 18.727921
Jump Point Search::A star my openlist elapsed time: 0.000131, Nodes Expanded: 1, Optimal Moves: 16, Optimal Gcost: 18.727921
(startX, startY): (100,15) goalX, goalY: (90,30)
Octile::			 A star my openlist elapsed time: 0.000086, Nodes Expanded: 47, Optimal Moves: 16, Optimal Gcost: 19.142132
Differential Heuristic::	 A star my openlist elapsed time: 0.000474, Nodes Expanded: 313, Optimal Moves: 16, Optimal G cost: 19.142132
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000093, Nodes Expanded: 47, Optimal Moves: 16, Optimal Gcost: 19.142132
Canonical A Star::A star my openlist elapsed time: 0.000057, Nodes Expanded: 52, Optimal Moves: 16, Optimal Gcost: 19.142134
Jump Point Search::A star my openlist elapsed time: 0.000057, Nodes Expanded: 1, Optimal Moves: 16, Optimal Gcost: 19.142134
(startX, startY): (100,152) goalX, goalY: (107,166)
Octile::			 A star my openlist elapsed time: 0.000085, Nodes Expanded: 53, Optimal Moves: 15, Optimal Gcost: 16.899494
Differential Heuristic::	 A star my openlist elapsed time: 0.000168, Nodes Expanded: 103, Optimal Moves: 15, Optimal G cost: 16.899494
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000090, Nodes Expanded: 51, Optimal Moves: 15, Optimal Gcost: 16.899494
Canonical A Star::A star my openlist elapsed time: 0.000053, Nodes Expanded: 50, Optimal Moves: 15, Optimal Gcost: 16.899494
Jump Point Search::A star my openlist elapsed time: 0.000082, Nodes Expanded: 2, Optimal Moves: 15, Optimal Gcost: 16.899494
(startX, startY): (100,166) goalX, goalY: (107,152)
Octile::			 A star my openlist elapsed time: 0.000084, Nodes Expanded: 54, Optimal Moves: 15, Optimal Gcost: 16.899492
Differential Heuristic::	 A star my openlist elapsed time: 0.000170, Nodes Expanded: 102, Optimal Moves: 15, Optimal G cost: 16.899494
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000096, Nodes Expanded: 56, Optimal Moves: 15, Optimal Gcost: 16.899494
Canonical A Star::A star my openlist elapsed time: 0.000057, Nodes Expanded: 55, Optimal Moves: 15, Optimal Gcost: 16.899494
Jump Point Search::A star my openlist elapsed time: 0.000104, Nodes Expanded: 1, Optimal Moves: 15, Optimal Gcost: 16.899494
(startX, startY): (10,132) goalX, goalY: (8,111)
Octile::			 A star my openlist elapsed time: 0.000086, Nodes Expanded: 59, Optimal Moves: 22, Optimal Gcost: 21.828426
Differential Heuristic::	 A star my openlist elapsed time: 0.000145, Nodes Expanded: 97, Optimal Moves: 22, Optimal G cost: 21.828426
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000076, Nodes Expanded: 43, Optimal Moves: 22, Optimal Gcost: 21.828426
Canonical A Star::A star my openlist elapsed time: 0.000038, Nodes Expanded: 43, Optimal Moves: 22, Optimal Gcost: 21.828426
Jump Point Search::A star my openlist elapsed time: 0.000036, Nodes Expanded: 1, Optimal Moves: 22, Optimal Gcost: 21.828426
(startX, startY): (10,60) goalX, goalY: (23,76)
Octile::			 A star my openlist elapsed time: 0.000121, Nodes Expanded: 75, Optimal Moves: 20, Optimal Gcost: 23.142134
Differential Heuristic::	 A star my openlist elapsed time: 0.000093, Nodes Expanded: 47, Optimal Moves: 20, Optimal G cost: 23.142134
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000080, Nodes Expanded: 41, Optimal Moves: 20, Optimal Gcost: 23.142134
Canonical A Star::A star my openlist elapsed time: 0.000052, Nodes Expanded: 41, Optimal Moves: 20, Optimal Gcost: 23.142134
Jump Point Search::A star my openlist elapsed time: 0.000053, Nodes Expanded: 3, Optimal Moves: 20, Optimal Gcost: 23.142134
(startX, startY): (10,91) goalX, goalY: (16,70)
Octile::			 A star my openlist elapsed time: 0.000083, Nodes Expanded: 52, Optimal Moves: 22, Optimal Gcost: 23.485281
Differential Heuristic::	 A star my openlist elapsed time: 0.000387, Nodes Expanded: 283, Optimal Moves: 22, Optimal G cost: 23.485279
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000096, Nodes Expanded: 52, Optimal Moves: 22, Optimal Gcost: 23.485281
Canonical A Star::A star my openlist elapsed time: 0.000051, Nodes Expanded: 52, Optimal Moves: 22, Optimal Gcost: 23.485281
Jump Point Search::A star my openlist elapsed time: 0.000056, Nodes Expanded: 2, Optimal Moves: 22, Optimal Gcost: 23.485281
(startX, startY): (100,103) goalX, goalY: (106,85)
Octile::			 A star my openlist elapsed time: 0.000088, Nodes Expanded: 55, Optimal Moves: 20, Optimal Gcost: 21.071066
Differential Heuristic::	 A star my openlist elapsed time: 0.000816, Nodes Expanded: 443, Optimal Moves: 20, Optimal G cost: 21.071066
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000098, Nodes Expanded: 55, Optimal Moves: 20, Optimal Gcost: 21.071066
Canonical A Star::A star my openlist elapsed time: 0.000058, Nodes Expanded: 62, Optimal Moves: 20, Optimal Gcost: 21.071068
Jump Point Search::A star my openlist elapsed time: 0.000071, Nodes Expanded: 3, Optimal Moves: 20, Optimal Gcost: 21.071068
(startX, startY): (100,108) goalX, goalY: (113,91)
Octile::			 A star my openlist elapsed time: 0.000082, Nodes Expanded: 44, Optimal Moves: 18, Optimal Gcost: 22.384773
Differential Heuristic::	 A star my openlist elapsed time: 0.000567, Nodes Expanded: 378, Optimal Moves: 18, Optimal G cost: 22.384773
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000089, Nodes Expanded: 44, Optimal Moves: 18, Optimal Gcost: 22.384773
Canonical A Star::A star my openlist elapsed time: 0.000058, Nodes Expanded: 44, Optimal Moves: 18, Optimal Gcost: 22.384773
Jump Point Search::A star my openlist elapsed time: 0.000046, Nodes Expanded: 2, Optimal Moves: 18, Optimal Gcost: 22.384773
(startX, startY): (100,146) goalX, goalY: (120,152)
Octile::			 A star my openlist elapsed time: 0.000095, Nodes Expanded: 53, Optimal Moves: 21, Optimal Gcost: 22.485279
Differential Heuristic::	 A star my openlist elapsed time: 0.000105, Nodes Expanded: 45, Optimal Moves: 21, Optimal G cost: 22.485281
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000059, Nodes Expanded: 21, Optimal Moves: 21, Optimal Gcost: 22.485281
Canonical A Star::A star my openlist elapsed time: 0.000032, Nodes Expanded: 21, Optimal Moves: 21, Optimal Gcost: 22.485281
Jump Point Search::A star my openlist elapsed time: 0.000069, Nodes Expanded: 1, Optimal Moves: 21, Optimal Gcost: 22.485281
(startX, startY): (100,148) goalX, goalY: (80,142)
Octile::			 A star my openlist elapsed time: 0.000094, Nodes Expanded: 53, Optimal Moves: 21, Optimal Gcost: 22.485279
Differential Heuristic::	 A star my openlist elapsed time: 0.000057, Nodes Expanded: 21, Optimal Moves: 21, Optimal G cost: 22.485281
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000057, Nodes Expanded: 21, Optimal Moves: 21, Optimal Gcost: 22.485281
Canonical A Star::A star my openlist elapsed time: 0.000031, Nodes Expanded: 21, Optimal Moves: 21, Optimal Gcost: 22.485281
Jump Point Search::A star my openlist elapsed time: 0.000100, Nodes Expanded: 2, Optimal Moves: 21, Optimal Gcost: 22.485281
(startX, startY): (100,149) goalX, goalY: (81,154)
Octile::			 A star my openlist elapsed time: 0.000100, Nodes Expanded: 61, Optimal Moves: 20, Optimal Gcost: 21.071066
Differential Heuristic::	 A star my openlist elapsed time: 0.000053, Nodes Expanded: 20, Optimal Moves: 20, Optimal G cost: 21.071068
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000053, Nodes Expanded: 20, Optimal Moves: 20, Optimal Gcost: 21.071068
Canonical A Star::A star my openlist elapsed time: 0.000030, Nodes Expanded: 20, Optimal Moves: 20, Optimal Gcost: 21.071068
Jump Point Search::A star my openlist elapsed time: 0.000122, Nodes Expanded: 2, Optimal Moves: 20, Optimal Gcost: 21.071068
(startX, startY): (100,161) goalX, goalY: (108,179)
Octile::			 A star my openlist elapsed time: 0.000089, Nodes Expanded: 54, Optimal Moves: 19, Optimal Gcost: 21.313705
Differential Heuristic::	 A star my openlist elapsed time: 0.000258, Nodes Expanded: 127, Optimal Moves: 19, Optimal G cost: 21.313707
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000093, Nodes Expanded: 51, Optimal Moves: 19, Optimal Gcost: 21.313705
Canonical A Star::A star my openlist elapsed time: 0.000055, Nodes Expanded: 54, Optimal Moves: 19, Optimal Gcost: 21.313707
Jump Point Search::A star my openlist elapsed time: 0.000027, Nodes Expanded: 1, Optimal Moves: 19, Optimal Gcost: 21.313707
(startX, startY): (100,163) goalX, goalY: (77,162)
Octile::			 A star my openlist elapsed time: 0.000082, Nodes Expanded: 40, Optimal Moves: 24, Optimal Gcost: 23.414213
Differential Heuristic::	 A star my openlist elapsed time: 0.000225, Nodes Expanded: 115, Optimal Moves: 24, Optimal G cost: 23.414213
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000085, Nodes Expanded: 39, Optimal Moves: 24, Optimal Gcost: 23.414213
Canonical A Star::A star my openlist elapsed time: 0.000068, Nodes Expanded: 39, Optimal Moves: 24, Optimal Gcost: 23.414213
Jump Point Search::A star my openlist elapsed time: 0.000157, Nodes Expanded: 2, Optimal Moves: 24, Optimal Gcost: 23.414213
(startX, startY): (10,118) goalX, goalY: (31,120)
Octile::			 A star my openlist elapsed time: 0.000071, Nodes Expanded: 40, Optimal Moves: 24, Optimal Gcost: 24.656853
Differential Heuristic::	 A star my openlist elapsed time: 0.000195, Nodes Expanded: 119, Optimal Moves: 24, Optimal G cost: 24.656853
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000083, Nodes Expanded: 43, Optimal Moves: 24, Optimal Gcost: 24.656853
Canonical A Star::A star my openlist elapsed time: 0.000049, Nodes Expanded: 43, Optimal Moves: 24, Optimal Gcost: 24.656853
Jump Point Search::A star my openlist elapsed time: 0.000067, Nodes Expanded: 5, Optimal Moves: 24, Optimal Gcost: 24.656853
(startX, startY): (10,60) goalX, goalY: (33,64)
Octile::			 A star my openlist elapsed time: 0.000074, Nodes Expanded: 37, Optimal Moves: 24, Optimal Gcost: 24.656853
Differential Heuristic::	 A star my openlist elapsed time: 0.000516, Nodes Expanded: 356, Optimal Moves: 24, Optimal G cost: 24.656853
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000082, Nodes Expanded: 37, Optimal Moves: 24, Optimal Gcost: 24.656853
Canonical A Star::A star my openlist elapsed time: 0.000086, Nodes Expanded: 94, Optimal Moves: 24, Optimal Gcost: 24.656855
Jump Point Search::A star my openlist elapsed time: 0.000028, Nodes Expanded: 2, Optimal Moves: 24, Optimal Gcost: 24.656855
(startX, startY): (10,90) goalX, goalY: (13,66)
Octile::			 A star my openlist elapsed time: 0.000153, Nodes Expanded: 105, Optimal Moves: 26, Optimal Gcost: 26.656853
Differential Heuristic::	 A star my openlist elapsed time: 0.000344, Nodes Expanded: 280, Optimal Moves: 26, Optimal G cost: 26.656853
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000164, Nodes Expanded: 99, Optimal Moves: 26, Optimal Gcost: 26.656853
Canonical A Star::A star my openlist elapsed time: 0.000093, Nodes Expanded: 98, Optimal Moves: 26, Optimal Gcost: 26.656853
Jump Point Search::A star my openlist elapsed time: 0.000071, Nodes Expanded: 5, Optimal Moves: 26, Optimal Gcost: 26.656853
(startX, startY): (100,150) goalX, goalY: (100,175)
Octile::			 A star my openlist elapsed time: 0.000076, Nodes Expanded: 46, Optimal Moves: 26, Optimal Gcost: 26.656853
Differential Heuristic::	 A star my openlist elapsed time: 0.000244, Nodes Expanded: 161, Optimal Moves: 26, Optimal G cost: 26.656853
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000082, Nodes Expanded: 44, Optimal Moves: 26, Optimal Gcost: 26.656853
Canonical A Star::A star my openlist elapsed time: 0.000044, Nodes Expanded: 44, Optimal Moves: 26, Optimal Gcost: 26.656853
Jump Point Search::A star my openlist elapsed time: 0.000124, Nodes Expanded: 3, Optimal Moves: 26, Optimal Gcost: 26.656853
(startX, startY): (100,153) goalX, goalY: (77,145)
Octile::			 A star my openlist elapsed time: 0.000101, Nodes Expanded: 53, Optimal Moves: 24, Optimal Gcost: 26.313705
Differential Heuristic::	 A star my openlist elapsed time: 0.000064, Nodes Expanded: 24, Optimal Moves: 24, Optimal G cost: 26.313707
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000065, Nodes Expanded: 24, Optimal Moves: 24, Optimal Gcost: 26.313707
Canonical A Star::A star my openlist elapsed time: 0.000034, Nodes Expanded: 24, Optimal Moves: 24, Optimal Gcost: 26.313707
Jump Point Search::A star my openlist elapsed time: 0.000079, Nodes Expanded: 1, Optimal Moves: 24, Optimal Gcost: 26.313707
(startX, startY): (100,163) goalX, goalY: (123,155)
Octile::			 A star my openlist elapsed time: 0.000130, Nodes Expanded: 69, Optimal Moves: 24, Optimal Gcost: 26.313707
Differential Heuristic::	 A star my openlist elapsed time: 0.000301, Nodes Expanded: 182, Optimal Moves: 24, Optimal G cost: 26.313705
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000294, Nodes Expanded: 69, Optimal Moves: 24, Optimal Gcost: 26.313707
Canonical A Star::A star my openlist elapsed time: 0.000120, Nodes Expanded: 61, Optimal Moves: 24, Optimal Gcost: 26.313707
Jump Point Search::A star my openlist elapsed time: 0.000102, Nodes Expanded: 1, Optimal Moves: 24, Optimal Gcost: 26.313707
(startX, startY): (100,166) goalX, goalY: (76,160)
Octile::			 A star my openlist elapsed time: 0.000115, Nodes Expanded: 69, Optimal Moves: 25, Optimal Gcost: 26.485279
Differential Heuristic::	 A star my openlist elapsed time: 0.000344, Nodes Expanded: 175, Optimal Moves: 25, Optimal G cost: 26.485279
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000123, Nodes Expanded: 66, Optimal Moves: 25, Optimal Gcost: 26.485279
Canonical A Star::A star my openlist elapsed time: 0.000073, Nodes Expanded: 68, Optimal Moves: 25, Optimal Gcost: 26.485279
Jump Point Search::A star my openlist elapsed time: 0.000137, Nodes Expanded: 2, Optimal Moves: 25, Optimal Gcost: 26.485279
(startX, startY): (100,168) goalX, goalY: (115,150)
Octile::			 A star my openlist elapsed time: 0.000089, Nodes Expanded: 51, Optimal Moves: 19, Optimal Gcost: 24.213200
Differential Heuristic::	 A star my openlist elapsed time: 0.000054, Nodes Expanded: 19, Optimal Moves: 19, Optimal G cost: 24.213200
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000067, Nodes Expanded: 19, Optimal Moves: 19, Optimal Gcost: 24.213200
Canonical A Star::A star my openlist elapsed time: 0.000035, Nodes Expanded: 19, Optimal Moves: 19, Optimal Gcost: 24.213200
Jump Point Search::A star my openlist elapsed time: 0.000100, Nodes Expanded: 1, Optimal Moves: 19, Optimal Gcost: 24.213200
(startX, startY): (100,170) goalX, goalY: (77,160)
Octile::			 A star my openlist elapsed time: 0.000138, Nodes Expanded: 88, Optimal Moves: 24, Optimal Gcost: 27.142132
Differential Heuristic::	 A star my openlist elapsed time: 0.000346, Nodes Expanded: 198, Optimal Moves: 24, Optimal G cost: 27.142132
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000154, Nodes Expanded: 85, Optimal Moves: 24, Optimal Gcost: 27.142132
Canonical A Star::A star my openlist elapsed time: 0.000080, Nodes Expanded: 82, Optimal Moves: 24, Optimal Gcost: 27.142134
Jump Point Search::A star my openlist elapsed time: 0.000125, Nodes Expanded: 1, Optimal Moves: 24, Optimal Gcost: 27.142134
(startX, startY): (100,187) goalX, goalY: (103,163)
Octile::			 A star my openlist elapsed time: 0.000070, Nodes Expanded: 40, Optimal Moves: 25, Optimal Gcost: 25.242640
Differential Heuristic::	 A star my openlist elapsed time: 0.000152, Nodes Expanded: 93, Optimal Moves: 25, Optimal G cost: 25.242640
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000074, Nodes Expanded: 37, Optimal Moves: 25, Optimal Gcost: 25.242640
Canonical A Star::A star my openlist elapsed time: 0.000041, Nodes Expanded: 45, Optimal Moves: 25, Optimal Gcost: 25.242641
Jump Point Search::A star my openlist elapsed time: 0.000205, Nodes Expanded: 1, Optimal Moves: 25, Optimal Gcost: 25.242641
(startX, startY): (10,129) goalX, goalY: (25,107)
Octile::			 A star my openlist elapsed time: 0.000275, Nodes Expanded: 187, Optimal Moves: 29, Optimal Gcost: 31.727919
Differential Heuristic::	 A star my openlist elapsed time: 0.000127, Nodes Expanded: 69, Optimal Moves: 29, Optimal G cost: 31.727919
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000117, Nodes Expanded: 63, Optimal Moves: 29, Optimal Gcost: 31.727919
Canonical A Star::A star my openlist elapsed time: 0.000068, Nodes Expanded: 64, Optimal Moves: 29, Optimal Gcost: 31.727919
Jump Point Search::A star my openlist elapsed time: 0.000129, Nodes Expanded: 2, Optimal Moves: 29, Optimal Gcost: 31.727919
(startX, startY): (10,130) goalX, goalY: (36,120)
Octile::			 A star my openlist elapsed time: 0.000147, Nodes Expanded: 91, Optimal Moves: 27, Optimal Gcost: 30.142132
Differential Heuristic::	 A star my openlist elapsed time: 0.000405, Nodes Expanded: 250, Optimal Moves: 27, Optimal G cost: 30.142132
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000159, Nodes Expanded: 88, Optimal Moves: 27, Optimal Gcost: 30.142132
Canonical A Star::A star my openlist elapsed time: 0.000121, Nodes Expanded: 79, Optimal Moves: 27, Optimal Gcost: 30.142134
Jump Point Search::A star my openlist elapsed time: 0.000053, Nodes Expanded: 2, Optimal Moves: 27, Optimal Gcost: 30.142134
(startX, startY): (10,59) goalX, goalY: (4,83)
Octile::			 A star my openlist elapsed time: 0.000154, Nodes Expanded: 124, Optimal Moves: 29, Optimal Gcost: 29.656853
Differential Heuristic::	 A star my openlist elapsed time: 0.000400, Nodes Expanded: 314, Optimal Moves: 29, Optimal G cost: 29.656853
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000185, Nodes Expanded: 124, Optimal Moves: 29, Optimal Gcost: 29.656853
Canonical A Star::A star my openlist elapsed time: 0.000106, Nodes Expanded: 124, Optimal Moves: 29, Optimal Gcost: 29.656853
Jump Point Search::A star my openlist elapsed time: 0.000064, Nodes Expanded: 12, Optimal Moves: 29, Optimal Gcost: 29.656853
(startX, startY): (10,89) goalX, goalY: (41,91)
Octile::			 A star my openlist elapsed time: 0.000149, Nodes Expanded: 81, Optimal Moves: 32, Optimal Gcost: 31.828426
Differential Heuristic::	 A star my openlist elapsed time: 0.000369, Nodes Expanded: 160, Optimal Moves: 32, Optimal G cost: 31.828426
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000158, Nodes Expanded: 80, Optimal Moves: 32, Optimal Gcost: 31.828426
Canonical A Star::A star my openlist elapsed time: 0.000087, Nodes Expanded: 80, Optimal Moves: 32, Optimal Gcost: 31.828426
Jump Point Search::A star my openlist elapsed time: 0.000054, Nodes Expanded: 3, Optimal Moves: 32, Optimal Gcost: 31.828426
(startX, startY): (10,90) goalX, goalY: (38,92)
Octile::			 A star my openlist elapsed time: 0.000134, Nodes Expanded: 78, Optimal Moves: 30, Optimal Gcost: 29.414213
Differential Heuristic::	 A star my openlist elapsed time: 0.000131, Nodes Expanded: 56, Optimal Moves: 30, Optimal G cost: 29.414213
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000201, Nodes Expanded: 56, Optimal Moves: 30, Optimal Gcost: 29.414213
Canonical A Star::A star my openlist elapsed time: 0.000064, Nodes Expanded: 56, Optimal Moves: 30, Optimal Gcost: 29.414213
Jump Point Search::A star my openlist elapsed time: 0.000053, Nodes Expanded: 3, Optimal Moves: 30, Optimal Gcost: 29.414213
(startX, startY): (100,105) goalX, goalY: (89,79)
Octile::			 A star my openlist elapsed time: 0.000115, Nodes Expanded: 63, Optimal Moves: 27, Optimal Gcost: 30.556345
Differential Heuristic::	 A star my openlist elapsed time: 0.001009, Nodes Expanded: 511, Optimal Moves: 27, Optimal G cost: 30.556347
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000124, Nodes Expanded: 63, Optimal Moves: 27, Optimal Gcost: 30.556345
Canonical A Star::A star my openlist elapsed time: 0.000077, Nodes Expanded: 69, Optimal Moves: 27, Optimal Gcost: 30.556347
Jump Point Search::A star my openlist elapsed time: 0.000077, Nodes Expanded: 3, Optimal Moves: 27, Optimal Gcost: 30.556347
(startX, startY): (100,109) goalX, goalY: (97,81)
Octile::			 A star my openlist elapsed time: 0.000073, Nodes Expanded: 41, Optimal Moves: 29, Optimal Gcost: 29.242640
Differential Heuristic::	 A star my openlist elapsed time: 0.001125, Nodes Expanded: 559, Optimal Moves: 29, Optimal G cost: 29.242641
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000099, Nodes Expanded: 41, Optimal Moves: 29, Optimal Gcost: 29.242640
Canonical A Star::A star my openlist elapsed time: 0.000073, Nodes Expanded: 65, Optimal Moves: 29, Optimal Gcost: 29.242641
Jump Point Search::A star my openlist elapsed time: 0.000070, Nodes Expanded: 4, Optimal Moves: 29, Optimal Gcost: 29.242641
(startX, startY): (100,143) goalX, goalY: (97,172)
Octile::			 A star my openlist elapsed time: 0.000199, Nodes Expanded: 119, Optimal Moves: 30, Optimal Gcost: 31.899492
Differential Heuristic::	 A star my openlist elapsed time: 0.000448, Nodes Expanded: 279, Optimal Moves: 30, Optimal G cost: 31.899492
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000207, Nodes Expanded: 109, Optimal Moves: 30, Optimal Gcost: 31.899492
Canonical A Star::A star my openlist elapsed time: 0.000112, Nodes Expanded: 109, Optimal Moves: 30, Optimal Gcost: 31.899494
Jump Point Search::A star my openlist elapsed time: 0.000256, Nodes Expanded: 3, Optimal Moves: 30, Optimal Gcost: 31.899494
(startX, startY): (100,162) goalX, goalY: (103,192)
Octile::			 A star my openlist elapsed time: 0.000116, Nodes Expanded: 58, Optimal Moves: 31, Optimal Gcost: 31.242640
Differential Heuristic::	 A star my openlist elapsed time: 0.000144, Nodes Expanded: 67, Optimal Moves: 31, Optimal G cost: 31.242640
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000094, Nodes Expanded: 36, Optimal Moves: 31, Optimal Gcost: 31.242640
Canonical A Star::A star my openlist elapsed time: 0.000075, Nodes Expanded: 75, Optimal Moves: 31, Optimal Gcost: 31.242641
Jump Point Search::A star my openlist elapsed time: 0.000154, Nodes Expanded: 1, Optimal Moves: 31, Optimal Gcost: 31.242641
(startX, startY): (100,176) goalX, goalY: (82,154)
Octile::			 A star my openlist elapsed time: 0.000153, Nodes Expanded: 67, Optimal Moves: 23, Optimal Gcost: 29.455839
Differential Heuristic::	 A star my openlist elapsed time: 0.000078, Nodes Expanded: 24, Optimal Moves: 23, Optimal G cost: 29.455839
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000075, Nodes Expanded: 23, Optimal Moves: 23, Optimal Gcost: 29.455839
Canonical A Star::A star my openlist elapsed time: 0.000052, Nodes Expanded: 23, Optimal Moves: 23, Optimal Gcost: 29.455839
Jump Point Search::A star my openlist elapsed time: 0.000155, Nodes Expanded: 1, Optimal Moves: 23, Optimal Gcost: 29.455839
(startX, startY): (10,111) goalX, goalY: (34,122)
Octile::			 A star my openlist elapsed time: 0.000396, Nodes Expanded: 198, Optimal Moves: 34, Optimal Gcost: 33.828426
Differential Heuristic::	 A star my openlist elapsed time: 0.000574, Nodes Expanded: 303, Optimal Moves: 34, Optimal G cost: 33.828426
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000303, Nodes Expanded: 142, Optimal Moves: 34, Optimal Gcost: 33.828426
Canonical A Star::A star my openlist elapsed time: 0.000167, Nodes Expanded: 142, Optimal Moves: 34, Optimal Gcost: 33.828426
Jump Point Search::A star my openlist elapsed time: 0.000105, Nodes Expanded: 4, Optimal Moves: 34, Optimal Gcost: 33.828426
(startX, startY): (10,125) goalX, goalY: (39,117)
Octile::			 A star my openlist elapsed time: 0.000209, Nodes Expanded: 121, Optimal Moves: 30, Optimal Gcost: 32.313705
Differential Heuristic::	 A star my openlist elapsed time: 0.000534, Nodes Expanded: 275, Optimal Moves: 30, Optimal G cost: 32.313705
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000231, Nodes Expanded: 116, Optimal Moves: 30, Optimal Gcost: 32.313705
Canonical A Star::A star my openlist elapsed time: 0.000154, Nodes Expanded: 135, Optimal Moves: 30, Optimal Gcost: 32.313705
Jump Point Search::A star my openlist elapsed time: 0.000109, Nodes Expanded: 7, Optimal Moves: 30, Optimal Gcost: 32.313705
(startX, startY): (10,127) goalX, goalY: (36,146)
Octile::			 A star my openlist elapsed time: 0.000081, Nodes Expanded: 26, Optimal Moves: 27, Optimal Gcost: 33.870052
Differential Heuristic::	 A star my openlist elapsed time: 0.000497, Nodes Expanded: 249, Optimal Moves: 27, Optimal G cost: 33.870052
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000211, Nodes Expanded: 82, Optimal Moves: 27, Optimal Gcost: 33.870052
Canonical A Star::A star my openlist elapsed time: 0.000117, Nodes Expanded: 82, Optimal Moves: 27, Optimal Gcost: 33.870056
Jump Point Search::A star my openlist elapsed time: 0.000068, Nodes Expanded: 4, Optimal Moves: 27, Optimal Gcost: 33.870056
(startX, startY): (10,63) goalX, goalY: (31,86)
Octile::			 A star my openlist elapsed time: 0.000189, Nodes Expanded: 93, Optimal Moves: 27, Optimal Gcost: 33.455841
Differential Heuristic::	 A star my openlist elapsed time: 0.000626, Nodes Expanded: 290, Optimal Moves: 27, Optimal G cost: 33.455837
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000207, Nodes Expanded: 92, Optimal Moves: 27, Optimal Gcost: 33.455841
Canonical A Star::A star my openlist elapsed time: 0.000128, Nodes Expanded: 92, Optimal Moves: 27, Optimal Gcost: 33.455841
Jump Point Search::A star my openlist elapsed time: 0.000088, Nodes Expanded: 6, Optimal Moves: 27, Optimal Gcost: 33.455841
(startX, startY): (10,73) goalX, goalY: (37,86)
Octile::			 A star my openlist elapsed time: 0.000213, Nodes Expanded: 116, Optimal Moves: 28, Optimal Gcost: 32.384773
Differential Heuristic::	 A star my openlist elapsed time: 0.000378, Nodes Expanded: 158, Optimal Moves: 28, Optimal G cost: 32.384773
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000221, Nodes Expanded: 106, Optimal Moves: 28, Optimal Gcost: 32.384773
Canonical A Star::A star my openlist elapsed time: 0.000114, Nodes Expanded: 88, Optimal Moves: 28, Optimal Gcost: 32.384773
Jump Point Search::A star my openlist elapsed time: 0.000083, Nodes Expanded: 7, Optimal Moves: 28, Optimal Gcost: 32.384773
(startX, startY): (10,74) goalX, goalY: (44,73)
Octile::			 A star my openlist elapsed time: 0.000230, Nodes Expanded: 96, Optimal Moves: 35, Optimal Gcost: 35.242638
Differential Heuristic::	 A star my openlist elapsed time: 0.001698, Nodes Expanded: 754, Optimal Moves: 35, Optimal G cost: 35.242638
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000223, Nodes Expanded: 96, Optimal Moves: 35, Optimal Gcost: 35.242638
Canonical A Star::A star my openlist elapsed time: 0.000194, Nodes Expanded: 96, Optimal Moves: 35, Optimal Gcost: 35.242638
Jump Point Search::A star my openlist elapsed time: 0.000057, Nodes Expanded: 4, Optimal Moves: 35, Optimal Gcost: 35.242638
(startX, startY): (100,11) goalX, goalY: (102,46)
Octile::			 A star my openlist elapsed time: 0.000125, Nodes Expanded: 78, Optimal Moves: 36, Optimal Gcost: 35.828426
Differential Heuristic::	 A star my openlist elapsed time: 0.000813, Nodes Expanded: 383, Optimal Moves: 36, Optimal G cost: 35.828426
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000168, Nodes Expanded: 78, Optimal Moves: 36, Optimal Gcost: 35.828426
Canonical A Star::A star my openlist elapsed time: 0.000059, Nodes Expanded: 54, Optimal Moves: 36, Optimal Gcost: 35.828426
Jump Point Search::A star my openlist elapsed time: 0.000064, Nodes Expanded: 2, Optimal Moves: 36, Optimal Gcost: 35.828426
(startX, startY): (100,11) goalX, goalY: (104,44)
Octile::			 A star my openlist elapsed time: 0.000189, Nodes Expanded: 111, Optimal Moves: 34, Optimal Gcost: 34.656853
Differential Heuristic::	 A star my openlist elapsed time: 0.000565, Nodes Expanded: 316, Optimal Moves: 34, Optimal G cost: 34.656853
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000216, Nodes Expanded: 109, Optimal Moves: 34, Optimal Gcost: 34.656853
Canonical A Star::A star my openlist elapsed time: 0.000104, Nodes Expanded: 102, Optimal Moves: 34, Optimal Gcost: 34.656853
Jump Point Search::A star my openlist elapsed time: 0.000069, Nodes Expanded: 3, Optimal Moves: 34, Optimal Gcost: 34.656853
(startX, startY): (100,149) goalX, goalY: (92,177)
Octile::			 A star my openlist elapsed time: 0.000214, Nodes Expanded: 108, Optimal Moves: 29, Optimal Gcost: 32.970558
Differential Heuristic::	 A star my openlist elapsed time: 0.000502, Nodes Expanded: 256, Optimal Moves: 29, Optimal G cost: 32.970558
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000181, Nodes Expanded: 76, Optimal Moves: 29, Optimal Gcost: 32.970558
Canonical A Star::A star my openlist elapsed time: 0.000109, Nodes Expanded: 77, Optimal Moves: 29, Optimal Gcost: 32.970558
Jump Point Search::A star my openlist elapsed time: 0.000160, Nodes Expanded: 3, Optimal Moves: 29, Optimal Gcost: 32.970558
(startX, startY): (100,153) goalX, goalY: (76,171)
Octile::			 A star my openlist elapsed time: 0.000139, Nodes Expanded: 61, Optimal Moves: 27, Optimal Gcost: 32.627411
Differential Heuristic::	 A star my openlist elapsed time: 0.000379, Nodes Expanded: 160, Optimal Moves: 27, Optimal G cost: 32.627411
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000142, Nodes Expanded: 56, Optimal Moves: 27, Optimal Gcost: 32.627411
Canonical A Star::A star my openlist elapsed time: 0.000090, Nodes Expanded: 56, Optimal Moves: 27, Optimal Gcost: 32.627411
Jump Point Search::A star my openlist elapsed time: 0.000165, Nodes Expanded: 3, Optimal Moves: 27, Optimal Gcost: 32.627411
(startX, startY): (10,103) goalX, goalY: (25,128)
Octile::			 A star my openlist elapsed time: 0.000646, Nodes Expanded: 330, Optimal Moves: 34, Optimal Gcost: 39.213200
Differential Heuristic::	 A star my openlist elapsed time: 0.000559, Nodes Expanded: 261, Optimal Moves: 34, Optimal G cost: 39.213200
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000428, Nodes Expanded: 189, Optimal Moves: 34, Optimal Gcost: 39.213200
Canonical A Star::A star my openlist elapsed time: 0.000245, Nodes Expanded: 189, Optimal Moves: 34, Optimal Gcost: 39.213200
Jump Point Search::A star my openlist elapsed time: 0.000132, Nodes Expanded: 8, Optimal Moves: 34, Optimal Gcost: 39.213200
(startX, startY): (10,109) goalX, goalY: (45,99)
Octile::			 A star my openlist elapsed time: 0.000398, Nodes Expanded: 202, Optimal Moves: 36, Optimal Gcost: 39.142139
Differential Heuristic::	 A star my openlist elapsed time: 0.000724, Nodes Expanded: 311, Optimal Moves: 36, Optimal G cost: 39.142139
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000388, Nodes Expanded: 196, Optimal Moves: 36, Optimal Gcost: 39.142139
Canonical A Star::A star my openlist elapsed time: 0.000246, Nodes Expanded: 195, Optimal Moves: 36, Optimal Gcost: 39.142139
Jump Point Search::A star my openlist elapsed time: 0.000084, Nodes Expanded: 4, Optimal Moves: 36, Optimal Gcost: 39.142139
(startX, startY): (10,133) goalX, goalY: (27,111)
Octile::			 A star my openlist elapsed time: 0.000609, Nodes Expanded: 352, Optimal Moves: 35, Optimal Gcost: 36.071068
Differential Heuristic::	 A star my openlist elapsed time: 0.000265, Nodes Expanded: 127, Optimal Moves: 35, Optimal G cost: 36.071068
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000243, Nodes Expanded: 112, Optimal Moves: 35, Optimal Gcost: 36.071068
Canonical A Star::A star my openlist elapsed time: 0.000132, Nodes Expanded: 112, Optimal Moves: 35, Optimal Gcost: 36.071068
Jump Point Search::A star my openlist elapsed time: 0.000085, Nodes Expanded: 5, Optimal Moves: 35, Optimal Gcost: 36.071068
(startX, startY): (100,105) goalX, goalY: (80,76)
Octile::			 A star my openlist elapsed time: 0.000318, Nodes Expanded: 146, Optimal Moves: 30, Optimal Gcost: 37.284264
Differential Heuristic::	 A star my openlist elapsed time: 0.000568, Nodes Expanded: 253, Optimal Moves: 30, Optimal G cost: 37.284264
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000334, Nodes Expanded: 128, Optimal Moves: 30, Optimal Gcost: 37.284264
Canonical A Star::A star my openlist elapsed time: 0.000170, Nodes Expanded: 120, Optimal Moves: 30, Optimal Gcost: 37.284264
Jump Point Search::A star my openlist elapsed time: 0.000097, Nodes Expanded: 3, Optimal Moves: 30, Optimal Gcost: 37.284264
(startX, startY): (100,106) goalX, goalY: (80,75)
Octile::			 A star my openlist elapsed time: 0.000355, Nodes Expanded: 179, Optimal Moves: 32, Optimal Gcost: 39.284267
Differential Heuristic::	 A star my openlist elapsed time: 0.000667, Nodes Expanded: 305, Optimal Moves: 32, Optimal G cost: 39.284267
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000378, Nodes Expanded: 164, Optimal Moves: 32, Optimal Gcost: 39.284267
Canonical A Star::A star my openlist elapsed time: 0.000196, Nodes Expanded: 154, Optimal Moves: 32, Optimal Gcost: 39.284267
Jump Point Search::A star my openlist elapsed time: 0.000096, Nodes Expanded: 3, Optimal Moves: 32, Optimal Gcost: 39.284267
(startX, startY): (100,141) goalX, goalY: (134,131)
Octile::			 A star my openlist elapsed time: 0.000184, Nodes Expanded: 86, Optimal Moves: 35, Optimal Gcost: 38.142139
Differential Heuristic::	 A star my openlist elapsed time: 0.000164, Nodes Expanded: 59, Optimal Moves: 35, Optimal G cost: 38.142139
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000132, Nodes Expanded: 42, Optimal Moves: 35, Optimal Gcost: 38.142139
Canonical A Star::A star my openlist elapsed time: 0.000068, Nodes Expanded: 42, Optimal Moves: 35, Optimal Gcost: 38.142139
Jump Point Search::A star my openlist elapsed time: 0.000130, Nodes Expanded: 4, Optimal Moves: 35, Optimal Gcost: 38.142139
(startX, startY): (100,166) goalX, goalY: (77,138)
Octile::			 A star my openlist elapsed time: 0.000245, Nodes Expanded: 114, Optimal Moves: 32, Optimal Gcost: 39.284264
Differential Heuristic::	 A star my openlist elapsed time: 0.001407, Nodes Expanded: 550, Optimal Moves: 32, Optimal G cost: 39.284264
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000260, Nodes Expanded: 111, Optimal Moves: 32, Optimal Gcost: 39.284264
Canonical A Star::A star my openlist elapsed time: 0.000161, Nodes Expanded: 114, Optimal Moves: 32, Optimal Gcost: 39.284264
Jump Point Search::A star my openlist elapsed time: 0.000177, Nodes Expanded: 2, Optimal Moves: 32, Optimal Gcost: 39.284264
(startX, startY): (100,172) goalX, goalY: (115,141)
Octile::			 A star my openlist elapsed time: 0.000230, Nodes Expanded: 121, Optimal Moves: 32, Optimal Gcost: 37.213196
Differential Heuristic::	 A star my openlist elapsed time: 0.000862, Nodes Expanded: 411, Optimal Moves: 32, Optimal G cost: 37.213200
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000262, Nodes Expanded: 121, Optimal Moves: 32, Optimal Gcost: 37.213196
Canonical A Star::A star my openlist elapsed time: 0.000195, Nodes Expanded: 176, Optimal Moves: 32, Optimal Gcost: 37.213200
Jump Point Search::A star my openlist elapsed time: 0.000237, Nodes Expanded: 4, Optimal Moves: 32, Optimal Gcost: 37.213200
(startX, startY): (100,177) goalX, goalY: (64,168)
Octile::			 A star my openlist elapsed time: 0.000419, Nodes Expanded: 215, Optimal Moves: 37, Optimal Gcost: 39.727921
Differential Heuristic::	 A star my openlist elapsed time: 0.001652, Nodes Expanded: 630, Optimal Moves: 37, Optimal G cost: 39.727921
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000379, Nodes Expanded: 215, Optimal Moves: 37, Optimal Gcost: 39.727921
Canonical A Star::A star my openlist elapsed time: 0.000239, Nodes Expanded: 223, Optimal Moves: 37, Optimal Gcost: 39.727921
Jump Point Search::A star my openlist elapsed time: 0.000146, Nodes Expanded: 2, Optimal Moves: 37, Optimal Gcost: 39.727921
(startX, startY): (100,178) goalX, goalY: (118,146)
Octile::			 A star my openlist elapsed time: 0.000256, Nodes Expanded: 154, Optimal Moves: 33, Optimal Gcost: 39.455841
Differential Heuristic::	 A star my openlist elapsed time: 0.000131, Nodes Expanded: 55, Optimal Moves: 33, Optimal G cost: 39.455841
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000130, Nodes Expanded: 53, Optimal Moves: 33, Optimal Gcost: 39.455841
Canonical A Star::A star my openlist elapsed time: 0.000082, Nodes Expanded: 53, Optimal Moves: 33, Optimal Gcost: 39.455841
Jump Point Search::A star my openlist elapsed time: 0.000154, Nodes Expanded: 3, Optimal Moves: 33, Optimal Gcost: 39.455841
(startX, startY): (10,109) goalX, goalY: (47,100)
Octile::			 A star my openlist elapsed time: 0.000408, Nodes Expanded: 229, Optimal Moves: 38, Optimal Gcost: 40.727924
Differential Heuristic::	 A star my openlist elapsed time: 0.000719, Nodes Expanded: 371, Optimal Moves: 38, Optimal G cost: 40.727924
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000436, Nodes Expanded: 223, Optimal Moves: 38, Optimal Gcost: 40.727924
Canonical A Star::A star my openlist elapsed time: 0.000229, Nodes Expanded: 222, Optimal Moves: 38, Optimal Gcost: 40.727924
Jump Point Search::A star my openlist elapsed time: 0.000072, Nodes Expanded: 4, Optimal Moves: 38, Optimal Gcost: 40.727924
(startX, startY): (10,113) goalX, goalY: (49,117)
Octile::			 A star my openlist elapsed time: 0.000257, Nodes Expanded: 121, Optimal Moves: 40, Optimal Gcost: 42.313705
Differential Heuristic::	 A star my openlist elapsed time: 0.001114, Nodes Expanded: 580, Optimal Moves: 40, Optimal G cost: 42.313705
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000273, Nodes Expanded: 121, Optimal Moves: 40, Optimal Gcost: 42.313705
Canonical A Star::A star my openlist elapsed time: 0.000162, Nodes Expanded: 136, Optimal Moves: 40, Optimal Gcost: 42.313705
Jump Point Search::A star my openlist elapsed time: 0.000062, Nodes Expanded: 2, Optimal Moves: 40, Optimal Gcost: 42.313705
(startX, startY): (10,115) goalX, goalY: (38,136)
Octile::			 A star my openlist elapsed time: 0.000400, Nodes Expanded: 243, Optimal Moves: 34, Optimal Gcost: 40.455841
Differential Heuristic::	 A star my openlist elapsed time: 0.000131, Nodes Expanded: 54, Optimal Moves: 34, Optimal G cost: 40.455841
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000106, Nodes Expanded: 51, Optimal Moves: 34, Optimal Gcost: 40.455841
Canonical A Star::A star my openlist elapsed time: 0.000068, Nodes Expanded: 51, Optimal Moves: 34, Optimal Gcost: 40.455841
Jump Point Search::A star my openlist elapsed time: 0.000085, Nodes Expanded: 4, Optimal Moves: 34, Optimal Gcost: 40.455841
(startX, startY): (10,118) goalX, goalY: (42,135)
Octile::			 A star my openlist elapsed time: 0.000453, Nodes Expanded: 296, Optimal Moves: 35, Optimal Gcost: 41.870056
Differential Heuristic::	 A star my openlist elapsed time: 0.000132, Nodes Expanded: 66, Optimal Moves: 35, Optimal G cost: 41.870056
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000123, Nodes Expanded: 59, Optimal Moves: 35, Optimal Gcost: 41.870056
Canonical A Star::A star my openlist elapsed time: 0.000076, Nodes Expanded: 59, Optimal Moves: 35, Optimal Gcost: 41.870056
Jump Point Search::A star my openlist elapsed time: 0.000065, Nodes Expanded: 4, Optimal Moves: 35, Optimal Gcost: 41.870056
(startX, startY): (10,89) goalX, goalY: (42,102)
Octile::			 A star my openlist elapsed time: 0.000386, Nodes Expanded: 238, Optimal Moves: 40, Optimal Gcost: 41.485283
Differential Heuristic::	 A star my openlist elapsed time: 0.000226, Nodes Expanded: 102, Optimal Moves: 40, Optimal G cost: 41.485283
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000230, Nodes Expanded: 99, Optimal Moves: 40, Optimal Gcost: 41.485283
Canonical A Star::A star my openlist elapsed time: 0.000110, Nodes Expanded: 99, Optimal Moves: 40, Optimal Gcost: 41.485283
Jump Point Search::A star my openlist elapsed time: 0.000057, Nodes Expanded: 4, Optimal Moves: 40, Optimal Gcost: 41.485283
(startX, startY): (10,91) goalX, goalY: (46,73)
Octile::			 A star my openlist elapsed time: 0.000329, Nodes Expanded: 183, Optimal Moves: 37, Optimal Gcost: 43.455845
Differential Heuristic::	 A star my openlist elapsed time: 0.001415, Nodes Expanded: 815, Optimal Moves: 37, Optimal G cost: 43.455845
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000356, Nodes Expanded: 181, Optimal Moves: 37, Optimal Gcost: 43.455845
Canonical A Star::A star my openlist elapsed time: 0.000198, Nodes Expanded: 183, Optimal Moves: 37, Optimal Gcost: 43.455849
Jump Point Search::A star my openlist elapsed time: 0.000063, Nodes Expanded: 5, Optimal Moves: 37, Optimal Gcost: 43.455849
(startX, startY): (100,101) goalX, goalY: (70,78)
Octile::			 A star my openlist elapsed time: 0.000266, Nodes Expanded: 168, Optimal Moves: 33, Optimal Gcost: 40.698483
Differential Heuristic::	 A star my openlist elapsed time: 0.000651, Nodes Expanded: 362, Optimal Moves: 33, Optimal G cost: 40.698483
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000284, Nodes Expanded: 160, Optimal Moves: 33, Optimal Gcost: 40.698483
Canonical A Star::A star my openlist elapsed time: 0.000166, Nodes Expanded: 160, Optimal Moves: 33, Optimal Gcost: 40.698483
Jump Point Search::A star my openlist elapsed time: 0.000073, Nodes Expanded: 5, Optimal Moves: 33, Optimal Gcost: 40.698483
(startX, startY): (100,144) goalX, goalY: (96,183)
Octile::			 A star my openlist elapsed time: 0.000282, Nodes Expanded: 194, Optimal Moves: 40, Optimal Gcost: 42.313705
Differential Heuristic::	 A star my openlist elapsed time: 0.000468, Nodes Expanded: 305, Optimal Moves: 40, Optimal G cost: 42.313705
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000259, Nodes Expanded: 128, Optimal Moves: 40, Optimal Gcost: 42.313705
Canonical A Star::A star my openlist elapsed time: 0.000114, Nodes Expanded: 119, Optimal Moves: 40, Optimal Gcost: 42.313705
Jump Point Search::A star my openlist elapsed time: 0.000185, Nodes Expanded: 3, Optimal Moves: 40, Optimal Gcost: 42.313705
(startX, startY): (100,147) goalX, goalY: (81,179)
Octile::			 A star my openlist elapsed time: 0.000253, Nodes Expanded: 169, Optimal Moves: 35, Optimal Gcost: 41.041626
Differential Heuristic::	 A star my openlist elapsed time: 0.000770, Nodes Expanded: 461, Optimal Moves: 35, Optimal G cost: 41.041626
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000286, Nodes Expanded: 165, Optimal Moves: 35, Optimal Gcost: 41.041626
Canonical A Star::A star my openlist elapsed time: 0.000158, Nodes Expanded: 172, Optimal Moves: 35, Optimal Gcost: 41.041626
Jump Point Search::A star my openlist elapsed time: 0.000123, Nodes Expanded: 2, Optimal Moves: 35, Optimal Gcost: 41.041626
(startX, startY): (100,148) goalX, goalY: (139,137)
Octile::			 A star my openlist elapsed time: 0.000222, Nodes Expanded: 119, Optimal Moves: 40, Optimal Gcost: 43.556343
Differential Heuristic::	 A star my openlist elapsed time: 0.000499, Nodes Expanded: 246, Optimal Moves: 40, Optimal G cost: 43.556347
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000385, Nodes Expanded: 178, Optimal Moves: 40, Optimal Gcost: 43.556347
Canonical A Star::A star my openlist elapsed time: 0.000174, Nodes Expanded: 178, Optimal Moves: 40, Optimal Gcost: 43.556347
Jump Point Search::A star my openlist elapsed time: 0.000190, Nodes Expanded: 4, Optimal Moves: 40, Optimal Gcost: 43.556347
(startX, startY): (10,121) goalX, goalY: (46,130)
Octile::			 A star my openlist elapsed time: 0.000863, Nodes Expanded: 497, Optimal Moves: 38, Optimal Gcost: 46.112701
Differential Heuristic::	 A star my openlist elapsed time: 0.000547, Nodes Expanded: 317, Optimal Moves: 38, Optimal G cost: 46.112701
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000475, Nodes Expanded: 229, Optimal Moves: 38, Optimal Gcost: 46.112701
Canonical A Star::A star my openlist elapsed time: 0.000227, Nodes Expanded: 229, Optimal Moves: 38, Optimal Gcost: 46.112701
Jump Point Search::A star my openlist elapsed time: 0.000076, Nodes Expanded: 8, Optimal Moves: 38, Optimal Gcost: 46.112701
(startX, startY): (10,63) goalX, goalY: (46,85)
Octile::			 A star my openlist elapsed time: 0.000799, Nodes Expanded: 392, Optimal Moves: 41, Optimal Gcost: 47.455841
Differential Heuristic::	 A star my openlist elapsed time: 0.001665, Nodes Expanded: 939, Optimal Moves: 41, Optimal G cost: 47.455841
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000732, Nodes Expanded: 392, Optimal Moves: 41, Optimal Gcost: 47.455841
Canonical A Star::A star my openlist elapsed time: 0.000382, Nodes Expanded: 390, Optimal Moves: 41, Optimal Gcost: 47.455841
Jump Point Search::A star my openlist elapsed time: 0.000108, Nodes Expanded: 12, Optimal Moves: 41, Optimal Gcost: 47.455841
(startX, startY): (100,149) goalX, goalY: (132,125)
Octile::			 A star my openlist elapsed time: 0.000550, Nodes Expanded: 340, Optimal Moves: 40, Optimal Gcost: 46.041634
Differential Heuristic::	 A star my openlist elapsed time: 0.000445, Nodes Expanded: 279, Optimal Moves: 40, Optimal G cost: 46.041634
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000353, Nodes Expanded: 201, Optimal Moves: 40, Optimal Gcost: 46.041634
Canonical A Star::A star my openlist elapsed time: 0.000199, Nodes Expanded: 208, Optimal Moves: 40, Optimal Gcost: 46.041634
Jump Point Search::A star my openlist elapsed time: 0.000125, Nodes Expanded: 3, Optimal Moves: 40, Optimal Gcost: 46.041634
(startX, startY): (100,149) goalX, goalY: (72,181)
Octile::			 A star my openlist elapsed time: 0.000342, Nodes Expanded: 228, Optimal Moves: 37, Optimal Gcost: 45.941128
Differential Heuristic::	 A star my openlist elapsed time: 0.000817, Nodes Expanded: 461, Optimal Moves: 37, Optimal G cost: 45.941128
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000361, Nodes Expanded: 212, Optimal Moves: 37, Optimal Gcost: 45.941128
Canonical A Star::A star my openlist elapsed time: 0.000202, Nodes Expanded: 212, Optimal Moves: 37, Optimal Gcost: 45.941128
Jump Point Search::A star my openlist elapsed time: 0.000128, Nodes Expanded: 4, Optimal Moves: 37, Optimal Gcost: 45.941128
(startX, startY): (100,150) goalX, goalY: (140,133)
Octile::			 A star my openlist elapsed time: 0.000617, Nodes Expanded: 316, Optimal Moves: 41, Optimal Gcost: 47.041634
Differential Heuristic::	 A star my openlist elapsed time: 0.000706, Nodes Expanded: 401, Optimal Moves: 41, Optimal G cost: 47.041634
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000448, Nodes Expanded: 234, Optimal Moves: 41, Optimal Gcost: 47.041634
Canonical A Star::A star my openlist elapsed time: 0.000230, Nodes Expanded: 264, Optimal Moves: 41, Optimal Gcost: 47.041634
Jump Point Search::A star my openlist elapsed time: 0.000126, Nodes Expanded: 4, Optimal Moves: 41, Optimal Gcost: 47.041634
(startX, startY): (100,49) goalX, goalY: (139,65)
Octile::			 A star my openlist elapsed time: 0.000300, Nodes Expanded: 159, Optimal Moves: 40, Optimal Gcost: 45.627422
Differential Heuristic::	 A star my openlist elapsed time: 0.000440, Nodes Expanded: 250, Optimal Moves: 40, Optimal G cost: 45.627422
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000291, Nodes Expanded: 147, Optimal Moves: 40, Optimal Gcost: 45.627422
Canonical A Star::A star my openlist elapsed time: 0.000158, Nodes Expanded: 147, Optimal Moves: 40, Optimal Gcost: 45.627422
Jump Point Search::A star my openlist elapsed time: 0.000129, Nodes Expanded: 5, Optimal Moves: 40, Optimal Gcost: 45.627422
(startX, startY): (100,49) goalX, goalY: (140,60)
Octile::			 A star my openlist elapsed time: 0.000250, Nodes Expanded: 155, Optimal Moves: 41, Optimal Gcost: 44.556347
Differential Heuristic::	 A star my openlist elapsed time: 0.000787, Nodes Expanded: 449, Optimal Moves: 41, Optimal G cost: 44.556347
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000271, Nodes Expanded: 150, Optimal Moves: 41, Optimal Gcost: 44.556347
Canonical A Star::A star my openlist elapsed time: 0.000143, Nodes Expanded: 150, Optimal Moves: 41, Optimal Gcost: 44.556347
Jump Point Search::A star my openlist elapsed time: 0.000128, Nodes Expanded: 5, Optimal Moves: 41, Optimal Gcost: 44.556347
(startX, startY): (100,50) goalX, goalY: (135,69)
Octile::			 A star my openlist elapsed time: 0.000253, Nodes Expanded: 167, Optimal Moves: 39, Optimal Gcost: 45.455853
Differential Heuristic::	 A star my openlist elapsed time: 0.000283, Nodes Expanded: 156, Optimal Moves: 39, Optimal G cost: 45.455853
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000243, Nodes Expanded: 125, Optimal Moves: 39, Optimal Gcost: 45.455853
Canonical A Star::A star my openlist elapsed time: 0.000144, Nodes Expanded: 125, Optimal Moves: 39, Optimal Gcost: 45.455853
Jump Point Search::A star my openlist elapsed time: 0.000128, Nodes Expanded: 5, Optimal Moves: 39, Optimal Gcost: 45.455853
(startX, startY): (100,7) goalX, goalY: (92,48)
Octile::			 A star my openlist elapsed time: 0.000174, Nodes Expanded: 114, Optimal Moves: 42, Optimal Gcost: 44.313705
Differential Heuristic::	 A star my openlist elapsed time: 0.000977, Nodes Expanded: 696, Optimal Moves: 42, Optimal G cost: 44.313705
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000199, Nodes Expanded: 114, Optimal Moves: 42, Optimal Gcost: 44.313705
Canonical A Star::A star my openlist elapsed time: 0.000262, Nodes Expanded: 108, Optimal Moves: 42, Optimal Gcost: 44.313705
Jump Point Search::A star my openlist elapsed time: 0.000055, Nodes Expanded: 2, Optimal Moves: 42, Optimal Gcost: 44.313705
(startX, startY): (101,102) goalX, goalY: (74,66)
Octile::			 A star my openlist elapsed time: 0.000276, Nodes Expanded: 172, Optimal Moves: 38, Optimal Gcost: 47.769558
Differential Heuristic::	 A star my openlist elapsed time: 0.001013, Nodes Expanded: 532, Optimal Moves: 38, Optimal G cost: 47.769558
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000307, Nodes Expanded: 171, Optimal Moves: 38, Optimal Gcost: 47.769558
Canonical A Star::A star my openlist elapsed time: 0.000187, Nodes Expanded: 171, Optimal Moves: 38, Optimal Gcost: 47.769558
Jump Point Search::A star my openlist elapsed time: 0.000089, Nodes Expanded: 5, Optimal Moves: 38, Optimal Gcost: 47.769558
(startX, startY): (10,112) goalX, goalY: (41,85)
Octile::			 A star my openlist elapsed time: 0.000567, Nodes Expanded: 361, Optimal Moves: 48, Optimal Gcost: 51.556351
Differential Heuristic::	 A star my openlist elapsed time: 0.000587, Nodes Expanded: 317, Optimal Moves: 48, Optimal G cost: 51.556351
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000589, Nodes Expanded: 301, Optimal Moves: 48, Optimal Gcost: 51.556351
Canonical A Star::A star my openlist elapsed time: 0.000284, Nodes Expanded: 300, Optimal Moves: 48, Optimal Gcost: 51.556351
Jump Point Search::A star my openlist elapsed time: 0.000068, Nodes Expanded: 4, Optimal Moves: 48, Optimal Gcost: 51.556351
(startX, startY): (10,84) goalX, goalY: (42,109)
Octile::			 A star my openlist elapsed time: 0.000536, Nodes Expanded: 336, Optimal Moves: 47, Optimal Gcost: 50.556351
Differential Heuristic::	 A star my openlist elapsed time: 0.000321, Nodes Expanded: 172, Optimal Moves: 47, Optimal G cost: 50.556355
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000373, Nodes Expanded: 154, Optimal Moves: 47, Optimal Gcost: 50.556355
Canonical A Star::A star my openlist elapsed time: 0.000157, Nodes Expanded: 154, Optimal Moves: 47, Optimal Gcost: 50.556355
Jump Point Search::A star my openlist elapsed time: 0.000096, Nodes Expanded: 7, Optimal Moves: 47, Optimal Gcost: 50.556355
(startX, startY): (100,161) goalX, goalY: (138,129)
Octile::			 A star my openlist elapsed time: 0.000290, Nodes Expanded: 173, Optimal Moves: 39, Optimal Gcost: 51.254845
Differential Heuristic::	 A star my openlist elapsed time: 0.000377, Nodes Expanded: 238, Optimal Moves: 39, Optimal G cost: 51.254845
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000276, Nodes Expanded: 147, Optimal Moves: 39, Optimal Gcost: 51.254845
Canonical A Star::A star my openlist elapsed time: 0.000147, Nodes Expanded: 147, Optimal Moves: 39, Optimal Gcost: 51.254845
Jump Point Search::A star my openlist elapsed time: 0.000104, Nodes Expanded: 4, Optimal Moves: 39, Optimal Gcost: 51.254845
(startX, startY): (100,167) goalX, goalY: (55,177)
Octile::			 A star my openlist elapsed time: 0.000670, Nodes Expanded: 386, Optimal Moves: 46, Optimal Gcost: 49.142136
Differential Heuristic::	 A star my openlist elapsed time: 0.001291, Nodes Expanded: 668, Optimal Moves: 46, Optimal G cost: 49.142136
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000243, Nodes Expanded: 122, Optimal Moves: 46, Optimal Gcost: 49.142136
Canonical A Star::A star my openlist elapsed time: 0.000139, Nodes Expanded: 122, Optimal Moves: 46, Optimal Gcost: 49.142136
Jump Point Search::A star my openlist elapsed time: 0.000140, Nodes Expanded: 3, Optimal Moves: 46, Optimal Gcost: 49.142136
(startX, startY): (100,170) goalX, goalY: (122,132)
Octile::			 A star my openlist elapsed time: 0.000711, Nodes Expanded: 446, Optimal Moves: 39, Optimal Gcost: 48.769554
Differential Heuristic::	 A star my openlist elapsed time: 0.000792, Nodes Expanded: 469, Optimal Moves: 39, Optimal G cost: 48.769554
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000488, Nodes Expanded: 280, Optimal Moves: 39, Optimal Gcost: 48.769554
Canonical A Star::A star my openlist elapsed time: 0.000274, Nodes Expanded: 280, Optimal Moves: 39, Optimal Gcost: 48.769554
Jump Point Search::A star my openlist elapsed time: 0.000212, Nodes Expanded: 6, Optimal Moves: 39, Optimal Gcost: 48.769554
(startX, startY): (100,39) goalX, goalY: (137,67)
Octile::			 A star my openlist elapsed time: 0.000295, Nodes Expanded: 175, Optimal Moves: 38, Optimal Gcost: 48.597992
Differential Heuristic::	 A star my openlist elapsed time: 0.000313, Nodes Expanded: 152, Optimal Moves: 38, Optimal G cost: 48.597992
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000293, Nodes Expanded: 152, Optimal Moves: 38, Optimal Gcost: 48.597992
Canonical A Star::A star my openlist elapsed time: 0.000149, Nodes Expanded: 152, Optimal Moves: 38, Optimal Gcost: 48.597992
Jump Point Search::A star my openlist elapsed time: 0.000118, Nodes Expanded: 4, Optimal Moves: 38, Optimal Gcost: 48.597992
(startX, startY): (100,50) goalX, goalY: (142,68)
Octile::			 A star my openlist elapsed time: 0.000311, Nodes Expanded: 184, Optimal Moves: 43, Optimal Gcost: 50.284283
Differential Heuristic::	 A star my openlist elapsed time: 0.000478, Nodes Expanded: 280, Optimal Moves: 43, Optimal G cost: 50.284283
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000329, Nodes Expanded: 170, Optimal Moves: 43, Optimal Gcost: 50.284283
Canonical A Star::A star my openlist elapsed time: 0.000165, Nodes Expanded: 170, Optimal Moves: 43, Optimal Gcost: 50.284283
Jump Point Search::A star my openlist elapsed time: 0.000128, Nodes Expanded: 5, Optimal Moves: 43, Optimal Gcost: 50.284283
(startX, startY): (101,149) goalX, goalY: (83,189)
Octile::			 A star my openlist elapsed time: 0.000400, Nodes Expanded: 259, Optimal Moves: 41, Optimal Gcost: 48.284271
Differential Heuristic::	 A star my openlist elapsed time: 0.000905, Nodes Expanded: 496, Optimal Moves: 41, Optimal G cost: 48.284271
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000271, Nodes Expanded: 133, Optimal Moves: 41, Optimal Gcost: 48.284271
Canonical A Star::A star my openlist elapsed time: 0.000135, Nodes Expanded: 133, Optimal Moves: 41, Optimal Gcost: 48.284271
Jump Point Search::A star my openlist elapsed time: 0.000121, Nodes Expanded: 3, Optimal Moves: 41, Optimal Gcost: 48.284271
(startX, startY): (101,164) goalX, goalY: (139,141)
Octile::			 A star my openlist elapsed time: 0.000519, Nodes Expanded: 352, Optimal Moves: 40, Optimal Gcost: 49.769550
Differential Heuristic::	 A star my openlist elapsed time: 0.000673, Nodes Expanded: 417, Optimal Moves: 40, Optimal G cost: 49.769550
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000536, Nodes Expanded: 298, Optimal Moves: 40, Optimal Gcost: 49.769550
Canonical A Star::A star my openlist elapsed time: 0.000269, Nodes Expanded: 298, Optimal Moves: 40, Optimal Gcost: 49.769550
Jump Point Search::A star my openlist elapsed time: 0.000163, Nodes Expanded: 3, Optimal Moves: 40, Optimal Gcost: 49.769550
(startX, startY): (101,45) goalX, goalY: (140,72)
Octile::			 A star my openlist elapsed time: 0.000262, Nodes Expanded: 154, Optimal Moves: 41, Optimal Gcost: 50.769566
Differential Heuristic::	 A star my openlist elapsed time: 0.000129, Nodes Expanded: 63, Optimal Moves: 41, Optimal G cost: 50.769569
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000133, Nodes Expanded: 63, Optimal Moves: 41, Optimal Gcost: 50.769569
Canonical A Star::A star my openlist elapsed time: 0.000082, Nodes Expanded: 63, Optimal Moves: 41, Optimal Gcost: 50.769569
Jump Point Search::A star my openlist elapsed time: 0.000109, Nodes Expanded: 5, Optimal Moves: 41, Optimal Gcost: 50.769569
(startX, startY): (10,114) goalX, goalY: (38,84)
Octile::			 A star my openlist elapsed time: 0.000748, Nodes Expanded: 491, Optimal Moves: 49, Optimal Gcost: 54.627422
Differential Heuristic::	 A star my openlist elapsed time: 0.000589, Nodes Expanded: 316, Optimal Moves: 49, Optimal G cost: 54.627422
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000580, Nodes Expanded: 295, Optimal Moves: 49, Optimal Gcost: 54.627422
Canonical A Star::A star my openlist elapsed time: 0.000303, Nodes Expanded: 294, Optimal Moves: 49, Optimal Gcost: 54.627422
Jump Point Search::A star my openlist elapsed time: 0.000075, Nodes Expanded: 5, Optimal Moves: 49, Optimal Gcost: 54.627422
(startX, startY): (10,86) goalX, goalY: (52,109)
Octile::			 A star my openlist elapsed time: 0.000474, Nodes Expanded: 279, Optimal Moves: 47, Optimal Gcost: 53.870075
Differential Heuristic::	 A star my openlist elapsed time: 0.000939, Nodes Expanded: 522, Optimal Moves: 47, Optimal G cost: 53.870075
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000572, Nodes Expanded: 279, Optimal Moves: 47, Optimal Gcost: 53.870075
Canonical A Star::A star my openlist elapsed time: 0.000295, Nodes Expanded: 279, Optimal Moves: 47, Optimal Gcost: 53.870075
Jump Point Search::A star my openlist elapsed time: 0.000103, Nodes Expanded: 7, Optimal Moves: 47, Optimal Gcost: 53.870075
(startX, startY): (10,91) goalX, goalY: (29,108)
Octile::			 A star my openlist elapsed time: 0.000881, Nodes Expanded: 531, Optimal Moves: 51, Optimal Gcost: 54.142147
Differential Heuristic::	 A star my openlist elapsed time: 0.000741, Nodes Expanded: 427, Optimal Moves: 51, Optimal G cost: 54.142147
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000539, Nodes Expanded: 305, Optimal Moves: 51, Optimal Gcost: 54.142147
Canonical A Star::A star my openlist elapsed time: 0.000372, Nodes Expanded: 307, Optimal Moves: 51, Optimal Gcost: 54.142147
Jump Point Search::A star my openlist elapsed time: 0.000101, Nodes Expanded: 8, Optimal Moves: 51, Optimal Gcost: 54.142147
(startX, startY): (10,91) goalX, goalY: (44,116)
Octile::			 A star my openlist elapsed time: 0.000466, Nodes Expanded: 334, Optimal Moves: 54, Optimal Gcost: 55.485287
Differential Heuristic::	 A star my openlist elapsed time: 0.000507, Nodes Expanded: 298, Optimal Moves: 54, Optimal G cost: 55.485287
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000450, Nodes Expanded: 245, Optimal Moves: 54, Optimal Gcost: 55.485287
Canonical A Star::A star my openlist elapsed time: 0.000253, Nodes Expanded: 245, Optimal Moves: 54, Optimal Gcost: 55.485287
Jump Point Search::A star my openlist elapsed time: 0.000078, Nodes Expanded: 5, Optimal Moves: 54, Optimal Gcost: 55.485287
(startX, startY): (100,111) goalX, goalY: (71,71)
Octile::			 A star my openlist elapsed time: 0.000276, Nodes Expanded: 167, Optimal Moves: 41, Optimal Gcost: 52.012203
Differential Heuristic::	 A star my openlist elapsed time: 0.000252, Nodes Expanded: 133, Optimal Moves: 41, Optimal G cost: 52.012207
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000270, Nodes Expanded: 116, Optimal Moves: 41, Optimal Gcost: 52.012203
Canonical A Star::A star my openlist elapsed time: 0.000148, Nodes Expanded: 118, Optimal Moves: 41, Optimal Gcost: 52.012207
Jump Point Search::A star my openlist elapsed time: 0.000093, Nodes Expanded: 5, Optimal Moves: 41, Optimal Gcost: 52.012207
(startX, startY): (100,39) goalX, goalY: (145,46)
Octile::			 A star my openlist elapsed time: 0.000739, Nodes Expanded: 435, Optimal Moves: 46, Optimal Gcost: 54.526917
Differential Heuristic::	 A star my openlist elapsed time: 0.001169, Nodes Expanded: 602, Optimal Moves: 46, Optimal G cost: 54.526920
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000796, Nodes Expanded: 428, Optimal Moves: 46, Optimal Gcost: 54.526917
Canonical A Star::A star my openlist elapsed time: 0.000410, Nodes Expanded: 428, Optimal Moves: 46, Optimal Gcost: 54.526920
Jump Point Search::A star my openlist elapsed time: 0.000135, Nodes Expanded: 8, Optimal Moves: 46, Optimal Gcost: 54.526920
(startX, startY): (100,8) goalX, goalY: (123,49)
Octile::			 A star my openlist elapsed time: 0.000457, Nodes Expanded: 345, Optimal Moves: 48, Optimal Gcost: 54.041641
Differential Heuristic::	 A star my openlist elapsed time: 0.000189, Nodes Expanded: 123, Optimal Moves: 48, Optimal G cost: 54.041645
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000205, Nodes Expanded: 114, Optimal Moves: 48, Optimal Gcost: 54.041645
Canonical A Star::A star my openlist elapsed time: 0.000111, Nodes Expanded: 114, Optimal Moves: 48, Optimal Gcost: 54.041645
Jump Point Search::A star my openlist elapsed time: 0.000072, Nodes Expanded: 6, Optimal Moves: 48, Optimal Gcost: 54.041645
(startX, startY): (100,83) goalX, goalY: (57,58)
Octile::			 A star my openlist elapsed time: 0.000288, Nodes Expanded: 176, Optimal Moves: 44, Optimal Gcost: 53.355354
Differential Heuristic::	 A star my openlist elapsed time: 0.001202, Nodes Expanded: 601, Optimal Moves: 44, Optimal G cost: 53.355354
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000310, Nodes Expanded: 176, Optimal Moves: 44, Optimal Gcost: 53.355354
Canonical A Star::A star my openlist elapsed time: 0.000193, Nodes Expanded: 176, Optimal Moves: 44, Optimal Gcost: 53.355354
Jump Point Search::A star my openlist elapsed time: 0.000122, Nodes Expanded: 4, Optimal Moves: 44, Optimal Gcost: 53.355354
(startX, startY): (101,111) goalX, goalY: (66,75)
Octile::			 A star my openlist elapsed time: 0.000646, Nodes Expanded: 403, Optimal Moves: 45, Optimal Gcost: 55.183777
Differential Heuristic::	 A star my openlist elapsed time: 0.001288, Nodes Expanded: 669, Optimal Moves: 45, Optimal G cost: 55.183777
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000754, Nodes Expanded: 397, Optimal Moves: 45, Optimal Gcost: 55.183777
Canonical A Star::A star my openlist elapsed time: 0.000434, Nodes Expanded: 397, Optimal Moves: 45, Optimal Gcost: 55.183777
Jump Point Search::A star my openlist elapsed time: 0.000106, Nodes Expanded: 9, Optimal Moves: 45, Optimal Gcost: 55.183777
(startX, startY): (101,146) goalX, goalY: (82,191)
Octile::			 A star my openlist elapsed time: 0.000496, Nodes Expanded: 318, Optimal Moves: 46, Optimal Gcost: 53.698490
Differential Heuristic::	 A star my openlist elapsed time: 0.001188, Nodes Expanded: 661, Optimal Moves: 46, Optimal G cost: 53.698490
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000412, Nodes Expanded: 188, Optimal Moves: 46, Optimal Gcost: 53.698490
Canonical A Star::A star my openlist elapsed time: 0.000182, Nodes Expanded: 188, Optimal Moves: 46, Optimal Gcost: 53.698490
Jump Point Search::A star my openlist elapsed time: 0.000123, Nodes Expanded: 3, Optimal Moves: 46, Optimal Gcost: 53.698490
(startX, startY): (10,102) goalX, goalY: (25,88)
Octile::			 A star my openlist elapsed time: 0.000914, Nodes Expanded: 552, Optimal Moves: 55, Optimal Gcost: 58.556358
Differential Heuristic::	 A star my openlist elapsed time: 0.000758, Nodes Expanded: 426, Optimal Moves: 55, Optimal G cost: 58.556358
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000649, Nodes Expanded: 354, Optimal Moves: 55, Optimal Gcost: 58.556358
Canonical A Star::A star my openlist elapsed time: 0.000366, Nodes Expanded: 354, Optimal Moves: 55, Optimal Gcost: 58.556358
Jump Point Search::A star my openlist elapsed time: 0.000113, Nodes Expanded: 11, Optimal Moves: 55, Optimal Gcost: 58.556358
(startX, startY): (10,58) goalX, goalY: (60,68)
Octile::			 A star my openlist elapsed time: 0.000566, Nodes Expanded: 318, Optimal Moves: 51, Optimal Gcost: 57.455849
Differential Heuristic::	 A star my openlist elapsed time: 0.001745, Nodes Expanded: 946, Optimal Moves: 51, Optimal G cost: 57.455849
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000916, Nodes Expanded: 315, Optimal Moves: 51, Optimal Gcost: 57.455849
Canonical A Star::A star my openlist elapsed time: 0.000452, Nodes Expanded: 315, Optimal Moves: 51, Optimal Gcost: 57.455849
Jump Point Search::A star my openlist elapsed time: 0.000109, Nodes Expanded: 12, Optimal Moves: 51, Optimal Gcost: 57.455849
(startX, startY): (10,65) goalX, goalY: (48,55)
Octile::			 A star my openlist elapsed time: 0.000951, Nodes Expanded: 589, Optimal Moves: 55, Optimal Gcost: 58.970566
Differential Heuristic::	 A star my openlist elapsed time: 0.001503, Nodes Expanded: 927, Optimal Moves: 55, Optimal G cost: 58.970566
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001063, Nodes Expanded: 569, Optimal Moves: 55, Optimal Gcost: 58.970566
Canonical A Star::A star my openlist elapsed time: 0.000632, Nodes Expanded: 569, Optimal Moves: 55, Optimal Gcost: 58.970566
Jump Point Search::A star my openlist elapsed time: 0.000338, Nodes Expanded: 28, Optimal Moves: 55, Optimal Gcost: 58.970566
(startX, startY): (10,73) goalX, goalY: (60,58)
Octile::			 A star my openlist elapsed time: 0.000587, Nodes Expanded: 323, Optimal Moves: 52, Optimal Gcost: 58.455864
Differential Heuristic::	 A star my openlist elapsed time: 0.002119, Nodes Expanded: 1099, Optimal Moves: 52, Optimal G cost: 58.455864
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000650, Nodes Expanded: 321, Optimal Moves: 52, Optimal Gcost: 58.455864
Canonical A Star::A star my openlist elapsed time: 0.000333, Nodes Expanded: 322, Optimal Moves: 52, Optimal Gcost: 58.455864
Jump Point Search::A star my openlist elapsed time: 0.000135, Nodes Expanded: 14, Optimal Moves: 52, Optimal Gcost: 58.455864
(startX, startY): (10,76) goalX, goalY: (45,110)
Octile::			 A star my openlist elapsed time: 0.000907, Nodes Expanded: 533, Optimal Moves: 51, Optimal Gcost: 57.870064
Differential Heuristic::	 A star my openlist elapsed time: 0.000989, Nodes Expanded: 527, Optimal Moves: 51, Optimal G cost: 57.870068
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000819, Nodes Expanded: 431, Optimal Moves: 51, Optimal Gcost: 57.870068
Canonical A Star::A star my openlist elapsed time: 0.000456, Nodes Expanded: 431, Optimal Moves: 51, Optimal Gcost: 57.870068
Jump Point Search::A star my openlist elapsed time: 0.000124, Nodes Expanded: 21, Optimal Moves: 51, Optimal Gcost: 57.870068
(startX, startY): (10,77) goalX, goalY: (50,109)
Octile::			 A star my openlist elapsed time: 0.000848, Nodes Expanded: 473, Optimal Moves: 50, Optimal Gcost: 58.526928
Differential Heuristic::	 A star my openlist elapsed time: 0.001373, Nodes Expanded: 738, Optimal Moves: 50, Optimal G cost: 58.526928
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000868, Nodes Expanded: 473, Optimal Moves: 50, Optimal Gcost: 58.526928
Canonical A Star::A star my openlist elapsed time: 0.000544, Nodes Expanded: 473, Optimal Moves: 50, Optimal Gcost: 58.526928
Jump Point Search::A star my openlist elapsed time: 0.000147, Nodes Expanded: 25, Optimal Moves: 50, Optimal Gcost: 58.526928
(startX, startY): (10,85) goalX, goalY: (29,112)
Octile::			 A star my openlist elapsed time: 0.001041, Nodes Expanded: 623, Optimal Moves: 52, Optimal Gcost: 58.870071
Differential Heuristic::	 A star my openlist elapsed time: 0.001217, Nodes Expanded: 669, Optimal Moves: 52, Optimal G cost: 58.870075
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000877, Nodes Expanded: 486, Optimal Moves: 52, Optimal Gcost: 58.870075
Canonical A Star::A star my openlist elapsed time: 0.000522, Nodes Expanded: 486, Optimal Moves: 52, Optimal Gcost: 58.870075
Jump Point Search::A star my openlist elapsed time: 0.000171, Nodes Expanded: 20, Optimal Moves: 52, Optimal Gcost: 58.870075
(startX, startY): (10,88) goalX, goalY: (54,59)
Octile::			 A star my openlist elapsed time: 0.001090, Nodes Expanded: 582, Optimal Moves: 51, Optimal Gcost: 59.526924
Differential Heuristic::	 A star my openlist elapsed time: 0.001997, Nodes Expanded: 1122, Optimal Moves: 51, Optimal G cost: 59.526924
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001581, Nodes Expanded: 581, Optimal Moves: 51, Optimal Gcost: 59.526924
Canonical A Star::A star my openlist elapsed time: 0.000955, Nodes Expanded: 581, Optimal Moves: 51, Optimal Gcost: 59.526924
Jump Point Search::A star my openlist elapsed time: 0.000264, Nodes Expanded: 22, Optimal Moves: 51, Optimal Gcost: 59.526924
(startX, startY): (10,89) goalX, goalY: (24,105)
Octile::			 A star my openlist elapsed time: 0.001652, Nodes Expanded: 727, Optimal Moves: 56, Optimal Gcost: 58.727928
Differential Heuristic::	 A star my openlist elapsed time: 0.001225, Nodes Expanded: 459, Optimal Moves: 56, Optimal G cost: 58.727928
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000752, Nodes Expanded: 366, Optimal Moves: 56, Optimal Gcost: 58.727928
Canonical A Star::A star my openlist elapsed time: 0.000733, Nodes Expanded: 366, Optimal Moves: 56, Optimal Gcost: 58.727928
Jump Point Search::A star my openlist elapsed time: 0.000140, Nodes Expanded: 13, Optimal Moves: 56, Optimal Gcost: 58.727928
(startX, startY): (100,143) goalX, goalY: (58,182)
Octile::			 A star my openlist elapsed time: 0.000312, Nodes Expanded: 159, Optimal Moves: 43, Optimal Gcost: 58.154346
Differential Heuristic::	 A star my openlist elapsed time: 0.000265, Nodes Expanded: 110, Optimal Moves: 43, Optimal G cost: 58.154346
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000203, Nodes Expanded: 107, Optimal Moves: 43, Optimal Gcost: 58.154346
Canonical A Star::A star my openlist elapsed time: 0.000173, Nodes Expanded: 107, Optimal Moves: 43, Optimal Gcost: 58.154346
Jump Point Search::A star my openlist elapsed time: 0.000167, Nodes Expanded: 1, Optimal Moves: 43, Optimal Gcost: 58.154346
(startX, startY): (10,118) goalX, goalY: (29,86)
Octile::			 A star my openlist elapsed time: 0.001315, Nodes Expanded: 813, Optimal Moves: 55, Optimal Gcost: 62.698494
Differential Heuristic::	 A star my openlist elapsed time: 0.000867, Nodes Expanded: 488, Optimal Moves: 55, Optimal G cost: 62.698494
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000773, Nodes Expanded: 433, Optimal Moves: 55, Optimal Gcost: 62.698494
Canonical A Star::A star my openlist elapsed time: 0.000449, Nodes Expanded: 433, Optimal Moves: 55, Optimal Gcost: 62.698494
Jump Point Search::A star my openlist elapsed time: 0.000129, Nodes Expanded: 9, Optimal Moves: 55, Optimal Gcost: 62.698494
(startX, startY): (10,125) goalX, goalY: (61,138)
Octile::			 A star my openlist elapsed time: 0.001195, Nodes Expanded: 589, Optimal Moves: 53, Optimal Gcost: 60.284279
Differential Heuristic::	 A star my openlist elapsed time: 0.000431, Nodes Expanded: 208, Optimal Moves: 53, Optimal G cost: 60.284279
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000372, Nodes Expanded: 194, Optimal Moves: 53, Optimal Gcost: 60.284279
Canonical A Star::A star my openlist elapsed time: 0.000222, Nodes Expanded: 194, Optimal Moves: 53, Optimal Gcost: 60.284279
Jump Point Search::A star my openlist elapsed time: 0.000106, Nodes Expanded: 9, Optimal Moves: 53, Optimal Gcost: 60.284279
(startX, startY): (10,64) goalX, goalY: (65,63)
Octile::			 A star my openlist elapsed time: 0.000719, Nodes Expanded: 384, Optimal Moves: 56, Optimal Gcost: 62.041641
Differential Heuristic::	 A star my openlist elapsed time: 0.002091, Nodes Expanded: 1154, Optimal Moves: 56, Optimal G cost: 62.041641
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000722, Nodes Expanded: 381, Optimal Moves: 56, Optimal Gcost: 62.041641
Canonical A Star::A star my openlist elapsed time: 0.000415, Nodes Expanded: 381, Optimal Moves: 56, Optimal Gcost: 62.041641
Jump Point Search::A star my openlist elapsed time: 0.000134, Nodes Expanded: 9, Optimal Moves: 56, Optimal Gcost: 62.041641
(startX, startY): (10,92) goalX, goalY: (31,120)
Octile::			 A star my openlist elapsed time: 0.000851, Nodes Expanded: 514, Optimal Moves: 59, Optimal Gcost: 63.384789
Differential Heuristic::	 A star my openlist elapsed time: 0.000274, Nodes Expanded: 143, Optimal Moves: 59, Optimal G cost: 63.384789
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000282, Nodes Expanded: 143, Optimal Moves: 59, Optimal Gcost: 63.384789
Canonical A Star::A star my openlist elapsed time: 0.000178, Nodes Expanded: 143, Optimal Moves: 59, Optimal Gcost: 63.384789
Jump Point Search::A star my openlist elapsed time: 0.000101, Nodes Expanded: 5, Optimal Moves: 59, Optimal Gcost: 63.384789
(startX, startY): (10,92) goalX, goalY: (45,121)
Octile::			 A star my openlist elapsed time: 0.000545, Nodes Expanded: 380, Optimal Moves: 59, Optimal Gcost: 61.313713
Differential Heuristic::	 A star my openlist elapsed time: 0.000869, Nodes Expanded: 507, Optimal Moves: 59, Optimal G cost: 61.313713
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000577, Nodes Expanded: 342, Optimal Moves: 59, Optimal Gcost: 61.313713
Canonical A Star::A star my openlist elapsed time: 0.000345, Nodes Expanded: 342, Optimal Moves: 59, Optimal Gcost: 61.313713
Jump Point Search::A star my openlist elapsed time: 0.000086, Nodes Expanded: 7, Optimal Moves: 59, Optimal Gcost: 61.313713
(startX, startY): (100,105) goalX, goalY: (60,62)
Octile::			 A star my openlist elapsed time: 0.000275, Nodes Expanded: 154, Optimal Moves: 45, Optimal Gcost: 60.154350
Differential Heuristic::	 A star my openlist elapsed time: 0.001064, Nodes Expanded: 553, Optimal Moves: 45, Optimal G cost: 60.154350
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000303, Nodes Expanded: 154, Optimal Moves: 45, Optimal Gcost: 60.154350
Canonical A Star::A star my openlist elapsed time: 0.000269, Nodes Expanded: 154, Optimal Moves: 45, Optimal Gcost: 60.154350
Jump Point Search::A star my openlist elapsed time: 0.000155, Nodes Expanded: 5, Optimal Moves: 45, Optimal Gcost: 60.154350
(startX, startY): (100,168) goalX, goalY: (148,139)
Octile::			 A star my openlist elapsed time: 0.000539, Nodes Expanded: 331, Optimal Moves: 52, Optimal Gcost: 61.769554
Differential Heuristic::	 A star my openlist elapsed time: 0.001182, Nodes Expanded: 669, Optimal Moves: 52, Optimal G cost: 61.769554
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000581, Nodes Expanded: 331, Optimal Moves: 52, Optimal Gcost: 61.769554
Canonical A Star::A star my openlist elapsed time: 0.000318, Nodes Expanded: 331, Optimal Moves: 52, Optimal Gcost: 61.769554
Jump Point Search::A star my openlist elapsed time: 0.000175, Nodes Expanded: 6, Optimal Moves: 52, Optimal Gcost: 61.769554
(startX, startY): (100,42) goalX, goalY: (148,59)
Octile::			 A star my openlist elapsed time: 0.001303, Nodes Expanded: 711, Optimal Moves: 56, Optimal Gcost: 61.627419
Differential Heuristic::	 A star my openlist elapsed time: 0.001563, Nodes Expanded: 754, Optimal Moves: 56, Optimal G cost: 61.627419
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001341, Nodes Expanded: 658, Optimal Moves: 56, Optimal Gcost: 61.627419
Canonical A Star::A star my openlist elapsed time: 0.000751, Nodes Expanded: 658, Optimal Moves: 56, Optimal Gcost: 61.627419
Jump Point Search::A star my openlist elapsed time: 0.000171, Nodes Expanded: 17, Optimal Moves: 56, Optimal Gcost: 61.627419
(startX, startY): (100,48) goalX, goalY: (143,82)
Octile::			 A star my openlist elapsed time: 0.001156, Nodes Expanded: 330, Optimal Moves: 52, Optimal Gcost: 61.769573
Differential Heuristic::	 A star my openlist elapsed time: 0.000235, Nodes Expanded: 117, Optimal Moves: 52, Optimal G cost: 61.769573
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000228, Nodes Expanded: 113, Optimal Moves: 52, Optimal Gcost: 61.769573
Canonical A Star::A star my openlist elapsed time: 0.000155, Nodes Expanded: 113, Optimal Moves: 52, Optimal Gcost: 61.769573
Jump Point Search::A star my openlist elapsed time: 0.000139, Nodes Expanded: 6, Optimal Moves: 52, Optimal Gcost: 61.769573
(startX, startY): (100,51) goalX, goalY: (141,81)
Octile::			 A star my openlist elapsed time: 0.000472, Nodes Expanded: 297, Optimal Moves: 51, Optimal Gcost: 60.355354
Differential Heuristic::	 A star my openlist elapsed time: 0.000212, Nodes Expanded: 107, Optimal Moves: 51, Optimal G cost: 60.355354
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000248, Nodes Expanded: 94, Optimal Moves: 51, Optimal Gcost: 60.355354
Canonical A Star::A star my openlist elapsed time: 0.000127, Nodes Expanded: 96, Optimal Moves: 51, Optimal Gcost: 60.355358
Jump Point Search::A star my openlist elapsed time: 0.000137, Nodes Expanded: 6, Optimal Moves: 51, Optimal Gcost: 60.355358
(startX, startY): (10,60) goalX, goalY: (49,105)
Octile::			 A star my openlist elapsed time: 0.000651, Nodes Expanded: 384, Optimal Moves: 51, Optimal Gcost: 64.083282
Differential Heuristic::	 A star my openlist elapsed time: 0.001451, Nodes Expanded: 791, Optimal Moves: 51, Optimal G cost: 64.083282
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000685, Nodes Expanded: 384, Optimal Moves: 51, Optimal Gcost: 64.083282
Canonical A Star::A star my openlist elapsed time: 0.000414, Nodes Expanded: 384, Optimal Moves: 51, Optimal Gcost: 64.083282
Jump Point Search::A star my openlist elapsed time: 0.000157, Nodes Expanded: 18, Optimal Moves: 51, Optimal Gcost: 64.083282
(startX, startY): (10,64) goalX, goalY: (38,56)
Octile::			 A star my openlist elapsed time: 0.001401, Nodes Expanded: 841, Optimal Moves: 59, Optimal Gcost: 64.627426
Differential Heuristic::	 A star my openlist elapsed time: 0.001724, Nodes Expanded: 1055, Optimal Moves: 59, Optimal G cost: 64.627426
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001179, Nodes Expanded: 697, Optimal Moves: 59, Optimal Gcost: 64.627426
Canonical A Star::A star my openlist elapsed time: 0.000775, Nodes Expanded: 697, Optimal Moves: 59, Optimal Gcost: 64.627426
Jump Point Search::A star my openlist elapsed time: 0.000396, Nodes Expanded: 37, Optimal Moves: 59, Optimal Gcost: 64.627426
(startX, startY): (10,74) goalX, goalY: (51,48)
Octile::			 A star my openlist elapsed time: 0.001256, Nodes Expanded: 704, Optimal Moves: 62, Optimal Gcost: 64.313713
Differential Heuristic::	 A star my openlist elapsed time: 0.002782, Nodes Expanded: 1125, Optimal Moves: 62, Optimal G cost: 64.313713
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001971, Nodes Expanded: 695, Optimal Moves: 62, Optimal Gcost: 64.313713
Canonical A Star::A star my openlist elapsed time: 0.001203, Nodes Expanded: 695, Optimal Moves: 62, Optimal Gcost: 64.313713
Jump Point Search::A star my openlist elapsed time: 0.000352, Nodes Expanded: 32, Optimal Moves: 62, Optimal Gcost: 64.313713
(startX, startY): (10,76) goalX, goalY: (25,112)
Octile::			 A star my openlist elapsed time: 0.002198, Nodes Expanded: 909, Optimal Moves: 58, Optimal Gcost: 67.769569
Differential Heuristic::	 A star my openlist elapsed time: 0.002975, Nodes Expanded: 981, Optimal Moves: 58, Optimal G cost: 67.769569
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002094, Nodes Expanded: 711, Optimal Moves: 58, Optimal Gcost: 67.769569
Canonical A Star::A star my openlist elapsed time: 0.001245, Nodes Expanded: 710, Optimal Moves: 58, Optimal Gcost: 67.769569
Jump Point Search::A star my openlist elapsed time: 0.000354, Nodes Expanded: 32, Optimal Moves: 58, Optimal Gcost: 67.769569
(startX, startY): (10,88) goalX, goalY: (18,104)
Octile::			 A star my openlist elapsed time: 0.001853, Nodes Expanded: 809, Optimal Moves: 62, Optimal Gcost: 64.727928
Differential Heuristic::	 A star my openlist elapsed time: 0.001312, Nodes Expanded: 499, Optimal Moves: 62, Optimal G cost: 64.727928
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001207, Nodes Expanded: 437, Optimal Moves: 62, Optimal Gcost: 64.727928
Canonical A Star::A star my openlist elapsed time: 0.000739, Nodes Expanded: 437, Optimal Moves: 62, Optimal Gcost: 64.727928
Jump Point Search::A star my openlist elapsed time: 0.000259, Nodes Expanded: 20, Optimal Moves: 62, Optimal Gcost: 64.727928
(startX, startY): (10,92) goalX, goalY: (44,55)
Octile::			 A star my openlist elapsed time: 0.002932, Nodes Expanded: 1029, Optimal Moves: 55, Optimal Gcost: 65.183777
Differential Heuristic::	 A star my openlist elapsed time: 0.002204, Nodes Expanded: 1146, Optimal Moves: 55, Optimal G cost: 65.183777
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002308, Nodes Expanded: 971, Optimal Moves: 55, Optimal Gcost: 65.183777
Canonical A Star::A star my openlist elapsed time: 0.001527, Nodes Expanded: 971, Optimal Moves: 55, Optimal Gcost: 65.183777
Jump Point Search::A star my openlist elapsed time: 0.000477, Nodes Expanded: 46, Optimal Moves: 55, Optimal Gcost: 65.183777
(startX, startY): (100,12) goalX, goalY: (129,65)
Octile::			 A star my openlist elapsed time: 0.000552, Nodes Expanded: 320, Optimal Moves: 55, Optimal Gcost: 65.598007
Differential Heuristic::	 A star my openlist elapsed time: 0.000915, Nodes Expanded: 434, Optimal Moves: 55, Optimal G cost: 65.598007
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000564, Nodes Expanded: 293, Optimal Moves: 55, Optimal Gcost: 65.598007
Canonical A Star::A star my openlist elapsed time: 0.000340, Nodes Expanded: 292, Optimal Moves: 55, Optimal Gcost: 65.598007
Jump Point Search::A star my openlist elapsed time: 0.000169, Nodes Expanded: 8, Optimal Moves: 55, Optimal Gcost: 65.598007
(startX, startY): (100,143) goalX, goalY: (143,107)
Octile::			 A star my openlist elapsed time: 0.000869, Nodes Expanded: 425, Optimal Moves: 58, Optimal Gcost: 66.112717
Differential Heuristic::	 A star my openlist elapsed time: 0.000546, Nodes Expanded: 244, Optimal Moves: 58, Optimal G cost: 66.112717
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000447, Nodes Expanded: 194, Optimal Moves: 58, Optimal Gcost: 66.112717
Canonical A Star::A star my openlist elapsed time: 0.000280, Nodes Expanded: 194, Optimal Moves: 58, Optimal Gcost: 66.112717
Jump Point Search::A star my openlist elapsed time: 0.000241, Nodes Expanded: 4, Optimal Moves: 58, Optimal Gcost: 66.112717
(startX, startY): (100,143) goalX, goalY: (152,112)
Octile::			 A star my openlist elapsed time: 0.000269, Nodes Expanded: 136, Optimal Moves: 53, Optimal Gcost: 64.840652
Differential Heuristic::	 A star my openlist elapsed time: 0.000461, Nodes Expanded: 213, Optimal Moves: 53, Optimal G cost: 64.840652
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000260, Nodes Expanded: 94, Optimal Moves: 53, Optimal Gcost: 64.840652
Canonical A Star::A star my openlist elapsed time: 0.000151, Nodes Expanded: 94, Optimal Moves: 53, Optimal Gcost: 64.840652
Jump Point Search::A star my openlist elapsed time: 0.000231, Nodes Expanded: 3, Optimal Moves: 53, Optimal Gcost: 64.840652
(startX, startY): (100,164) goalX, goalY: (48,128)
Octile::			 A star my openlist elapsed time: 0.000862, Nodes Expanded: 379, Optimal Moves: 53, Optimal Gcost: 66.911705
Differential Heuristic::	 A star my openlist elapsed time: 0.001327, Nodes Expanded: 585, Optimal Moves: 53, Optimal G cost: 66.911713
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000803, Nodes Expanded: 362, Optimal Moves: 53, Optimal Gcost: 66.911705
Canonical A Star::A star my openlist elapsed time: 0.000519, Nodes Expanded: 369, Optimal Moves: 53, Optimal Gcost: 66.911713
Jump Point Search::A star my openlist elapsed time: 0.000307, Nodes Expanded: 6, Optimal Moves: 53, Optimal Gcost: 66.911713
(startX, startY): (10,121) goalX, goalY: (23,91)
Octile::			 A star my openlist elapsed time: 0.002525, Nodes Expanded: 1078, Optimal Moves: 62, Optimal Gcost: 68.455849
Differential Heuristic::	 A star my openlist elapsed time: 0.001455, Nodes Expanded: 631, Optimal Moves: 62, Optimal G cost: 68.455849
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001355, Nodes Expanded: 555, Optimal Moves: 62, Optimal Gcost: 68.455849
Canonical A Star::A star my openlist elapsed time: 0.000841, Nodes Expanded: 554, Optimal Moves: 62, Optimal Gcost: 68.455849
Jump Point Search::A star my openlist elapsed time: 0.000148, Nodes Expanded: 12, Optimal Moves: 62, Optimal Gcost: 68.455849
(startX, startY): (10,132) goalX, goalY: (49,84)
Octile::			 A star my openlist elapsed time: 0.001636, Nodes Expanded: 736, Optimal Moves: 59, Optimal Gcost: 70.012207
Differential Heuristic::	 A star my openlist elapsed time: 0.002222, Nodes Expanded: 995, Optimal Moves: 59, Optimal G cost: 70.012207
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001681, Nodes Expanded: 729, Optimal Moves: 59, Optimal Gcost: 70.012207
Canonical A Star::A star my openlist elapsed time: 0.000984, Nodes Expanded: 729, Optimal Moves: 59, Optimal Gcost: 70.012207
Jump Point Search::A star my openlist elapsed time: 0.000139, Nodes Expanded: 12, Optimal Moves: 59, Optimal Gcost: 70.012207
(startX, startY): (10,64) goalX, goalY: (47,116)
Octile::			 A star my openlist elapsed time: 0.001313, Nodes Expanded: 648, Optimal Moves: 60, Optimal Gcost: 71.426422
Differential Heuristic::	 A star my openlist elapsed time: 0.002006, Nodes Expanded: 964, Optimal Moves: 60, Optimal G cost: 71.426422
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001180, Nodes Expanded: 590, Optimal Moves: 60, Optimal Gcost: 71.426422
Canonical A Star::A star my openlist elapsed time: 0.000749, Nodes Expanded: 590, Optimal Moves: 60, Optimal Gcost: 71.426422
Jump Point Search::A star my openlist elapsed time: 0.000206, Nodes Expanded: 27, Optimal Moves: 60, Optimal Gcost: 71.426422
(startX, startY): (10,69) goalX, goalY: (75,67)
Octile::			 A star my openlist elapsed time: 0.000864, Nodes Expanded: 416, Optimal Moves: 66, Optimal Gcost: 70.798996
Differential Heuristic::	 A star my openlist elapsed time: 0.002498, Nodes Expanded: 1386, Optimal Moves: 66, Optimal G cost: 70.798996
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000895, Nodes Expanded: 403, Optimal Moves: 66, Optimal Gcost: 70.798996
Canonical A Star::A star my openlist elapsed time: 0.000485, Nodes Expanded: 403, Optimal Moves: 66, Optimal Gcost: 70.798996
Jump Point Search::A star my openlist elapsed time: 0.000229, Nodes Expanded: 19, Optimal Moves: 66, Optimal Gcost: 70.798996
(startX, startY): (10,76) goalX, goalY: (40,44)
Octile::			 A star my openlist elapsed time: 0.001551, Nodes Expanded: 973, Optimal Moves: 66, Optimal Gcost: 71.213219
Differential Heuristic::	 A star my openlist elapsed time: 0.001965, Nodes Expanded: 1272, Optimal Moves: 66, Optimal G cost: 71.213219
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001472, Nodes Expanded: 893, Optimal Moves: 66, Optimal Gcost: 71.213219
Canonical A Star::A star my openlist elapsed time: 0.000984, Nodes Expanded: 893, Optimal Moves: 66, Optimal Gcost: 71.213219
Jump Point Search::A star my openlist elapsed time: 0.000347, Nodes Expanded: 49, Optimal Moves: 66, Optimal Gcost: 71.213219
(startX, startY): (10,93) goalX, goalY: (46,51)
Octile::			 A star my openlist elapsed time: 0.001676, Nodes Expanded: 974, Optimal Moves: 59, Optimal Gcost: 68.769562
Differential Heuristic::	 A star my openlist elapsed time: 0.001890, Nodes Expanded: 1200, Optimal Moves: 59, Optimal G cost: 68.769562
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001739, Nodes Expanded: 941, Optimal Moves: 59, Optimal Gcost: 68.769562
Canonical A Star::A star my openlist elapsed time: 0.001123, Nodes Expanded: 942, Optimal Moves: 59, Optimal Gcost: 68.769562
Jump Point Search::A star my openlist elapsed time: 0.000321, Nodes Expanded: 41, Optimal Moves: 59, Optimal Gcost: 68.769562
(startX, startY): (100,102) goalX, goalY: (50,57)
Octile::			 A star my openlist elapsed time: 0.000536, Nodes Expanded: 342, Optimal Moves: 54, Optimal Gcost: 70.396996
Differential Heuristic::	 A star my openlist elapsed time: 0.002532, Nodes Expanded: 1202, Optimal Moves: 54, Optimal G cost: 70.396996
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000612, Nodes Expanded: 342, Optimal Moves: 54, Optimal Gcost: 70.396996
Canonical A Star::A star my openlist elapsed time: 0.000379, Nodes Expanded: 333, Optimal Moves: 54, Optimal Gcost: 70.396996
Jump Point Search::A star my openlist elapsed time: 0.000163, Nodes Expanded: 8, Optimal Moves: 54, Optimal Gcost: 70.396996
(startX, startY): (100,110) goalX, goalY: (56,63)
Octile::			 A star my openlist elapsed time: 0.000747, Nodes Expanded: 442, Optimal Moves: 54, Optimal Gcost: 68.740135
Differential Heuristic::	 A star my openlist elapsed time: 0.001188, Nodes Expanded: 588, Optimal Moves: 54, Optimal G cost: 68.740135
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000781, Nodes Expanded: 409, Optimal Moves: 54, Optimal Gcost: 68.740135
Canonical A Star::A star my openlist elapsed time: 0.000470, Nodes Expanded: 411, Optimal Moves: 54, Optimal Gcost: 68.740143
Jump Point Search::A star my openlist elapsed time: 0.000185, Nodes Expanded: 11, Optimal Moves: 54, Optimal Gcost: 68.740143
(startX, startY): (100,145) goalX, goalY: (158,125)
Octile::			 A star my openlist elapsed time: 0.001097, Nodes Expanded: 606, Optimal Moves: 64, Optimal Gcost: 69.213219
Differential Heuristic::	 A star my openlist elapsed time: 0.001155, Nodes Expanded: 624, Optimal Moves: 64, Optimal G cost: 69.213219
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000895, Nodes Expanded: 458, Optimal Moves: 64, Optimal Gcost: 69.213219
Canonical A Star::A star my openlist elapsed time: 0.000520, Nodes Expanded: 458, Optimal Moves: 64, Optimal Gcost: 69.213219
Jump Point Search::A star my openlist elapsed time: 0.000211, Nodes Expanded: 10, Optimal Moves: 64, Optimal Gcost: 69.213219
(startX, startY): (100,149) goalX, goalY: (147,106)
Octile::			 A star my openlist elapsed time: 0.000866, Nodes Expanded: 540, Optimal Moves: 59, Optimal Gcost: 71.254860
Differential Heuristic::	 A star my openlist elapsed time: 0.000494, Nodes Expanded: 263, Optimal Moves: 59, Optimal G cost: 71.254860
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000450, Nodes Expanded: 225, Optimal Moves: 59, Optimal Gcost: 71.254860
Canonical A Star::A star my openlist elapsed time: 0.000251, Nodes Expanded: 225, Optimal Moves: 59, Optimal Gcost: 71.254860
Jump Point Search::A star my openlist elapsed time: 0.000128, Nodes Expanded: 4, Optimal Moves: 59, Optimal Gcost: 71.254860
(startX, startY): (10,108) goalX, goalY: (57,66)
Octile::			 A star my openlist elapsed time: 0.000916, Nodes Expanded: 575, Optimal Moves: 67, Optimal Gcost: 75.526932
Differential Heuristic::	 A star my openlist elapsed time: 0.001539, Nodes Expanded: 785, Optimal Moves: 67, Optimal G cost: 75.526932
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000997, Nodes Expanded: 572, Optimal Moves: 67, Optimal Gcost: 75.526932
Canonical A Star::A star my openlist elapsed time: 0.000620, Nodes Expanded: 572, Optimal Moves: 67, Optimal Gcost: 75.526939
Jump Point Search::A star my openlist elapsed time: 0.000111, Nodes Expanded: 14, Optimal Moves: 67, Optimal Gcost: 75.526939
(startX, startY): (10,108) goalX, goalY: (58,68)
Octile::			 A star my openlist elapsed time: 0.000971, Nodes Expanded: 565, Optimal Moves: 66, Optimal Gcost: 74.526932
Differential Heuristic::	 A star my openlist elapsed time: 0.001250, Nodes Expanded: 734, Optimal Moves: 66, Optimal G cost: 74.526932
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000911, Nodes Expanded: 548, Optimal Moves: 66, Optimal Gcost: 74.526932
Canonical A Star::A star my openlist elapsed time: 0.000673, Nodes Expanded: 548, Optimal Moves: 66, Optimal Gcost: 74.526939
Jump Point Search::A star my openlist elapsed time: 0.000112, Nodes Expanded: 13, Optimal Moves: 66, Optimal Gcost: 74.526939
(startX, startY): (10,112) goalX, goalY: (12,84)
Octile::			 A star my openlist elapsed time: 0.001766, Nodes Expanded: 978, Optimal Moves: 68, Optimal Gcost: 75.698502
Differential Heuristic::	 A star my openlist elapsed time: 0.001497, Nodes Expanded: 890, Optimal Moves: 68, Optimal G cost: 75.698502
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001156, Nodes Expanded: 559, Optimal Moves: 68, Optimal Gcost: 75.698502
Canonical A Star::A star my openlist elapsed time: 0.000643, Nodes Expanded: 558, Optimal Moves: 68, Optimal Gcost: 75.698502
Jump Point Search::A star my openlist elapsed time: 0.000116, Nodes Expanded: 14, Optimal Moves: 68, Optimal Gcost: 75.698502
(startX, startY): (10,117) goalX, goalY: (49,68)
Octile::			 A star my openlist elapsed time: 0.001038, Nodes Expanded: 666, Optimal Moves: 66, Optimal Gcost: 74.526924
Differential Heuristic::	 A star my openlist elapsed time: 0.001667, Nodes Expanded: 939, Optimal Moves: 66, Optimal G cost: 74.526924
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001074, Nodes Expanded: 650, Optimal Moves: 66, Optimal Gcost: 74.526924
Canonical A Star::A star my openlist elapsed time: 0.000737, Nodes Expanded: 650, Optimal Moves: 66, Optimal Gcost: 74.526924
Jump Point Search::A star my openlist elapsed time: 0.000086, Nodes Expanded: 10, Optimal Moves: 66, Optimal Gcost: 74.526924
(startX, startY): (10,126) goalX, goalY: (41,76)
Octile::			 A star my openlist elapsed time: 0.001312, Nodes Expanded: 748, Optimal Moves: 67, Optimal Gcost: 72.213203
Differential Heuristic::	 A star my openlist elapsed time: 0.001227, Nodes Expanded: 720, Optimal Moves: 67, Optimal G cost: 72.213203
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001264, Nodes Expanded: 657, Optimal Moves: 67, Optimal Gcost: 72.213203
Canonical A Star::A star my openlist elapsed time: 0.000803, Nodes Expanded: 657, Optimal Moves: 67, Optimal Gcost: 72.213203
Jump Point Search::A star my openlist elapsed time: 0.000108, Nodes Expanded: 12, Optimal Moves: 67, Optimal Gcost: 72.213203
(startX, startY): (10,127) goalX, goalY: (49,76)
Octile::			 A star my openlist elapsed time: 0.001599, Nodes Expanded: 918, Optimal Moves: 67, Optimal Gcost: 75.941139
Differential Heuristic::	 A star my openlist elapsed time: 0.002030, Nodes Expanded: 1141, Optimal Moves: 67, Optimal G cost: 75.941139
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001656, Nodes Expanded: 894, Optimal Moves: 67, Optimal Gcost: 75.941139
Canonical A Star::A star my openlist elapsed time: 0.000928, Nodes Expanded: 884, Optimal Moves: 67, Optimal Gcost: 75.941139
Jump Point Search::A star my openlist elapsed time: 0.000116, Nodes Expanded: 13, Optimal Moves: 67, Optimal Gcost: 75.941139
(startX, startY): (10,128) goalX, goalY: (24,91)
Octile::			 A star my openlist elapsed time: 0.001934, Nodes Expanded: 1126, Optimal Moves: 66, Optimal Gcost: 73.284279
Differential Heuristic::	 A star my openlist elapsed time: 0.001629, Nodes Expanded: 931, Optimal Moves: 66, Optimal G cost: 73.284279
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001550, Nodes Expanded: 861, Optimal Moves: 66, Optimal Gcost: 73.284279
Canonical A Star::A star my openlist elapsed time: 0.000945, Nodes Expanded: 844, Optimal Moves: 66, Optimal Gcost: 73.284279
Jump Point Search::A star my openlist elapsed time: 0.000136, Nodes Expanded: 15, Optimal Moves: 66, Optimal Gcost: 73.284279
(startX, startY): (10,129) goalX, goalY: (22,91)
Octile::			 A star my openlist elapsed time: 0.002119, Nodes Expanded: 1142, Optimal Moves: 68, Optimal Gcost: 75.698494
Differential Heuristic::	 A star my openlist elapsed time: 0.001698, Nodes Expanded: 930, Optimal Moves: 68, Optimal G cost: 75.698486
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001460, Nodes Expanded: 832, Optimal Moves: 68, Optimal Gcost: 75.698486
Canonical A Star::A star my openlist elapsed time: 0.000918, Nodes Expanded: 867, Optimal Moves: 68, Optimal Gcost: 75.698494
Jump Point Search::A star my openlist elapsed time: 0.000155, Nodes Expanded: 20, Optimal Moves: 68, Optimal Gcost: 75.698494
(startX, startY): (10,133) goalX, goalY: (36,79)
Octile::			 A star my openlist elapsed time: 0.001788, Nodes Expanded: 1006, Optimal Moves: 64, Optimal Gcost: 74.183777
Differential Heuristic::	 A star my openlist elapsed time: 0.001898, Nodes Expanded: 963, Optimal Moves: 64, Optimal G cost: 74.183777
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001462, Nodes Expanded: 767, Optimal Moves: 64, Optimal Gcost: 74.183777
Canonical A Star::A star my openlist elapsed time: 0.000878, Nodes Expanded: 766, Optimal Moves: 64, Optimal Gcost: 74.183777
Jump Point Search::A star my openlist elapsed time: 0.000143, Nodes Expanded: 14, Optimal Moves: 64, Optimal Gcost: 74.183777
(startX, startY): (10,59) goalX, goalY: (29,111)
Octile::			 A star my openlist elapsed time: 0.001746, Nodes Expanded: 1047, Optimal Moves: 59, Optimal Gcost: 73.325928
Differential Heuristic::	 A star my openlist elapsed time: 0.002068, Nodes Expanded: 1100, Optimal Moves: 59, Optimal G cost: 73.325928
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001558, Nodes Expanded: 809, Optimal Moves: 59, Optimal Gcost: 73.325928
Canonical A Star::A star my openlist elapsed time: 0.001005, Nodes Expanded: 809, Optimal Moves: 59, Optimal Gcost: 73.325928
Jump Point Search::A star my openlist elapsed time: 0.000311, Nodes Expanded: 41, Optimal Moves: 59, Optimal Gcost: 73.325928
(startX, startY): (10,111) goalX, goalY: (13,77)
Octile::			 A star my openlist elapsed time: 0.001730, Nodes Expanded: 1008, Optimal Moves: 70, Optimal Gcost: 78.941147
Differential Heuristic::	 A star my openlist elapsed time: 0.002063, Nodes Expanded: 1140, Optimal Moves: 70, Optimal G cost: 78.941147
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001135, Nodes Expanded: 675, Optimal Moves: 70, Optimal Gcost: 78.941147
Canonical A Star::A star my openlist elapsed time: 0.000756, Nodes Expanded: 674, Optimal Moves: 70, Optimal Gcost: 78.941147
Jump Point Search::A star my openlist elapsed time: 0.000155, Nodes Expanded: 18, Optimal Moves: 70, Optimal Gcost: 78.941147
(startX, startY): (10,122) goalX, goalY: (76,145)
Octile::			 A star my openlist elapsed time: 0.001668, Nodes Expanded: 818, Optimal Moves: 67, Optimal Gcost: 78.840637
Differential Heuristic::	 A star my openlist elapsed time: 0.000786, Nodes Expanded: 424, Optimal Moves: 67, Optimal G cost: 78.840637
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000724, Nodes Expanded: 361, Optimal Moves: 67, Optimal Gcost: 78.840637
Canonical A Star::A star my openlist elapsed time: 0.000397, Nodes Expanded: 361, Optimal Moves: 67, Optimal Gcost: 78.840637
Jump Point Search::A star my openlist elapsed time: 0.000177, Nodes Expanded: 11, Optimal Moves: 67, Optimal Gcost: 78.840637
(startX, startY): (10,132) goalX, goalY: (26,81)
Octile::			 A star my openlist elapsed time: 0.002075, Nodes Expanded: 1131, Optimal Moves: 67, Optimal Gcost: 78.840637
Differential Heuristic::	 A star my openlist elapsed time: 0.002306, Nodes Expanded: 1289, Optimal Moves: 67, Optimal G cost: 78.840637
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001631, Nodes Expanded: 937, Optimal Moves: 67, Optimal Gcost: 78.840637
Canonical A Star::A star my openlist elapsed time: 0.000968, Nodes Expanded: 895, Optimal Moves: 67, Optimal Gcost: 78.840637
Jump Point Search::A star my openlist elapsed time: 0.000184, Nodes Expanded: 20, Optimal Moves: 67, Optimal Gcost: 78.840637
(startX, startY): (100,146) goalX, goalY: (169,125)
Octile::			 A star my openlist elapsed time: 0.000860, Nodes Expanded: 465, Optimal Moves: 70, Optimal Gcost: 77.698502
Differential Heuristic::	 A star my openlist elapsed time: 0.001656, Nodes Expanded: 917, Optimal Moves: 70, Optimal G cost: 77.698502
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000836, Nodes Expanded: 445, Optimal Moves: 70, Optimal Gcost: 77.698502
Canonical A Star::A star my openlist elapsed time: 0.000497, Nodes Expanded: 432, Optimal Moves: 70, Optimal Gcost: 77.698502
Jump Point Search::A star my openlist elapsed time: 0.000156, Nodes Expanded: 9, Optimal Moves: 70, Optimal Gcost: 77.698502
(startX, startY): (100,147) goalX, goalY: (140,159)
Octile::			 A star my openlist elapsed time: 0.002924, Nodes Expanded: 1457, Optimal Moves: 69, Optimal Gcost: 77.112717
Differential Heuristic::	 A star my openlist elapsed time: 0.001064, Nodes Expanded: 528, Optimal Moves: 69, Optimal G cost: 77.112717
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000883, Nodes Expanded: 439, Optimal Moves: 69, Optimal Gcost: 77.112717
Canonical A Star::A star my openlist elapsed time: 0.000499, Nodes Expanded: 453, Optimal Moves: 69, Optimal Gcost: 77.112717
Jump Point Search::A star my openlist elapsed time: 0.000166, Nodes Expanded: 15, Optimal Moves: 69, Optimal Gcost: 77.112717
(startX, startY): (100,16) goalX, goalY: (144,42)
Octile::			 A star my openlist elapsed time: 0.001297, Nodes Expanded: 910, Optimal Moves: 66, Optimal Gcost: 77.012215
Differential Heuristic::	 A star my openlist elapsed time: 0.001885, Nodes Expanded: 1090, Optimal Moves: 66, Optimal G cost: 77.012215
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001450, Nodes Expanded: 861, Optimal Moves: 66, Optimal Gcost: 77.012215
Canonical A Star::A star my openlist elapsed time: 0.000924, Nodes Expanded: 860, Optimal Moves: 66, Optimal Gcost: 77.012215
Jump Point Search::A star my openlist elapsed time: 0.000186, Nodes Expanded: 17, Optimal Moves: 66, Optimal Gcost: 77.012215
(startX, startY): (100,167) goalX, goalY: (147,159)
Octile::			 A star my openlist elapsed time: 0.002518, Nodes Expanded: 1423, Optimal Moves: 64, Optimal Gcost: 79.568565
Differential Heuristic::	 A star my openlist elapsed time: 0.001698, Nodes Expanded: 1048, Optimal Moves: 64, Optimal G cost: 79.568565
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001584, Nodes Expanded: 918, Optimal Moves: 64, Optimal Gcost: 79.568565
Canonical A Star::A star my openlist elapsed time: 0.000916, Nodes Expanded: 918, Optimal Moves: 64, Optimal Gcost: 79.568565
Jump Point Search::A star my openlist elapsed time: 0.000254, Nodes Expanded: 15, Optimal Moves: 64, Optimal Gcost: 79.568565
(startX, startY): (100,172) goalX, goalY: (138,110)
Octile::			 A star my openlist elapsed time: 0.001093, Nodes Expanded: 690, Optimal Moves: 63, Optimal Gcost: 78.568565
Differential Heuristic::	 A star my openlist elapsed time: 0.000746, Nodes Expanded: 413, Optimal Moves: 63, Optimal G cost: 78.568565
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000723, Nodes Expanded: 341, Optimal Moves: 63, Optimal Gcost: 78.568565
Canonical A Star::A star my openlist elapsed time: 0.000369, Nodes Expanded: 341, Optimal Moves: 63, Optimal Gcost: 78.568565
Jump Point Search::A star my openlist elapsed time: 0.000260, Nodes Expanded: 6, Optimal Moves: 63, Optimal Gcost: 78.568565
(startX, startY): (100,36) goalX, goalY: (167,44)
Octile::			 A star my openlist elapsed time: 0.001131, Nodes Expanded: 631, Optimal Moves: 68, Optimal Gcost: 78.597992
Differential Heuristic::	 A star my openlist elapsed time: 0.002551, Nodes Expanded: 1250, Optimal Moves: 68, Optimal G cost: 78.597992
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001276, Nodes Expanded: 630, Optimal Moves: 68, Optimal Gcost: 78.597992
Canonical A Star::A star my openlist elapsed time: 0.000729, Nodes Expanded: 630, Optimal Moves: 68, Optimal Gcost: 78.597992
Jump Point Search::A star my openlist elapsed time: 0.000167, Nodes Expanded: 12, Optimal Moves: 68, Optimal Gcost: 78.597992
(startX, startY): (101,103) goalX, goalY: (56,43)
Octile::			 A star my openlist elapsed time: 0.000945, Nodes Expanded: 582, Optimal Moves: 63, Optimal Gcost: 79.811211
Differential Heuristic::	 A star my openlist elapsed time: 0.003185, Nodes Expanded: 1579, Optimal Moves: 63, Optimal G cost: 79.811211
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001117, Nodes Expanded: 582, Optimal Moves: 63, Optimal Gcost: 79.811211
Canonical A Star::A star my openlist elapsed time: 0.000745, Nodes Expanded: 582, Optimal Moves: 63, Optimal Gcost: 79.811211
Jump Point Search::A star my openlist elapsed time: 0.000257, Nodes Expanded: 12, Optimal Moves: 63, Optimal Gcost: 79.811211
(startX, startY): (10,109) goalX, goalY: (46,60)
Octile::			 A star my openlist elapsed time: 0.001362, Nodes Expanded: 800, Optimal Moves: 74, Optimal Gcost: 80.455856
Differential Heuristic::	 A star my openlist elapsed time: 0.001978, Nodes Expanded: 1056, Optimal Moves: 74, Optimal G cost: 80.455856
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001185, Nodes Expanded: 672, Optimal Moves: 74, Optimal Gcost: 80.455856
Canonical A Star::A star my openlist elapsed time: 0.000730, Nodes Expanded: 673, Optimal Moves: 74, Optimal Gcost: 80.455856
Jump Point Search::A star my openlist elapsed time: 0.000107, Nodes Expanded: 13, Optimal Moves: 74, Optimal Gcost: 80.455856
(startX, startY): (10,115) goalX, goalY: (14,70)
Octile::			 A star my openlist elapsed time: 0.001663, Nodes Expanded: 994, Optimal Moves: 70, Optimal Gcost: 83.083290
Differential Heuristic::	 A star my openlist elapsed time: 0.002230, Nodes Expanded: 1158, Optimal Moves: 70, Optimal G cost: 83.083290
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001213, Nodes Expanded: 640, Optimal Moves: 70, Optimal Gcost: 83.083290
Canonical A Star::A star my openlist elapsed time: 0.000701, Nodes Expanded: 646, Optimal Moves: 70, Optimal Gcost: 83.083290
Jump Point Search::A star my openlist elapsed time: 0.000123, Nodes Expanded: 14, Optimal Moves: 70, Optimal Gcost: 83.083290
(startX, startY): (10,116) goalX, goalY: (61,69)
Octile::			 A star my openlist elapsed time: 0.001193, Nodes Expanded: 709, Optimal Moves: 69, Optimal Gcost: 80.426430
Differential Heuristic::	 A star my openlist elapsed time: 0.001249, Nodes Expanded: 789, Optimal Moves: 69, Optimal G cost: 80.426430
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001070, Nodes Expanded: 631, Optimal Moves: 69, Optimal Gcost: 80.426430
Canonical A Star::A star my openlist elapsed time: 0.000641, Nodes Expanded: 631, Optimal Moves: 69, Optimal Gcost: 80.426430
Jump Point Search::A star my openlist elapsed time: 0.000117, Nodes Expanded: 11, Optimal Moves: 69, Optimal Gcost: 80.426430
(startX, startY): (10,122) goalX, goalY: (49,65)
Octile::			 A star my openlist elapsed time: 0.001254, Nodes Expanded: 807, Optimal Moves: 74, Optimal Gcost: 82.526924
Differential Heuristic::	 A star my openlist elapsed time: 0.001854, Nodes Expanded: 1065, Optimal Moves: 74, Optimal G cost: 82.526924
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001307, Nodes Expanded: 732, Optimal Moves: 74, Optimal Gcost: 82.526924
Canonical A Star::A star my openlist elapsed time: 0.000788, Nodes Expanded: 732, Optimal Moves: 74, Optimal Gcost: 82.526924
Jump Point Search::A star my openlist elapsed time: 0.000105, Nodes Expanded: 11, Optimal Moves: 74, Optimal Gcost: 82.526924
(startX, startY): (10,128) goalX, goalY: (22,75)
Octile::			 A star my openlist elapsed time: 0.001938, Nodes Expanded: 1112, Optimal Moves: 71, Optimal Gcost: 83.669075
Differential Heuristic::	 A star my openlist elapsed time: 0.002078, Nodes Expanded: 1221, Optimal Moves: 71, Optimal G cost: 83.669075
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001618, Nodes Expanded: 924, Optimal Moves: 71, Optimal Gcost: 83.669075
Canonical A Star::A star my openlist elapsed time: 0.000987, Nodes Expanded: 907, Optimal Moves: 71, Optimal Gcost: 83.669075
Jump Point Search::A star my openlist elapsed time: 0.000149, Nodes Expanded: 16, Optimal Moves: 71, Optimal Gcost: 83.669075
(startX, startY): (10,134) goalX, goalY: (69,155)
Octile::			 A star my openlist elapsed time: 0.001819, Nodes Expanded: 967, Optimal Moves: 75, Optimal Gcost: 83.112717
Differential Heuristic::	 A star my openlist elapsed time: 0.001354, Nodes Expanded: 743, Optimal Moves: 75, Optimal G cost: 83.112717
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001105, Nodes Expanded: 590, Optimal Moves: 75, Optimal Gcost: 83.112717
Canonical A Star::A star my openlist elapsed time: 0.001275, Nodes Expanded: 590, Optimal Moves: 75, Optimal Gcost: 83.112717
Jump Point Search::A star my openlist elapsed time: 0.000208, Nodes Expanded: 23, Optimal Moves: 75, Optimal Gcost: 83.112717
(startX, startY): (10,64) goalX, goalY: (27,121)
Octile::			 A star my openlist elapsed time: 0.002157, Nodes Expanded: 1208, Optimal Moves: 69, Optimal Gcost: 82.083282
Differential Heuristic::	 A star my openlist elapsed time: 0.000484, Nodes Expanded: 243, Optimal Moves: 69, Optimal G cost: 82.083282
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000455, Nodes Expanded: 239, Optimal Moves: 69, Optimal Gcost: 82.083282
Canonical A Star::A star my openlist elapsed time: 0.000258, Nodes Expanded: 239, Optimal Moves: 69, Optimal Gcost: 82.083282
Jump Point Search::A star my openlist elapsed time: 0.000129, Nodes Expanded: 9, Optimal Moves: 69, Optimal Gcost: 82.083282
(startX, startY): (10,85) goalX, goalY: (25,48)
Octile::			 A star my openlist elapsed time: 0.002224, Nodes Expanded: 1311, Optimal Moves: 72, Optimal Gcost: 83.012215
Differential Heuristic::	 A star my openlist elapsed time: 0.002489, Nodes Expanded: 1422, Optimal Moves: 72, Optimal G cost: 83.012215
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001974, Nodes Expanded: 1117, Optimal Moves: 72, Optimal Gcost: 83.012215
Canonical A Star::A star my openlist elapsed time: 0.001291, Nodes Expanded: 1127, Optimal Moves: 72, Optimal Gcost: 83.012222
Jump Point Search::A star my openlist elapsed time: 0.000347, Nodes Expanded: 55, Optimal Moves: 72, Optimal Gcost: 83.012222
(startX, startY): (10,85) goalX, goalY: (4,113)
Octile::			 A star my openlist elapsed time: 0.001983, Nodes Expanded: 1171, Optimal Moves: 76, Optimal Gcost: 83.698502
Differential Heuristic::	 A star my openlist elapsed time: 0.002496, Nodes Expanded: 1299, Optimal Moves: 76, Optimal G cost: 83.698502
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001676, Nodes Expanded: 886, Optimal Moves: 76, Optimal Gcost: 83.698502
Canonical A Star::A star my openlist elapsed time: 0.000962, Nodes Expanded: 886, Optimal Moves: 76, Optimal Gcost: 83.698502
Jump Point Search::A star my openlist elapsed time: 0.000230, Nodes Expanded: 35, Optimal Moves: 76, Optimal Gcost: 83.698502
(startX, startY): (100,106) goalX, goalY: (43,54)
Octile::			 A star my openlist elapsed time: 0.000922, Nodes Expanded: 550, Optimal Moves: 63, Optimal Gcost: 81.468071
Differential Heuristic::	 A star my openlist elapsed time: 0.003312, Nodes Expanded: 1718, Optimal Moves: 63, Optimal G cost: 81.468071
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001091, Nodes Expanded: 550, Optimal Moves: 63, Optimal Gcost: 81.468071
Canonical A Star::A star my openlist elapsed time: 0.000589, Nodes Expanded: 549, Optimal Moves: 63, Optimal Gcost: 81.468071
Jump Point Search::A star my openlist elapsed time: 0.000182, Nodes Expanded: 9, Optimal Moves: 63, Optimal Gcost: 81.468071
(startX, startY): (10,116) goalX, goalY: (64,66)
Octile::			 A star my openlist elapsed time: 0.001156, Nodes Expanded: 727, Optimal Moves: 72, Optimal Gcost: 84.669075
Differential Heuristic::	 A star my openlist elapsed time: 0.001343, Nodes Expanded: 807, Optimal Moves: 72, Optimal G cost: 84.669075
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001186, Nodes Expanded: 649, Optimal Moves: 72, Optimal Gcost: 84.669075
Canonical A Star::A star my openlist elapsed time: 0.000687, Nodes Expanded: 649, Optimal Moves: 72, Optimal Gcost: 84.669075
Jump Point Search::A star my openlist elapsed time: 0.000121, Nodes Expanded: 11, Optimal Moves: 72, Optimal Gcost: 84.669075
(startX, startY): (10,119) goalX, goalY: (80,139)
Octile::			 A star my openlist elapsed time: 0.002013, Nodes Expanded: 1016, Optimal Moves: 72, Optimal Gcost: 84.669067
Differential Heuristic::	 A star my openlist elapsed time: 0.000935, Nodes Expanded: 494, Optimal Moves: 72, Optimal G cost: 84.669067
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000924, Nodes Expanded: 467, Optimal Moves: 72, Optimal Gcost: 84.669067
Canonical A Star::A star my openlist elapsed time: 0.000591, Nodes Expanded: 467, Optimal Moves: 72, Optimal Gcost: 84.669067
Jump Point Search::A star my openlist elapsed time: 0.000098, Nodes Expanded: 11, Optimal Moves: 72, Optimal Gcost: 84.669067
(startX, startY): (10,121) goalX, goalY: (18,69)
Octile::			 A star my openlist elapsed time: 0.001779, Nodes Expanded: 976, Optimal Moves: 71, Optimal Gcost: 84.911720
Differential Heuristic::	 A star my openlist elapsed time: 0.001988, Nodes Expanded: 1078, Optimal Moves: 71, Optimal G cost: 84.911720
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001195, Nodes Expanded: 625, Optimal Moves: 71, Optimal Gcost: 84.911720
Canonical A Star::A star my openlist elapsed time: 0.000679, Nodes Expanded: 624, Optimal Moves: 71, Optimal Gcost: 84.911720
Jump Point Search::A star my openlist elapsed time: 0.000139, Nodes Expanded: 13, Optimal Moves: 71, Optimal Gcost: 84.911720
(startX, startY): (10,124) goalX, goalY: (53,64)
Octile::			 A star my openlist elapsed time: 0.001527, Nodes Expanded: 926, Optimal Moves: 77, Optimal Gcost: 87.183784
Differential Heuristic::	 A star my openlist elapsed time: 0.001991, Nodes Expanded: 1147, Optimal Moves: 77, Optimal G cost: 87.183784
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001500, Nodes Expanded: 844, Optimal Moves: 77, Optimal Gcost: 87.183784
Canonical A Star::A star my openlist elapsed time: 0.000874, Nodes Expanded: 844, Optimal Moves: 77, Optimal Gcost: 87.183784
Jump Point Search::A star my openlist elapsed time: 0.000119, Nodes Expanded: 14, Optimal Moves: 77, Optimal Gcost: 87.183784
(startX, startY): (10,130) goalX, goalY: (67,158)
Octile::			 A star my openlist elapsed time: 0.002041, Nodes Expanded: 1085, Optimal Moves: 77, Optimal Gcost: 87.183792
Differential Heuristic::	 A star my openlist elapsed time: 0.001802, Nodes Expanded: 970, Optimal Moves: 77, Optimal G cost: 87.183792
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001595, Nodes Expanded: 815, Optimal Moves: 77, Optimal Gcost: 87.183792
Canonical A Star::A star my openlist elapsed time: 0.000995, Nodes Expanded: 815, Optimal Moves: 77, Optimal Gcost: 87.183792
Jump Point Search::A star my openlist elapsed time: 0.000207, Nodes Expanded: 20, Optimal Moves: 77, Optimal Gcost: 87.183792
(startX, startY): (10,130) goalX, goalY: (78,155)
Octile::			 A star my openlist elapsed time: 0.001513, Nodes Expanded: 806, Optimal Moves: 74, Optimal Gcost: 84.598000
Differential Heuristic::	 A star my openlist elapsed time: 0.001847, Nodes Expanded: 956, Optimal Moves: 74, Optimal G cost: 84.598007
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001238, Nodes Expanded: 636, Optimal Moves: 74, Optimal Gcost: 84.598007
Canonical A Star::A star my openlist elapsed time: 0.000789, Nodes Expanded: 634, Optimal Moves: 74, Optimal Gcost: 84.598007
Jump Point Search::A star my openlist elapsed time: 0.000196, Nodes Expanded: 17, Optimal Moves: 74, Optimal Gcost: 84.598007
(startX, startY): (10,132) goalX, goalY: (67,157)
Octile::			 A star my openlist elapsed time: 0.002115, Nodes Expanded: 1050, Optimal Moves: 76, Optimal Gcost: 85.355362
Differential Heuristic::	 A star my openlist elapsed time: 0.001495, Nodes Expanded: 884, Optimal Moves: 76, Optimal G cost: 85.355362
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001298, Nodes Expanded: 734, Optimal Moves: 76, Optimal Gcost: 85.355362
Canonical A Star::A star my openlist elapsed time: 0.000787, Nodes Expanded: 699, Optimal Moves: 76, Optimal Gcost: 85.355362
Jump Point Search::A star my openlist elapsed time: 0.000207, Nodes Expanded: 21, Optimal Moves: 76, Optimal Gcost: 85.355362
(startX, startY): (10,62) goalX, goalY: (35,32)
Octile::			 A star my openlist elapsed time: 0.001489, Nodes Expanded: 979, Optimal Moves: 78, Optimal Gcost: 87.769569
Differential Heuristic::	 A star my openlist elapsed time: 0.002555, Nodes Expanded: 1488, Optimal Moves: 78, Optimal G cost: 87.769569
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001315, Nodes Expanded: 819, Optimal Moves: 78, Optimal Gcost: 87.769569
Canonical A Star::A star my openlist elapsed time: 0.000935, Nodes Expanded: 866, Optimal Moves: 78, Optimal Gcost: 87.769577
Jump Point Search::A star my openlist elapsed time: 0.000358, Nodes Expanded: 38, Optimal Moves: 78, Optimal Gcost: 87.769577
(startX, startY): (10,65) goalX, goalY: (52,29)
Octile::			 A star my openlist elapsed time: 0.001155, Nodes Expanded: 729, Optimal Moves: 81, Optimal Gcost: 85.798996
Differential Heuristic::	 A star my openlist elapsed time: 0.003419, Nodes Expanded: 1553, Optimal Moves: 81, Optimal G cost: 85.798996
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001445, Nodes Expanded: 693, Optimal Moves: 81, Optimal Gcost: 85.798996
Canonical A Star::A star my openlist elapsed time: 0.000912, Nodes Expanded: 693, Optimal Moves: 81, Optimal Gcost: 85.798996
Jump Point Search::A star my openlist elapsed time: 0.000372, Nodes Expanded: 32, Optimal Moves: 81, Optimal Gcost: 85.798996
(startX, startY): (10,87) goalX, goalY: (7,122)
Octile::			 A star my openlist elapsed time: 0.001996, Nodes Expanded: 1045, Optimal Moves: 76, Optimal Gcost: 85.355362
Differential Heuristic::	 A star my openlist elapsed time: 0.002720, Nodes Expanded: 1282, Optimal Moves: 76, Optimal G cost: 85.355362
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001474, Nodes Expanded: 750, Optimal Moves: 76, Optimal Gcost: 85.355362
Canonical A Star::A star my openlist elapsed time: 0.000885, Nodes Expanded: 750, Optimal Moves: 76, Optimal Gcost: 85.355370
Jump Point Search::A star my openlist elapsed time: 0.000238, Nodes Expanded: 31, Optimal Moves: 76, Optimal Gcost: 85.355370
(startX, startY): (10,104) goalX, goalY: (11,59)
Octile::			 A star my openlist elapsed time: 0.001262, Nodes Expanded: 744, Optimal Moves: 78, Optimal Gcost: 89.840660
Differential Heuristic::	 A star my openlist elapsed time: 0.001968, Nodes Expanded: 1087, Optimal Moves: 78, Optimal G cost: 89.840660
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000969, Nodes Expanded: 513, Optimal Moves: 78, Optimal Gcost: 89.840660
Canonical A Star::A star my openlist elapsed time: 0.000589, Nodes Expanded: 521, Optimal Moves: 78, Optimal Gcost: 89.840660
Jump Point Search::A star my openlist elapsed time: 0.000213, Nodes Expanded: 15, Optimal Moves: 78, Optimal Gcost: 89.840660
(startX, startY): (10,109) goalX, goalY: (71,68)
Octile::			 A star my openlist elapsed time: 0.001563, Nodes Expanded: 846, Optimal Moves: 79, Optimal Gcost: 88.769577
Differential Heuristic::	 A star my openlist elapsed time: 0.001383, Nodes Expanded: 803, Optimal Moves: 79, Optimal G cost: 88.769577
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001163, Nodes Expanded: 646, Optimal Moves: 79, Optimal Gcost: 88.769577
Canonical A Star::A star my openlist elapsed time: 0.000742, Nodes Expanded: 647, Optimal Moves: 79, Optimal Gcost: 88.769577
Jump Point Search::A star my openlist elapsed time: 0.000164, Nodes Expanded: 15, Optimal Moves: 79, Optimal Gcost: 88.769577
(startX, startY): (10,118) goalX, goalY: (10,69)
Octile::			 A star my openlist elapsed time: 0.001914, Nodes Expanded: 1106, Optimal Moves: 75, Optimal Gcost: 89.325935
Differential Heuristic::	 A star my openlist elapsed time: 0.002209, Nodes Expanded: 1204, Optimal Moves: 75, Optimal G cost: 89.325935
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001304, Nodes Expanded: 707, Optimal Moves: 75, Optimal Gcost: 89.325935
Canonical A Star::A star my openlist elapsed time: 0.000732, Nodes Expanded: 707, Optimal Moves: 75, Optimal Gcost: 89.325935
Jump Point Search::A star my openlist elapsed time: 0.000186, Nodes Expanded: 20, Optimal Moves: 75, Optimal Gcost: 89.325935
(startX, startY): (10,120) goalX, goalY: (18,61)
Octile::			 A star my openlist elapsed time: 0.001849, Nodes Expanded: 1031, Optimal Moves: 77, Optimal Gcost: 91.325935
Differential Heuristic::	 A star my openlist elapsed time: 0.002512, Nodes Expanded: 1437, Optimal Moves: 77, Optimal G cost: 91.325935
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001301, Nodes Expanded: 721, Optimal Moves: 77, Optimal Gcost: 91.325935
Canonical A Star::A star my openlist elapsed time: 0.000762, Nodes Expanded: 720, Optimal Moves: 77, Optimal Gcost: 91.325935
Jump Point Search::A star my openlist elapsed time: 0.000158, Nodes Expanded: 16, Optimal Moves: 77, Optimal Gcost: 91.325935
(startX, startY): (10,130) goalX, goalY: (7,92)
Octile::			 A star my openlist elapsed time: 0.002258, Nodes Expanded: 1301, Optimal Moves: 83, Optimal Gcost: 91.526924
Differential Heuristic::	 A star my openlist elapsed time: 0.001934, Nodes Expanded: 1002, Optimal Moves: 83, Optimal G cost: 91.526917
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001620, Nodes Expanded: 874, Optimal Moves: 83, Optimal Gcost: 91.526917
Canonical A Star::A star my openlist elapsed time: 0.000870, Nodes Expanded: 874, Optimal Moves: 83, Optimal Gcost: 91.526917
Jump Point Search::A star my openlist elapsed time: 0.000139, Nodes Expanded: 16, Optimal Moves: 83, Optimal Gcost: 91.526917
(startX, startY): (10,132) goalX, goalY: (54,67)
Octile::			 A star my openlist elapsed time: 0.001849, Nodes Expanded: 1029, Optimal Moves: 76, Optimal Gcost: 89.083282
Differential Heuristic::	 A star my openlist elapsed time: 0.002475, Nodes Expanded: 1385, Optimal Moves: 76, Optimal G cost: 89.083282
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001954, Nodes Expanded: 1023, Optimal Moves: 76, Optimal Gcost: 89.083282
Canonical A Star::A star my openlist elapsed time: 0.001079, Nodes Expanded: 1022, Optimal Moves: 76, Optimal Gcost: 89.083282
Jump Point Search::A star my openlist elapsed time: 0.000139, Nodes Expanded: 16, Optimal Moves: 76, Optimal Gcost: 89.083282
(startX, startY): (10,66) goalX, goalY: (33,30)
Octile::			 A star my openlist elapsed time: 0.001805, Nodes Expanded: 1102, Optimal Moves: 80, Optimal Gcost: 90.598007
Differential Heuristic::	 A star my openlist elapsed time: 0.002782, Nodes Expanded: 1626, Optimal Moves: 80, Optimal G cost: 90.598000
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001634, Nodes Expanded: 959, Optimal Moves: 80, Optimal Gcost: 90.598000
Canonical A Star::A star my openlist elapsed time: 0.001071, Nodes Expanded: 1006, Optimal Moves: 80, Optimal Gcost: 90.598007
Jump Point Search::A star my openlist elapsed time: 0.000508, Nodes Expanded: 49, Optimal Moves: 80, Optimal Gcost: 90.598007
(startX, startY): (10,76) goalX, goalY: (42,24)
Octile::			 A star my openlist elapsed time: 0.001742, Nodes Expanded: 1054, Optimal Moves: 86, Optimal Gcost: 90.384789
Differential Heuristic::	 A star my openlist elapsed time: 0.003156, Nodes Expanded: 1890, Optimal Moves: 86, Optimal G cost: 90.384789
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001741, Nodes Expanded: 984, Optimal Moves: 86, Optimal Gcost: 90.384789
Canonical A Star::A star my openlist elapsed time: 0.001185, Nodes Expanded: 984, Optimal Moves: 86, Optimal Gcost: 90.384789
Jump Point Search::A star my openlist elapsed time: 0.000368, Nodes Expanded: 50, Optimal Moves: 86, Optimal Gcost: 90.384789
(startX, startY): (10,84) goalX, goalY: (49,26)
Octile::			 A star my openlist elapsed time: 0.001838, Nodes Expanded: 1005, Optimal Moves: 84, Optimal Gcost: 89.627426
Differential Heuristic::	 A star my openlist elapsed time: 0.002752, Nodes Expanded: 1729, Optimal Moves: 84, Optimal G cost: 89.627426
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001988, Nodes Expanded: 988, Optimal Moves: 84, Optimal Gcost: 89.627426
Canonical A Star::A star my openlist elapsed time: 0.001152, Nodes Expanded: 988, Optimal Moves: 84, Optimal Gcost: 89.627426
Jump Point Search::A star my openlist elapsed time: 0.000327, Nodes Expanded: 49, Optimal Moves: 84, Optimal Gcost: 89.627426
(startX, startY): (10,89) goalX, goalY: (26,39)
Octile::			 A star my openlist elapsed time: 0.002432, Nodes Expanded: 1377, Optimal Moves: 76, Optimal Gcost: 90.325935
Differential Heuristic::	 A star my openlist elapsed time: 0.002924, Nodes Expanded: 1766, Optimal Moves: 76, Optimal G cost: 90.325935
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002372, Nodes Expanded: 1248, Optimal Moves: 76, Optimal Gcost: 90.325935
Canonical A Star::A star my openlist elapsed time: 0.001580, Nodes Expanded: 1248, Optimal Moves: 76, Optimal Gcost: 90.325935
Jump Point Search::A star my openlist elapsed time: 0.000509, Nodes Expanded: 64, Optimal Moves: 76, Optimal Gcost: 90.325935
(startX, startY): (10,108) goalX, goalY: (54,45)
Octile::			 A star my openlist elapsed time: 0.001307, Nodes Expanded: 817, Optimal Moves: 88, Optimal Gcost: 95.284294
Differential Heuristic::	 A star my openlist elapsed time: 0.002808, Nodes Expanded: 1500, Optimal Moves: 88, Optimal G cost: 95.284286
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001361, Nodes Expanded: 792, Optimal Moves: 88, Optimal Gcost: 95.284294
Canonical A Star::A star my openlist elapsed time: 0.000802, Nodes Expanded: 791, Optimal Moves: 88, Optimal Gcost: 95.284294
Jump Point Search::A star my openlist elapsed time: 0.000115, Nodes Expanded: 16, Optimal Moves: 88, Optimal Gcost: 95.284294
(startX, startY): (10,112) goalX, goalY: (37,53)
Octile::			 A star my openlist elapsed time: 0.002413, Nodes Expanded: 1344, Optimal Moves: 85, Optimal Gcost: 94.769577
Differential Heuristic::	 A star my openlist elapsed time: 0.002675, Nodes Expanded: 1417, Optimal Moves: 85, Optimal G cost: 94.769577
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001564, Nodes Expanded: 859, Optimal Moves: 85, Optimal Gcost: 94.769577
Canonical A Star::A star my openlist elapsed time: 0.000911, Nodes Expanded: 858, Optimal Moves: 85, Optimal Gcost: 94.769577
Jump Point Search::A star my openlist elapsed time: 0.000149, Nodes Expanded: 16, Optimal Moves: 85, Optimal Gcost: 94.769577
(startX, startY): (10,114) goalX, goalY: (68,157)
Octile::			 A star my openlist elapsed time: 0.003421, Nodes Expanded: 1653, Optimal Moves: 82, Optimal Gcost: 95.911713
Differential Heuristic::	 A star my openlist elapsed time: 0.002010, Nodes Expanded: 1133, Optimal Moves: 82, Optimal G cost: 95.911713
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001907, Nodes Expanded: 972, Optimal Moves: 82, Optimal Gcost: 95.911713
Canonical A Star::A star my openlist elapsed time: 0.001151, Nodes Expanded: 972, Optimal Moves: 82, Optimal Gcost: 95.911713
Jump Point Search::A star my openlist elapsed time: 0.000233, Nodes Expanded: 22, Optimal Moves: 82, Optimal Gcost: 95.911713
(startX, startY): (10,121) goalX, goalY: (67,62)
Octile::			 A star my openlist elapsed time: 0.001544, Nodes Expanded: 861, Optimal Moves: 80, Optimal Gcost: 94.325935
Differential Heuristic::	 A star my openlist elapsed time: 0.001581, Nodes Expanded: 918, Optimal Moves: 80, Optimal G cost: 94.325935
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001301, Nodes Expanded: 726, Optimal Moves: 80, Optimal Gcost: 94.325935
Canonical A Star::A star my openlist elapsed time: 0.000778, Nodes Expanded: 725, Optimal Moves: 80, Optimal Gcost: 94.325935
Jump Point Search::A star my openlist elapsed time: 0.000143, Nodes Expanded: 12, Optimal Moves: 80, Optimal Gcost: 94.325935
(startX, startY): (10,128) goalX, goalY: (81,163)
Octile::			 A star my openlist elapsed time: 0.001999, Nodes Expanded: 1025, Optimal Moves: 82, Optimal Gcost: 94.669083
Differential Heuristic::	 A star my openlist elapsed time: 0.002258, Nodes Expanded: 1154, Optimal Moves: 82, Optimal G cost: 94.669075
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001542, Nodes Expanded: 734, Optimal Moves: 82, Optimal Gcost: 94.669075
Canonical A Star::A star my openlist elapsed time: 0.000964, Nodes Expanded: 816, Optimal Moves: 82, Optimal Gcost: 94.669075
Jump Point Search::A star my openlist elapsed time: 0.000195, Nodes Expanded: 17, Optimal Moves: 82, Optimal Gcost: 94.669075
(startX, startY): (10,133) goalX, goalY: (82,162)
Octile::			 A star my openlist elapsed time: 0.001416, Nodes Expanded: 829, Optimal Moves: 81, Optimal Gcost: 92.012222
Differential Heuristic::	 A star my openlist elapsed time: 0.001963, Nodes Expanded: 1115, Optimal Moves: 81, Optimal G cost: 92.012222
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001228, Nodes Expanded: 668, Optimal Moves: 81, Optimal Gcost: 92.012222
Canonical A Star::A star my openlist elapsed time: 0.000790, Nodes Expanded: 668, Optimal Moves: 81, Optimal Gcost: 92.012222
Jump Point Search::A star my openlist elapsed time: 0.000195, Nodes Expanded: 18, Optimal Moves: 81, Optimal Gcost: 92.012222
(startX, startY): (10,59) goalX, goalY: (89,85)
Octile::			 A star my openlist elapsed time: 0.001729, Nodes Expanded: 886, Optimal Moves: 80, Optimal Gcost: 93.911720
Differential Heuristic::	 A star my openlist elapsed time: 0.004115, Nodes Expanded: 2134, Optimal Moves: 80, Optimal G cost: 93.911720
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001181, Nodes Expanded: 572, Optimal Moves: 80, Optimal Gcost: 93.911720
Canonical A Star::A star my openlist elapsed time: 0.000698, Nodes Expanded: 572, Optimal Moves: 80, Optimal Gcost: 93.911720
Jump Point Search::A star my openlist elapsed time: 0.000298, Nodes Expanded: 19, Optimal Moves: 80, Optimal Gcost: 93.911720
(startX, startY): (10,62) goalX, goalY: (6,110)
Octile::			 A star my openlist elapsed time: 0.002122, Nodes Expanded: 1345, Optimal Moves: 82, Optimal Gcost: 94.669067
Differential Heuristic::	 A star my openlist elapsed time: 0.003751, Nodes Expanded: 1843, Optimal Moves: 82, Optimal G cost: 94.669067
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002579, Nodes Expanded: 1274, Optimal Moves: 82, Optimal Gcost: 94.669067
Canonical A Star::A star my openlist elapsed time: 0.001647, Nodes Expanded: 1274, Optimal Moves: 82, Optimal Gcost: 94.669067
Jump Point Search::A star my openlist elapsed time: 0.000452, Nodes Expanded: 56, Optimal Moves: 82, Optimal Gcost: 94.669067
(startX, startY): (10,69) goalX, goalY: (16,129)
Octile::			 A star my openlist elapsed time: 0.002252, Nodes Expanded: 1324, Optimal Moves: 77, Optimal Gcost: 92.568573
Differential Heuristic::	 A star my openlist elapsed time: 0.001273, Nodes Expanded: 694, Optimal Moves: 77, Optimal G cost: 92.568573
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001083, Nodes Expanded: 582, Optimal Moves: 77, Optimal Gcost: 92.568573
Canonical A Star::A star my openlist elapsed time: 0.000630, Nodes Expanded: 582, Optimal Moves: 77, Optimal Gcost: 92.568573
Jump Point Search::A star my openlist elapsed time: 0.000174, Nodes Expanded: 21, Optimal Moves: 77, Optimal Gcost: 92.568573
(startX, startY): (10,88) goalX, goalY: (33,31)
Octile::			 A star my openlist elapsed time: 0.002324, Nodes Expanded: 1359, Optimal Moves: 79, Optimal Gcost: 92.083290
Differential Heuristic::	 A star my openlist elapsed time: 0.003251, Nodes Expanded: 1899, Optimal Moves: 79, Optimal G cost: 92.083290
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002383, Nodes Expanded: 1280, Optimal Moves: 79, Optimal Gcost: 92.083290
Canonical A Star::A star my openlist elapsed time: 0.001537, Nodes Expanded: 1281, Optimal Moves: 79, Optimal Gcost: 92.083290
Jump Point Search::A star my openlist elapsed time: 0.000454, Nodes Expanded: 58, Optimal Moves: 79, Optimal Gcost: 92.083290
(startX, startY): (10,108) goalX, goalY: (29,53)
Octile::			 A star my openlist elapsed time: 0.003229, Nodes Expanded: 1755, Optimal Moves: 91, Optimal Gcost: 99.941147
Differential Heuristic::	 A star my openlist elapsed time: 0.003192, Nodes Expanded: 1649, Optimal Moves: 91, Optimal G cost: 99.941147
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001666, Nodes Expanded: 897, Optimal Moves: 91, Optimal Gcost: 99.941147
Canonical A Star::A star my openlist elapsed time: 0.001026, Nodes Expanded: 897, Optimal Moves: 91, Optimal Gcost: 99.941154
Jump Point Search::A star my openlist elapsed time: 0.000150, Nodes Expanded: 19, Optimal Moves: 91, Optimal Gcost: 99.941154
(startX, startY): (10,109) goalX, goalY: (78,74)
Octile::			 A star my openlist elapsed time: 0.002377, Nodes Expanded: 1208, Optimal Moves: 86, Optimal Gcost: 98.254868
Differential Heuristic::	 A star my openlist elapsed time: 0.001679, Nodes Expanded: 939, Optimal Moves: 86, Optimal G cost: 98.254868
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001351, Nodes Expanded: 743, Optimal Moves: 86, Optimal Gcost: 98.254868
Canonical A Star::A star my openlist elapsed time: 0.000829, Nodes Expanded: 744, Optimal Moves: 86, Optimal Gcost: 98.254868
Jump Point Search::A star my openlist elapsed time: 0.000165, Nodes Expanded: 16, Optimal Moves: 86, Optimal Gcost: 98.254868
(startX, startY): (10,119) goalX, goalY: (84,160)
Octile::			 A star my openlist elapsed time: 0.001913, Nodes Expanded: 1021, Optimal Moves: 80, Optimal Gcost: 97.225433
Differential Heuristic::	 A star my openlist elapsed time: 0.002326, Nodes Expanded: 1216, Optimal Moves: 80, Optimal G cost: 97.225433
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001483, Nodes Expanded: 746, Optimal Moves: 80, Optimal Gcost: 97.225433
Canonical A Star::A star my openlist elapsed time: 0.000873, Nodes Expanded: 746, Optimal Moves: 80, Optimal Gcost: 97.225433
Jump Point Search::A star my openlist elapsed time: 0.000218, Nodes Expanded: 18, Optimal Moves: 80, Optimal Gcost: 97.225433
(startX, startY): (10,120) goalX, goalY: (81,164)
Octile::			 A star my openlist elapsed time: 0.002361, Nodes Expanded: 1171, Optimal Moves: 83, Optimal Gcost: 98.982788
Differential Heuristic::	 A star my openlist elapsed time: 0.002478, Nodes Expanded: 1351, Optimal Moves: 83, Optimal G cost: 98.982788
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001660, Nodes Expanded: 882, Optimal Moves: 83, Optimal Gcost: 98.982788
Canonical A Star::A star my openlist elapsed time: 0.001013, Nodes Expanded: 882, Optimal Moves: 83, Optimal Gcost: 98.982788
Jump Point Search::A star my openlist elapsed time: 0.000212, Nodes Expanded: 18, Optimal Moves: 83, Optimal Gcost: 98.982788
(startX, startY): (10,125) goalX, goalY: (53,54)
Octile::			 A star my openlist elapsed time: 0.001671, Nodes Expanded: 1026, Optimal Moves: 88, Optimal Gcost: 98.183784
Differential Heuristic::	 A star my openlist elapsed time: 0.002396, Nodes Expanded: 1385, Optimal Moves: 88, Optimal G cost: 98.183784
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001659, Nodes Expanded: 926, Optimal Moves: 88, Optimal Gcost: 98.183784
Canonical A Star::A star my openlist elapsed time: 0.000933, Nodes Expanded: 926, Optimal Moves: 88, Optimal Gcost: 98.183784
Jump Point Search::A star my openlist elapsed time: 0.000132, Nodes Expanded: 15, Optimal Moves: 88, Optimal Gcost: 98.183784
(startX, startY): (10,129) goalX, goalY: (91,158)
Octile::			 A star my openlist elapsed time: 0.001337, Nodes Expanded: 742, Optimal Moves: 82, Optimal Gcost: 96.325935
Differential Heuristic::	 A star my openlist elapsed time: 0.002280, Nodes Expanded: 1167, Optimal Moves: 82, Optimal G cost: 96.325943
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001364, Nodes Expanded: 643, Optimal Moves: 82, Optimal Gcost: 96.325943
Canonical A Star::A star my openlist elapsed time: 0.000836, Nodes Expanded: 617, Optimal Moves: 82, Optimal Gcost: 96.325935
Jump Point Search::A star my openlist elapsed time: 0.000182, Nodes Expanded: 16, Optimal Moves: 82, Optimal Gcost: 96.325935
(startX, startY): (10,130) goalX, goalY: (68,67)
Octile::			 A star my openlist elapsed time: 0.002610, Nodes Expanded: 1357, Optimal Moves: 86, Optimal Gcost: 99.911713
Differential Heuristic::	 A star my openlist elapsed time: 0.002145, Nodes Expanded: 1244, Optimal Moves: 86, Optimal G cost: 99.911713
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001991, Nodes Expanded: 1063, Optimal Moves: 86, Optimal Gcost: 99.911713
Canonical A Star::A star my openlist elapsed time: 0.001225, Nodes Expanded: 1063, Optimal Moves: 86, Optimal Gcost: 99.911713
Jump Point Search::A star my openlist elapsed time: 0.000271, Nodes Expanded: 18, Optimal Moves: 86, Optimal Gcost: 99.911713
(startX, startY): (10,130) goalX, goalY: (75,168)
Octile::			 A star my openlist elapsed time: 0.001823, Nodes Expanded: 1011, Optimal Moves: 87, Optimal Gcost: 96.355362
Differential Heuristic::	 A star my openlist elapsed time: 0.002282, Nodes Expanded: 1197, Optimal Moves: 87, Optimal G cost: 96.355362
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001540, Nodes Expanded: 782, Optimal Moves: 87, Optimal Gcost: 96.355362
Canonical A Star::A star my openlist elapsed time: 0.000856, Nodes Expanded: 782, Optimal Moves: 87, Optimal Gcost: 96.355362
Jump Point Search::A star my openlist elapsed time: 0.000188, Nodes Expanded: 17, Optimal Moves: 87, Optimal Gcost: 96.355362
(startX, startY): (10,134) goalX, goalY: (17,67)
Octile::			 A star my openlist elapsed time: 0.001947, Nodes Expanded: 1142, Optimal Moves: 79, Optimal Gcost: 96.225433
Differential Heuristic::	 A star my openlist elapsed time: 0.003072, Nodes Expanded: 1695, Optimal Moves: 79, Optimal G cost: 96.225433
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001757, Nodes Expanded: 977, Optimal Moves: 79, Optimal Gcost: 96.225433
Canonical A Star::A star my openlist elapsed time: 0.001007, Nodes Expanded: 977, Optimal Moves: 79, Optimal Gcost: 96.225433
Jump Point Search::A star my openlist elapsed time: 0.000167, Nodes Expanded: 24, Optimal Moves: 79, Optimal Gcost: 96.225433
(startX, startY): (10,65) goalX, goalY: (34,137)
Octile::			 A star my openlist elapsed time: 0.002877, Nodes Expanded: 1671, Optimal Moves: 85, Optimal Gcost: 99.740143
Differential Heuristic::	 A star my openlist elapsed time: 0.000491, Nodes Expanded: 286, Optimal Moves: 85, Optimal G cost: 99.740143
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000507, Nodes Expanded: 286, Optimal Moves: 85, Optimal Gcost: 99.740143
Canonical A Star::A star my openlist elapsed time: 0.000340, Nodes Expanded: 331, Optimal Moves: 85, Optimal Gcost: 99.740143
Jump Point Search::A star my openlist elapsed time: 0.000141, Nodes Expanded: 10, Optimal Moves: 85, Optimal Gcost: 99.740143
(startX, startY): (10,115) goalX, goalY: (46,39)
Octile::			 A star my openlist elapsed time: 0.001545, Nodes Expanded: 906, Optimal Moves: 94, Optimal Gcost: 103.355354
Differential Heuristic::	 A star my openlist elapsed time: 0.001983, Nodes Expanded: 1156, Optimal Moves: 94, Optimal G cost: 103.355354
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001342, Nodes Expanded: 763, Optimal Moves: 94, Optimal Gcost: 103.355354
Canonical A Star::A star my openlist elapsed time: 0.000790, Nodes Expanded: 790, Optimal Moves: 94, Optimal Gcost: 103.355362
Jump Point Search::A star my openlist elapsed time: 0.000105, Nodes Expanded: 12, Optimal Moves: 94, Optimal Gcost: 103.355362
(startX, startY): (10,120) goalX, goalY: (75,71)
Octile::			 A star my openlist elapsed time: 0.003102, Nodes Expanded: 1527, Optimal Moves: 87, Optimal Gcost: 100.911720
Differential Heuristic::	 A star my openlist elapsed time: 0.001607, Nodes Expanded: 957, Optimal Moves: 87, Optimal G cost: 100.911720
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001503, Nodes Expanded: 805, Optimal Moves: 87, Optimal Gcost: 100.911720
Canonical A Star::A star my openlist elapsed time: 0.000842, Nodes Expanded: 804, Optimal Moves: 87, Optimal Gcost: 100.911720
Jump Point Search::A star my openlist elapsed time: 0.000197, Nodes Expanded: 16, Optimal Moves: 87, Optimal Gcost: 100.911720
(startX, startY): (10,120) goalX, goalY: (98,150)
Octile::			 A star my openlist elapsed time: 0.001931, Nodes Expanded: 1011, Optimal Moves: 89, Optimal Gcost: 103.740143
Differential Heuristic::	 A star my openlist elapsed time: 0.001894, Nodes Expanded: 971, Optimal Moves: 89, Optimal G cost: 103.740143
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001381, Nodes Expanded: 690, Optimal Moves: 89, Optimal Gcost: 103.740143
Canonical A Star::A star my openlist elapsed time: 0.000816, Nodes Expanded: 690, Optimal Moves: 89, Optimal Gcost: 103.740143
Jump Point Search::A star my openlist elapsed time: 0.000186, Nodes Expanded: 13, Optimal Moves: 89, Optimal Gcost: 103.740143
(startX, startY): (10,125) goalX, goalY: (84,167)
Octile::			 A star my openlist elapsed time: 0.002114, Nodes Expanded: 1117, Optimal Moves: 86, Optimal Gcost: 101.154366
Differential Heuristic::	 A star my openlist elapsed time: 0.002385, Nodes Expanded: 1347, Optimal Moves: 86, Optimal G cost: 101.154358
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001463, Nodes Expanded: 798, Optimal Moves: 86, Optimal Gcost: 101.154358
Canonical A Star::A star my openlist elapsed time: 0.000983, Nodes Expanded: 893, Optimal Moves: 86, Optimal Gcost: 101.154366
Jump Point Search::A star my openlist elapsed time: 0.000187, Nodes Expanded: 17, Optimal Moves: 86, Optimal Gcost: 101.154366
(startX, startY): (10,61) goalX, goalY: (8,124)
Octile::			 A star my openlist elapsed time: 0.002731, Nodes Expanded: 1456, Optimal Moves: 86, Optimal Gcost: 102.397003
Differential Heuristic::	 A star my openlist elapsed time: 0.003987, Nodes Expanded: 1927, Optimal Moves: 86, Optimal G cost: 102.397003
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002518, Nodes Expanded: 1293, Optimal Moves: 86, Optimal Gcost: 102.397003
Canonical A Star::A star my openlist elapsed time: 0.001642, Nodes Expanded: 1293, Optimal Moves: 86, Optimal Gcost: 102.397003
Jump Point Search::A star my openlist elapsed time: 0.000473, Nodes Expanded: 57, Optimal Moves: 86, Optimal Gcost: 102.397003
(startX, startY): (10,66) goalX, goalY: (36,138)
Octile::			 A star my openlist elapsed time: 0.003179, Nodes Expanded: 1748, Optimal Moves: 86, Optimal Gcost: 101.154358
Differential Heuristic::	 A star my openlist elapsed time: 0.000841, Nodes Expanded: 486, Optimal Moves: 86, Optimal G cost: 101.154358
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000854, Nodes Expanded: 483, Optimal Moves: 86, Optimal Gcost: 101.154358
Canonical A Star::A star my openlist elapsed time: 0.000517, Nodes Expanded: 483, Optimal Moves: 86, Optimal Gcost: 101.154358
Jump Point Search::A star my openlist elapsed time: 0.000166, Nodes Expanded: 18, Optimal Moves: 86, Optimal Gcost: 101.154358
(startX, startY): (10,89) goalX, goalY: (84,97)
Octile::			 A star my openlist elapsed time: 0.003613, Nodes Expanded: 1657, Optimal Moves: 87, Optimal Gcost: 102.568581
Differential Heuristic::	 A star my openlist elapsed time: 0.005011, Nodes Expanded: 2658, Optimal Moves: 87, Optimal G cost: 102.568581
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002651, Nodes Expanded: 1148, Optimal Moves: 87, Optimal Gcost: 102.568581
Canonical A Star::A star my openlist elapsed time: 0.001544, Nodes Expanded: 1150, Optimal Moves: 87, Optimal Gcost: 102.568581
Jump Point Search::A star my openlist elapsed time: 0.000417, Nodes Expanded: 46, Optimal Moves: 87, Optimal Gcost: 102.568581
(startX, startY): (100,111) goalX, goalY: (30,48)
Octile::			 A star my openlist elapsed time: 0.001428, Nodes Expanded: 893, Optimal Moves: 81, Optimal Gcost: 101.953369
Differential Heuristic::	 A star my openlist elapsed time: 0.004128, Nodes Expanded: 2231, Optimal Moves: 81, Optimal G cost: 101.953369
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001622, Nodes Expanded: 884, Optimal Moves: 81, Optimal Gcost: 101.953369
Canonical A Star::A star my openlist elapsed time: 0.000937, Nodes Expanded: 884, Optimal Moves: 81, Optimal Gcost: 101.953369
Jump Point Search::A star my openlist elapsed time: 0.000194, Nodes Expanded: 14, Optimal Moves: 81, Optimal Gcost: 101.953369
(startX, startY): (100,114) goalX, goalY: (43,93)
Octile::			 A star my openlist elapsed time: 0.002545, Nodes Expanded: 1482, Optimal Moves: 82, Optimal Gcost: 101.296509
Differential Heuristic::	 A star my openlist elapsed time: 0.000547, Nodes Expanded: 312, Optimal Moves: 82, Optimal G cost: 101.296509
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000527, Nodes Expanded: 289, Optimal Moves: 82, Optimal Gcost: 101.296509
Canonical A Star::A star my openlist elapsed time: 0.000324, Nodes Expanded: 289, Optimal Moves: 82, Optimal Gcost: 101.296509
Jump Point Search::A star my openlist elapsed time: 0.000191, Nodes Expanded: 7, Optimal Moves: 82, Optimal Gcost: 101.296509
(startX, startY): (100,114) goalX, goalY: (45,93)
Octile::			 A star my openlist elapsed time: 0.002682, Nodes Expanded: 1491, Optimal Moves: 82, Optimal Gcost: 100.468079
Differential Heuristic::	 A star my openlist elapsed time: 0.000531, Nodes Expanded: 303, Optimal Moves: 82, Optimal G cost: 100.468079
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000524, Nodes Expanded: 277, Optimal Moves: 82, Optimal Gcost: 100.468079
Canonical A Star::A star my openlist elapsed time: 0.000314, Nodes Expanded: 277, Optimal Moves: 82, Optimal Gcost: 100.468079
Jump Point Search::A star my openlist elapsed time: 0.000174, Nodes Expanded: 7, Optimal Moves: 82, Optimal Gcost: 100.468079
(startX, startY): (10,118) goalX, goalY: (58,40)
Octile::			 A star my openlist elapsed time: 0.001554, Nodes Expanded: 1030, Optimal Moves: 95, Optimal Gcost: 107.254860
Differential Heuristic::	 A star my openlist elapsed time: 0.003549, Nodes Expanded: 1972, Optimal Moves: 95, Optimal G cost: 107.254860
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001699, Nodes Expanded: 1001, Optimal Moves: 95, Optimal Gcost: 107.254860
Canonical A Star::A star my openlist elapsed time: 0.000997, Nodes Expanded: 1001, Optimal Moves: 95, Optimal Gcost: 107.254860
Jump Point Search::A star my openlist elapsed time: 0.000158, Nodes Expanded: 14, Optimal Moves: 95, Optimal Gcost: 107.254860
(startX, startY): (10,119) goalX, goalY: (86,169)
Octile::			 A star my openlist elapsed time: 0.002278, Nodes Expanded: 1286, Optimal Moves: 89, Optimal Gcost: 107.053864
Differential Heuristic::	 A star my openlist elapsed time: 0.002787, Nodes Expanded: 1573, Optimal Moves: 89, Optimal G cost: 107.053864
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001789, Nodes Expanded: 956, Optimal Moves: 89, Optimal Gcost: 107.053864
Canonical A Star::A star my openlist elapsed time: 0.001106, Nodes Expanded: 954, Optimal Moves: 89, Optimal Gcost: 107.053864
Jump Point Search::A star my openlist elapsed time: 0.000214, Nodes Expanded: 19, Optimal Moves: 89, Optimal Gcost: 107.053864
(startX, startY): (10,125) goalX, goalY: (37,54)
Octile::			 A star my openlist elapsed time: 0.003129, Nodes Expanded: 1824, Optimal Moves: 93, Optimal Gcost: 104.426430
Differential Heuristic::	 A star my openlist elapsed time: 0.002596, Nodes Expanded: 1511, Optimal Moves: 93, Optimal G cost: 104.426430
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001712, Nodes Expanded: 1020, Optimal Moves: 93, Optimal Gcost: 104.426430
Canonical A Star::A star my openlist elapsed time: 0.001098, Nodes Expanded: 1020, Optimal Moves: 93, Optimal Gcost: 104.426430
Jump Point Search::A star my openlist elapsed time: 0.000165, Nodes Expanded: 20, Optimal Moves: 93, Optimal Gcost: 104.426430
(startX, startY): (100,102) goalX, goalY: (39,22)
Octile::			 A star my openlist elapsed time: 0.001281, Nodes Expanded: 842, Optimal Moves: 83, Optimal Gcost: 106.438652
Differential Heuristic::	 A star my openlist elapsed time: 0.003597, Nodes Expanded: 2156, Optimal Moves: 83, Optimal G cost: 106.438652
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001452, Nodes Expanded: 842, Optimal Moves: 83, Optimal Gcost: 106.438652
Canonical A Star::A star my openlist elapsed time: 0.000895, Nodes Expanded: 842, Optimal Moves: 83, Optimal Gcost: 106.438652
Jump Point Search::A star my openlist elapsed time: 0.000275, Nodes Expanded: 17, Optimal Moves: 83, Optimal Gcost: 106.438652
(startX, startY): (100,107) goalX, goalY: (23,91)
Octile::			 A star my openlist elapsed time: 0.002569, Nodes Expanded: 1381, Optimal Moves: 84, Optimal Gcost: 107.024437
Differential Heuristic::	 A star my openlist elapsed time: 0.005550, Nodes Expanded: 2359, Optimal Moves: 84, Optimal G cost: 107.024437
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002829, Nodes Expanded: 1381, Optimal Moves: 84, Optimal Gcost: 107.024437
Canonical A Star::A star my openlist elapsed time: 0.001855, Nodes Expanded: 1381, Optimal Moves: 84, Optimal Gcost: 107.024437
Jump Point Search::A star my openlist elapsed time: 0.000440, Nodes Expanded: 35, Optimal Moves: 84, Optimal Gcost: 107.024437
(startX, startY): (100,110) goalX, goalY: (22,77)
Octile::			 A star my openlist elapsed time: 0.001991, Nodes Expanded: 1109, Optimal Moves: 88, Optimal Gcost: 105.225426
Differential Heuristic::	 A star my openlist elapsed time: 0.004641, Nodes Expanded: 2047, Optimal Moves: 88, Optimal G cost: 105.225426
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002144, Nodes Expanded: 1109, Optimal Moves: 88, Optimal Gcost: 105.225426
Canonical A Star::A star my openlist elapsed time: 0.001263, Nodes Expanded: 1109, Optimal Moves: 88, Optimal Gcost: 105.225433
Jump Point Search::A star my openlist elapsed time: 0.000408, Nodes Expanded: 28, Optimal Moves: 88, Optimal Gcost: 105.225433
(startX, startY): (100,110) goalX, goalY: (32,34)
Octile::			 A star my openlist elapsed time: 0.000415, Nodes Expanded: 246, Optimal Moves: 78, Optimal Gcost: 104.752380
Differential Heuristic::	 A star my openlist elapsed time: 0.003798, Nodes Expanded: 2066, Optimal Moves: 78, Optimal G cost: 104.752373
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000521, Nodes Expanded: 246, Optimal Moves: 78, Optimal Gcost: 104.752380
Canonical A Star::A star my openlist elapsed time: 0.000284, Nodes Expanded: 246, Optimal Moves: 78, Optimal Gcost: 104.752373
Jump Point Search::A star my openlist elapsed time: 0.000143, Nodes Expanded: 6, Optimal Moves: 78, Optimal Gcost: 104.752373
(startX, startY): (100,146) goalX, goalY: (162,81)
Octile::			 A star my openlist elapsed time: 0.002274, Nodes Expanded: 1224, Optimal Moves: 91, Optimal Gcost: 105.325943
Differential Heuristic::	 A star my openlist elapsed time: 0.000687, Nodes Expanded: 391, Optimal Moves: 91, Optimal G cost: 105.325935
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000712, Nodes Expanded: 391, Optimal Moves: 91, Optimal Gcost: 105.325935
Canonical A Star::A star my openlist elapsed time: 0.000643, Nodes Expanded: 559, Optimal Moves: 91, Optimal Gcost: 105.325943
Jump Point Search::A star my openlist elapsed time: 0.000152, Nodes Expanded: 9, Optimal Moves: 91, Optimal Gcost: 105.325943
(startX, startY): (100,149) goalX, goalY: (189,109)
Octile::			 A star my openlist elapsed time: 0.001368, Nodes Expanded: 718, Optimal Moves: 90, Optimal Gcost: 105.568581
Differential Heuristic::	 A star my openlist elapsed time: 0.001665, Nodes Expanded: 992, Optimal Moves: 90, Optimal G cost: 105.568581
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000813, Nodes Expanded: 483, Optimal Moves: 90, Optimal Gcost: 105.568581
Canonical A Star::A star my openlist elapsed time: 0.000532, Nodes Expanded: 503, Optimal Moves: 90, Optimal Gcost: 105.568581
Jump Point Search::A star my openlist elapsed time: 0.000156, Nodes Expanded: 8, Optimal Moves: 90, Optimal Gcost: 105.568581
(startX, startY): (100,152) goalX, goalY: (150,74)
Octile::			 A star my openlist elapsed time: 0.001485, Nodes Expanded: 889, Optimal Moves: 91, Optimal Gcost: 105.740143
Differential Heuristic::	 A star my openlist elapsed time: 0.002183, Nodes Expanded: 1338, Optimal Moves: 91, Optimal G cost: 105.740143
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001208, Nodes Expanded: 702, Optimal Moves: 91, Optimal Gcost: 105.740143
Canonical A Star::A star my openlist elapsed time: 0.000798, Nodes Expanded: 702, Optimal Moves: 91, Optimal Gcost: 105.740143
Jump Point Search::A star my openlist elapsed time: 0.000139, Nodes Expanded: 5, Optimal Moves: 91, Optimal Gcost: 105.740143
(startX, startY): (10,104) goalX, goalY: (22,41)
Octile::			 A star my openlist elapsed time: 0.003058, Nodes Expanded: 1668, Optimal Moves: 99, Optimal Gcost: 111.669090
Differential Heuristic::	 A star my openlist elapsed time: 0.003603, Nodes Expanded: 1945, Optimal Moves: 99, Optimal G cost: 111.669090
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001546, Nodes Expanded: 787, Optimal Moves: 99, Optimal Gcost: 111.669090
Canonical A Star::A star my openlist elapsed time: 0.000953, Nodes Expanded: 819, Optimal Moves: 99, Optimal Gcost: 111.669098
Jump Point Search::A star my openlist elapsed time: 0.000158, Nodes Expanded: 17, Optimal Moves: 99, Optimal Gcost: 111.669098
(startX, startY): (10,110) goalX, goalY: (81,167)
Octile::			 A star my openlist elapsed time: 0.003814, Nodes Expanded: 1745, Optimal Moves: 96, Optimal Gcost: 111.982788
Differential Heuristic::	 A star my openlist elapsed time: 0.003219, Nodes Expanded: 1539, Optimal Moves: 96, Optimal G cost: 111.982788
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002178, Nodes Expanded: 1114, Optimal Moves: 96, Optimal Gcost: 111.982788
Canonical A Star::A star my openlist elapsed time: 0.001361, Nodes Expanded: 1114, Optimal Moves: 96, Optimal Gcost: 111.982788
Jump Point Search::A star my openlist elapsed time: 0.000228, Nodes Expanded: 24, Optimal Moves: 96, Optimal Gcost: 111.982788
(startX, startY): (10,125) goalX, goalY: (30,52)
Octile::			 A star my openlist elapsed time: 0.004293, Nodes Expanded: 2132, Optimal Moves: 99, Optimal Gcost: 111.669075
Differential Heuristic::	 A star my openlist elapsed time: 0.003205, Nodes Expanded: 1774, Optimal Moves: 99, Optimal G cost: 111.669075
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001997, Nodes Expanded: 1092, Optimal Moves: 99, Optimal Gcost: 111.669075
Canonical A Star::A star my openlist elapsed time: 0.001249, Nodes Expanded: 1092, Optimal Moves: 99, Optimal Gcost: 111.669075
Jump Point Search::A star my openlist elapsed time: 0.000171, Nodes Expanded: 20, Optimal Moves: 99, Optimal Gcost: 111.669075
(startX, startY): (10,134) goalX, goalY: (52,45)
Octile::			 A star my openlist elapsed time: 0.002126, Nodes Expanded: 1189, Optimal Moves: 99, Optimal Gcost: 111.669067
Differential Heuristic::	 A star my openlist elapsed time: 0.003700, Nodes Expanded: 1973, Optimal Moves: 99, Optimal G cost: 111.669067
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002259, Nodes Expanded: 1161, Optimal Moves: 99, Optimal Gcost: 111.669067
Canonical A Star::A star my openlist elapsed time: 0.001325, Nodes Expanded: 1160, Optimal Moves: 99, Optimal Gcost: 111.669067
Jump Point Search::A star my openlist elapsed time: 0.000149, Nodes Expanded: 18, Optimal Moves: 99, Optimal Gcost: 111.669067
(startX, startY): (10,60) goalX, goalY: (38,135)
Octile::			 A star my openlist elapsed time: 0.003678, Nodes Expanded: 1957, Optimal Moves: 92, Optimal Gcost: 108.397003
Differential Heuristic::	 A star my openlist elapsed time: 0.000544, Nodes Expanded: 301, Optimal Moves: 92, Optimal G cost: 108.397003
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000555, Nodes Expanded: 298, Optimal Moves: 92, Optimal Gcost: 108.397003
Canonical A Star::A star my openlist elapsed time: 0.000364, Nodes Expanded: 308, Optimal Moves: 92, Optimal Gcost: 108.397003
Jump Point Search::A star my openlist elapsed time: 0.000191, Nodes Expanded: 11, Optimal Moves: 92, Optimal Gcost: 108.397003
(startX, startY): (10,65) goalX, goalY: (106,82)
Octile::			 A star my openlist elapsed time: 0.002251, Nodes Expanded: 1035, Optimal Moves: 97, Optimal Gcost: 108.012222
Differential Heuristic::	 A star my openlist elapsed time: 0.005554, Nodes Expanded: 2781, Optimal Moves: 97, Optimal G cost: 108.012222
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001572, Nodes Expanded: 747, Optimal Moves: 97, Optimal Gcost: 108.012222
Canonical A Star::A star my openlist elapsed time: 0.000928, Nodes Expanded: 747, Optimal Moves: 97, Optimal Gcost: 108.012222
Jump Point Search::A star my openlist elapsed time: 0.000303, Nodes Expanded: 26, Optimal Moves: 97, Optimal Gcost: 108.012222
(startX, startY): (10,67) goalX, goalY: (93,104)
Octile::			 A star my openlist elapsed time: 0.003388, Nodes Expanded: 1785, Optimal Moves: 95, Optimal Gcost: 111.397018
Differential Heuristic::	 A star my openlist elapsed time: 0.005625, Nodes Expanded: 2954, Optimal Moves: 95, Optimal G cost: 111.397018
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002646, Nodes Expanded: 1231, Optimal Moves: 95, Optimal Gcost: 111.397018
Canonical A Star::A star my openlist elapsed time: 0.001532, Nodes Expanded: 1231, Optimal Moves: 95, Optimal Gcost: 111.397018
Jump Point Search::A star my openlist elapsed time: 0.000441, Nodes Expanded: 47, Optimal Moves: 95, Optimal Gcost: 111.397018
(startX, startY): (10,68) goalX, goalY: (107,88)
Octile::			 A star my openlist elapsed time: 0.002679, Nodes Expanded: 1357, Optimal Moves: 98, Optimal Gcost: 111.911728
Differential Heuristic::	 A star my openlist elapsed time: 0.005817, Nodes Expanded: 2963, Optimal Moves: 98, Optimal G cost: 111.911728
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002096, Nodes Expanded: 986, Optimal Moves: 98, Optimal Gcost: 111.911728
Canonical A Star::A star my openlist elapsed time: 0.001217, Nodes Expanded: 986, Optimal Moves: 98, Optimal Gcost: 111.911728
Jump Point Search::A star my openlist elapsed time: 0.000303, Nodes Expanded: 33, Optimal Moves: 98, Optimal Gcost: 111.911728
(startX, startY): (100,107) goalX, goalY: (49,112)
Octile::			 A star my openlist elapsed time: 0.002826, Nodes Expanded: 1602, Optimal Moves: 94, Optimal Gcost: 111.639641
Differential Heuristic::	 A star my openlist elapsed time: 0.001207, Nodes Expanded: 566, Optimal Moves: 94, Optimal G cost: 111.639641
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001034, Nodes Expanded: 464, Optimal Moves: 94, Optimal Gcost: 111.639641
Canonical A Star::A star my openlist elapsed time: 0.000616, Nodes Expanded: 464, Optimal Moves: 94, Optimal Gcost: 111.639641
Jump Point Search::A star my openlist elapsed time: 0.000219, Nodes Expanded: 13, Optimal Moves: 94, Optimal Gcost: 111.639641
(startX, startY): (100,108) goalX, goalY: (15,63)
Octile::			 A star my openlist elapsed time: 0.002233, Nodes Expanded: 1167, Optimal Moves: 93, Optimal Gcost: 111.882286
Differential Heuristic::	 A star my openlist elapsed time: 0.005323, Nodes Expanded: 2444, Optimal Moves: 93, Optimal G cost: 111.882286
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002542, Nodes Expanded: 1165, Optimal Moves: 93, Optimal Gcost: 111.882286
Canonical A Star::A star my openlist elapsed time: 0.001651, Nodes Expanded: 1165, Optimal Moves: 93, Optimal Gcost: 111.882286
Jump Point Search::A star my openlist elapsed time: 0.000419, Nodes Expanded: 27, Optimal Moves: 93, Optimal Gcost: 111.882286
(startX, startY): (10,102) goalX, goalY: (74,161)
Octile::			 A star my openlist elapsed time: 0.003499, Nodes Expanded: 1764, Optimal Moves: 98, Optimal Gcost: 114.397003
Differential Heuristic::	 A star my openlist elapsed time: 0.002497, Nodes Expanded: 1354, Optimal Moves: 98, Optimal G cost: 114.397003
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002335, Nodes Expanded: 1069, Optimal Moves: 98, Optimal Gcost: 114.397003
Canonical A Star::A star my openlist elapsed time: 0.001389, Nodes Expanded: 1064, Optimal Moves: 98, Optimal Gcost: 114.397003
Jump Point Search::A star my openlist elapsed time: 0.000258, Nodes Expanded: 23, Optimal Moves: 98, Optimal Gcost: 114.397003
(startX, startY): (10,109) goalX, goalY: (25,39)
Octile::			 A star my openlist elapsed time: 0.003509, Nodes Expanded: 1776, Optimal Moves: 99, Optimal Gcost: 112.497513
Differential Heuristic::	 A star my openlist elapsed time: 0.004571, Nodes Expanded: 2188, Optimal Moves: 99, Optimal G cost: 112.497513
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001831, Nodes Expanded: 940, Optimal Moves: 99, Optimal Gcost: 112.497513
Canonical A Star::A star my openlist elapsed time: 0.001120, Nodes Expanded: 941, Optimal Moves: 99, Optimal Gcost: 112.497513
Jump Point Search::A star my openlist elapsed time: 0.000178, Nodes Expanded: 20, Optimal Moves: 99, Optimal Gcost: 112.497513
(startX, startY): (10,114) goalX, goalY: (37,33)
Octile::			 A star my openlist elapsed time: 0.002284, Nodes Expanded: 1312, Optimal Moves: 100, Optimal Gcost: 112.669075
Differential Heuristic::	 A star my openlist elapsed time: 0.002577, Nodes Expanded: 1481, Optimal Moves: 100, Optimal G cost: 112.669075
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001737, Nodes Expanded: 923, Optimal Moves: 100, Optimal Gcost: 112.669075
Canonical A Star::A star my openlist elapsed time: 0.000980, Nodes Expanded: 943, Optimal Moves: 100, Optimal Gcost: 112.669083
Jump Point Search::A star my openlist elapsed time: 0.000175, Nodes Expanded: 13, Optimal Moves: 100, Optimal Gcost: 112.669083
(startX, startY): (10,117) goalX, goalY: (95,172)
Octile::			 A star my openlist elapsed time: 0.002605, Nodes Expanded: 1269, Optimal Moves: 94, Optimal Gcost: 115.781799
Differential Heuristic::	 A star my openlist elapsed time: 0.002922, Nodes Expanded: 1611, Optimal Moves: 94, Optimal G cost: 115.781799
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001754, Nodes Expanded: 897, Optimal Moves: 94, Optimal Gcost: 115.781799
Canonical A Star::A star my openlist elapsed time: 0.001025, Nodes Expanded: 897, Optimal Moves: 94, Optimal Gcost: 115.781799
Jump Point Search::A star my openlist elapsed time: 0.000215, Nodes Expanded: 19, Optimal Moves: 94, Optimal Gcost: 115.781799
(startX, startY): (10,134) goalX, goalY: (70,79)
Octile::			 A star my openlist elapsed time: 0.004848, Nodes Expanded: 2280, Optimal Moves: 97, Optimal Gcost: 113.811218
Differential Heuristic::	 A star my openlist elapsed time: 0.002858, Nodes Expanded: 1429, Optimal Moves: 97, Optimal G cost: 113.811218
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003239, Nodes Expanded: 1283, Optimal Moves: 97, Optimal Gcost: 113.811218
Canonical A Star::A star my openlist elapsed time: 0.002470, Nodes Expanded: 1282, Optimal Moves: 97, Optimal Gcost: 113.811218
Jump Point Search::A star my openlist elapsed time: 0.000331, Nodes Expanded: 30, Optimal Moves: 97, Optimal Gcost: 113.811218
(startX, startY): (10,94) goalX, goalY: (105,87)
Octile::			 A star my openlist elapsed time: 0.003064, Nodes Expanded: 1380, Optimal Moves: 96, Optimal Gcost: 114.468079
Differential Heuristic::	 A star my openlist elapsed time: 0.005946, Nodes Expanded: 3050, Optimal Moves: 96, Optimal G cost: 114.468079
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002345, Nodes Expanded: 1044, Optimal Moves: 96, Optimal Gcost: 114.468079
Canonical A Star::A star my openlist elapsed time: 0.001478, Nodes Expanded: 1044, Optimal Moves: 96, Optimal Gcost: 114.468079
Jump Point Search::A star my openlist elapsed time: 0.000339, Nodes Expanded: 30, Optimal Moves: 96, Optimal Gcost: 114.468079
(startX, startY): (100,143) goalX, goalY: (50,112)
Octile::			 A star my openlist elapsed time: 0.005248, Nodes Expanded: 2352, Optimal Moves: 100, Optimal Gcost: 113.083305
Differential Heuristic::	 A star my openlist elapsed time: 0.001940, Nodes Expanded: 1003, Optimal Moves: 100, Optimal G cost: 113.083313
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001809, Nodes Expanded: 928, Optimal Moves: 100, Optimal Gcost: 113.083313
Canonical A Star::A star my openlist elapsed time: 0.001151, Nodes Expanded: 928, Optimal Moves: 100, Optimal Gcost: 113.083313
Jump Point Search::A star my openlist elapsed time: 0.000250, Nodes Expanded: 14, Optimal Moves: 100, Optimal Gcost: 113.083313
(startX, startY): (100,149) goalX, goalY: (16,113)
Octile::			 A star my openlist elapsed time: 0.003721, Nodes Expanded: 1860, Optimal Moves: 101, Optimal Gcost: 115.740158
Differential Heuristic::	 A star my openlist elapsed time: 0.003274, Nodes Expanded: 1683, Optimal Moves: 101, Optimal G cost: 115.740158
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002903, Nodes Expanded: 1491, Optimal Moves: 101, Optimal Gcost: 115.740158
Canonical A Star::A star my openlist elapsed time: 0.001833, Nodes Expanded: 1491, Optimal Moves: 101, Optimal Gcost: 115.740158
Jump Point Search::A star my openlist elapsed time: 0.000274, Nodes Expanded: 19, Optimal Moves: 101, Optimal Gcost: 115.740158
(startX, startY): (100,149) goalX, goalY: (161,69)
Octile::			 A star my openlist elapsed time: 0.001481, Nodes Expanded: 989, Optimal Moves: 96, Optimal Gcost: 114.053871
Differential Heuristic::	 A star my openlist elapsed time: 0.002054, Nodes Expanded: 1323, Optimal Moves: 96, Optimal G cost: 114.053871
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001256, Nodes Expanded: 794, Optimal Moves: 96, Optimal Gcost: 114.053871
Canonical A Star::A star my openlist elapsed time: 0.000849, Nodes Expanded: 818, Optimal Moves: 96, Optimal Gcost: 114.053871
Jump Point Search::A star my openlist elapsed time: 0.000171, Nodes Expanded: 11, Optimal Moves: 96, Optimal Gcost: 114.053871
(startX, startY): (100,161) goalX, goalY: (162,76)
Octile::			 A star my openlist elapsed time: 0.001604, Nodes Expanded: 1038, Optimal Moves: 91, Optimal Gcost: 113.610222
Differential Heuristic::	 A star my openlist elapsed time: 0.001184, Nodes Expanded: 770, Optimal Moves: 91, Optimal G cost: 113.610222
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001095, Nodes Expanded: 713, Optimal Moves: 91, Optimal Gcost: 113.610222
Canonical A Star::A star my openlist elapsed time: 0.000677, Nodes Expanded: 713, Optimal Moves: 91, Optimal Gcost: 113.610222
Jump Point Search::A star my openlist elapsed time: 0.000193, Nodes Expanded: 12, Optimal Moves: 91, Optimal Gcost: 113.610222
(startX, startY): (10,108) goalX, goalY: (104,143)
Octile::			 A star my openlist elapsed time: 0.003234, Nodes Expanded: 1517, Optimal Moves: 107, Optimal Gcost: 118.840637
Differential Heuristic::	 A star my openlist elapsed time: 0.000583, Nodes Expanded: 272, Optimal Moves: 107, Optimal G cost: 118.840637
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000563, Nodes Expanded: 265, Optimal Moves: 107, Optimal Gcost: 118.840637
Canonical A Star::A star my openlist elapsed time: 0.000331, Nodes Expanded: 276, Optimal Moves: 107, Optimal Gcost: 118.840637
Jump Point Search::A star my openlist elapsed time: 0.000101, Nodes Expanded: 13, Optimal Moves: 107, Optimal Gcost: 118.840637
(startX, startY): (10,132) goalX, goalY: (112,164)
Octile::			 A star my openlist elapsed time: 0.001875, Nodes Expanded: 949, Optimal Moves: 103, Optimal Gcost: 118.568588
Differential Heuristic::	 A star my openlist elapsed time: 0.002790, Nodes Expanded: 1587, Optimal Moves: 103, Optimal G cost: 118.568588
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001777, Nodes Expanded: 880, Optimal Moves: 103, Optimal Gcost: 118.568588
Canonical A Star::A star my openlist elapsed time: 0.001063, Nodes Expanded: 880, Optimal Moves: 103, Optimal Gcost: 118.568588
Jump Point Search::A star my openlist elapsed time: 0.000244, Nodes Expanded: 20, Optimal Moves: 103, Optimal Gcost: 118.568588
(startX, startY): (10,60) goalX, goalY: (112,92)
Octile::			 A star my openlist elapsed time: 0.002603, Nodes Expanded: 1294, Optimal Moves: 103, Optimal Gcost: 119.397011
Differential Heuristic::	 A star my openlist elapsed time: 0.006167, Nodes Expanded: 3110, Optimal Moves: 103, Optimal G cost: 119.397011
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001717, Nodes Expanded: 876, Optimal Moves: 103, Optimal Gcost: 119.397011
Canonical A Star::A star my openlist elapsed time: 0.001029, Nodes Expanded: 876, Optimal Moves: 103, Optimal Gcost: 119.397011
Jump Point Search::A star my openlist elapsed time: 0.000307, Nodes Expanded: 23, Optimal Moves: 103, Optimal Gcost: 119.397011
(startX, startY): (100,10) goalX, goalY: (151,105)
Octile::			 A star my openlist elapsed time: 0.001108, Nodes Expanded: 813, Optimal Moves: 97, Optimal Gcost: 116.710739
Differential Heuristic::	 A star my openlist elapsed time: 0.001025, Nodes Expanded: 638, Optimal Moves: 97, Optimal G cost: 116.710739
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000942, Nodes Expanded: 547, Optimal Moves: 97, Optimal Gcost: 116.710739
Canonical A Star::A star my openlist elapsed time: 0.000550, Nodes Expanded: 547, Optimal Moves: 97, Optimal Gcost: 116.710739
Jump Point Search::A star my openlist elapsed time: 0.000137, Nodes Expanded: 8, Optimal Moves: 97, Optimal Gcost: 116.710739
(startX, startY): (100,111) goalX, goalY: (10,63)
Octile::			 A star my openlist elapsed time: 0.002171, Nodes Expanded: 1189, Optimal Moves: 101, Optimal Gcost: 119.882294
Differential Heuristic::	 A star my openlist elapsed time: 0.005442, Nodes Expanded: 2654, Optimal Moves: 101, Optimal G cost: 119.882294
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002490, Nodes Expanded: 1188, Optimal Moves: 101, Optimal Gcost: 119.882294
Canonical A Star::A star my openlist elapsed time: 0.001395, Nodes Expanded: 1188, Optimal Moves: 101, Optimal Gcost: 119.882294
Jump Point Search::A star my openlist elapsed time: 0.000407, Nodes Expanded: 29, Optimal Moves: 101, Optimal Gcost: 119.882294
(startX, startY): (100,142) goalX, goalY: (171,68)
Octile::			 A star my openlist elapsed time: 0.001928, Nodes Expanded: 1167, Optimal Moves: 102, Optimal Gcost: 119.225449
Differential Heuristic::	 A star my openlist elapsed time: 0.001789, Nodes Expanded: 1213, Optimal Moves: 102, Optimal G cost: 119.225449
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001335, Nodes Expanded: 883, Optimal Moves: 102, Optimal Gcost: 119.225449
Canonical A Star::A star my openlist elapsed time: 0.000822, Nodes Expanded: 883, Optimal Moves: 102, Optimal Gcost: 119.225449
Jump Point Search::A star my openlist elapsed time: 0.000249, Nodes Expanded: 19, Optimal Moves: 102, Optimal Gcost: 119.225449
(startX, startY): (100,150) goalX, goalY: (19,111)
Octile::			 A star my openlist elapsed time: 0.004883, Nodes Expanded: 2212, Optimal Moves: 104, Optimal Gcost: 119.982803
Differential Heuristic::	 A star my openlist elapsed time: 0.003531, Nodes Expanded: 1820, Optimal Moves: 104, Optimal G cost: 119.982803
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003293, Nodes Expanded: 1642, Optimal Moves: 104, Optimal Gcost: 119.982803
Canonical A Star::A star my openlist elapsed time: 0.002138, Nodes Expanded: 1649, Optimal Moves: 104, Optimal Gcost: 119.982803
Jump Point Search::A star my openlist elapsed time: 0.000274, Nodes Expanded: 20, Optimal Moves: 104, Optimal Gcost: 119.982803
(startX, startY): (100,161) goalX, goalY: (45,111)
Octile::			 A star my openlist elapsed time: 0.006474, Nodes Expanded: 2838, Optimal Moves: 99, Optimal Gcost: 119.953362
Differential Heuristic::	 A star my openlist elapsed time: 0.001406, Nodes Expanded: 774, Optimal Moves: 99, Optimal G cost: 119.953369
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001366, Nodes Expanded: 711, Optimal Moves: 99, Optimal Gcost: 119.953369
Canonical A Star::A star my openlist elapsed time: 0.000791, Nodes Expanded: 635, Optimal Moves: 99, Optimal Gcost: 119.953362
Jump Point Search::A star my openlist elapsed time: 0.000245, Nodes Expanded: 12, Optimal Moves: 99, Optimal Gcost: 119.953362
(startX, startY): (100,169) goalX, goalY: (161,80)
Octile::			 A star my openlist elapsed time: 0.002277, Nodes Expanded: 1388, Optimal Moves: 95, Optimal Gcost: 117.196007
Differential Heuristic::	 A star my openlist elapsed time: 0.000714, Nodes Expanded: 433, Optimal Moves: 95, Optimal G cost: 117.196007
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000728, Nodes Expanded: 430, Optimal Moves: 95, Optimal Gcost: 117.196007
Canonical A Star::A star my openlist elapsed time: 0.000567, Nodes Expanded: 575, Optimal Moves: 95, Optimal Gcost: 117.196007
Jump Point Search::A star my openlist elapsed time: 0.000221, Nodes Expanded: 10, Optimal Moves: 95, Optimal Gcost: 117.196007
(startX, startY): (100,177) goalX, goalY: (9,124)
Octile::			 A star my openlist elapsed time: 0.003690, Nodes Expanded: 1679, Optimal Moves: 97, Optimal Gcost: 119.195999
Differential Heuristic::	 A star my openlist elapsed time: 0.004191, Nodes Expanded: 2030, Optimal Moves: 97, Optimal G cost: 119.195999
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002967, Nodes Expanded: 1347, Optimal Moves: 97, Optimal Gcost: 119.195999
Canonical A Star::A star my openlist elapsed time: 0.001633, Nodes Expanded: 1347, Optimal Moves: 97, Optimal Gcost: 119.195999
Jump Point Search::A star my openlist elapsed time: 0.000194, Nodes Expanded: 8, Optimal Moves: 97, Optimal Gcost: 119.195999
(startX, startY): (10,114) goalX, goalY: (94,86)
Octile::			 A star my openlist elapsed time: 0.004444, Nodes Expanded: 2108, Optimal Moves: 102, Optimal Gcost: 121.296524
Differential Heuristic::	 A star my openlist elapsed time: 0.002373, Nodes Expanded: 1234, Optimal Moves: 102, Optimal G cost: 121.296516
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001863, Nodes Expanded: 930, Optimal Moves: 102, Optimal Gcost: 121.296516
Canonical A Star::A star my openlist elapsed time: 0.001182, Nodes Expanded: 953, Optimal Moves: 102, Optimal Gcost: 121.296524
Jump Point Search::A star my openlist elapsed time: 0.000191, Nodes Expanded: 19, Optimal Moves: 102, Optimal Gcost: 121.296524
(startX, startY): (10,118) goalX, goalY: (37,28)
Octile::			 A star my openlist elapsed time: 0.002770, Nodes Expanded: 1510, Optimal Moves: 107, Optimal Gcost: 120.497505
Differential Heuristic::	 A star my openlist elapsed time: 0.004533, Nodes Expanded: 2356, Optimal Moves: 107, Optimal G cost: 120.497505
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001897, Nodes Expanded: 1030, Optimal Moves: 107, Optimal Gcost: 120.497505
Canonical A Star::A star my openlist elapsed time: 0.001269, Nodes Expanded: 1030, Optimal Moves: 107, Optimal Gcost: 120.497505
Jump Point Search::A star my openlist elapsed time: 0.000163, Nodes Expanded: 15, Optimal Moves: 107, Optimal Gcost: 120.497505
(startX, startY): (10,119) goalX, goalY: (36,27)
Octile::			 A star my openlist elapsed time: 0.002874, Nodes Expanded: 1618, Optimal Moves: 109, Optimal Gcost: 122.911720
Differential Heuristic::	 A star my openlist elapsed time: 0.004810, Nodes Expanded: 2435, Optimal Moves: 109, Optimal G cost: 122.911720
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001909, Nodes Expanded: 1064, Optimal Moves: 109, Optimal Gcost: 122.911720
Canonical A Star::A star my openlist elapsed time: 0.001251, Nodes Expanded: 1064, Optimal Moves: 109, Optimal Gcost: 122.911720
Jump Point Search::A star my openlist elapsed time: 0.000162, Nodes Expanded: 16, Optimal Moves: 109, Optimal Gcost: 122.911720
(startX, startY): (10,123) goalX, goalY: (33,33)
Octile::			 A star my openlist elapsed time: 0.003291, Nodes Expanded: 1830, Optimal Moves: 107, Optimal Gcost: 122.154366
Differential Heuristic::	 A star my openlist elapsed time: 0.004378, Nodes Expanded: 2292, Optimal Moves: 107, Optimal G cost: 122.154366
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001953, Nodes Expanded: 1052, Optimal Moves: 107, Optimal Gcost: 122.154366
Canonical A Star::A star my openlist elapsed time: 0.001228, Nodes Expanded: 1052, Optimal Moves: 107, Optimal Gcost: 122.154366
Jump Point Search::A star my openlist elapsed time: 0.000166, Nodes Expanded: 18, Optimal Moves: 107, Optimal Gcost: 122.154366
(startX, startY): (10,127) goalX, goalY: (23,45)
Octile::			 A star my openlist elapsed time: 0.004756, Nodes Expanded: 2354, Optimal Moves: 107, Optimal Gcost: 122.982796
Differential Heuristic::	 A star my openlist elapsed time: 0.004611, Nodes Expanded: 2393, Optimal Moves: 107, Optimal G cost: 122.982796
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002624, Nodes Expanded: 1387, Optimal Moves: 107, Optimal Gcost: 122.982796
Canonical A Star::A star my openlist elapsed time: 0.001671, Nodes Expanded: 1388, Optimal Moves: 107, Optimal Gcost: 122.982796
Jump Point Search::A star my openlist elapsed time: 0.000196, Nodes Expanded: 23, Optimal Moves: 107, Optimal Gcost: 122.982796
(startX, startY): (10,128) goalX, goalY: (90,187)
Octile::			 A star my openlist elapsed time: 0.002541, Nodes Expanded: 1452, Optimal Moves: 106, Optimal Gcost: 122.397011
Differential Heuristic::	 A star my openlist elapsed time: 0.003439, Nodes Expanded: 1912, Optimal Moves: 106, Optimal G cost: 122.397011
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002181, Nodes Expanded: 1157, Optimal Moves: 106, Optimal Gcost: 122.397011
Canonical A Star::A star my openlist elapsed time: 0.001346, Nodes Expanded: 1239, Optimal Moves: 106, Optimal Gcost: 122.397011
Jump Point Search::A star my openlist elapsed time: 0.000219, Nodes Expanded: 19, Optimal Moves: 106, Optimal Gcost: 122.397011
(startX, startY): (10,134) goalX, goalY: (111,171)
Octile::			 A star my openlist elapsed time: 0.001689, Nodes Expanded: 882, Optimal Moves: 103, Optimal Gcost: 121.053879
Differential Heuristic::	 A star my openlist elapsed time: 0.002708, Nodes Expanded: 1558, Optimal Moves: 103, Optimal G cost: 121.053879
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001548, Nodes Expanded: 810, Optimal Moves: 103, Optimal Gcost: 121.053879
Canonical A Star::A star my openlist elapsed time: 0.000989, Nodes Expanded: 810, Optimal Moves: 103, Optimal Gcost: 121.053879
Jump Point Search::A star my openlist elapsed time: 0.000222, Nodes Expanded: 19, Optimal Moves: 103, Optimal Gcost: 121.053879
(startX, startY): (10,77) goalX, goalY: (102,112)
Octile::			 A star my openlist elapsed time: 0.004140, Nodes Expanded: 1846, Optimal Moves: 103, Optimal Gcost: 120.639671
Differential Heuristic::	 A star my openlist elapsed time: 0.006640, Nodes Expanded: 3333, Optimal Moves: 103, Optimal G cost: 120.639671
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002676, Nodes Expanded: 1252, Optimal Moves: 103, Optimal Gcost: 120.639671
Canonical A Star::A star my openlist elapsed time: 0.001767, Nodes Expanded: 1252, Optimal Moves: 103, Optimal Gcost: 120.639671
Jump Point Search::A star my openlist elapsed time: 0.000490, Nodes Expanded: 46, Optimal Moves: 103, Optimal Gcost: 120.639671
(startX, startY): (100,141) goalX, goalY: (181,79)
Octile::			 A star my openlist elapsed time: 0.003340, Nodes Expanded: 1813, Optimal Moves: 110, Optimal Gcost: 123.911728
Differential Heuristic::	 A star my openlist elapsed time: 0.001637, Nodes Expanded: 1087, Optimal Moves: 110, Optimal G cost: 123.911728
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001275, Nodes Expanded: 861, Optimal Moves: 110, Optimal Gcost: 123.911728
Canonical A Star::A star my openlist elapsed time: 0.000781, Nodes Expanded: 861, Optimal Moves: 110, Optimal Gcost: 123.911728
Jump Point Search::A star my openlist elapsed time: 0.000156, Nodes Expanded: 18, Optimal Moves: 110, Optimal Gcost: 123.911728
(startX, startY): (100,145) goalX, goalY: (19,103)
Octile::			 A star my openlist elapsed time: 0.004423, Nodes Expanded: 2028, Optimal Moves: 108, Optimal Gcost: 123.568596
Differential Heuristic::	 A star my openlist elapsed time: 0.003952, Nodes Expanded: 1922, Optimal Moves: 108, Optimal G cost: 123.568596
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003091, Nodes Expanded: 1499, Optimal Moves: 108, Optimal Gcost: 123.568596
Canonical A Star::A star my openlist elapsed time: 0.001858, Nodes Expanded: 1503, Optimal Moves: 108, Optimal Gcost: 123.568596
Jump Point Search::A star my openlist elapsed time: 0.000271, Nodes Expanded: 18, Optimal Moves: 108, Optimal Gcost: 123.568596
(startX, startY): (10,117) goalX, goalY: (81,187)
Octile::			 A star my openlist elapsed time: 0.003040, Nodes Expanded: 1630, Optimal Moves: 109, Optimal Gcost: 124.982788
Differential Heuristic::	 A star my openlist elapsed time: 0.003232, Nodes Expanded: 1857, Optimal Moves: 109, Optimal G cost: 124.982788
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002274, Nodes Expanded: 1217, Optimal Moves: 109, Optimal Gcost: 124.982788
Canonical A Star::A star my openlist elapsed time: 0.001374, Nodes Expanded: 1217, Optimal Moves: 109, Optimal Gcost: 124.982788
Jump Point Search::A star my openlist elapsed time: 0.000226, Nodes Expanded: 23, Optimal Moves: 109, Optimal Gcost: 124.982788
(startX, startY): (10,120) goalX, goalY: (88,189)
Octile::			 A star my openlist elapsed time: 0.002951, Nodes Expanded: 1673, Optimal Moves: 108, Optimal Gcost: 126.882294
Differential Heuristic::	 A star my openlist elapsed time: 0.003969, Nodes Expanded: 2051, Optimal Moves: 108, Optimal G cost: 126.882294
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002545, Nodes Expanded: 1351, Optimal Moves: 108, Optimal Gcost: 126.882294
Canonical A Star::A star my openlist elapsed time: 0.001498, Nodes Expanded: 1351, Optimal Moves: 108, Optimal Gcost: 126.882294
Jump Point Search::A star my openlist elapsed time: 0.000218, Nodes Expanded: 19, Optimal Moves: 108, Optimal Gcost: 126.882294
(startX, startY): (10,121) goalX, goalY: (78,189)
Octile::			 A star my openlist elapsed time: 0.003304, Nodes Expanded: 1808, Optimal Moves: 109, Optimal Gcost: 125.397003
Differential Heuristic::	 A star my openlist elapsed time: 0.003315, Nodes Expanded: 1870, Optimal Moves: 109, Optimal G cost: 125.397003
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002528, Nodes Expanded: 1367, Optimal Moves: 109, Optimal Gcost: 125.397003
Canonical A Star::A star my openlist elapsed time: 0.001548, Nodes Expanded: 1367, Optimal Moves: 109, Optimal Gcost: 125.397003
Jump Point Search::A star my openlist elapsed time: 0.000230, Nodes Expanded: 25, Optimal Moves: 109, Optimal Gcost: 125.397003
(startX, startY): (10,121) goalX, goalY: (80,95)
Octile::			 A star my openlist elapsed time: 0.005655, Nodes Expanded: 2720, Optimal Moves: 107, Optimal Gcost: 125.882301
Differential Heuristic::	 A star my openlist elapsed time: 0.002409, Nodes Expanded: 1301, Optimal Moves: 107, Optimal G cost: 125.882301
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001878, Nodes Expanded: 1013, Optimal Moves: 107, Optimal Gcost: 125.882301
Canonical A Star::A star my openlist elapsed time: 0.001165, Nodes Expanded: 1012, Optimal Moves: 107, Optimal Gcost: 125.882301
Jump Point Search::A star my openlist elapsed time: 0.000279, Nodes Expanded: 20, Optimal Moves: 107, Optimal Gcost: 125.882301
(startX, startY): (10,126) goalX, goalY: (81,192)
Octile::			 A star my openlist elapsed time: 0.002431, Nodes Expanded: 1384, Optimal Moves: 111, Optimal Gcost: 124.497505
Differential Heuristic::	 A star my openlist elapsed time: 0.003191, Nodes Expanded: 1810, Optimal Moves: 111, Optimal G cost: 124.497505
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002164, Nodes Expanded: 1150, Optimal Moves: 111, Optimal Gcost: 124.497505
Canonical A Star::A star my openlist elapsed time: 0.001278, Nodes Expanded: 1150, Optimal Moves: 111, Optimal Gcost: 124.497505
Jump Point Search::A star my openlist elapsed time: 0.000218, Nodes Expanded: 20, Optimal Moves: 111, Optimal Gcost: 124.497505
(startX, startY): (100,102) goalX, goalY: (17,107)
Octile::			 A star my openlist elapsed time: 0.005207, Nodes Expanded: 2254, Optimal Moves: 104, Optimal Gcost: 125.781792
Differential Heuristic::	 A star my openlist elapsed time: 0.004491, Nodes Expanded: 1796, Optimal Moves: 104, Optimal G cost: 125.781792
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003799, Nodes Expanded: 1482, Optimal Moves: 104, Optimal Gcost: 125.781792
Canonical A Star::A star my openlist elapsed time: 0.002331, Nodes Expanded: 1482, Optimal Moves: 104, Optimal Gcost: 125.781792
Jump Point Search::A star my openlist elapsed time: 0.000445, Nodes Expanded: 31, Optimal Moves: 104, Optimal Gcost: 125.781792
(startX, startY): (100,110) goalX, goalY: (43,121)
Octile::			 A star my openlist elapsed time: 0.003100, Nodes Expanded: 1788, Optimal Moves: 106, Optimal Gcost: 125.296501
Differential Heuristic::	 A star my openlist elapsed time: 0.002386, Nodes Expanded: 1004, Optimal Moves: 106, Optimal G cost: 125.296509
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001941, Nodes Expanded: 863, Optimal Moves: 106, Optimal Gcost: 125.296509
Canonical A Star::A star my openlist elapsed time: 0.001193, Nodes Expanded: 863, Optimal Moves: 106, Optimal Gcost: 125.296509
Jump Point Search::A star my openlist elapsed time: 0.000326, Nodes Expanded: 19, Optimal Moves: 106, Optimal Gcost: 125.296509
(startX, startY): (100,114) goalX, goalY: (8,67)
Octile::			 A star my openlist elapsed time: 0.002726, Nodes Expanded: 1427, Optimal Moves: 106, Optimal Gcost: 125.710724
Differential Heuristic::	 A star my openlist elapsed time: 0.006203, Nodes Expanded: 2886, Optimal Moves: 106, Optimal G cost: 125.710724
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003004, Nodes Expanded: 1427, Optimal Moves: 106, Optimal Gcost: 125.710724
Canonical A Star::A star my openlist elapsed time: 0.001852, Nodes Expanded: 1427, Optimal Moves: 106, Optimal Gcost: 125.710724
Jump Point Search::A star my openlist elapsed time: 0.000528, Nodes Expanded: 39, Optimal Moves: 106, Optimal Gcost: 125.710724
(startX, startY): (100,144) goalX, goalY: (151,58)
Octile::			 A star my openlist elapsed time: 0.002788, Nodes Expanded: 1680, Optimal Moves: 108, Optimal Gcost: 126.053879
Differential Heuristic::	 A star my openlist elapsed time: 0.002561, Nodes Expanded: 1597, Optimal Moves: 108, Optimal G cost: 126.053879
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002005, Nodes Expanded: 1284, Optimal Moves: 108, Optimal Gcost: 126.053879
Canonical A Star::A star my openlist elapsed time: 0.001312, Nodes Expanded: 1278, Optimal Moves: 108, Optimal Gcost: 126.053879
Jump Point Search::A star my openlist elapsed time: 0.000278, Nodes Expanded: 20, Optimal Moves: 108, Optimal Gcost: 126.053879
(startX, startY): (100,15) goalX, goalY: (174,89)
Octile::			 A star my openlist elapsed time: 0.003034, Nodes Expanded: 1820, Optimal Moves: 104, Optimal Gcost: 124.124947
Differential Heuristic::	 A star my openlist elapsed time: 0.002724, Nodes Expanded: 1238, Optimal Moves: 104, Optimal G cost: 124.124947
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002813, Nodes Expanded: 1160, Optimal Moves: 104, Optimal Gcost: 124.124947
Canonical A Star::A star my openlist elapsed time: 0.001599, Nodes Expanded: 1160, Optimal Moves: 104, Optimal Gcost: 124.124947
Jump Point Search::A star my openlist elapsed time: 0.000235, Nodes Expanded: 25, Optimal Moves: 104, Optimal Gcost: 124.124947
(startX, startY): (10,102) goalX, goalY: (99,100)
Octile::			 A star my openlist elapsed time: 0.003863, Nodes Expanded: 1886, Optimal Moves: 110, Optimal Gcost: 130.539169
Differential Heuristic::	 A star my openlist elapsed time: 0.002859, Nodes Expanded: 1461, Optimal Moves: 110, Optimal G cost: 130.539169
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001807, Nodes Expanded: 863, Optimal Moves: 110, Optimal Gcost: 130.539169
Canonical A Star::A star my openlist elapsed time: 0.001127, Nodes Expanded: 867, Optimal Moves: 110, Optimal Gcost: 130.539185
Jump Point Search::A star my openlist elapsed time: 0.000317, Nodes Expanded: 18, Optimal Moves: 110, Optimal Gcost: 130.539185
(startX, startY): (10,110) goalX, goalY: (62,185)
Octile::			 A star my openlist elapsed time: 0.004173, Nodes Expanded: 2088, Optimal Moves: 114, Optimal Gcost: 130.397003
Differential Heuristic::	 A star my openlist elapsed time: 0.003040, Nodes Expanded: 1804, Optimal Moves: 114, Optimal G cost: 130.397003
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003127, Nodes Expanded: 1415, Optimal Moves: 114, Optimal Gcost: 130.397003
Canonical A Star::A star my openlist elapsed time: 0.001669, Nodes Expanded: 1415, Optimal Moves: 114, Optimal Gcost: 130.397003
Jump Point Search::A star my openlist elapsed time: 0.000267, Nodes Expanded: 32, Optimal Moves: 114, Optimal Gcost: 130.397003
(startX, startY): (10,113) goalX, goalY: (92,185)
Octile::			 A star my openlist elapsed time: 0.003915, Nodes Expanded: 1978, Optimal Moves: 111, Optimal Gcost: 131.539154
Differential Heuristic::	 A star my openlist elapsed time: 0.004148, Nodes Expanded: 2178, Optimal Moves: 111, Optimal G cost: 131.539154
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002663, Nodes Expanded: 1435, Optimal Moves: 111, Optimal Gcost: 131.539154
Canonical A Star::A star my openlist elapsed time: 0.001699, Nodes Expanded: 1435, Optimal Moves: 111, Optimal Gcost: 131.539154
Jump Point Search::A star my openlist elapsed time: 0.000226, Nodes Expanded: 21, Optimal Moves: 111, Optimal Gcost: 131.539154
(startX, startY): (10,114) goalX, goalY: (111,166)
Octile::			 A star my openlist elapsed time: 0.003380, Nodes Expanded: 1601, Optimal Moves: 108, Optimal Gcost: 129.367584
Differential Heuristic::	 A star my openlist elapsed time: 0.003435, Nodes Expanded: 1862, Optimal Moves: 108, Optimal G cost: 129.367584
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002059, Nodes Expanded: 1046, Optimal Moves: 108, Optimal Gcost: 129.367584
Canonical A Star::A star my openlist elapsed time: 0.001287, Nodes Expanded: 1046, Optimal Moves: 108, Optimal Gcost: 129.367584
Jump Point Search::A star my openlist elapsed time: 0.000250, Nodes Expanded: 19, Optimal Moves: 108, Optimal Gcost: 129.367584
(startX, startY): (10,116) goalX, goalY: (102,183)
Octile::			 A star my openlist elapsed time: 0.003062, Nodes Expanded: 1591, Optimal Moves: 106, Optimal Gcost: 130.681305
Differential Heuristic::	 A star my openlist elapsed time: 0.004240, Nodes Expanded: 2316, Optimal Moves: 106, Optimal G cost: 130.681305
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002109, Nodes Expanded: 1141, Optimal Moves: 106, Optimal Gcost: 130.681305
Canonical A Star::A star my openlist elapsed time: 0.001403, Nodes Expanded: 1141, Optimal Moves: 106, Optimal Gcost: 130.681305
Jump Point Search::A star my openlist elapsed time: 0.000216, Nodes Expanded: 19, Optimal Moves: 106, Optimal Gcost: 130.681305
(startX, startY): (10,124) goalX, goalY: (93,91)
Octile::			 A star my openlist elapsed time: 0.005538, Nodes Expanded: 2468, Optimal Moves: 109, Optimal Gcost: 131.196014
Differential Heuristic::	 A star my openlist elapsed time: 0.002638, Nodes Expanded: 1426, Optimal Moves: 109, Optimal G cost: 131.196014
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001959, Nodes Expanded: 1012, Optimal Moves: 109, Optimal Gcost: 131.196014
Canonical A Star::A star my openlist elapsed time: 0.001206, Nodes Expanded: 1012, Optimal Moves: 109, Optimal Gcost: 131.196014
Jump Point Search::A star my openlist elapsed time: 0.000210, Nodes Expanded: 21, Optimal Moves: 109, Optimal Gcost: 131.196014
(startX, startY): (100,1) goalX, goalY: (178,82)
Octile::			 A star my openlist elapsed time: 0.001707, Nodes Expanded: 1132, Optimal Moves: 111, Optimal Gcost: 131.124954
Differential Heuristic::	 A star my openlist elapsed time: 0.001473, Nodes Expanded: 786, Optimal Moves: 111, Optimal G cost: 131.124969
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001556, Nodes Expanded: 740, Optimal Moves: 111, Optimal Gcost: 131.124954
Canonical A Star::A star my openlist elapsed time: 0.000806, Nodes Expanded: 741, Optimal Moves: 111, Optimal Gcost: 131.124954
Jump Point Search::A star my openlist elapsed time: 0.000187, Nodes Expanded: 19, Optimal Moves: 111, Optimal Gcost: 131.124954
(startX, startY): (100,143) goalX, goalY: (42,92)
Octile::			 A star my openlist elapsed time: 0.005185, Nodes Expanded: 2238, Optimal Moves: 117, Optimal Gcost: 128.012222
Differential Heuristic::	 A star my openlist elapsed time: 0.001200, Nodes Expanded: 578, Optimal Moves: 117, Optimal G cost: 128.012238
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001194, Nodes Expanded: 544, Optimal Moves: 117, Optimal Gcost: 128.012238
Canonical A Star::A star my openlist elapsed time: 0.000609, Nodes Expanded: 544, Optimal Moves: 117, Optimal Gcost: 128.012238
Jump Point Search::A star my openlist elapsed time: 0.000268, Nodes Expanded: 11, Optimal Moves: 117, Optimal Gcost: 128.012238
(startX, startY): (100,147) goalX, goalY: (132,52)
Octile::			 A star my openlist elapsed time: 0.002529, Nodes Expanded: 1380, Optimal Moves: 113, Optimal Gcost: 128.982788
Differential Heuristic::	 A star my openlist elapsed time: 0.006211, Nodes Expanded: 2391, Optimal Moves: 113, Optimal G cost: 128.982803
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001965, Nodes Expanded: 915, Optimal Moves: 113, Optimal Gcost: 128.982803
Canonical A Star::A star my openlist elapsed time: 0.000928, Nodes Expanded: 915, Optimal Moves: 113, Optimal Gcost: 128.982803
Jump Point Search::A star my openlist elapsed time: 0.000164, Nodes Expanded: 13, Optimal Moves: 113, Optimal Gcost: 128.982803
(startX, startY): (100,149) goalX, goalY: (46,94)
Octile::			 A star my openlist elapsed time: 0.006012, Nodes Expanded: 2696, Optimal Moves: 115, Optimal Gcost: 130.154373
Differential Heuristic::	 A star my openlist elapsed time: 0.002582, Nodes Expanded: 1218, Optimal Moves: 115, Optimal G cost: 130.154373
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002281, Nodes Expanded: 1092, Optimal Moves: 115, Optimal Gcost: 130.154373
Canonical A Star::A star my openlist elapsed time: 0.001326, Nodes Expanded: 1091, Optimal Moves: 115, Optimal Gcost: 130.154373
Jump Point Search::A star my openlist elapsed time: 0.000236, Nodes Expanded: 15, Optimal Moves: 115, Optimal Gcost: 130.154373
(startX, startY): (10,104) goalX, goalY: (108,89)
Octile::			 A star my openlist elapsed time: 0.003340, Nodes Expanded: 1705, Optimal Moves: 117, Optimal Gcost: 133.811234
Differential Heuristic::	 A star my openlist elapsed time: 0.002975, Nodes Expanded: 1504, Optimal Moves: 117, Optimal G cost: 133.811234
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001908, Nodes Expanded: 958, Optimal Moves: 117, Optimal Gcost: 133.811234
Canonical A Star::A star my openlist elapsed time: 0.001379, Nodes Expanded: 977, Optimal Moves: 117, Optimal Gcost: 133.811249
Jump Point Search::A star my openlist elapsed time: 0.000217, Nodes Expanded: 21, Optimal Moves: 117, Optimal Gcost: 133.811249
(startX, startY): (10,108) goalX, goalY: (109,163)
Octile::			 A star my openlist elapsed time: 0.003555, Nodes Expanded: 1796, Optimal Moves: 112, Optimal Gcost: 132.124939
Differential Heuristic::	 A star my openlist elapsed time: 0.003366, Nodes Expanded: 1811, Optimal Moves: 112, Optimal G cost: 132.124939
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002194, Nodes Expanded: 1069, Optimal Moves: 112, Optimal Gcost: 132.124939
Canonical A Star::A star my openlist elapsed time: 0.001289, Nodes Expanded: 1069, Optimal Moves: 112, Optimal Gcost: 132.124939
Jump Point Search::A star my openlist elapsed time: 0.000294, Nodes Expanded: 25, Optimal Moves: 112, Optimal Gcost: 132.124939
(startX, startY): (10,115) goalX, goalY: (109,84)
Octile::			 A star my openlist elapsed time: 0.004830, Nodes Expanded: 2293, Optimal Moves: 117, Optimal Gcost: 135.882294
Differential Heuristic::	 A star my openlist elapsed time: 0.003540, Nodes Expanded: 1712, Optimal Moves: 117, Optimal G cost: 135.882294
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001946, Nodes Expanded: 979, Optimal Moves: 117, Optimal Gcost: 135.882294
Canonical A Star::A star my openlist elapsed time: 0.001201, Nodes Expanded: 977, Optimal Moves: 117, Optimal Gcost: 135.882294
Jump Point Search::A star my openlist elapsed time: 0.000171, Nodes Expanded: 17, Optimal Moves: 117, Optimal Gcost: 135.882294
(startX, startY): (10,121) goalX, goalY: (94,96)
Octile::			 A star my openlist elapsed time: 0.005452, Nodes Expanded: 2636, Optimal Moves: 110, Optimal Gcost: 133.024445
Differential Heuristic::	 A star my openlist elapsed time: 0.003040, Nodes Expanded: 1520, Optimal Moves: 110, Optimal G cost: 133.024445
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002051, Nodes Expanded: 1016, Optimal Moves: 110, Optimal Gcost: 133.024445
Canonical A Star::A star my openlist elapsed time: 0.001203, Nodes Expanded: 1015, Optimal Moves: 110, Optimal Gcost: 133.024445
Jump Point Search::A star my openlist elapsed time: 0.000220, Nodes Expanded: 20, Optimal Moves: 110, Optimal Gcost: 133.024445
(startX, startY): (10,94) goalX, goalY: (74,145)
Octile::			 A star my openlist elapsed time: 0.004617, Nodes Expanded: 2238, Optimal Moves: 120, Optimal Gcost: 133.911728
Differential Heuristic::	 A star my openlist elapsed time: 0.001398, Nodes Expanded: 719, Optimal Moves: 120, Optimal G cost: 133.911728
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001261, Nodes Expanded: 648, Optimal Moves: 120, Optimal Gcost: 133.911728
Canonical A Star::A star my openlist elapsed time: 0.000682, Nodes Expanded: 655, Optimal Moves: 120, Optimal Gcost: 133.911743
Jump Point Search::A star my openlist elapsed time: 0.000227, Nodes Expanded: 16, Optimal Moves: 120, Optimal Gcost: 133.911743
(startX, startY): (100,147) goalX, goalY: (170,88)
Octile::			 A star my openlist elapsed time: 0.006395, Nodes Expanded: 3214, Optimal Moves: 116, Optimal Gcost: 134.053864
Differential Heuristic::	 A star my openlist elapsed time: 0.001581, Nodes Expanded: 923, Optimal Moves: 116, Optimal G cost: 134.053864
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001570, Nodes Expanded: 875, Optimal Moves: 116, Optimal Gcost: 134.053864
Canonical A Star::A star my openlist elapsed time: 0.000859, Nodes Expanded: 875, Optimal Moves: 116, Optimal Gcost: 134.053864
Jump Point Search::A star my openlist elapsed time: 0.000179, Nodes Expanded: 16, Optimal Moves: 116, Optimal Gcost: 134.053864
(startX, startY): (100,166) goalX, goalY: (44,96)
Octile::			 A star my openlist elapsed time: 0.006933, Nodes Expanded: 3142, Optimal Moves: 113, Optimal Gcost: 134.367569
Differential Heuristic::	 A star my openlist elapsed time: 0.001862, Nodes Expanded: 929, Optimal Moves: 113, Optimal G cost: 134.367584
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001635, Nodes Expanded: 851, Optimal Moves: 113, Optimal Gcost: 134.367584
Canonical A Star::A star my openlist elapsed time: 0.001007, Nodes Expanded: 851, Optimal Moves: 113, Optimal Gcost: 134.367584
Jump Point Search::A star my openlist elapsed time: 0.000247, Nodes Expanded: 11, Optimal Moves: 113, Optimal Gcost: 134.367584
(startX, startY): (100,17) goalX, goalY: (143,129)
Octile::			 A star my openlist elapsed time: 0.001310, Nodes Expanded: 868, Optimal Moves: 114, Optimal Gcost: 132.053864
Differential Heuristic::	 A star my openlist elapsed time: 0.001991, Nodes Expanded: 1117, Optimal Moves: 114, Optimal G cost: 132.053864
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001277, Nodes Expanded: 758, Optimal Moves: 114, Optimal Gcost: 132.053864
Canonical A Star::A star my openlist elapsed time: 0.000776, Nodes Expanded: 759, Optimal Moves: 114, Optimal Gcost: 132.053864
Jump Point Search::A star my openlist elapsed time: 0.000178, Nodes Expanded: 12, Optimal Moves: 114, Optimal Gcost: 132.053864
(startX, startY): (100,170) goalX, goalY: (21,106)
Octile::			 A star my openlist elapsed time: 0.007060, Nodes Expanded: 3060, Optimal Moves: 106, Optimal Gcost: 132.338150
Differential Heuristic::	 A star my openlist elapsed time: 0.005492, Nodes Expanded: 2533, Optimal Moves: 106, Optimal G cost: 132.338150
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004942, Nodes Expanded: 2207, Optimal Moves: 106, Optimal Gcost: 132.338150
Canonical A Star::A star my openlist elapsed time: 0.003049, Nodes Expanded: 2207, Optimal Moves: 106, Optimal Gcost: 132.338150
Jump Point Search::A star my openlist elapsed time: 0.000292, Nodes Expanded: 17, Optimal Moves: 106, Optimal Gcost: 132.338150
(startX, startY): (100,178) goalX, goalY: (24,108)
Octile::			 A star my openlist elapsed time: 0.007626, Nodes Expanded: 3304, Optimal Moves: 114, Optimal Gcost: 135.781784
Differential Heuristic::	 A star my openlist elapsed time: 0.004930, Nodes Expanded: 2294, Optimal Moves: 114, Optimal G cost: 135.781784
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004731, Nodes Expanded: 2080, Optimal Moves: 114, Optimal Gcost: 135.781784
Canonical A Star::A star my openlist elapsed time: 0.002817, Nodes Expanded: 2080, Optimal Moves: 114, Optimal Gcost: 135.781784
Jump Point Search::A star my openlist elapsed time: 0.000410, Nodes Expanded: 16, Optimal Moves: 114, Optimal Gcost: 135.781784
(startX, startY): (10,104) goalX, goalY: (97,174)
Octile::			 A star my openlist elapsed time: 0.003853, Nodes Expanded: 1839, Optimal Moves: 111, Optimal Gcost: 136.095520
Differential Heuristic::	 A star my openlist elapsed time: 0.003217, Nodes Expanded: 1766, Optimal Moves: 111, Optimal G cost: 136.095520
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002233, Nodes Expanded: 1158, Optimal Moves: 111, Optimal Gcost: 136.095520
Canonical A Star::A star my openlist elapsed time: 0.001416, Nodes Expanded: 1157, Optimal Moves: 111, Optimal Gcost: 136.095520
Jump Point Search::A star my openlist elapsed time: 0.000254, Nodes Expanded: 25, Optimal Moves: 111, Optimal Gcost: 136.095520
(startX, startY): (10,119) goalX, goalY: (108,83)
Octile::			 A star my openlist elapsed time: 0.005293, Nodes Expanded: 2453, Optimal Moves: 119, Optimal Gcost: 137.882294
Differential Heuristic::	 A star my openlist elapsed time: 0.003492, Nodes Expanded: 1729, Optimal Moves: 119, Optimal G cost: 137.882294
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002021, Nodes Expanded: 1018, Optimal Moves: 119, Optimal Gcost: 137.882294
Canonical A Star::A star my openlist elapsed time: 0.001241, Nodes Expanded: 1018, Optimal Moves: 119, Optimal Gcost: 137.882294
Jump Point Search::A star my openlist elapsed time: 0.000209, Nodes Expanded: 20, Optimal Moves: 119, Optimal Gcost: 137.882294
(startX, startY): (10,93) goalX, goalY: (76,148)
Octile::			 A star my openlist elapsed time: 0.004563, Nodes Expanded: 2236, Optimal Moves: 122, Optimal Gcost: 136.740158
Differential Heuristic::	 A star my openlist elapsed time: 0.001906, Nodes Expanded: 1020, Optimal Moves: 122, Optimal G cost: 136.740158
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001700, Nodes Expanded: 850, Optimal Moves: 122, Optimal Gcost: 136.740158
Canonical A Star::A star my openlist elapsed time: 0.000974, Nodes Expanded: 854, Optimal Moves: 122, Optimal Gcost: 136.740173
Jump Point Search::A star my openlist elapsed time: 0.000188, Nodes Expanded: 18, Optimal Moves: 122, Optimal Gcost: 136.740173
(startX, startY): (100,107) goalX, goalY: (10,110)
Octile::			 A star my openlist elapsed time: 0.005726, Nodes Expanded: 2458, Optimal Moves: 114, Optimal Gcost: 137.852859
Differential Heuristic::	 A star my openlist elapsed time: 0.005841, Nodes Expanded: 2222, Optimal Moves: 114, Optimal G cost: 137.852859
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004618, Nodes Expanded: 1793, Optimal Moves: 114, Optimal Gcost: 137.852859
Canonical A Star::A star my openlist elapsed time: 0.003026, Nodes Expanded: 1821, Optimal Moves: 114, Optimal Gcost: 137.852875
Jump Point Search::A star my openlist elapsed time: 0.000479, Nodes Expanded: 37, Optimal Moves: 114, Optimal Gcost: 137.852875
(startX, startY): (100,115) goalX, goalY: (28,122)
Octile::			 A star my openlist elapsed time: 0.003816, Nodes Expanded: 1980, Optimal Moves: 114, Optimal Gcost: 138.681305
Differential Heuristic::	 A star my openlist elapsed time: 0.001372, Nodes Expanded: 674, Optimal Moves: 114, Optimal G cost: 138.681305
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001335, Nodes Expanded: 673, Optimal Moves: 114, Optimal Gcost: 138.681305
Canonical A Star::A star my openlist elapsed time: 0.000865, Nodes Expanded: 673, Optimal Moves: 114, Optimal Gcost: 138.681305
Jump Point Search::A star my openlist elapsed time: 0.000278, Nodes Expanded: 16, Optimal Moves: 114, Optimal Gcost: 138.681305
(startX, startY): (100,142) goalX, goalY: (159,45)
Octile::			 A star my openlist elapsed time: 0.002076, Nodes Expanded: 1381, Optimal Moves: 120, Optimal Gcost: 136.811234
Differential Heuristic::	 A star my openlist elapsed time: 0.003264, Nodes Expanded: 2010, Optimal Moves: 120, Optimal G cost: 136.811234
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001842, Nodes Expanded: 1151, Optimal Moves: 120, Optimal Gcost: 136.811234
Canonical A Star::A star my openlist elapsed time: 0.001169, Nodes Expanded: 1151, Optimal Moves: 120, Optimal Gcost: 136.811234
Jump Point Search::A star my openlist elapsed time: 0.000268, Nodes Expanded: 20, Optimal Moves: 120, Optimal Gcost: 136.811234
(startX, startY): (100,172) goalX, goalY: (134,59)
Octile::			 A star my openlist elapsed time: 0.003169, Nodes Expanded: 1666, Optimal Moves: 114, Optimal Gcost: 136.195999
Differential Heuristic::	 A star my openlist elapsed time: 0.005025, Nodes Expanded: 2839, Optimal Moves: 114, Optimal G cost: 136.195999
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002252, Nodes Expanded: 1201, Optimal Moves: 114, Optimal Gcost: 136.195999
Canonical A Star::A star my openlist elapsed time: 0.001300, Nodes Expanded: 1203, Optimal Moves: 114, Optimal Gcost: 136.195999
Jump Point Search::A star my openlist elapsed time: 0.000275, Nodes Expanded: 15, Optimal Moves: 114, Optimal Gcost: 136.195999
(startX, startY): (100,175) goalX, goalY: (46,97)
Octile::			 A star my openlist elapsed time: 0.007501, Nodes Expanded: 3469, Optimal Moves: 115, Optimal Gcost: 139.681290
Differential Heuristic::	 A star my openlist elapsed time: 0.002389, Nodes Expanded: 1197, Optimal Moves: 115, Optimal G cost: 139.681290
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002072, Nodes Expanded: 1063, Optimal Moves: 115, Optimal Gcost: 139.681290
Canonical A Star::A star my openlist elapsed time: 0.001246, Nodes Expanded: 1063, Optimal Moves: 115, Optimal Gcost: 139.681290
Jump Point Search::A star my openlist elapsed time: 0.000222, Nodes Expanded: 8, Optimal Moves: 115, Optimal Gcost: 139.681290
(startX, startY): (100,177) goalX, goalY: (135,61)
Octile::			 A star my openlist elapsed time: 0.002947, Nodes Expanded: 1705, Optimal Moves: 117, Optimal Gcost: 138.781799
Differential Heuristic::	 A star my openlist elapsed time: 0.005057, Nodes Expanded: 2872, Optimal Moves: 117, Optimal G cost: 138.781799
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002427, Nodes Expanded: 1289, Optimal Moves: 117, Optimal Gcost: 138.781799
Canonical A Star::A star my openlist elapsed time: 0.001567, Nodes Expanded: 1289, Optimal Moves: 117, Optimal Gcost: 138.781799
Jump Point Search::A star my openlist elapsed time: 0.000264, Nodes Expanded: 15, Optimal Moves: 117, Optimal Gcost: 138.781799
(startX, startY): (100,183) goalX, goalY: (10,109)
Octile::			 A star my openlist elapsed time: 0.005434, Nodes Expanded: 2477, Optimal Moves: 113, Optimal Gcost: 136.852859
Differential Heuristic::	 A star my openlist elapsed time: 0.005895, Nodes Expanded: 2646, Optimal Moves: 113, Optimal G cost: 136.852859
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004820, Nodes Expanded: 2093, Optimal Moves: 113, Optimal Gcost: 136.852859
Canonical A Star::A star my openlist elapsed time: 0.002861, Nodes Expanded: 2093, Optimal Moves: 113, Optimal Gcost: 136.852859
Jump Point Search::A star my openlist elapsed time: 0.000294, Nodes Expanded: 14, Optimal Moves: 113, Optimal Gcost: 136.852859
(startX, startY): (10,104) goalX, goalY: (97,179)
Octile::			 A star my openlist elapsed time: 0.004067, Nodes Expanded: 1997, Optimal Moves: 116, Optimal Gcost: 141.095520
Differential Heuristic::	 A star my openlist elapsed time: 0.004286, Nodes Expanded: 2177, Optimal Moves: 116, Optimal G cost: 141.095520
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002436, Nodes Expanded: 1316, Optimal Moves: 116, Optimal Gcost: 141.095520
Canonical A Star::A star my openlist elapsed time: 0.001543, Nodes Expanded: 1315, Optimal Moves: 116, Optimal Gcost: 141.095520
Jump Point Search::A star my openlist elapsed time: 0.000259, Nodes Expanded: 25, Optimal Moves: 116, Optimal Gcost: 141.095520
(startX, startY): (10,109) goalX, goalY: (88,192)
Octile::			 A star my openlist elapsed time: 0.004338, Nodes Expanded: 2166, Optimal Moves: 122, Optimal Gcost: 140.882294
Differential Heuristic::	 A star my openlist elapsed time: 0.004873, Nodes Expanded: 2182, Optimal Moves: 122, Optimal G cost: 140.882294
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002739, Nodes Expanded: 1522, Optimal Moves: 122, Optimal Gcost: 140.882294
Canonical A Star::A star my openlist elapsed time: 0.001755, Nodes Expanded: 1522, Optimal Moves: 122, Optimal Gcost: 140.882294
Jump Point Search::A star my openlist elapsed time: 0.000234, Nodes Expanded: 26, Optimal Moves: 122, Optimal Gcost: 140.882294
(startX, startY): (10,73) goalX, goalY: (75,147)
Octile::			 A star my openlist elapsed time: 0.005264, Nodes Expanded: 2559, Optimal Moves: 124, Optimal Gcost: 143.710724
Differential Heuristic::	 A star my openlist elapsed time: 0.002336, Nodes Expanded: 1202, Optimal Moves: 124, Optimal G cost: 143.710724
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002086, Nodes Expanded: 1054, Optimal Moves: 124, Optimal Gcost: 143.710724
Canonical A Star::A star my openlist elapsed time: 0.001435, Nodes Expanded: 1055, Optimal Moves: 124, Optimal Gcost: 143.710724
Jump Point Search::A star my openlist elapsed time: 0.000248, Nodes Expanded: 36, Optimal Moves: 124, Optimal Gcost: 143.710724
(startX, startY): (10,76) goalX, goalY: (122,122)
Octile::			 A star my openlist elapsed time: 0.003814, Nodes Expanded: 1656, Optimal Moves: 116, Optimal Gcost: 140.267105
Differential Heuristic::	 A star my openlist elapsed time: 0.007676, Nodes Expanded: 3685, Optimal Moves: 116, Optimal G cost: 140.267105
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002566, Nodes Expanded: 1111, Optimal Moves: 116, Optimal Gcost: 140.267105
Canonical A Star::A star my openlist elapsed time: 0.001712, Nodes Expanded: 1113, Optimal Moves: 116, Optimal Gcost: 140.267105
Jump Point Search::A star my openlist elapsed time: 0.000361, Nodes Expanded: 41, Optimal Moves: 116, Optimal Gcost: 140.267105
(startX, startY): (10,78) goalX, goalY: (77,141)
Octile::			 A star my openlist elapsed time: 0.005918, Nodes Expanded: 2803, Optimal Moves: 126, Optimal Gcost: 141.982788
Differential Heuristic::	 A star my openlist elapsed time: 0.001309, Nodes Expanded: 654, Optimal Moves: 126, Optimal G cost: 141.982803
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001241, Nodes Expanded: 644, Optimal Moves: 126, Optimal Gcost: 141.982803
Canonical A Star::A star my openlist elapsed time: 0.000749, Nodes Expanded: 640, Optimal Moves: 126, Optimal Gcost: 141.982803
Jump Point Search::A star my openlist elapsed time: 0.000202, Nodes Expanded: 27, Optimal Moves: 126, Optimal Gcost: 141.982803
(startX, startY): (10,79) goalX, goalY: (76,139)
Octile::			 A star my openlist elapsed time: 0.006656, Nodes Expanded: 3076, Optimal Moves: 127, Optimal Gcost: 143.397003
Differential Heuristic::	 A star my openlist elapsed time: 0.002362, Nodes Expanded: 1127, Optimal Moves: 127, Optimal G cost: 143.397018
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002423, Nodes Expanded: 1115, Optimal Moves: 127, Optimal Gcost: 143.397018
Canonical A Star::A star my openlist elapsed time: 0.001370, Nodes Expanded: 1115, Optimal Moves: 127, Optimal Gcost: 143.397018
Jump Point Search::A star my openlist elapsed time: 0.000286, Nodes Expanded: 39, Optimal Moves: 127, Optimal Gcost: 143.397018
(startX, startY): (100,102) goalX, goalY: (4,115)
Octile::			 A star my openlist elapsed time: 0.006123, Nodes Expanded: 2599, Optimal Moves: 117, Optimal Gcost: 142.095505
Differential Heuristic::	 A star my openlist elapsed time: 0.006668, Nodes Expanded: 2455, Optimal Moves: 117, Optimal G cost: 142.095505
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004915, Nodes Expanded: 1900, Optimal Moves: 117, Optimal Gcost: 142.095505
Canonical A Star::A star my openlist elapsed time: 0.003601, Nodes Expanded: 1997, Optimal Moves: 117, Optimal Gcost: 142.095520
Jump Point Search::A star my openlist elapsed time: 0.000506, Nodes Expanded: 44, Optimal Moves: 117, Optimal Gcost: 142.095520
(startX, startY): (100,104) goalX, goalY: (22,134)
Octile::			 A star my openlist elapsed time: 0.003814, Nodes Expanded: 2006, Optimal Moves: 113, Optimal Gcost: 140.995010
Differential Heuristic::	 A star my openlist elapsed time: 0.004005, Nodes Expanded: 1658, Optimal Moves: 113, Optimal G cost: 140.995010
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002985, Nodes Expanded: 1227, Optimal Moves: 113, Optimal Gcost: 140.995010
Canonical A Star::A star my openlist elapsed time: 0.001810, Nodes Expanded: 1232, Optimal Moves: 113, Optimal Gcost: 140.995010
Jump Point Search::A star my openlist elapsed time: 0.000434, Nodes Expanded: 26, Optimal Moves: 113, Optimal Gcost: 140.995010
(startX, startY): (100,111) goalX, goalY: (12,115)
Octile::			 A star my openlist elapsed time: 0.005165, Nodes Expanded: 2299, Optimal Moves: 116, Optimal Gcost: 141.923950
Differential Heuristic::	 A star my openlist elapsed time: 0.005521, Nodes Expanded: 2087, Optimal Moves: 116, Optimal G cost: 141.923950
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004394, Nodes Expanded: 1681, Optimal Moves: 116, Optimal Gcost: 141.923950
Canonical A Star::A star my openlist elapsed time: 0.002805, Nodes Expanded: 1681, Optimal Moves: 116, Optimal Gcost: 141.923950
Jump Point Search::A star my openlist elapsed time: 0.000571, Nodes Expanded: 40, Optimal Moves: 116, Optimal Gcost: 141.923950
(startX, startY): (100,14) goalX, goalY: (131,130)
Octile::			 A star my openlist elapsed time: 0.003070, Nodes Expanded: 1620, Optimal Moves: 118, Optimal Gcost: 141.024445
Differential Heuristic::	 A star my openlist elapsed time: 0.000731, Nodes Expanded: 442, Optimal Moves: 118, Optimal G cost: 141.024460
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000691, Nodes Expanded: 403, Optimal Moves: 118, Optimal Gcost: 141.024460
Canonical A Star::A star my openlist elapsed time: 0.000423, Nodes Expanded: 408, Optimal Moves: 118, Optimal Gcost: 141.024460
Jump Point Search::A star my openlist elapsed time: 0.000162, Nodes Expanded: 10, Optimal Moves: 118, Optimal Gcost: 141.024460
(startX, startY): (10,101) goalX, goalY: (120,142)
Octile::			 A star my openlist elapsed time: 0.004010, Nodes Expanded: 1831, Optimal Moves: 130, Optimal Gcost: 145.568573
Differential Heuristic::	 A star my openlist elapsed time: 0.000766, Nodes Expanded: 350, Optimal Moves: 130, Optimal G cost: 145.568573
Differential Heuristic & Octile::A star my openlist elapsed time: 0.000746, Nodes Expanded: 330, Optimal Moves: 130, Optimal Gcost: 145.568573
Canonical A Star::A star my openlist elapsed time: 0.000408, Nodes Expanded: 338, Optimal Moves: 130, Optimal Gcost: 145.568573
Jump Point Search::A star my openlist elapsed time: 0.000107, Nodes Expanded: 14, Optimal Moves: 130, Optimal Gcost: 145.568573
(startX, startY): (10,125) goalX, goalY: (139,130)
Octile::			 A star my openlist elapsed time: 0.003286, Nodes Expanded: 1563, Optimal Moves: 130, Optimal Gcost: 145.154358
Differential Heuristic::	 A star my openlist elapsed time: 0.002069, Nodes Expanded: 901, Optimal Moves: 130, Optimal G cost: 145.154358
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001942, Nodes Expanded: 797, Optimal Moves: 130, Optimal Gcost: 145.154358
Canonical A Star::A star my openlist elapsed time: 0.001068, Nodes Expanded: 797, Optimal Moves: 130, Optimal Gcost: 145.154358
Jump Point Search::A star my openlist elapsed time: 0.000160, Nodes Expanded: 21, Optimal Moves: 130, Optimal Gcost: 145.154358
(startX, startY): (10,77) goalX, goalY: (125,125)
Octile::			 A star my openlist elapsed time: 0.003592, Nodes Expanded: 1697, Optimal Moves: 119, Optimal Gcost: 144.923965
Differential Heuristic::	 A star my openlist elapsed time: 0.007741, Nodes Expanded: 3708, Optimal Moves: 119, Optimal G cost: 144.923965
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002554, Nodes Expanded: 1143, Optimal Moves: 119, Optimal Gcost: 144.923965
Canonical A Star::A star my openlist elapsed time: 0.001683, Nodes Expanded: 1149, Optimal Moves: 119, Optimal Gcost: 144.923965
Jump Point Search::A star my openlist elapsed time: 0.000403, Nodes Expanded: 41, Optimal Moves: 119, Optimal Gcost: 144.923965
(startX, startY): (100,104) goalX, goalY: (27,143)
Octile::			 A star my openlist elapsed time: 0.004177, Nodes Expanded: 2149, Optimal Moves: 122, Optimal Gcost: 147.923935
Differential Heuristic::	 A star my openlist elapsed time: 0.004745, Nodes Expanded: 1934, Optimal Moves: 122, Optimal G cost: 147.923935
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003239, Nodes Expanded: 1515, Optimal Moves: 122, Optimal Gcost: 147.923935
Canonical A Star::A star my openlist elapsed time: 0.002199, Nodes Expanded: 1502, Optimal Moves: 122, Optimal Gcost: 147.923935
Jump Point Search::A star my openlist elapsed time: 0.000483, Nodes Expanded: 32, Optimal Moves: 122, Optimal Gcost: 147.923935
(startX, startY): (100,14) goalX, goalY: (134,136)
Octile::			 A star my openlist elapsed time: 0.002797, Nodes Expanded: 1607, Optimal Moves: 124, Optimal Gcost: 145.781799
Differential Heuristic::	 A star my openlist elapsed time: 0.002149, Nodes Expanded: 1195, Optimal Moves: 124, Optimal G cost: 145.781815
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001914, Nodes Expanded: 1057, Optimal Moves: 124, Optimal Gcost: 145.781815
Canonical A Star::A star my openlist elapsed time: 0.001127, Nodes Expanded: 1055, Optimal Moves: 124, Optimal Gcost: 145.781815
Jump Point Search::A star my openlist elapsed time: 0.000185, Nodes Expanded: 16, Optimal Moves: 124, Optimal Gcost: 145.781815
(startX, startY): (100,174) goalX, goalY: (129,54)
Octile::			 A star my openlist elapsed time: 0.004064, Nodes Expanded: 1934, Optimal Moves: 121, Optimal Gcost: 145.267075
Differential Heuristic::	 A star my openlist elapsed time: 0.006000, Nodes Expanded: 3234, Optimal Moves: 121, Optimal G cost: 145.267075
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002495, Nodes Expanded: 1318, Optimal Moves: 121, Optimal Gcost: 145.267075
Canonical A Star::A star my openlist elapsed time: 0.001480, Nodes Expanded: 1340, Optimal Moves: 121, Optimal Gcost: 145.267075
Jump Point Search::A star my openlist elapsed time: 0.000263, Nodes Expanded: 15, Optimal Moves: 121, Optimal Gcost: 145.267075
(startX, startY): (100,175) goalX, goalY: (182,77)
Octile::			 A star my openlist elapsed time: 0.004413, Nodes Expanded: 2301, Optimal Moves: 122, Optimal Gcost: 145.438644
Differential Heuristic::	 A star my openlist elapsed time: 0.002868, Nodes Expanded: 1737, Optimal Moves: 122, Optimal G cost: 145.438644
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002685, Nodes Expanded: 1506, Optimal Moves: 122, Optimal Gcost: 145.438644
Canonical A Star::A star my openlist elapsed time: 0.001595, Nodes Expanded: 1515, Optimal Moves: 122, Optimal Gcost: 145.438660
Jump Point Search::A star my openlist elapsed time: 0.000306, Nodes Expanded: 23, Optimal Moves: 122, Optimal Gcost: 145.438660
(startX, startY): (100,186) goalX, goalY: (170,77)
Octile::			 A star my openlist elapsed time: 0.003316, Nodes Expanded: 2019, Optimal Moves: 121, Optimal Gcost: 144.438660
Differential Heuristic::	 A star my openlist elapsed time: 0.002126, Nodes Expanded: 1001, Optimal Moves: 121, Optimal G cost: 144.438675
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001944, Nodes Expanded: 984, Optimal Moves: 121, Optimal Gcost: 144.438675
Canonical A Star::A star my openlist elapsed time: 0.001299, Nodes Expanded: 941, Optimal Moves: 121, Optimal Gcost: 144.438660
Jump Point Search::A star my openlist elapsed time: 0.000230, Nodes Expanded: 15, Optimal Moves: 121, Optimal Gcost: 144.438660
(startX, startY): (100,22) goalX, goalY: (147,142)
Octile::			 A star my openlist elapsed time: 0.003006, Nodes Expanded: 1905, Optimal Moves: 126, Optimal Gcost: 147.367584
Differential Heuristic::	 A star my openlist elapsed time: 0.004446, Nodes Expanded: 2213, Optimal Moves: 126, Optimal G cost: 147.367584
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003216, Nodes Expanded: 1707, Optimal Moves: 126, Optimal Gcost: 147.367584
Canonical A Star::A star my openlist elapsed time: 0.001980, Nodes Expanded: 1707, Optimal Moves: 126, Optimal Gcost: 147.367584
Jump Point Search::A star my openlist elapsed time: 0.000250, Nodes Expanded: 23, Optimal Moves: 126, Optimal Gcost: 147.367584
(startX, startY): (100,27) goalX, goalY: (182,132)
Octile::			 A star my openlist elapsed time: 0.002300, Nodes Expanded: 1459, Optimal Moves: 115, Optimal Gcost: 144.237656
Differential Heuristic::	 A star my openlist elapsed time: 0.007021, Nodes Expanded: 3326, Optimal Moves: 115, Optimal G cost: 144.237656
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002520, Nodes Expanded: 1363, Optimal Moves: 115, Optimal Gcost: 144.237656
Canonical A Star::A star my openlist elapsed time: 0.001525, Nodes Expanded: 1365, Optimal Moves: 115, Optimal Gcost: 144.237656
Jump Point Search::A star my openlist elapsed time: 0.000187, Nodes Expanded: 15, Optimal Moves: 115, Optimal Gcost: 144.237656
(startX, startY): (10,112) goalX, goalY: (138,136)
Octile::			 A star my openlist elapsed time: 0.004962, Nodes Expanded: 2035, Optimal Moves: 137, Optimal Gcost: 151.740143
Differential Heuristic::	 A star my openlist elapsed time: 0.002604, Nodes Expanded: 1160, Optimal Moves: 137, Optimal G cost: 151.740143
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002405, Nodes Expanded: 1040, Optimal Moves: 137, Optimal Gcost: 151.740143
Canonical A Star::A star my openlist elapsed time: 0.001572, Nodes Expanded: 1040, Optimal Moves: 137, Optimal Gcost: 151.740143
Jump Point Search::A star my openlist elapsed time: 0.000197, Nodes Expanded: 24, Optimal Moves: 137, Optimal Gcost: 151.740143
(startX, startY): (10,125) goalX, goalY: (109,97)
Octile::			 A star my openlist elapsed time: 0.006929, Nodes Expanded: 2988, Optimal Moves: 126, Optimal Gcost: 150.681305
Differential Heuristic::	 A star my openlist elapsed time: 0.004697, Nodes Expanded: 2097, Optimal Moves: 126, Optimal G cost: 150.681305
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002590, Nodes Expanded: 1270, Optimal Moves: 126, Optimal Gcost: 150.681305
Canonical A Star::A star my openlist elapsed time: 0.001562, Nodes Expanded: 1270, Optimal Moves: 126, Optimal Gcost: 150.681305
Jump Point Search::A star my openlist elapsed time: 0.000249, Nodes Expanded: 27, Optimal Moves: 126, Optimal Gcost: 150.681305
(startX, startY): (10,89) goalX, goalY: (89,144)
Octile::			 A star my openlist elapsed time: 0.005358, Nodes Expanded: 2562, Optimal Moves: 135, Optimal Gcost: 148.083298
Differential Heuristic::	 A star my openlist elapsed time: 0.001438, Nodes Expanded: 662, Optimal Moves: 135, Optimal G cost: 148.083298
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001584, Nodes Expanded: 614, Optimal Moves: 135, Optimal Gcost: 148.083298
Canonical A Star::A star my openlist elapsed time: 0.000806, Nodes Expanded: 622, Optimal Moves: 135, Optimal Gcost: 148.083313
Jump Point Search::A star my openlist elapsed time: 0.000269, Nodes Expanded: 18, Optimal Moves: 135, Optimal Gcost: 148.083313
(startX, startY): (100,148) goalX, goalY: (172,41)
Octile::			 A star my openlist elapsed time: 0.002989, Nodes Expanded: 1804, Optimal Moves: 125, Optimal Gcost: 150.095520
Differential Heuristic::	 A star my openlist elapsed time: 0.003298, Nodes Expanded: 1923, Optimal Moves: 125, Optimal G cost: 150.095520
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001840, Nodes Expanded: 1085, Optimal Moves: 125, Optimal Gcost: 150.095520
Canonical A Star::A star my openlist elapsed time: 0.001262, Nodes Expanded: 1084, Optimal Moves: 125, Optimal Gcost: 150.095520
Jump Point Search::A star my openlist elapsed time: 0.000214, Nodes Expanded: 26, Optimal Moves: 125, Optimal Gcost: 150.095520
(startX, startY): (100,2) goalX, goalY: (130,125)
Octile::			 A star my openlist elapsed time: 0.003557, Nodes Expanded: 2055, Optimal Moves: 131, Optimal Gcost: 151.953384
Differential Heuristic::	 A star my openlist elapsed time: 0.002134, Nodes Expanded: 1214, Optimal Moves: 131, Optimal G cost: 151.953384
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002199, Nodes Expanded: 1121, Optimal Moves: 131, Optimal Gcost: 151.953384
Canonical A Star::A star my openlist elapsed time: 0.001190, Nodes Expanded: 1121, Optimal Moves: 131, Optimal Gcost: 151.953384
Jump Point Search::A star my openlist elapsed time: 0.000175, Nodes Expanded: 21, Optimal Moves: 131, Optimal Gcost: 151.953384
(startX, startY): (100,42) goalX, goalY: (111,152)
Octile::			 A star my openlist elapsed time: 0.002937, Nodes Expanded: 1609, Optimal Moves: 123, Optimal Gcost: 149.752380
Differential Heuristic::	 A star my openlist elapsed time: 0.002080, Nodes Expanded: 1109, Optimal Moves: 123, Optimal G cost: 149.752380
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001675, Nodes Expanded: 826, Optimal Moves: 123, Optimal Gcost: 149.752380
Canonical A Star::A star my openlist elapsed time: 0.000895, Nodes Expanded: 826, Optimal Moves: 123, Optimal Gcost: 149.752380
Jump Point Search::A star my openlist elapsed time: 0.000266, Nodes Expanded: 14, Optimal Moves: 123, Optimal Gcost: 149.752380
(startX, startY): (101,12) goalX, goalY: (124,130)
Octile::			 A star my openlist elapsed time: 0.003898, Nodes Expanded: 2166, Optimal Moves: 127, Optimal Gcost: 149.610245
Differential Heuristic::	 A star my openlist elapsed time: 0.002338, Nodes Expanded: 1310, Optimal Moves: 127, Optimal G cost: 149.610245
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002145, Nodes Expanded: 1152, Optimal Moves: 127, Optimal Gcost: 149.610245
Canonical A Star::A star my openlist elapsed time: 0.001244, Nodes Expanded: 1150, Optimal Moves: 127, Optimal Gcost: 149.610245
Jump Point Search::A star my openlist elapsed time: 0.000200, Nodes Expanded: 18, Optimal Moves: 127, Optimal Gcost: 149.610245
(startX, startY): (101,143) goalX, goalY: (175,43)
Octile::			 A star my openlist elapsed time: 0.003579, Nodes Expanded: 2048, Optimal Moves: 127, Optimal Gcost: 149.196030
Differential Heuristic::	 A star my openlist elapsed time: 0.004590, Nodes Expanded: 2597, Optimal Moves: 127, Optimal G cost: 149.196030
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002609, Nodes Expanded: 1636, Optimal Moves: 127, Optimal Gcost: 149.196030
Canonical A Star::A star my openlist elapsed time: 0.001737, Nodes Expanded: 1636, Optimal Moves: 127, Optimal Gcost: 149.196030
Jump Point Search::A star my openlist elapsed time: 0.000323, Nodes Expanded: 40, Optimal Moves: 127, Optimal Gcost: 149.196030
(startX, startY): (101,147) goalX, goalY: (105,48)
Octile::			 A star my openlist elapsed time: 0.005577, Nodes Expanded: 2581, Optimal Moves: 128, Optimal Gcost: 150.196014
Differential Heuristic::	 A star my openlist elapsed time: 0.005473, Nodes Expanded: 2777, Optimal Moves: 128, Optimal G cost: 150.196030
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001792, Nodes Expanded: 1036, Optimal Moves: 128, Optimal Gcost: 150.196030
Canonical A Star::A star my openlist elapsed time: 0.001133, Nodes Expanded: 1036, Optimal Moves: 128, Optimal Gcost: 150.196030
Jump Point Search::A star my openlist elapsed time: 0.000204, Nodes Expanded: 15, Optimal Moves: 128, Optimal Gcost: 150.196030
(startX, startY): (101,155) goalX, goalY: (47,77)
Octile::			 A star my openlist elapsed time: 0.006951, Nodes Expanded: 3190, Optimal Moves: 134, Optimal Gcost: 151.639648
Differential Heuristic::	 A star my openlist elapsed time: 0.005583, Nodes Expanded: 2348, Optimal Moves: 134, Optimal G cost: 151.639664
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004022, Nodes Expanded: 1838, Optimal Moves: 134, Optimal Gcost: 151.639664
Canonical A Star::A star my openlist elapsed time: 0.002308, Nodes Expanded: 1810, Optimal Moves: 134, Optimal Gcost: 151.639648
Jump Point Search::A star my openlist elapsed time: 0.000375, Nodes Expanded: 24, Optimal Moves: 134, Optimal Gcost: 151.639648
(startX, startY): (10,108) goalX, goalY: (129,127)
Octile::			 A star my openlist elapsed time: 0.005680, Nodes Expanded: 2562, Optimal Moves: 140, Optimal Gcost: 155.154358
Differential Heuristic::	 A star my openlist elapsed time: 0.001939, Nodes Expanded: 877, Optimal Moves: 140, Optimal G cost: 155.154358
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001838, Nodes Expanded: 802, Optimal Moves: 140, Optimal Gcost: 155.154358
Canonical A Star::A star my openlist elapsed time: 0.001028, Nodes Expanded: 803, Optimal Moves: 140, Optimal Gcost: 155.154358
Jump Point Search::A star my openlist elapsed time: 0.000276, Nodes Expanded: 24, Optimal Moves: 140, Optimal Gcost: 155.154358
(startX, startY): (10,118) goalX, goalY: (141,128)
Octile::			 A star my openlist elapsed time: 0.004694, Nodes Expanded: 2046, Optimal Moves: 134, Optimal Gcost: 152.053864
Differential Heuristic::	 A star my openlist elapsed time: 0.002022, Nodes Expanded: 887, Optimal Moves: 134, Optimal G cost: 152.053864
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001837, Nodes Expanded: 767, Optimal Moves: 134, Optimal Gcost: 152.053864
Canonical A Star::A star my openlist elapsed time: 0.001018, Nodes Expanded: 767, Optimal Moves: 134, Optimal Gcost: 152.053864
Jump Point Search::A star my openlist elapsed time: 0.000162, Nodes Expanded: 20, Optimal Moves: 134, Optimal Gcost: 152.053864
(startX, startY): (10,127) goalX, goalY: (113,92)
Octile::			 A star my openlist elapsed time: 0.006399, Nodes Expanded: 2990, Optimal Moves: 131, Optimal Gcost: 154.024445
Differential Heuristic::	 A star my openlist elapsed time: 0.005412, Nodes Expanded: 2396, Optimal Moves: 131, Optimal G cost: 154.024445
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003228, Nodes Expanded: 1567, Optimal Moves: 131, Optimal Gcost: 154.024445
Canonical A Star::A star my openlist elapsed time: 0.001995, Nodes Expanded: 1567, Optimal Moves: 131, Optimal Gcost: 154.024445
Jump Point Search::A star my openlist elapsed time: 0.000257, Nodes Expanded: 28, Optimal Moves: 131, Optimal Gcost: 154.024445
(startX, startY): (10,87) goalX, goalY: (82,163)
Octile::			 A star my openlist elapsed time: 0.005548, Nodes Expanded: 2651, Optimal Moves: 137, Optimal Gcost: 155.053879
Differential Heuristic::	 A star my openlist elapsed time: 0.004774, Nodes Expanded: 2082, Optimal Moves: 137, Optimal G cost: 155.053879
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003518, Nodes Expanded: 1691, Optimal Moves: 137, Optimal Gcost: 155.053879
Canonical A Star::A star my openlist elapsed time: 0.002177, Nodes Expanded: 1722, Optimal Moves: 137, Optimal Gcost: 155.053894
Jump Point Search::A star my openlist elapsed time: 0.000426, Nodes Expanded: 48, Optimal Moves: 137, Optimal Gcost: 155.053894
(startX, startY): (100,151) goalX, goalY: (50,74)
Octile::			 A star my openlist elapsed time: 0.007339, Nodes Expanded: 3263, Optimal Moves: 135, Optimal Gcost: 152.639664
Differential Heuristic::	 A star my openlist elapsed time: 0.004896, Nodes Expanded: 2314, Optimal Moves: 135, Optimal G cost: 152.639664
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003957, Nodes Expanded: 1857, Optimal Moves: 135, Optimal Gcost: 152.639664
Canonical A Star::A star my openlist elapsed time: 0.002619, Nodes Expanded: 1857, Optimal Moves: 135, Optimal Gcost: 152.639664
Jump Point Search::A star my openlist elapsed time: 0.000281, Nodes Expanded: 23, Optimal Moves: 135, Optimal Gcost: 152.639664
(startX, startY): (100,168) goalX, goalY: (161,89)
Octile::			 A star my openlist elapsed time: 0.011117, Nodes Expanded: 4858, Optimal Moves: 129, Optimal Gcost: 154.509735
Differential Heuristic::	 A star my openlist elapsed time: 0.004827, Nodes Expanded: 2586, Optimal Moves: 129, Optimal G cost: 154.509735
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004124, Nodes Expanded: 2292, Optimal Moves: 129, Optimal Gcost: 154.509735
Canonical A Star::A star my openlist elapsed time: 0.002739, Nodes Expanded: 2292, Optimal Moves: 129, Optimal Gcost: 154.509735
Jump Point Search::A star my openlist elapsed time: 0.000405, Nodes Expanded: 43, Optimal Moves: 129, Optimal Gcost: 154.509735
(startX, startY): (100,172) goalX, goalY: (120,46)
Octile::			 A star my openlist elapsed time: 0.004332, Nodes Expanded: 2253, Optimal Moves: 127, Optimal Gcost: 154.995010
Differential Heuristic::	 A star my openlist elapsed time: 0.006496, Nodes Expanded: 3556, Optimal Moves: 127, Optimal G cost: 154.995010
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002586, Nodes Expanded: 1357, Optimal Moves: 127, Optimal Gcost: 154.995010
Canonical A Star::A star my openlist elapsed time: 0.001751, Nodes Expanded: 1444, Optimal Moves: 127, Optimal Gcost: 154.995010
Jump Point Search::A star my openlist elapsed time: 0.000305, Nodes Expanded: 16, Optimal Moves: 127, Optimal Gcost: 154.995010
(startX, startY): (100,176) goalX, goalY: (180,89)
Octile::			 A star my openlist elapsed time: 0.007367, Nodes Expanded: 3651, Optimal Moves: 127, Optimal Gcost: 152.095505
Differential Heuristic::	 A star my openlist elapsed time: 0.003267, Nodes Expanded: 1927, Optimal Moves: 127, Optimal G cost: 152.095520
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003031, Nodes Expanded: 1733, Optimal Moves: 127, Optimal Gcost: 152.095520
Canonical A Star::A star my openlist elapsed time: 0.001892, Nodes Expanded: 1733, Optimal Moves: 127, Optimal Gcost: 152.095520
Jump Point Search::A star my openlist elapsed time: 0.000322, Nodes Expanded: 26, Optimal Moves: 127, Optimal Gcost: 152.095520
(startX, startY): (100,23) goalX, goalY: (115,137)
Octile::			 A star my openlist elapsed time: 0.004692, Nodes Expanded: 2630, Optimal Moves: 128, Optimal Gcost: 155.995026
Differential Heuristic::	 A star my openlist elapsed time: 0.002480, Nodes Expanded: 1180, Optimal Moves: 128, Optimal G cost: 155.995026
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002310, Nodes Expanded: 1121, Optimal Moves: 128, Optimal Gcost: 155.995026
Canonical A Star::A star my openlist elapsed time: 0.001496, Nodes Expanded: 1121, Optimal Moves: 128, Optimal Gcost: 155.995026
Jump Point Search::A star my openlist elapsed time: 0.000307, Nodes Expanded: 17, Optimal Moves: 128, Optimal Gcost: 155.995026
(startX, startY): (100,8) goalX, goalY: (139,140)
Octile::			 A star my openlist elapsed time: 0.002143, Nodes Expanded: 1368, Optimal Moves: 134, Optimal Gcost: 153.710739
Differential Heuristic::	 A star my openlist elapsed time: 0.003075, Nodes Expanded: 1684, Optimal Moves: 134, Optimal G cost: 153.710739
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002682, Nodes Expanded: 1295, Optimal Moves: 134, Optimal Gcost: 153.710739
Canonical A Star::A star my openlist elapsed time: 0.001454, Nodes Expanded: 1295, Optimal Moves: 134, Optimal Gcost: 153.710739
Jump Point Search::A star my openlist elapsed time: 0.000222, Nodes Expanded: 23, Optimal Moves: 134, Optimal Gcost: 153.710739
(startX, startY): (10,102) goalX, goalY: (130,136)
Octile::			 A star my openlist elapsed time: 0.005303, Nodes Expanded: 2198, Optimal Moves: 139, Optimal Gcost: 157.053864
Differential Heuristic::	 A star my openlist elapsed time: 0.001368, Nodes Expanded: 631, Optimal Moves: 139, Optimal G cost: 157.053864
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001337, Nodes Expanded: 604, Optimal Moves: 139, Optimal Gcost: 157.053864
Canonical A Star::A star my openlist elapsed time: 0.000806, Nodes Expanded: 604, Optimal Moves: 139, Optimal Gcost: 157.053864
Jump Point Search::A star my openlist elapsed time: 0.000212, Nodes Expanded: 21, Optimal Moves: 139, Optimal Gcost: 157.053864
(startX, startY): (10,114) goalX, goalY: (144,143)
Octile::			 A star my openlist elapsed time: 0.005509, Nodes Expanded: 2081, Optimal Moves: 141, Optimal Gcost: 156.154358
Differential Heuristic::	 A star my openlist elapsed time: 0.003350, Nodes Expanded: 1552, Optimal Moves: 141, Optimal G cost: 156.154358
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002850, Nodes Expanded: 1189, Optimal Moves: 141, Optimal Gcost: 156.154358
Canonical A Star::A star my openlist elapsed time: 0.001826, Nodes Expanded: 1189, Optimal Moves: 141, Optimal Gcost: 156.154358
Jump Point Search::A star my openlist elapsed time: 0.000305, Nodes Expanded: 27, Optimal Moves: 141, Optimal Gcost: 156.154358
(startX, startY): (10,121) goalX, goalY: (146,122)
Octile::			 A star my openlist elapsed time: 0.004875, Nodes Expanded: 2052, Optimal Moves: 137, Optimal Gcost: 157.124939
Differential Heuristic::	 A star my openlist elapsed time: 0.001928, Nodes Expanded: 868, Optimal Moves: 137, Optimal G cost: 157.124939
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001634, Nodes Expanded: 730, Optimal Moves: 137, Optimal Gcost: 157.124939
Canonical A Star::A star my openlist elapsed time: 0.000998, Nodes Expanded: 730, Optimal Moves: 137, Optimal Gcost: 157.124939
Jump Point Search::A star my openlist elapsed time: 0.000163, Nodes Expanded: 19, Optimal Moves: 137, Optimal Gcost: 157.124939
(startX, startY): (10,74) goalX, goalY: (74,161)
Octile::			 A star my openlist elapsed time: 0.005818, Nodes Expanded: 2870, Optimal Moves: 138, Optimal Gcost: 156.882294
Differential Heuristic::	 A star my openlist elapsed time: 0.005092, Nodes Expanded: 2477, Optimal Moves: 138, Optimal G cost: 156.882294
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004844, Nodes Expanded: 2192, Optimal Moves: 138, Optimal Gcost: 156.882294
Canonical A Star::A star my openlist elapsed time: 0.003073, Nodes Expanded: 2192, Optimal Moves: 138, Optimal Gcost: 156.882294
Jump Point Search::A star my openlist elapsed time: 0.000553, Nodes Expanded: 73, Optimal Moves: 138, Optimal Gcost: 156.882294
(startX, startY): (10,77) goalX, goalY: (71,163)
Octile::			 A star my openlist elapsed time: 0.006029, Nodes Expanded: 2920, Optimal Moves: 140, Optimal Gcost: 157.225433
Differential Heuristic::	 A star my openlist elapsed time: 0.005157, Nodes Expanded: 2517, Optimal Moves: 140, Optimal G cost: 157.225433
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004826, Nodes Expanded: 2221, Optimal Moves: 140, Optimal Gcost: 157.225433
Canonical A Star::A star my openlist elapsed time: 0.003327, Nodes Expanded: 2334, Optimal Moves: 140, Optimal Gcost: 157.225449
Jump Point Search::A star my openlist elapsed time: 0.000744, Nodes Expanded: 83, Optimal Moves: 140, Optimal Gcost: 157.225449
(startX, startY): (10,84) goalX, goalY: (67,168)
Octile::			 A star my openlist elapsed time: 0.007036, Nodes Expanded: 3070, Optimal Moves: 142, Optimal Gcost: 159.225449
Differential Heuristic::	 A star my openlist elapsed time: 0.005583, Nodes Expanded: 2596, Optimal Moves: 142, Optimal G cost: 159.225449
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004845, Nodes Expanded: 2234, Optimal Moves: 142, Optimal Gcost: 159.225449
Canonical A Star::A star my openlist elapsed time: 0.003075, Nodes Expanded: 2234, Optimal Moves: 142, Optimal Gcost: 159.225449
Jump Point Search::A star my openlist elapsed time: 0.000525, Nodes Expanded: 74, Optimal Moves: 142, Optimal Gcost: 159.225449
(startX, startY): (100,14) goalX, goalY: (187,103)
Octile::			 A star my openlist elapsed time: 0.006967, Nodes Expanded: 3351, Optimal Moves: 136, Optimal Gcost: 158.610245
Differential Heuristic::	 A star my openlist elapsed time: 0.007449, Nodes Expanded: 3227, Optimal Moves: 136, Optimal G cost: 158.610245
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005548, Nodes Expanded: 2499, Optimal Moves: 136, Optimal Gcost: 158.610245
Canonical A Star::A star my openlist elapsed time: 0.003985, Nodes Expanded: 2499, Optimal Moves: 136, Optimal Gcost: 158.610245
Jump Point Search::A star my openlist elapsed time: 0.000366, Nodes Expanded: 49, Optimal Moves: 136, Optimal Gcost: 158.610245
(startX, startY): (100,145) goalX, goalY: (55,68)
Octile::			 A star my openlist elapsed time: 0.008359, Nodes Expanded: 3386, Optimal Moves: 141, Optimal Gcost: 158.225449
Differential Heuristic::	 A star my openlist elapsed time: 0.004813, Nodes Expanded: 2247, Optimal Moves: 141, Optimal G cost: 158.225464
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004182, Nodes Expanded: 1818, Optimal Moves: 141, Optimal Gcost: 158.225464
Canonical A Star::A star my openlist elapsed time: 0.002245, Nodes Expanded: 1818, Optimal Moves: 141, Optimal Gcost: 158.225464
Jump Point Search::A star my openlist elapsed time: 0.000306, Nodes Expanded: 23, Optimal Moves: 141, Optimal Gcost: 158.225464
(startX, startY): (100,148) goalX, goalY: (14,89)
Octile::			 A star my openlist elapsed time: 0.009510, Nodes Expanded: 3843, Optimal Moves: 142, Optimal Gcost: 156.740158
Differential Heuristic::	 A star my openlist elapsed time: 0.004875, Nodes Expanded: 2305, Optimal Moves: 142, Optimal G cost: 156.740158
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004367, Nodes Expanded: 1932, Optimal Moves: 142, Optimal Gcost: 156.740158
Canonical A Star::A star my openlist elapsed time: 0.002762, Nodes Expanded: 1915, Optimal Moves: 142, Optimal Gcost: 156.740158
Jump Point Search::A star my openlist elapsed time: 0.000335, Nodes Expanded: 28, Optimal Moves: 142, Optimal Gcost: 156.740158
(startX, startY): (100,150) goalX, goalY: (31,69)
Octile::			 A star my openlist elapsed time: 0.007205, Nodes Expanded: 2993, Optimal Moves: 140, Optimal Gcost: 157.639664
Differential Heuristic::	 A star my openlist elapsed time: 0.005428, Nodes Expanded: 2598, Optimal Moves: 140, Optimal G cost: 157.639664
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004134, Nodes Expanded: 1842, Optimal Moves: 140, Optimal Gcost: 157.639664
Canonical A Star::A star my openlist elapsed time: 0.002425, Nodes Expanded: 1842, Optimal Moves: 140, Optimal Gcost: 157.639664
Jump Point Search::A star my openlist elapsed time: 0.000306, Nodes Expanded: 24, Optimal Moves: 140, Optimal Gcost: 157.639664
(startX, startY): (10,117) goalX, goalY: (149,148)
Octile::			 A star my openlist elapsed time: 0.005618, Nodes Expanded: 2123, Optimal Moves: 143, Optimal Gcost: 160.225433
Differential Heuristic::	 A star my openlist elapsed time: 0.003611, Nodes Expanded: 1616, Optimal Moves: 143, Optimal G cost: 160.225433
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003012, Nodes Expanded: 1172, Optimal Moves: 143, Optimal Gcost: 160.225433
Canonical A Star::A star my openlist elapsed time: 0.002079, Nodes Expanded: 1172, Optimal Moves: 143, Optimal Gcost: 160.225433
Jump Point Search::A star my openlist elapsed time: 0.000336, Nodes Expanded: 29, Optimal Moves: 143, Optimal Gcost: 160.225433
(startX, startY): (10,86) goalX, goalY: (64,171)
Octile::			 A star my openlist elapsed time: 0.008576, Nodes Expanded: 3226, Optimal Moves: 145, Optimal Gcost: 162.639664
Differential Heuristic::	 A star my openlist elapsed time: 0.006296, Nodes Expanded: 2671, Optimal Moves: 145, Optimal G cost: 162.639664
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005114, Nodes Expanded: 2316, Optimal Moves: 145, Optimal Gcost: 162.639664
Canonical A Star::A star my openlist elapsed time: 0.003170, Nodes Expanded: 2316, Optimal Moves: 145, Optimal Gcost: 162.639664
Jump Point Search::A star my openlist elapsed time: 0.000580, Nodes Expanded: 76, Optimal Moves: 145, Optimal Gcost: 162.639664
(startX, startY): (100,15) goalX, goalY: (152,148)
Octile::			 A star my openlist elapsed time: 0.003109, Nodes Expanded: 1861, Optimal Moves: 135, Optimal Gcost: 160.095520
Differential Heuristic::	 A star my openlist elapsed time: 0.006851, Nodes Expanded: 3247, Optimal Moves: 135, Optimal G cost: 160.095535
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003531, Nodes Expanded: 1803, Optimal Moves: 135, Optimal Gcost: 160.095520
Canonical A Star::A star my openlist elapsed time: 0.002173, Nodes Expanded: 1803, Optimal Moves: 135, Optimal Gcost: 160.095520
Jump Point Search::A star my openlist elapsed time: 0.000264, Nodes Expanded: 26, Optimal Moves: 135, Optimal Gcost: 160.095520
(startX, startY): (100,166) goalX, goalY: (26,72)
Octile::			 A star my openlist elapsed time: 0.008423, Nodes Expanded: 3537, Optimal Moves: 137, Optimal Gcost: 163.338150
Differential Heuristic::	 A star my openlist elapsed time: 0.006967, Nodes Expanded: 3184, Optimal Moves: 137, Optimal G cost: 163.338165
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005527, Nodes Expanded: 2318, Optimal Moves: 137, Optimal Gcost: 163.338165
Canonical A Star::A star my openlist elapsed time: 0.003262, Nodes Expanded: 2318, Optimal Moves: 137, Optimal Gcost: 163.338165
Jump Point Search::A star my openlist elapsed time: 0.000386, Nodes Expanded: 21, Optimal Moves: 137, Optimal Gcost: 163.338165
(startX, startY): (100,170) goalX, goalY: (145,33)
Octile::			 A star my openlist elapsed time: 0.003461, Nodes Expanded: 1938, Optimal Moves: 138, Optimal Gcost: 161.438644
Differential Heuristic::	 A star my openlist elapsed time: 0.007041, Nodes Expanded: 3689, Optimal Moves: 138, Optimal G cost: 161.438644
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002701, Nodes Expanded: 1348, Optimal Moves: 138, Optimal Gcost: 161.438644
Canonical A Star::A star my openlist elapsed time: 0.001618, Nodes Expanded: 1364, Optimal Moves: 138, Optimal Gcost: 161.438660
Jump Point Search::A star my openlist elapsed time: 0.000298, Nodes Expanded: 18, Optimal Moves: 138, Optimal Gcost: 161.438660
(startX, startY): (100,178) goalX, goalY: (159,44)
Octile::			 A star my openlist elapsed time: 0.003126, Nodes Expanded: 1848, Optimal Moves: 135, Optimal Gcost: 160.923950
Differential Heuristic::	 A star my openlist elapsed time: 0.007612, Nodes Expanded: 4037, Optimal Moves: 135, Optimal G cost: 160.923950
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002872, Nodes Expanded: 1577, Optimal Moves: 135, Optimal Gcost: 160.923950
Canonical A Star::A star my openlist elapsed time: 0.001685, Nodes Expanded: 1577, Optimal Moves: 135, Optimal Gcost: 160.923950
Jump Point Search::A star my openlist elapsed time: 0.000315, Nodes Expanded: 23, Optimal Moves: 135, Optimal Gcost: 160.923950
(startX, startY): (100,182) goalX, goalY: (44,81)
Octile::			 A star my openlist elapsed time: 0.008300, Nodes Expanded: 3600, Optimal Moves: 138, Optimal Gcost: 161.852859
Differential Heuristic::	 A star my openlist elapsed time: 0.005151, Nodes Expanded: 2309, Optimal Moves: 138, Optimal G cost: 161.852859
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004334, Nodes Expanded: 1843, Optimal Moves: 138, Optimal Gcost: 161.852859
Canonical A Star::A star my openlist elapsed time: 0.002485, Nodes Expanded: 1842, Optimal Moves: 138, Optimal Gcost: 161.852859
Jump Point Search::A star my openlist elapsed time: 0.000271, Nodes Expanded: 12, Optimal Moves: 138, Optimal Gcost: 161.852859
(startX, startY): (100,189) goalX, goalY: (179,88)
Octile::			 A star my openlist elapsed time: 0.007917, Nodes Expanded: 3730, Optimal Moves: 139, Optimal Gcost: 163.681320
Differential Heuristic::	 A star my openlist elapsed time: 0.003453, Nodes Expanded: 2010, Optimal Moves: 139, Optimal G cost: 163.681320
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003307, Nodes Expanded: 1878, Optimal Moves: 139, Optimal Gcost: 163.681320
Canonical A Star::A star my openlist elapsed time: 0.002575, Nodes Expanded: 1809, Optimal Moves: 139, Optimal Gcost: 163.681305
Jump Point Search::A star my openlist elapsed time: 0.000380, Nodes Expanded: 25, Optimal Moves: 139, Optimal Gcost: 163.681305
(startX, startY): (100,21) goalX, goalY: (170,150)
Octile::			 A star my openlist elapsed time: 0.003316, Nodes Expanded: 1731, Optimal Moves: 135, Optimal Gcost: 161.752380
Differential Heuristic::	 A star my openlist elapsed time: 0.007279, Nodes Expanded: 3581, Optimal Moves: 135, Optimal G cost: 161.752380
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003002, Nodes Expanded: 1586, Optimal Moves: 135, Optimal Gcost: 161.752380
Canonical A Star::A star my openlist elapsed time: 0.001867, Nodes Expanded: 1586, Optimal Moves: 135, Optimal Gcost: 161.752380
Jump Point Search::A star my openlist elapsed time: 0.000308, Nodes Expanded: 21, Optimal Moves: 135, Optimal Gcost: 161.752380
(startX, startY): (101,113) goalX, goalY: (34,144)
Octile::			 A star my openlist elapsed time: 0.006099, Nodes Expanded: 2466, Optimal Moves: 132, Optimal Gcost: 160.409225
Differential Heuristic::	 A star my openlist elapsed time: 0.005016, Nodes Expanded: 1949, Optimal Moves: 132, Optimal G cost: 160.409241
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004713, Nodes Expanded: 1824, Optimal Moves: 132, Optimal Gcost: 160.409241
Canonical A Star::A star my openlist elapsed time: 0.003599, Nodes Expanded: 1824, Optimal Moves: 132, Optimal Gcost: 160.409241
Jump Point Search::A star my openlist elapsed time: 0.000499, Nodes Expanded: 34, Optimal Moves: 132, Optimal Gcost: 160.409241
(startX, startY): (10,114) goalX, goalY: (146,116)
Octile::			 A star my openlist elapsed time: 0.005344, Nodes Expanded: 2346, Optimal Moves: 145, Optimal Gcost: 167.196014
Differential Heuristic::	 A star my openlist elapsed time: 0.001067, Nodes Expanded: 435, Optimal Moves: 145, Optimal G cost: 167.196014
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001029, Nodes Expanded: 396, Optimal Moves: 145, Optimal Gcost: 167.196014
Canonical A Star::A star my openlist elapsed time: 0.000653, Nodes Expanded: 396, Optimal Moves: 145, Optimal Gcost: 167.196014
Jump Point Search::A star my openlist elapsed time: 0.000168, Nodes Expanded: 15, Optimal Moves: 145, Optimal Gcost: 167.196014
(startX, startY): (10,123) goalX, goalY: (158,128)
Octile::			 A star my openlist elapsed time: 0.005294, Nodes Expanded: 2038, Optimal Moves: 151, Optimal Gcost: 166.982788
Differential Heuristic::	 A star my openlist elapsed time: 0.003889, Nodes Expanded: 1709, Optimal Moves: 151, Optimal G cost: 166.982788
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003225, Nodes Expanded: 1416, Optimal Moves: 151, Optimal Gcost: 166.982788
Canonical A Star::A star my openlist elapsed time: 0.002161, Nodes Expanded: 1416, Optimal Moves: 151, Optimal Gcost: 166.982788
Jump Point Search::A star my openlist elapsed time: 0.000347, Nodes Expanded: 34, Optimal Moves: 151, Optimal Gcost: 166.982788
(startX, startY): (10,133) goalX, goalY: (161,151)
Octile::			 A star my openlist elapsed time: 0.004891, Nodes Expanded: 1934, Optimal Moves: 152, Optimal Gcost: 165.911728
Differential Heuristic::	 A star my openlist elapsed time: 0.003556, Nodes Expanded: 1535, Optimal Moves: 152, Optimal G cost: 165.911728
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002662, Nodes Expanded: 1097, Optimal Moves: 152, Optimal Gcost: 165.911728
Canonical A Star::A star my openlist elapsed time: 0.001784, Nodes Expanded: 1097, Optimal Moves: 152, Optimal Gcost: 165.911728
Jump Point Search::A star my openlist elapsed time: 0.000386, Nodes Expanded: 32, Optimal Moves: 152, Optimal Gcost: 165.911728
(startX, startY): (10,74) goalX, goalY: (61,167)
Octile::			 A star my openlist elapsed time: 0.007563, Nodes Expanded: 3468, Optimal Moves: 144, Optimal Gcost: 166.610229
Differential Heuristic::	 A star my openlist elapsed time: 0.006130, Nodes Expanded: 2906, Optimal Moves: 144, Optimal G cost: 166.610229
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005895, Nodes Expanded: 2694, Optimal Moves: 144, Optimal Gcost: 166.610229
Canonical A Star::A star my openlist elapsed time: 0.003825, Nodes Expanded: 2694, Optimal Moves: 144, Optimal Gcost: 166.610229
Jump Point Search::A star my openlist elapsed time: 0.000906, Nodes Expanded: 93, Optimal Moves: 144, Optimal Gcost: 166.610229
(startX, startY): (10,78) goalX, goalY: (98,152)
Octile::			 A star my openlist elapsed time: 0.009301, Nodes Expanded: 3854, Optimal Moves: 147, Optimal Gcost: 166.710724
Differential Heuristic::	 A star my openlist elapsed time: 0.004201, Nodes Expanded: 1930, Optimal Moves: 147, Optimal G cost: 166.710739
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003507, Nodes Expanded: 1647, Optimal Moves: 147, Optimal Gcost: 166.710739
Canonical A Star::A star my openlist elapsed time: 0.002109, Nodes Expanded: 1647, Optimal Moves: 147, Optimal Gcost: 166.710739
Jump Point Search::A star my openlist elapsed time: 0.000393, Nodes Expanded: 44, Optimal Moves: 147, Optimal Gcost: 166.710739
(startX, startY): (10,88) goalX, goalY: (60,174)
Octile::			 A star my openlist elapsed time: 0.007653, Nodes Expanded: 3363, Optimal Moves: 148, Optimal Gcost: 166.468094
Differential Heuristic::	 A star my openlist elapsed time: 0.005394, Nodes Expanded: 2674, Optimal Moves: 148, Optimal G cost: 166.468094
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005024, Nodes Expanded: 2414, Optimal Moves: 148, Optimal Gcost: 166.468094
Canonical A Star::A star my openlist elapsed time: 0.003194, Nodes Expanded: 2422, Optimal Moves: 148, Optimal Gcost: 166.468109
Jump Point Search::A star my openlist elapsed time: 0.000603, Nodes Expanded: 85, Optimal Moves: 148, Optimal Gcost: 166.468109
(startX, startY): (10,88) goalX, goalY: (61,173)
Octile::			 A star my openlist elapsed time: 0.007269, Nodes Expanded: 3332, Optimal Moves: 147, Optimal Gcost: 165.053879
Differential Heuristic::	 A star my openlist elapsed time: 0.005146, Nodes Expanded: 2666, Optimal Moves: 147, Optimal G cost: 165.053879
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005013, Nodes Expanded: 2389, Optimal Moves: 147, Optimal Gcost: 165.053879
Canonical A Star::A star my openlist elapsed time: 0.003208, Nodes Expanded: 2397, Optimal Moves: 147, Optimal Gcost: 165.053894
Jump Point Search::A star my openlist elapsed time: 0.000538, Nodes Expanded: 81, Optimal Moves: 147, Optimal Gcost: 165.053894
(startX, startY): (100,107) goalX, goalY: (49,130)
Octile::			 A star my openlist elapsed time: 0.007961, Nodes Expanded: 3570, Optimal Moves: 139, Optimal Gcost: 167.823441
Differential Heuristic::	 A star my openlist elapsed time: 0.002848, Nodes Expanded: 1267, Optimal Moves: 139, Optimal G cost: 167.823441
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002860, Nodes Expanded: 1176, Optimal Moves: 139, Optimal Gcost: 167.823441
Canonical A Star::A star my openlist elapsed time: 0.002157, Nodes Expanded: 1189, Optimal Moves: 139, Optimal Gcost: 167.823441
Jump Point Search::A star my openlist elapsed time: 0.000422, Nodes Expanded: 27, Optimal Moves: 139, Optimal Gcost: 167.823441
(startX, startY): (100,13) goalX, goalY: (151,153)
Octile::			 A star my openlist elapsed time: 0.002917, Nodes Expanded: 1818, Optimal Moves: 142, Optimal Gcost: 166.681305
Differential Heuristic::	 A star my openlist elapsed time: 0.006353, Nodes Expanded: 2950, Optimal Moves: 142, Optimal G cost: 166.681320
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003123, Nodes Expanded: 1669, Optimal Moves: 142, Optimal Gcost: 166.681305
Canonical A Star::A star my openlist elapsed time: 0.002021, Nodes Expanded: 1669, Optimal Moves: 142, Optimal Gcost: 166.681320
Jump Point Search::A star my openlist elapsed time: 0.000230, Nodes Expanded: 22, Optimal Moves: 142, Optimal Gcost: 166.681320
(startX, startY): (100,147) goalX, goalY: (61,67)
Octile::			 A star my openlist elapsed time: 0.009803, Nodes Expanded: 3957, Optimal Moves: 145, Optimal Gcost: 164.296524
Differential Heuristic::	 A star my openlist elapsed time: 0.004845, Nodes Expanded: 2355, Optimal Moves: 145, Optimal G cost: 164.296524
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004690, Nodes Expanded: 2077, Optimal Moves: 145, Optimal Gcost: 164.296524
Canonical A Star::A star my openlist elapsed time: 0.002764, Nodes Expanded: 2121, Optimal Moves: 145, Optimal Gcost: 164.296539
Jump Point Search::A star my openlist elapsed time: 0.000331, Nodes Expanded: 28, Optimal Moves: 145, Optimal Gcost: 164.296539
(startX, startY): (10,109) goalX, goalY: (152,135)
Octile::			 A star my openlist elapsed time: 0.005394, Nodes Expanded: 2224, Optimal Moves: 155, Optimal Gcost: 169.740143
Differential Heuristic::	 A star my openlist elapsed time: 0.003750, Nodes Expanded: 1763, Optimal Moves: 155, Optimal G cost: 169.740143
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003210, Nodes Expanded: 1444, Optimal Moves: 155, Optimal Gcost: 169.740143
Canonical A Star::A star my openlist elapsed time: 0.002214, Nodes Expanded: 1444, Optimal Moves: 155, Optimal Gcost: 169.740143
Jump Point Search::A star my openlist elapsed time: 0.000248, Nodes Expanded: 35, Optimal Moves: 155, Optimal Gcost: 169.740143
(startX, startY): (10,134) goalX, goalY: (158,112)
Octile::			 A star my openlist elapsed time: 0.004023, Nodes Expanded: 1861, Optimal Moves: 150, Optimal Gcost: 169.296524
Differential Heuristic::	 A star my openlist elapsed time: 0.003159, Nodes Expanded: 1471, Optimal Moves: 150, Optimal G cost: 169.296524
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002556, Nodes Expanded: 1052, Optimal Moves: 150, Optimal Gcost: 169.296524
Canonical A Star::A star my openlist elapsed time: 0.001729, Nodes Expanded: 1052, Optimal Moves: 150, Optimal Gcost: 169.296524
Jump Point Search::A star my openlist elapsed time: 0.000174, Nodes Expanded: 30, Optimal Moves: 150, Optimal Gcost: 169.296524
(startX, startY): (100,10) goalX, goalY: (158,152)
Octile::			 A star my openlist elapsed time: 0.002247, Nodes Expanded: 1515, Optimal Moves: 145, Optimal Gcost: 168.852890
Differential Heuristic::	 A star my openlist elapsed time: 0.006854, Nodes Expanded: 3366, Optimal Moves: 145, Optimal G cost: 168.852890
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002575, Nodes Expanded: 1461, Optimal Moves: 145, Optimal Gcost: 168.852890
Canonical A Star::A star my openlist elapsed time: 0.001619, Nodes Expanded: 1461, Optimal Moves: 145, Optimal Gcost: 168.852890
Jump Point Search::A star my openlist elapsed time: 0.000219, Nodes Expanded: 23, Optimal Moves: 145, Optimal Gcost: 168.852890
(startX, startY): (100,141) goalX, goalY: (103,22)
Octile::			 A star my openlist elapsed time: 0.004593, Nodes Expanded: 2207, Optimal Moves: 144, Optimal Gcost: 169.095535
Differential Heuristic::	 A star my openlist elapsed time: 0.003203, Nodes Expanded: 1824, Optimal Moves: 144, Optimal G cost: 169.095535
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001378, Nodes Expanded: 760, Optimal Moves: 144, Optimal Gcost: 169.095535
Canonical A Star::A star my openlist elapsed time: 0.000768, Nodes Expanded: 760, Optimal Moves: 144, Optimal Gcost: 169.095535
Jump Point Search::A star my openlist elapsed time: 0.000204, Nodes Expanded: 16, Optimal Moves: 144, Optimal Gcost: 169.095535
(startX, startY): (100,164) goalX, goalY: (149,20)
Octile::			 A star my openlist elapsed time: 0.003428, Nodes Expanded: 1926, Optimal Moves: 145, Optimal Gcost: 170.095505
Differential Heuristic::	 A star my openlist elapsed time: 0.008758, Nodes Expanded: 3954, Optimal Moves: 145, Optimal G cost: 170.095505
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002223, Nodes Expanded: 1265, Optimal Moves: 145, Optimal Gcost: 170.095505
Canonical A Star::A star my openlist elapsed time: 0.001398, Nodes Expanded: 1265, Optimal Moves: 145, Optimal Gcost: 170.095505
Jump Point Search::A star my openlist elapsed time: 0.000283, Nodes Expanded: 18, Optimal Moves: 145, Optimal Gcost: 170.095505
(startX, startY): (100,188) goalX, goalY: (27,88)
Octile::			 A star my openlist elapsed time: 0.011410, Nodes Expanded: 4157, Optimal Moves: 145, Optimal Gcost: 170.095505
Differential Heuristic::	 A star my openlist elapsed time: 0.007207, Nodes Expanded: 2636, Optimal Moves: 145, Optimal G cost: 170.095520
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006234, Nodes Expanded: 2318, Optimal Moves: 145, Optimal Gcost: 170.095520
Canonical A Star::A star my openlist elapsed time: 0.003166, Nodes Expanded: 2306, Optimal Moves: 145, Optimal Gcost: 170.095505
Jump Point Search::A star my openlist elapsed time: 0.000333, Nodes Expanded: 20, Optimal Moves: 145, Optimal Gcost: 170.095505
(startX, startY): (100,23) goalX, goalY: (110,160)
Octile::			 A star my openlist elapsed time: 0.004426, Nodes Expanded: 2142, Optimal Moves: 139, Optimal Gcost: 170.722961
Differential Heuristic::	 A star my openlist elapsed time: 0.004217, Nodes Expanded: 2031, Optimal Moves: 139, Optimal G cost: 170.722961
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003098, Nodes Expanded: 1495, Optimal Moves: 139, Optimal Gcost: 170.722961
Canonical A Star::A star my openlist elapsed time: 0.001801, Nodes Expanded: 1495, Optimal Moves: 139, Optimal Gcost: 170.722961
Jump Point Search::A star my openlist elapsed time: 0.000359, Nodes Expanded: 23, Optimal Moves: 139, Optimal Gcost: 170.722961
(startX, startY): (100,35) goalX, goalY: (151,173)
Octile::			 A star my openlist elapsed time: 0.003800, Nodes Expanded: 2061, Optimal Moves: 143, Optimal Gcost: 168.095505
Differential Heuristic::	 A star my openlist elapsed time: 0.007286, Nodes Expanded: 3530, Optimal Moves: 143, Optimal G cost: 168.095520
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003604, Nodes Expanded: 1660, Optimal Moves: 143, Optimal Gcost: 168.095505
Canonical A Star::A star my openlist elapsed time: 0.002115, Nodes Expanded: 1687, Optimal Moves: 143, Optimal Gcost: 168.095520
Jump Point Search::A star my openlist elapsed time: 0.000240, Nodes Expanded: 23, Optimal Moves: 143, Optimal Gcost: 168.095520
(startX, startY): (100,49) goalX, goalY: (101,170)
Octile::			 A star my openlist elapsed time: 0.003433, Nodes Expanded: 1870, Optimal Moves: 140, Optimal Gcost: 168.409241
Differential Heuristic::	 A star my openlist elapsed time: 0.004985, Nodes Expanded: 2297, Optimal Moves: 140, Optimal G cost: 168.409241
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003255, Nodes Expanded: 1491, Optimal Moves: 140, Optimal Gcost: 168.409241
Canonical A Star::A star my openlist elapsed time: 0.002044, Nodes Expanded: 1491, Optimal Moves: 140, Optimal Gcost: 168.409256
Jump Point Search::A star my openlist elapsed time: 0.000301, Nodes Expanded: 23, Optimal Moves: 140, Optimal Gcost: 168.409256
(startX, startY): (101,141) goalX, goalY: (46,57)
Octile::			 A star my openlist elapsed time: 0.009794, Nodes Expanded: 3375, Optimal Moves: 153, Optimal Gcost: 168.982803
Differential Heuristic::	 A star my openlist elapsed time: 0.004785, Nodes Expanded: 2082, Optimal Moves: 153, Optimal G cost: 168.982803
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003885, Nodes Expanded: 1611, Optimal Moves: 153, Optimal Gcost: 168.982803
Canonical A Star::A star my openlist elapsed time: 0.002439, Nodes Expanded: 1736, Optimal Moves: 153, Optimal Gcost: 168.982819
Jump Point Search::A star my openlist elapsed time: 0.000314, Nodes Expanded: 22, Optimal Moves: 153, Optimal Gcost: 168.982819
(startX, startY): (10,103) goalX, goalY: (145,127)
Octile::			 A star my openlist elapsed time: 0.005584, Nodes Expanded: 2465, Optimal Moves: 154, Optimal Gcost: 175.367584
Differential Heuristic::	 A star my openlist elapsed time: 0.003473, Nodes Expanded: 1356, Optimal Moves: 154, Optimal G cost: 175.367584
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003207, Nodes Expanded: 1179, Optimal Moves: 154, Optimal Gcost: 175.367584
Canonical A Star::A star my openlist elapsed time: 0.002214, Nodes Expanded: 1179, Optimal Moves: 154, Optimal Gcost: 175.367584
Jump Point Search::A star my openlist elapsed time: 0.000228, Nodes Expanded: 29, Optimal Moves: 154, Optimal Gcost: 175.367584
(startX, startY): (10,118) goalX, goalY: (157,113)
Octile::			 A star my openlist elapsed time: 0.005359, Nodes Expanded: 2339, Optimal Moves: 150, Optimal Gcost: 174.267090
Differential Heuristic::	 A star my openlist elapsed time: 0.003480, Nodes Expanded: 1619, Optimal Moves: 150, Optimal G cost: 174.267090
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002887, Nodes Expanded: 1233, Optimal Moves: 150, Optimal Gcost: 174.267090
Canonical A Star::A star my openlist elapsed time: 0.001928, Nodes Expanded: 1233, Optimal Moves: 150, Optimal Gcost: 174.267090
Jump Point Search::A star my openlist elapsed time: 0.000209, Nodes Expanded: 29, Optimal Moves: 150, Optimal Gcost: 174.267090
(startX, startY): (10,124) goalX, goalY: (144,163)
Octile::			 A star my openlist elapsed time: 0.010372, Nodes Expanded: 3886, Optimal Moves: 155, Optimal Gcost: 174.296509
Differential Heuristic::	 A star my openlist elapsed time: 0.003500, Nodes Expanded: 1681, Optimal Moves: 155, Optimal G cost: 174.296509
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003429, Nodes Expanded: 1556, Optimal Moves: 155, Optimal Gcost: 174.296509
Canonical A Star::A star my openlist elapsed time: 0.002452, Nodes Expanded: 1556, Optimal Moves: 155, Optimal Gcost: 174.296509
Jump Point Search::A star my openlist elapsed time: 0.000412, Nodes Expanded: 39, Optimal Moves: 155, Optimal Gcost: 174.296509
(startX, startY): (10,126) goalX, goalY: (167,148)
Octile::			 A star my openlist elapsed time: 0.005935, Nodes Expanded: 1914, Optimal Moves: 158, Optimal Gcost: 172.740143
Differential Heuristic::	 A star my openlist elapsed time: 0.004721, Nodes Expanded: 1878, Optimal Moves: 158, Optimal G cost: 172.740143
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002917, Nodes Expanded: 1196, Optimal Moves: 158, Optimal Gcost: 172.740143
Canonical A Star::A star my openlist elapsed time: 0.002006, Nodes Expanded: 1195, Optimal Moves: 158, Optimal Gcost: 172.740143
Jump Point Search::A star my openlist elapsed time: 0.000333, Nodes Expanded: 31, Optimal Moves: 158, Optimal Gcost: 172.740143
(startX, startY): (10,66) goalX, goalY: (94,163)
Octile::			 A star my openlist elapsed time: 0.007364, Nodes Expanded: 3370, Optimal Moves: 144, Optimal Gcost: 172.823456
Differential Heuristic::	 A star my openlist elapsed time: 0.005472, Nodes Expanded: 2609, Optimal Moves: 144, Optimal G cost: 172.823456
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004617, Nodes Expanded: 2082, Optimal Moves: 144, Optimal Gcost: 172.823456
Canonical A Star::A star my openlist elapsed time: 0.002943, Nodes Expanded: 2082, Optimal Moves: 144, Optimal Gcost: 172.823456
Jump Point Search::A star my openlist elapsed time: 0.000694, Nodes Expanded: 69, Optimal Moves: 144, Optimal Gcost: 172.823456
(startX, startY): (10,76) goalX, goalY: (107,148)
Octile::			 A star my openlist elapsed time: 0.011793, Nodes Expanded: 4415, Optimal Moves: 156, Optimal Gcost: 174.882294
Differential Heuristic::	 A star my openlist elapsed time: 0.003446, Nodes Expanded: 1597, Optimal Moves: 156, Optimal G cost: 174.882309
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003133, Nodes Expanded: 1391, Optimal Moves: 156, Optimal Gcost: 174.882309
Canonical A Star::A star my openlist elapsed time: 0.001762, Nodes Expanded: 1390, Optimal Moves: 156, Optimal Gcost: 174.882309
Jump Point Search::A star my openlist elapsed time: 0.000337, Nodes Expanded: 35, Optimal Moves: 156, Optimal Gcost: 174.882309
(startX, startY): (10,77) goalX, goalY: (102,163)
Octile::			 A star my openlist elapsed time: 0.009328, Nodes Expanded: 3733, Optimal Moves: 151, Optimal Gcost: 175.681320
Differential Heuristic::	 A star my openlist elapsed time: 0.006398, Nodes Expanded: 2558, Optimal Moves: 151, Optimal G cost: 175.681320
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005323, Nodes Expanded: 2081, Optimal Moves: 151, Optimal Gcost: 175.681320
Canonical A Star::A star my openlist elapsed time: 0.003089, Nodes Expanded: 2087, Optimal Moves: 151, Optimal Gcost: 175.681320
Jump Point Search::A star my openlist elapsed time: 0.000589, Nodes Expanded: 66, Optimal Moves: 151, Optimal Gcost: 175.681320
(startX, startY): (10,84) goalX, goalY: (112,150)
Octile::			 A star my openlist elapsed time: 0.010926, Nodes Expanded: 4291, Optimal Moves: 158, Optimal Gcost: 175.639664
Differential Heuristic::	 A star my openlist elapsed time: 0.003484, Nodes Expanded: 1663, Optimal Moves: 158, Optimal G cost: 175.639664
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002929, Nodes Expanded: 1384, Optimal Moves: 158, Optimal Gcost: 175.639664
Canonical A Star::A star my openlist elapsed time: 0.002082, Nodes Expanded: 1384, Optimal Moves: 158, Optimal Gcost: 175.639664
Jump Point Search::A star my openlist elapsed time: 0.000381, Nodes Expanded: 31, Optimal Moves: 158, Optimal Gcost: 175.639664
(startX, startY): (10,90) goalX, goalY: (103,171)
Octile::			 A star my openlist elapsed time: 0.005365, Nodes Expanded: 2497, Optimal Moves: 149, Optimal Gcost: 172.852890
Differential Heuristic::	 A star my openlist elapsed time: 0.004844, Nodes Expanded: 2388, Optimal Moves: 149, Optimal G cost: 172.852890
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003949, Nodes Expanded: 1756, Optimal Moves: 149, Optimal Gcost: 172.852890
Canonical A Star::A star my openlist elapsed time: 0.002370, Nodes Expanded: 1766, Optimal Moves: 149, Optimal Gcost: 172.852905
Jump Point Search::A star my openlist elapsed time: 0.000439, Nodes Expanded: 49, Optimal Moves: 149, Optimal Gcost: 172.852905
(startX, startY): (10,91) goalX, goalY: (90,182)
Octile::			 A star my openlist elapsed time: 0.006310, Nodes Expanded: 2948, Optimal Moves: 156, Optimal Gcost: 175.710739
Differential Heuristic::	 A star my openlist elapsed time: 0.006416, Nodes Expanded: 3201, Optimal Moves: 156, Optimal G cost: 175.710739
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005033, Nodes Expanded: 2184, Optimal Moves: 156, Optimal Gcost: 175.710739
Canonical A Star::A star my openlist elapsed time: 0.003002, Nodes Expanded: 2185, Optimal Moves: 156, Optimal Gcost: 175.710739
Jump Point Search::A star my openlist elapsed time: 0.000484, Nodes Expanded: 59, Optimal Moves: 156, Optimal Gcost: 175.710739
(startX, startY): (10,112) goalX, goalY: (158,153)
Octile::			 A star my openlist elapsed time: 0.006813, Nodes Expanded: 2712, Optimal Moves: 157, Optimal Gcost: 176.296509
Differential Heuristic::	 A star my openlist elapsed time: 0.004014, Nodes Expanded: 1856, Optimal Moves: 157, Optimal G cost: 176.296509
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003068, Nodes Expanded: 1365, Optimal Moves: 157, Optimal Gcost: 176.296509
Canonical A Star::A star my openlist elapsed time: 0.002085, Nodes Expanded: 1365, Optimal Moves: 157, Optimal Gcost: 176.296509
Jump Point Search::A star my openlist elapsed time: 0.000395, Nodes Expanded: 31, Optimal Moves: 157, Optimal Gcost: 176.296509
(startX, startY): (10,113) goalX, goalY: (149,109)
Octile::			 A star my openlist elapsed time: 0.006126, Nodes Expanded: 2746, Optimal Moves: 153, Optimal Gcost: 176.438660
Differential Heuristic::	 A star my openlist elapsed time: 0.001209, Nodes Expanded: 471, Optimal Moves: 153, Optimal G cost: 176.438660
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001224, Nodes Expanded: 466, Optimal Moves: 153, Optimal Gcost: 176.438660
Canonical A Star::A star my openlist elapsed time: 0.000660, Nodes Expanded: 465, Optimal Moves: 153, Optimal Gcost: 176.438660
Jump Point Search::A star my openlist elapsed time: 0.000171, Nodes Expanded: 16, Optimal Moves: 153, Optimal Gcost: 176.438660
(startX, startY): (10,116) goalX, goalY: (156,123)
Octile::			 A star my openlist elapsed time: 0.008751, Nodes Expanded: 3172, Optimal Moves: 161, Optimal Gcost: 177.811218
Differential Heuristic::	 A star my openlist elapsed time: 0.004651, Nodes Expanded: 1954, Optimal Moves: 161, Optimal G cost: 177.811218
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004361, Nodes Expanded: 1833, Optimal Moves: 161, Optimal Gcost: 177.811218
Canonical A Star::A star my openlist elapsed time: 0.002901, Nodes Expanded: 1833, Optimal Moves: 161, Optimal Gcost: 177.811218
Jump Point Search::A star my openlist elapsed time: 0.000361, Nodes Expanded: 38, Optimal Moves: 161, Optimal Gcost: 177.811218
(startX, startY): (10,126) goalX, goalY: (171,128)
Octile::			 A star my openlist elapsed time: 0.004932, Nodes Expanded: 1938, Optimal Moves: 162, Optimal Gcost: 178.397003
Differential Heuristic::	 A star my openlist elapsed time: 0.004799, Nodes Expanded: 2037, Optimal Moves: 162, Optimal G cost: 178.397003
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003694, Nodes Expanded: 1427, Optimal Moves: 162, Optimal Gcost: 178.397003
Canonical A Star::A star my openlist elapsed time: 0.002602, Nodes Expanded: 1426, Optimal Moves: 162, Optimal Gcost: 178.397003
Jump Point Search::A star my openlist elapsed time: 0.000390, Nodes Expanded: 34, Optimal Moves: 162, Optimal Gcost: 178.397003
(startX, startY): (10,127) goalX, goalY: (163,106)
Octile::			 A star my openlist elapsed time: 0.004927, Nodes Expanded: 2196, Optimal Moves: 154, Optimal Gcost: 178.267090
Differential Heuristic::	 A star my openlist elapsed time: 0.005080, Nodes Expanded: 2120, Optimal Moves: 154, Optimal G cost: 178.267090
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002854, Nodes Expanded: 1267, Optimal Moves: 154, Optimal Gcost: 178.267090
Canonical A Star::A star my openlist elapsed time: 0.001945, Nodes Expanded: 1282, Optimal Moves: 154, Optimal Gcost: 178.267090
Jump Point Search::A star my openlist elapsed time: 0.000218, Nodes Expanded: 31, Optimal Moves: 154, Optimal Gcost: 178.267090
(startX, startY): (10,128) goalX, goalY: (170,131)
Octile::			 A star my openlist elapsed time: 0.005995, Nodes Expanded: 2211, Optimal Moves: 162, Optimal Gcost: 178.397003
Differential Heuristic::	 A star my openlist elapsed time: 0.005471, Nodes Expanded: 2048, Optimal Moves: 162, Optimal G cost: 178.397003
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003978, Nodes Expanded: 1567, Optimal Moves: 162, Optimal Gcost: 178.397003
Canonical A Star::A star my openlist elapsed time: 0.002692, Nodes Expanded: 1629, Optimal Moves: 162, Optimal Gcost: 178.397003
Jump Point Search::A star my openlist elapsed time: 0.000329, Nodes Expanded: 37, Optimal Moves: 162, Optimal Gcost: 178.397003
(startX, startY): (10,129) goalX, goalY: (122,123)
Octile::			 A star my openlist elapsed time: 0.013075, Nodes Expanded: 5029, Optimal Moves: 143, Optimal Gcost: 178.450897
Differential Heuristic::	 A star my openlist elapsed time: 0.006116, Nodes Expanded: 2665, Optimal Moves: 143, Optimal G cost: 178.450897
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003406, Nodes Expanded: 1501, Optimal Moves: 143, Optimal Gcost: 178.450897
Canonical A Star::A star my openlist elapsed time: 0.002181, Nodes Expanded: 1501, Optimal Moves: 143, Optimal Gcost: 178.450897
Jump Point Search::A star my openlist elapsed time: 0.000258, Nodes Expanded: 28, Optimal Moves: 143, Optimal Gcost: 178.450897
(startX, startY): (10,132) goalX, goalY: (173,124)
Octile::			 A star my openlist elapsed time: 0.004378, Nodes Expanded: 1787, Optimal Moves: 164, Optimal Gcost: 178.740158
Differential Heuristic::	 A star my openlist elapsed time: 0.005455, Nodes Expanded: 2032, Optimal Moves: 164, Optimal G cost: 178.740158
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003638, Nodes Expanded: 1319, Optimal Moves: 164, Optimal Gcost: 178.740158
Canonical A Star::A star my openlist elapsed time: 0.002173, Nodes Expanded: 1288, Optimal Moves: 164, Optimal Gcost: 178.740158
Jump Point Search::A star my openlist elapsed time: 0.000219, Nodes Expanded: 32, Optimal Moves: 164, Optimal Gcost: 178.740158
(startX, startY): (10,133) goalX, goalY: (165,110)
Octile::			 A star my openlist elapsed time: 0.004578, Nodes Expanded: 2013, Optimal Moves: 156, Optimal Gcost: 176.124954
Differential Heuristic::	 A star my openlist elapsed time: 0.004793, Nodes Expanded: 1986, Optimal Moves: 156, Optimal G cost: 176.124954
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003385, Nodes Expanded: 1229, Optimal Moves: 156, Optimal Gcost: 176.124954
Canonical A Star::A star my openlist elapsed time: 0.002018, Nodes Expanded: 1229, Optimal Moves: 156, Optimal Gcost: 176.124954
Jump Point Search::A star my openlist elapsed time: 0.000283, Nodes Expanded: 31, Optimal Moves: 156, Optimal Gcost: 176.124954
(startX, startY): (10,134) goalX, goalY: (172,131)
Octile::			 A star my openlist elapsed time: 0.006045, Nodes Expanded: 2073, Optimal Moves: 164, Optimal Gcost: 178.740158
Differential Heuristic::	 A star my openlist elapsed time: 0.004712, Nodes Expanded: 1911, Optimal Moves: 164, Optimal G cost: 178.740158
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003907, Nodes Expanded: 1418, Optimal Moves: 164, Optimal Gcost: 178.740158
Canonical A Star::A star my openlist elapsed time: 0.002430, Nodes Expanded: 1418, Optimal Moves: 164, Optimal Gcost: 178.740158
Jump Point Search::A star my openlist elapsed time: 0.000342, Nodes Expanded: 42, Optimal Moves: 164, Optimal Gcost: 178.740158
(startX, startY): (10,59) goalX, goalY: (102,154)
Octile::			 A star my openlist elapsed time: 0.011733, Nodes Expanded: 4367, Optimal Moves: 156, Optimal Gcost: 182.338165
Differential Heuristic::	 A star my openlist elapsed time: 0.005050, Nodes Expanded: 2346, Optimal Moves: 156, Optimal G cost: 182.338165
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004239, Nodes Expanded: 2019, Optimal Moves: 156, Optimal Gcost: 182.338165
Canonical A Star::A star my openlist elapsed time: 0.002666, Nodes Expanded: 2019, Optimal Moves: 156, Optimal Gcost: 182.338165
Jump Point Search::A star my openlist elapsed time: 0.000596, Nodes Expanded: 66, Optimal Moves: 156, Optimal Gcost: 182.338165
(startX, startY): (10,69) goalX, goalY: (105,160)
Octile::			 A star my openlist elapsed time: 0.011774, Nodes Expanded: 4344, Optimal Moves: 156, Optimal Gcost: 181.923950
Differential Heuristic::	 A star my openlist elapsed time: 0.006734, Nodes Expanded: 2676, Optimal Moves: 156, Optimal G cost: 181.923950
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006157, Nodes Expanded: 2304, Optimal Moves: 156, Optimal Gcost: 181.923950
Canonical A Star::A star my openlist elapsed time: 0.003992, Nodes Expanded: 2304, Optimal Moves: 156, Optimal Gcost: 181.923950
Jump Point Search::A star my openlist elapsed time: 0.000954, Nodes Expanded: 78, Optimal Moves: 156, Optimal Gcost: 181.923950
(startX, startY): (10,78) goalX, goalY: (61,183)
Octile::			 A star my openlist elapsed time: 0.009026, Nodes Expanded: 3624, Optimal Moves: 160, Optimal Gcost: 180.953384
Differential Heuristic::	 A star my openlist elapsed time: 0.008335, Nodes Expanded: 3658, Optimal Moves: 160, Optimal G cost: 180.953384
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006524, Nodes Expanded: 3015, Optimal Moves: 160, Optimal Gcost: 180.953384
Canonical A Star::A star my openlist elapsed time: 0.004348, Nodes Expanded: 3021, Optimal Moves: 160, Optimal Gcost: 180.953384
Jump Point Search::A star my openlist elapsed time: 0.001152, Nodes Expanded: 97, Optimal Moves: 160, Optimal Gcost: 180.953384
(startX, startY): (10,84) goalX, goalY: (82,188)
Octile::			 A star my openlist elapsed time: 0.007141, Nodes Expanded: 3148, Optimal Moves: 162, Optimal Gcost: 181.296524
Differential Heuristic::	 A star my openlist elapsed time: 0.006369, Nodes Expanded: 3200, Optimal Moves: 162, Optimal G cost: 181.296524
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005212, Nodes Expanded: 2355, Optimal Moves: 162, Optimal Gcost: 181.296524
Canonical A Star::A star my openlist elapsed time: 0.003156, Nodes Expanded: 2355, Optimal Moves: 162, Optimal Gcost: 181.296524
Jump Point Search::A star my openlist elapsed time: 0.000626, Nodes Expanded: 73, Optimal Moves: 162, Optimal Gcost: 181.296524
(startX, startY): (100,10) goalX, goalY: (167,162)
Octile::			 A star my openlist elapsed time: 0.002334, Nodes Expanded: 1510, Optimal Moves: 155, Optimal Gcost: 181.752396
Differential Heuristic::	 A star my openlist elapsed time: 0.007990, Nodes Expanded: 3856, Optimal Moves: 155, Optimal G cost: 181.752396
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002567, Nodes Expanded: 1393, Optimal Moves: 155, Optimal Gcost: 181.752396
Canonical A Star::A star my openlist elapsed time: 0.001767, Nodes Expanded: 1393, Optimal Moves: 155, Optimal Gcost: 181.752396
Jump Point Search::A star my openlist elapsed time: 0.000228, Nodes Expanded: 23, Optimal Moves: 155, Optimal Gcost: 181.752396
(startX, startY): (100,147) goalX, goalY: (34,54)
Octile::			 A star my openlist elapsed time: 0.013512, Nodes Expanded: 4620, Optimal Moves: 162, Optimal Gcost: 180.882309
Differential Heuristic::	 A star my openlist elapsed time: 0.006449, Nodes Expanded: 3195, Optimal Moves: 162, Optimal G cost: 180.882309
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004973, Nodes Expanded: 2410, Optimal Moves: 162, Optimal Gcost: 180.882309
Canonical A Star::A star my openlist elapsed time: 0.003379, Nodes Expanded: 2454, Optimal Moves: 162, Optimal Gcost: 180.882324
Jump Point Search::A star my openlist elapsed time: 0.000350, Nodes Expanded: 34, Optimal Moves: 162, Optimal Gcost: 180.882324
(startX, startY): (100,148) goalX, goalY: (96,16)
Octile::			 A star my openlist elapsed time: 0.005849, Nodes Expanded: 2725, Optimal Moves: 150, Optimal Gcost: 180.894547
Differential Heuristic::	 A star my openlist elapsed time: 0.006874, Nodes Expanded: 3646, Optimal Moves: 150, Optimal G cost: 180.894547
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001810, Nodes Expanded: 1005, Optimal Moves: 150, Optimal Gcost: 180.894547
Canonical A Star::A star my openlist elapsed time: 0.001059, Nodes Expanded: 1005, Optimal Moves: 150, Optimal Gcost: 180.894547
Jump Point Search::A star my openlist elapsed time: 0.000230, Nodes Expanded: 17, Optimal Moves: 150, Optimal Gcost: 180.894547
(startX, startY): (100,150) goalX, goalY: (62,49)
Octile::			 A star my openlist elapsed time: 0.010397, Nodes Expanded: 4277, Optimal Moves: 160, Optimal Gcost: 182.196030
Differential Heuristic::	 A star my openlist elapsed time: 0.007852, Nodes Expanded: 3525, Optimal Moves: 160, Optimal G cost: 182.196030
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004905, Nodes Expanded: 2399, Optimal Moves: 160, Optimal Gcost: 182.196030
Canonical A Star::A star my openlist elapsed time: 0.003184, Nodes Expanded: 2399, Optimal Moves: 160, Optimal Gcost: 182.196030
Jump Point Search::A star my openlist elapsed time: 0.000323, Nodes Expanded: 26, Optimal Moves: 160, Optimal Gcost: 182.196030
(startX, startY): (100,161) goalX, goalY: (84,43)
Octile::			 A star my openlist elapsed time: 0.009362, Nodes Expanded: 4056, Optimal Moves: 150, Optimal Gcost: 180.066086
Differential Heuristic::	 A star my openlist elapsed time: 0.006893, Nodes Expanded: 3732, Optimal Moves: 150, Optimal G cost: 180.066086
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003199, Nodes Expanded: 1738, Optimal Moves: 150, Optimal Gcost: 180.066086
Canonical A Star::A star my openlist elapsed time: 0.002072, Nodes Expanded: 1739, Optimal Moves: 150, Optimal Gcost: 180.066086
Jump Point Search::A star my openlist elapsed time: 0.000330, Nodes Expanded: 26, Optimal Moves: 150, Optimal Gcost: 180.066086
(startX, startY): (100,166) goalX, goalY: (104,22)
Octile::			 A star my openlist elapsed time: 0.005977, Nodes Expanded: 2948, Optimal Moves: 146, Optimal Gcost: 180.208237
Differential Heuristic::	 A star my openlist elapsed time: 0.007707, Nodes Expanded: 3932, Optimal Moves: 146, Optimal G cost: 180.208237
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002863, Nodes Expanded: 1422, Optimal Moves: 146, Optimal Gcost: 180.208237
Canonical A Star::A star my openlist elapsed time: 0.001739, Nodes Expanded: 1436, Optimal Moves: 146, Optimal Gcost: 180.208237
Jump Point Search::A star my openlist elapsed time: 0.000353, Nodes Expanded: 18, Optimal Moves: 146, Optimal Gcost: 180.208237
(startX, startY): (10,109) goalX, goalY: (169,147)
Octile::			 A star my openlist elapsed time: 0.006734, Nodes Expanded: 2578, Optimal Moves: 171, Optimal Gcost: 187.811218
Differential Heuristic::	 A star my openlist elapsed time: 0.005203, Nodes Expanded: 2138, Optimal Moves: 171, Optimal G cost: 187.811218
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003530, Nodes Expanded: 1474, Optimal Moves: 171, Optimal Gcost: 187.811218
Canonical A Star::A star my openlist elapsed time: 0.002361, Nodes Expanded: 1474, Optimal Moves: 171, Optimal Gcost: 187.811218
Jump Point Search::A star my openlist elapsed time: 0.000377, Nodes Expanded: 38, Optimal Moves: 171, Optimal Gcost: 187.811218
(startX, startY): (10,113) goalX, goalY: (162,119)
Octile::			 A star my openlist elapsed time: 0.007404, Nodes Expanded: 3002, Optimal Moves: 167, Optimal Gcost: 185.882294
Differential Heuristic::	 A star my openlist elapsed time: 0.005237, Nodes Expanded: 2131, Optimal Moves: 167, Optimal G cost: 185.882294
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005027, Nodes Expanded: 1870, Optimal Moves: 167, Optimal Gcost: 185.882294
Canonical A Star::A star my openlist elapsed time: 0.003446, Nodes Expanded: 1870, Optimal Moves: 167, Optimal Gcost: 185.882294
Jump Point Search::A star my openlist elapsed time: 0.000354, Nodes Expanded: 38, Optimal Moves: 167, Optimal Gcost: 185.882294
(startX, startY): (10,128) goalX, goalY: (144,87)
Octile::			 A star my openlist elapsed time: 0.010541, Nodes Expanded: 4139, Optimal Moves: 168, Optimal Gcost: 186.882309
Differential Heuristic::	 A star my openlist elapsed time: 0.003163, Nodes Expanded: 1261, Optimal Moves: 168, Optimal G cost: 186.882294
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002430, Nodes Expanded: 1060, Optimal Moves: 168, Optimal Gcost: 186.882294
Canonical A Star::A star my openlist elapsed time: 0.001640, Nodes Expanded: 1083, Optimal Moves: 168, Optimal Gcost: 186.882294
Jump Point Search::A star my openlist elapsed time: 0.000282, Nodes Expanded: 25, Optimal Moves: 168, Optimal Gcost: 186.882294
(startX, startY): (10,63) goalX, goalY: (101,174)
Octile::			 A star my openlist elapsed time: 0.007873, Nodes Expanded: 3541, Optimal Moves: 155, Optimal Gcost: 187.965607
Differential Heuristic::	 A star my openlist elapsed time: 0.006768, Nodes Expanded: 3171, Optimal Moves: 155, Optimal G cost: 187.965607
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005728, Nodes Expanded: 2331, Optimal Moves: 155, Optimal Gcost: 187.965607
Canonical A Star::A star my openlist elapsed time: 0.003480, Nodes Expanded: 2331, Optimal Moves: 155, Optimal Gcost: 187.965607
Jump Point Search::A star my openlist elapsed time: 0.001034, Nodes Expanded: 81, Optimal Moves: 155, Optimal Gcost: 187.965607
(startX, startY): (10,66) goalX, goalY: (104,168)
Octile::			 A star my openlist elapsed time: 0.009456, Nodes Expanded: 3856, Optimal Moves: 154, Optimal Gcost: 184.894531
Differential Heuristic::	 A star my openlist elapsed time: 0.006523, Nodes Expanded: 3033, Optimal Moves: 154, Optimal G cost: 184.894531
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005461, Nodes Expanded: 2450, Optimal Moves: 154, Optimal Gcost: 184.894531
Canonical A Star::A star my openlist elapsed time: 0.003533, Nodes Expanded: 2450, Optimal Moves: 154, Optimal Gcost: 184.894531
Jump Point Search::A star my openlist elapsed time: 0.000849, Nodes Expanded: 80, Optimal Moves: 154, Optimal Gcost: 184.894531
(startX, startY): (10,67) goalX, goalY: (115,146)
Octile::			 A star my openlist elapsed time: 0.011469, Nodes Expanded: 4533, Optimal Moves: 164, Optimal Gcost: 185.781799
Differential Heuristic::	 A star my openlist elapsed time: 0.002772, Nodes Expanded: 1282, Optimal Moves: 164, Optimal G cost: 185.781799
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002343, Nodes Expanded: 1096, Optimal Moves: 164, Optimal Gcost: 185.781799
Canonical A Star::A star my openlist elapsed time: 0.001548, Nodes Expanded: 1096, Optimal Moves: 164, Optimal Gcost: 185.781799
Jump Point Search::A star my openlist elapsed time: 0.000329, Nodes Expanded: 27, Optimal Moves: 164, Optimal Gcost: 185.781799
(startX, startY): (10,75) goalX, goalY: (69,190)
Octile::			 A star my openlist elapsed time: 0.007590, Nodes Expanded: 3462, Optimal Moves: 167, Optimal Gcost: 186.710724
Differential Heuristic::	 A star my openlist elapsed time: 0.007532, Nodes Expanded: 3606, Optimal Moves: 167, Optimal G cost: 186.710724
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006102, Nodes Expanded: 2723, Optimal Moves: 167, Optimal Gcost: 186.710724
Canonical A Star::A star my openlist elapsed time: 0.004263, Nodes Expanded: 2723, Optimal Moves: 167, Optimal Gcost: 186.710724
Jump Point Search::A star my openlist elapsed time: 0.000732, Nodes Expanded: 92, Optimal Moves: 167, Optimal Gcost: 186.710724
(startX, startY): (10,78) goalX, goalY: (111,170)
Octile::			 A star my openlist elapsed time: 0.010990, Nodes Expanded: 3981, Optimal Moves: 160, Optimal Gcost: 187.166595
Differential Heuristic::	 A star my openlist elapsed time: 0.006966, Nodes Expanded: 3323, Optimal Moves: 160, Optimal G cost: 187.166611
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005659, Nodes Expanded: 2565, Optimal Moves: 160, Optimal Gcost: 187.166611
Canonical A Star::A star my openlist elapsed time: 0.003815, Nodes Expanded: 2569, Optimal Moves: 160, Optimal Gcost: 187.166611
Jump Point Search::A star my openlist elapsed time: 0.000819, Nodes Expanded: 82, Optimal Moves: 160, Optimal Gcost: 187.166611
(startX, startY): (10,79) goalX, goalY: (117,155)
Octile::			 A star my openlist elapsed time: 0.011721, Nodes Expanded: 4699, Optimal Moves: 167, Optimal Gcost: 187.953369
Differential Heuristic::	 A star my openlist elapsed time: 0.005804, Nodes Expanded: 2651, Optimal Moves: 167, Optimal G cost: 187.953384
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005429, Nodes Expanded: 2206, Optimal Moves: 167, Optimal Gcost: 187.953384
Canonical A Star::A star my openlist elapsed time: 0.003175, Nodes Expanded: 2209, Optimal Moves: 167, Optimal Gcost: 187.953384
Jump Point Search::A star my openlist elapsed time: 0.000547, Nodes Expanded: 65, Optimal Moves: 167, Optimal Gcost: 187.953384
(startX, startY): (100,111) goalX, goalY: (63,128)
Octile::			 A star my openlist elapsed time: 0.010610, Nodes Expanded: 4050, Optimal Moves: 157, Optimal Gcost: 186.651886
Differential Heuristic::	 A star my openlist elapsed time: 0.005962, Nodes Expanded: 2285, Optimal Moves: 157, Optimal G cost: 186.651886
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006089, Nodes Expanded: 2113, Optimal Moves: 157, Optimal Gcost: 186.651886
Canonical A Star::A star my openlist elapsed time: 0.003841, Nodes Expanded: 2113, Optimal Moves: 157, Optimal Gcost: 186.651886
Jump Point Search::A star my openlist elapsed time: 0.000587, Nodes Expanded: 44, Optimal Moves: 157, Optimal Gcost: 186.651886
(startX, startY): (10,109) goalX, goalY: (140,157)
Octile::			 A star my openlist elapsed time: 0.012142, Nodes Expanded: 4709, Optimal Moves: 170, Optimal Gcost: 190.124939
Differential Heuristic::	 A star my openlist elapsed time: 0.004057, Nodes Expanded: 1872, Optimal Moves: 170, Optimal G cost: 190.124939
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003804, Nodes Expanded: 1783, Optimal Moves: 170, Optimal Gcost: 190.124939
Canonical A Star::A star my openlist elapsed time: 0.002868, Nodes Expanded: 1783, Optimal Moves: 170, Optimal Gcost: 190.124939
Jump Point Search::A star my openlist elapsed time: 0.000366, Nodes Expanded: 46, Optimal Moves: 170, Optimal Gcost: 190.124939
(startX, startY): (10,109) goalX, goalY: (162,120)
Octile::			 A star my openlist elapsed time: 0.006897, Nodes Expanded: 3024, Optimal Moves: 170, Optimal Gcost: 188.882294
Differential Heuristic::	 A star my openlist elapsed time: 0.005150, Nodes Expanded: 2174, Optimal Moves: 170, Optimal G cost: 188.882294
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004379, Nodes Expanded: 1900, Optimal Moves: 170, Optimal Gcost: 188.882294
Canonical A Star::A star my openlist elapsed time: 0.003094, Nodes Expanded: 1900, Optimal Moves: 170, Optimal Gcost: 188.882294
Jump Point Search::A star my openlist elapsed time: 0.000358, Nodes Expanded: 40, Optimal Moves: 170, Optimal Gcost: 188.882294
(startX, startY): (10,110) goalX, goalY: (170,153)
Octile::			 A star my openlist elapsed time: 0.007573, Nodes Expanded: 2858, Optimal Moves: 171, Optimal Gcost: 190.296509
Differential Heuristic::	 A star my openlist elapsed time: 0.005927, Nodes Expanded: 2224, Optimal Moves: 171, Optimal G cost: 190.296509
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003707, Nodes Expanded: 1506, Optimal Moves: 171, Optimal Gcost: 190.296509
Canonical A Star::A star my openlist elapsed time: 0.002669, Nodes Expanded: 1506, Optimal Moves: 171, Optimal Gcost: 190.296509
Jump Point Search::A star my openlist elapsed time: 0.000379, Nodes Expanded: 38, Optimal Moves: 171, Optimal Gcost: 190.296509
(startX, startY): (10,112) goalX, goalY: (166,113)
Octile::			 A star my openlist elapsed time: 0.007010, Nodes Expanded: 2530, Optimal Moves: 165, Optimal Gcost: 189.267090
Differential Heuristic::	 A star my openlist elapsed time: 0.005891, Nodes Expanded: 2344, Optimal Moves: 165, Optimal G cost: 189.267090
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003758, Nodes Expanded: 1620, Optimal Moves: 165, Optimal Gcost: 189.267090
Canonical A Star::A star my openlist elapsed time: 0.002704, Nodes Expanded: 1620, Optimal Moves: 165, Optimal Gcost: 189.267090
Jump Point Search::A star my openlist elapsed time: 0.000235, Nodes Expanded: 34, Optimal Moves: 165, Optimal Gcost: 189.267090
(startX, startY): (10,119) goalX, goalY: (150,89)
Octile::			 A star my openlist elapsed time: 0.011096, Nodes Expanded: 4530, Optimal Moves: 167, Optimal Gcost: 190.852875
Differential Heuristic::	 A star my openlist elapsed time: 0.001523, Nodes Expanded: 731, Optimal Moves: 167, Optimal G cost: 190.852875
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001539, Nodes Expanded: 656, Optimal Moves: 167, Optimal Gcost: 190.852875
Canonical A Star::A star my openlist elapsed time: 0.000846, Nodes Expanded: 656, Optimal Moves: 167, Optimal Gcost: 190.852875
Jump Point Search::A star my openlist elapsed time: 0.000209, Nodes Expanded: 17, Optimal Moves: 167, Optimal Gcost: 190.852875
(startX, startY): (10,126) goalX, goalY: (154,90)
Octile::			 A star my openlist elapsed time: 0.007364, Nodes Expanded: 3345, Optimal Moves: 165, Optimal Gcost: 188.024445
Differential Heuristic::	 A star my openlist elapsed time: 0.001982, Nodes Expanded: 945, Optimal Moves: 165, Optimal G cost: 188.024445
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001874, Nodes Expanded: 849, Optimal Moves: 165, Optimal Gcost: 188.024445
Canonical A Star::A star my openlist elapsed time: 0.001310, Nodes Expanded: 848, Optimal Moves: 165, Optimal Gcost: 188.024445
Jump Point Search::A star my openlist elapsed time: 0.000375, Nodes Expanded: 23, Optimal Moves: 165, Optimal Gcost: 188.024445
(startX, startY): (10,129) goalX, goalY: (183,130)
Octile::			 A star my openlist elapsed time: 0.005888, Nodes Expanded: 2125, Optimal Moves: 174, Optimal Gcost: 189.982803
Differential Heuristic::	 A star my openlist elapsed time: 0.006779, Nodes Expanded: 2434, Optimal Moves: 174, Optimal G cost: 189.982803
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003975, Nodes Expanded: 1580, Optimal Moves: 174, Optimal Gcost: 189.982803
Canonical A Star::A star my openlist elapsed time: 0.002750, Nodes Expanded: 1573, Optimal Moves: 174, Optimal Gcost: 189.982788
Jump Point Search::A star my openlist elapsed time: 0.000473, Nodes Expanded: 38, Optimal Moves: 174, Optimal Gcost: 189.982788
(startX, startY): (10,59) goalX, goalY: (110,150)
Octile::			 A star my openlist elapsed time: 0.011648, Nodes Expanded: 4637, Optimal Moves: 164, Optimal Gcost: 188.681305
Differential Heuristic::	 A star my openlist elapsed time: 0.004348, Nodes Expanded: 1984, Optimal Moves: 164, Optimal G cost: 188.681305
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003971, Nodes Expanded: 1715, Optimal Moves: 164, Optimal Gcost: 188.681305
Canonical A Star::A star my openlist elapsed time: 0.002399, Nodes Expanded: 1715, Optimal Moves: 164, Optimal Gcost: 188.681305
Jump Point Search::A star my openlist elapsed time: 0.000468, Nodes Expanded: 47, Optimal Moves: 164, Optimal Gcost: 188.681305
(startX, startY): (10,87) goalX, goalY: (107,186)
Octile::			 A star my openlist elapsed time: 0.005793, Nodes Expanded: 2821, Optimal Moves: 160, Optimal Gcost: 188.409256
Differential Heuristic::	 A star my openlist elapsed time: 0.007451, Nodes Expanded: 3772, Optimal Moves: 160, Optimal G cost: 188.409256
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004926, Nodes Expanded: 2150, Optimal Moves: 160, Optimal Gcost: 188.409256
Canonical A Star::A star my openlist elapsed time: 0.002928, Nodes Expanded: 2175, Optimal Moves: 160, Optimal Gcost: 188.409271
Jump Point Search::A star my openlist elapsed time: 0.000503, Nodes Expanded: 69, Optimal Moves: 160, Optimal Gcost: 188.409271
(startX, startY): (100,13) goalX, goalY: (90,142)
Octile::			 A star my openlist elapsed time: 0.004635, Nodes Expanded: 2739, Optimal Moves: 163, Optimal Gcost: 190.580811
Differential Heuristic::	 A star my openlist elapsed time: 0.001111, Nodes Expanded: 574, Optimal Moves: 163, Optimal G cost: 190.580826
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001056, Nodes Expanded: 573, Optimal Moves: 163, Optimal Gcost: 190.580826
Canonical A Star::A star my openlist elapsed time: 0.000631, Nodes Expanded: 568, Optimal Moves: 163, Optimal Gcost: 190.580826
Jump Point Search::A star my openlist elapsed time: 0.000290, Nodes Expanded: 13, Optimal Moves: 163, Optimal Gcost: 190.580826
(startX, startY): (10,102) goalX, goalY: (150,108)
Octile::			 A star my openlist elapsed time: 0.011198, Nodes Expanded: 4374, Optimal Moves: 165, Optimal Gcost: 192.166595
Differential Heuristic::	 A star my openlist elapsed time: 0.001167, Nodes Expanded: 502, Optimal Moves: 165, Optimal G cost: 192.166595
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001176, Nodes Expanded: 502, Optimal Moves: 165, Optimal Gcost: 192.166595
Canonical A Star::A star my openlist elapsed time: 0.000704, Nodes Expanded: 502, Optimal Moves: 165, Optimal Gcost: 192.166595
Jump Point Search::A star my openlist elapsed time: 0.000165, Nodes Expanded: 17, Optimal Moves: 165, Optimal Gcost: 192.166595
(startX, startY): (10,109) goalX, goalY: (149,173)
Octile::			 A star my openlist elapsed time: 0.010354, Nodes Expanded: 4298, Optimal Moves: 175, Optimal Gcost: 194.296509
Differential Heuristic::	 A star my openlist elapsed time: 0.004006, Nodes Expanded: 1925, Optimal Moves: 175, Optimal G cost: 194.296509
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003616, Nodes Expanded: 1678, Optimal Moves: 175, Optimal Gcost: 194.296509
Canonical A Star::A star my openlist elapsed time: 0.002514, Nodes Expanded: 1678, Optimal Moves: 175, Optimal Gcost: 194.296509
Jump Point Search::A star my openlist elapsed time: 0.000357, Nodes Expanded: 45, Optimal Moves: 175, Optimal Gcost: 194.296509
(startX, startY): (10,134) goalX, goalY: (183,109)
Octile::			 A star my openlist elapsed time: 0.005395, Nodes Expanded: 2204, Optimal Moves: 175, Optimal Gcost: 195.539169
Differential Heuristic::	 A star my openlist elapsed time: 0.006964, Nodes Expanded: 2729, Optimal Moves: 175, Optimal G cost: 195.539169
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003982, Nodes Expanded: 1394, Optimal Moves: 175, Optimal Gcost: 195.539169
Canonical A Star::A star my openlist elapsed time: 0.002475, Nodes Expanded: 1394, Optimal Moves: 175, Optimal Gcost: 195.539169
Jump Point Search::A star my openlist elapsed time: 0.000248, Nodes Expanded: 37, Optimal Moves: 175, Optimal Gcost: 195.539169
(startX, startY): (10,63) goalX, goalY: (118,140)
Octile::			 A star my openlist elapsed time: 0.012467, Nodes Expanded: 4794, Optimal Moves: 171, Optimal Gcost: 192.781799
Differential Heuristic::	 A star my openlist elapsed time: 0.001749, Nodes Expanded: 868, Optimal Moves: 171, Optimal G cost: 192.781799
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001793, Nodes Expanded: 856, Optimal Moves: 171, Optimal Gcost: 192.781799
Canonical A Star::A star my openlist elapsed time: 0.001235, Nodes Expanded: 856, Optimal Moves: 171, Optimal Gcost: 192.781799
Jump Point Search::A star my openlist elapsed time: 0.000252, Nodes Expanded: 31, Optimal Moves: 171, Optimal Gcost: 192.781799
(startX, startY): (100,103) goalX, goalY: (73,147)
Octile::			 A star my openlist elapsed time: 0.009486, Nodes Expanded: 4003, Optimal Moves: 162, Optimal Gcost: 194.137161
Differential Heuristic::	 A star my openlist elapsed time: 0.002437, Nodes Expanded: 1118, Optimal Moves: 162, Optimal G cost: 194.137161
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002407, Nodes Expanded: 1092, Optimal Moves: 162, Optimal Gcost: 194.137161
Canonical A Star::A star my openlist elapsed time: 0.001527, Nodes Expanded: 1094, Optimal Moves: 162, Optimal Gcost: 194.137161
Jump Point Search::A star my openlist elapsed time: 0.000414, Nodes Expanded: 25, Optimal Moves: 162, Optimal Gcost: 194.137161
(startX, startY): (100,179) goalX, goalY: (50,50)
Octile::			 A star my openlist elapsed time: 0.009883, Nodes Expanded: 4197, Optimal Moves: 166, Optimal Gcost: 192.338150
Differential Heuristic::	 A star my openlist elapsed time: 0.008166, Nodes Expanded: 3757, Optimal Moves: 166, Optimal G cost: 192.338150
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006756, Nodes Expanded: 2891, Optimal Moves: 166, Optimal Gcost: 192.338150
Canonical A Star::A star my openlist elapsed time: 0.004254, Nodes Expanded: 2891, Optimal Moves: 166, Optimal Gcost: 192.338150
Jump Point Search::A star my openlist elapsed time: 0.000324, Nodes Expanded: 20, Optimal Moves: 166, Optimal Gcost: 192.338150
(startX, startY): (100,180) goalX, goalY: (13,58)
Octile::			 A star my openlist elapsed time: 0.011101, Nodes Expanded: 4523, Optimal Moves: 161, Optimal Gcost: 194.379807
Differential Heuristic::	 A star my openlist elapsed time: 0.008339, Nodes Expanded: 3937, Optimal Moves: 161, Optimal G cost: 194.379807
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008338, Nodes Expanded: 2854, Optimal Moves: 161, Optimal Gcost: 194.379807
Canonical A Star::A star my openlist elapsed time: 0.004701, Nodes Expanded: 2854, Optimal Moves: 161, Optimal Gcost: 194.379807
Jump Point Search::A star my openlist elapsed time: 0.000345, Nodes Expanded: 24, Optimal Moves: 161, Optimal Gcost: 194.379807
(startX, startY): (100,183) goalX, goalY: (16,59)
Octile::			 A star my openlist elapsed time: 0.011679, Nodes Expanded: 4416, Optimal Moves: 162, Optimal Gcost: 194.551376
Differential Heuristic::	 A star my openlist elapsed time: 0.009595, Nodes Expanded: 4112, Optimal Moves: 162, Optimal G cost: 194.551376
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007599, Nodes Expanded: 2872, Optimal Moves: 162, Optimal Gcost: 194.551376
Canonical A Star::A star my openlist elapsed time: 0.004198, Nodes Expanded: 2872, Optimal Moves: 162, Optimal Gcost: 194.551376
Jump Point Search::A star my openlist elapsed time: 0.000348, Nodes Expanded: 26, Optimal Moves: 162, Optimal Gcost: 194.551376
(startX, startY): (100,185) goalX, goalY: (17,62)
Octile::			 A star my openlist elapsed time: 0.011248, Nodes Expanded: 4477, Optimal Moves: 162, Optimal Gcost: 193.722946
Differential Heuristic::	 A star my openlist elapsed time: 0.008905, Nodes Expanded: 3829, Optimal Moves: 162, Optimal G cost: 193.722946
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007323, Nodes Expanded: 2861, Optimal Moves: 162, Optimal Gcost: 193.722946
Canonical A Star::A star my openlist elapsed time: 0.004213, Nodes Expanded: 2861, Optimal Moves: 162, Optimal Gcost: 193.722946
Jump Point Search::A star my openlist elapsed time: 0.000346, Nodes Expanded: 26, Optimal Moves: 162, Optimal Gcost: 193.722946
(startX, startY): (100,188) goalX, goalY: (21,60)
Octile::			 A star my openlist elapsed time: 0.010203, Nodes Expanded: 4269, Optimal Moves: 165, Optimal Gcost: 195.894516
Differential Heuristic::	 A star my openlist elapsed time: 0.009473, Nodes Expanded: 4013, Optimal Moves: 165, Optimal G cost: 195.894516
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006943, Nodes Expanded: 2887, Optimal Moves: 165, Optimal Gcost: 195.894516
Canonical A Star::A star my openlist elapsed time: 0.004366, Nodes Expanded: 2887, Optimal Moves: 165, Optimal Gcost: 195.894516
Jump Point Search::A star my openlist elapsed time: 0.000348, Nodes Expanded: 26, Optimal Moves: 165, Optimal Gcost: 195.894516
(startX, startY): (10,108) goalX, goalY: (136,150)
Octile::			 A star my openlist elapsed time: 0.015999, Nodes Expanded: 6217, Optimal Moves: 175, Optimal Gcost: 198.024445
Differential Heuristic::	 A star my openlist elapsed time: 0.004234, Nodes Expanded: 1962, Optimal Moves: 175, Optimal G cost: 198.024445
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004080, Nodes Expanded: 1799, Optimal Moves: 175, Optimal Gcost: 198.024445
Canonical A Star::A star my openlist elapsed time: 0.002865, Nodes Expanded: 1799, Optimal Moves: 175, Optimal Gcost: 198.024445
Jump Point Search::A star my openlist elapsed time: 0.000485, Nodes Expanded: 48, Optimal Moves: 175, Optimal Gcost: 198.024445
(startX, startY): (10,118) goalX, goalY: (179,106)
Octile::			 A star my openlist elapsed time: 0.005979, Nodes Expanded: 2616, Optimal Moves: 172, Optimal Gcost: 199.166595
Differential Heuristic::	 A star my openlist elapsed time: 0.007804, Nodes Expanded: 2943, Optimal Moves: 172, Optimal G cost: 199.166595
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004041, Nodes Expanded: 1685, Optimal Moves: 172, Optimal Gcost: 199.166595
Canonical A Star::A star my openlist elapsed time: 0.002559, Nodes Expanded: 1685, Optimal Moves: 172, Optimal Gcost: 199.166595
Jump Point Search::A star my openlist elapsed time: 0.000240, Nodes Expanded: 37, Optimal Moves: 172, Optimal Gcost: 199.166595
(startX, startY): (10,61) goalX, goalY: (91,187)
Octile::			 A star my openlist elapsed time: 0.009677, Nodes Expanded: 4175, Optimal Moves: 169, Optimal Gcost: 198.237671
Differential Heuristic::	 A star my openlist elapsed time: 0.009395, Nodes Expanded: 4066, Optimal Moves: 169, Optimal G cost: 198.237671
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007211, Nodes Expanded: 3060, Optimal Moves: 169, Optimal Gcost: 198.237671
Canonical A Star::A star my openlist elapsed time: 0.004918, Nodes Expanded: 3060, Optimal Moves: 169, Optimal Gcost: 198.237671
Jump Point Search::A star my openlist elapsed time: 0.001086, Nodes Expanded: 89, Optimal Moves: 169, Optimal Gcost: 198.237671
(startX, startY): (100,102) goalX, goalY: (75,151)
Octile::			 A star my openlist elapsed time: 0.010164, Nodes Expanded: 4092, Optimal Moves: 166, Optimal Gcost: 198.551376
Differential Heuristic::	 A star my openlist elapsed time: 0.005526, Nodes Expanded: 2246, Optimal Moves: 166, Optimal G cost: 198.551376
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005093, Nodes Expanded: 2063, Optimal Moves: 166, Optimal Gcost: 198.551376
Canonical A Star::A star my openlist elapsed time: 0.003579, Nodes Expanded: 2154, Optimal Moves: 166, Optimal Gcost: 198.551392
Jump Point Search::A star my openlist elapsed time: 0.000790, Nodes Expanded: 48, Optimal Moves: 166, Optimal Gcost: 198.551392
(startX, startY): (100,102) goalX, goalY: (78,137)
Octile::			 A star my openlist elapsed time: 0.011969, Nodes Expanded: 4526, Optimal Moves: 166, Optimal Gcost: 198.137161
Differential Heuristic::	 A star my openlist elapsed time: 0.004332, Nodes Expanded: 1853, Optimal Moves: 166, Optimal G cost: 198.137161
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005044, Nodes Expanded: 1838, Optimal Moves: 166, Optimal Gcost: 198.137161
Canonical A Star::A star my openlist elapsed time: 0.003217, Nodes Expanded: 1894, Optimal Moves: 166, Optimal Gcost: 198.137177
Jump Point Search::A star my openlist elapsed time: 0.000461, Nodes Expanded: 32, Optimal Moves: 166, Optimal Gcost: 198.137177
(startX, startY): (100,145) goalX, goalY: (32,31)
Octile::			 A star my openlist elapsed time: 0.012477, Nodes Expanded: 4340, Optimal Moves: 178, Optimal Gcost: 199.781815
Differential Heuristic::	 A star my openlist elapsed time: 0.008132, Nodes Expanded: 3606, Optimal Moves: 178, Optimal G cost: 199.781815
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004852, Nodes Expanded: 2153, Optimal Moves: 178, Optimal Gcost: 199.781815
Canonical A Star::A star my openlist elapsed time: 0.003205, Nodes Expanded: 2310, Optimal Moves: 178, Optimal Gcost: 199.781830
Jump Point Search::A star my openlist elapsed time: 0.000339, Nodes Expanded: 29, Optimal Moves: 178, Optimal Gcost: 199.781830
(startX, startY): (100,150) goalX, goalY: (38,32)
Octile::			 A star my openlist elapsed time: 0.011944, Nodes Expanded: 4278, Optimal Moves: 177, Optimal Gcost: 198.367599
Differential Heuristic::	 A star my openlist elapsed time: 0.009076, Nodes Expanded: 4045, Optimal Moves: 177, Optimal G cost: 198.367599
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005577, Nodes Expanded: 2538, Optimal Moves: 177, Optimal Gcost: 198.367599
Canonical A Star::A star my openlist elapsed time: 0.003896, Nodes Expanded: 2538, Optimal Moves: 177, Optimal Gcost: 198.367599
Jump Point Search::A star my openlist elapsed time: 0.000406, Nodes Expanded: 28, Optimal Moves: 177, Optimal Gcost: 198.367599
(startX, startY): (100,151) goalX, goalY: (39,34)
Octile::			 A star my openlist elapsed time: 0.011122, Nodes Expanded: 4245, Optimal Moves: 175, Optimal Gcost: 196.367599
Differential Heuristic::	 A star my openlist elapsed time: 0.008807, Nodes Expanded: 4063, Optimal Moves: 175, Optimal G cost: 196.367599
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006806, Nodes Expanded: 2566, Optimal Moves: 175, Optimal Gcost: 196.367599
Canonical A Star::A star my openlist elapsed time: 0.003827, Nodes Expanded: 2566, Optimal Moves: 175, Optimal Gcost: 196.367599
Jump Point Search::A star my openlist elapsed time: 0.000342, Nodes Expanded: 30, Optimal Moves: 175, Optimal Gcost: 196.367599
(startX, startY): (100,184) goalX, goalY: (90,40)
Octile::			 A star my openlist elapsed time: 0.010319, Nodes Expanded: 4273, Optimal Moves: 164, Optimal Gcost: 196.551392
Differential Heuristic::	 A star my openlist elapsed time: 0.010191, Nodes Expanded: 4221, Optimal Moves: 164, Optimal G cost: 196.551392
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005821, Nodes Expanded: 2310, Optimal Moves: 164, Optimal Gcost: 196.551392
Canonical A Star::A star my openlist elapsed time: 0.004246, Nodes Expanded: 2310, Optimal Moves: 164, Optimal Gcost: 196.551392
Jump Point Search::A star my openlist elapsed time: 0.000482, Nodes Expanded: 27, Optimal Moves: 164, Optimal Gcost: 196.551392
(startX, startY): (100,98) goalX, goalY: (80,138)
Octile::			 A star my openlist elapsed time: 0.014644, Nodes Expanded: 4441, Optimal Moves: 165, Optimal Gcost: 196.308731
Differential Heuristic::	 A star my openlist elapsed time: 0.005442, Nodes Expanded: 1646, Optimal Moves: 165, Optimal G cost: 196.308731
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005131, Nodes Expanded: 1625, Optimal Moves: 165, Optimal Gcost: 196.308731
Canonical A Star::A star my openlist elapsed time: 0.003917, Nodes Expanded: 1654, Optimal Moves: 165, Optimal Gcost: 196.308746
Jump Point Search::A star my openlist elapsed time: 0.000564, Nodes Expanded: 31, Optimal Moves: 165, Optimal Gcost: 196.308746
(startX, startY): (10,114) goalX, goalY: (183,132)
Octile::			 A star my openlist elapsed time: 0.011279, Nodes Expanded: 2947, Optimal Moves: 180, Optimal Gcost: 200.539154
Differential Heuristic::	 A star my openlist elapsed time: 0.009050, Nodes Expanded: 2684, Optimal Moves: 180, Optimal G cost: 200.539154
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006764, Nodes Expanded: 1930, Optimal Moves: 180, Optimal Gcost: 200.539154
Canonical A Star::A star my openlist elapsed time: 0.004927, Nodes Expanded: 1930, Optimal Moves: 180, Optimal Gcost: 200.539154
Jump Point Search::A star my openlist elapsed time: 0.000588, Nodes Expanded: 46, Optimal Moves: 180, Optimal Gcost: 200.539154
(startX, startY): (10,58) goalX, goalY: (92,191)
Octile::			 A star my openlist elapsed time: 0.013210, Nodes Expanded: 4304, Optimal Moves: 173, Optimal Gcost: 203.894531
Differential Heuristic::	 A star my openlist elapsed time: 0.012139, Nodes Expanded: 4323, Optimal Moves: 173, Optimal G cost: 203.894531
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008940, Nodes Expanded: 3174, Optimal Moves: 173, Optimal Gcost: 203.894531
Canonical A Star::A star my openlist elapsed time: 0.005834, Nodes Expanded: 3180, Optimal Moves: 173, Optimal Gcost: 203.894531
Jump Point Search::A star my openlist elapsed time: 0.001128, Nodes Expanded: 92, Optimal Moves: 173, Optimal Gcost: 203.894531
(startX, startY): (100,10) goalX, goalY: (91,162)
Octile::			 A star my openlist elapsed time: 0.006023, Nodes Expanded: 2781, Optimal Moves: 165, Optimal Gcost: 200.865128
Differential Heuristic::	 A star my openlist elapsed time: 0.005967, Nodes Expanded: 2512, Optimal Moves: 165, Optimal G cost: 200.865128
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005813, Nodes Expanded: 1992, Optimal Moves: 165, Optimal Gcost: 200.865128
Canonical A Star::A star my openlist elapsed time: 0.002898, Nodes Expanded: 1992, Optimal Moves: 165, Optimal Gcost: 200.865128
Jump Point Search::A star my openlist elapsed time: 0.000685, Nodes Expanded: 27, Optimal Moves: 165, Optimal Gcost: 200.865128
(startX, startY): (100,143) goalX, goalY: (42,28)
Octile::			 A star my openlist elapsed time: 0.015987, Nodes Expanded: 4529, Optimal Moves: 185, Optimal Gcost: 200.982803
Differential Heuristic::	 A star my openlist elapsed time: 0.010441, Nodes Expanded: 3893, Optimal Moves: 185, Optimal G cost: 200.982819
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006256, Nodes Expanded: 2376, Optimal Moves: 185, Optimal Gcost: 200.982819
Canonical A Star::A star my openlist elapsed time: 0.003868, Nodes Expanded: 2376, Optimal Moves: 185, Optimal Gcost: 200.982819
Jump Point Search::A star my openlist elapsed time: 0.000515, Nodes Expanded: 33, Optimal Moves: 185, Optimal Gcost: 200.982819
(startX, startY): (100,151) goalX, goalY: (82,90)
Octile::			 A star my openlist elapsed time: 0.030134, Nodes Expanded: 8233, Optimal Moves: 173, Optimal Gcost: 200.580826
Differential Heuristic::	 A star my openlist elapsed time: 0.007051, Nodes Expanded: 3161, Optimal Moves: 173, Optimal G cost: 200.580826
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007035, Nodes Expanded: 2940, Optimal Moves: 173, Optimal Gcost: 200.580826
Canonical A Star::A star my openlist elapsed time: 0.004428, Nodes Expanded: 2940, Optimal Moves: 173, Optimal Gcost: 200.580826
Jump Point Search::A star my openlist elapsed time: 0.000607, Nodes Expanded: 41, Optimal Moves: 173, Optimal Gcost: 200.580826
(startX, startY): (100,166) goalX, goalY: (52,31)
Octile::			 A star my openlist elapsed time: 0.012660, Nodes Expanded: 4426, Optimal Moves: 178, Optimal Gcost: 202.681290
Differential Heuristic::	 A star my openlist elapsed time: 0.011108, Nodes Expanded: 4199, Optimal Moves: 178, Optimal G cost: 202.681290
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008508, Nodes Expanded: 2823, Optimal Moves: 178, Optimal Gcost: 202.681290
Canonical A Star::A star my openlist elapsed time: 0.004786, Nodes Expanded: 3067, Optimal Moves: 178, Optimal Gcost: 202.681305
Jump Point Search::A star my openlist elapsed time: 0.000411, Nodes Expanded: 26, Optimal Moves: 178, Optimal Gcost: 202.681305
(startX, startY): (100,168) goalX, goalY: (29,39)
Octile::			 A star my openlist elapsed time: 0.013856, Nodes Expanded: 5293, Optimal Moves: 172, Optimal Gcost: 203.722946
Differential Heuristic::	 A star my openlist elapsed time: 0.010313, Nodes Expanded: 4315, Optimal Moves: 172, Optimal G cost: 203.722946
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008259, Nodes Expanded: 3125, Optimal Moves: 172, Optimal Gcost: 203.722946
Canonical A Star::A star my openlist elapsed time: 0.005071, Nodes Expanded: 3374, Optimal Moves: 172, Optimal Gcost: 203.722961
Jump Point Search::A star my openlist elapsed time: 0.000536, Nodes Expanded: 30, Optimal Moves: 172, Optimal Gcost: 203.722961
(startX, startY): (100,171) goalX, goalY: (40,35)
Octile::			 A star my openlist elapsed time: 0.011951, Nodes Expanded: 4773, Optimal Moves: 174, Optimal Gcost: 203.237656
Differential Heuristic::	 A star my openlist elapsed time: 0.010464, Nodes Expanded: 4623, Optimal Moves: 174, Optimal G cost: 203.237656
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008373, Nodes Expanded: 3355, Optimal Moves: 174, Optimal Gcost: 203.237656
Canonical A Star::A star my openlist elapsed time: 0.005102, Nodes Expanded: 3355, Optimal Moves: 174, Optimal Gcost: 203.237656
Jump Point Search::A star my openlist elapsed time: 0.000394, Nodes Expanded: 23, Optimal Moves: 174, Optimal Gcost: 203.237656
(startX, startY): (100,174) goalX, goalY: (91,13)
Octile::			 A star my openlist elapsed time: 0.008221, Nodes Expanded: 3760, Optimal Moves: 163, Optimal Gcost: 202.593048
Differential Heuristic::	 A star my openlist elapsed time: 0.009472, Nodes Expanded: 4715, Optimal Moves: 163, Optimal G cost: 202.593033
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004021, Nodes Expanded: 1911, Optimal Moves: 163, Optimal Gcost: 202.593033
Canonical A Star::A star my openlist elapsed time: 0.002552, Nodes Expanded: 1911, Optimal Moves: 163, Optimal Gcost: 202.593033
Jump Point Search::A star my openlist elapsed time: 0.000411, Nodes Expanded: 20, Optimal Moves: 163, Optimal Gcost: 202.593033
(startX, startY): (100,178) goalX, goalY: (45,39)
Octile::			 A star my openlist elapsed time: 0.011151, Nodes Expanded: 4529, Optimal Moves: 176, Optimal Gcost: 203.580795
Differential Heuristic::	 A star my openlist elapsed time: 0.010530, Nodes Expanded: 4234, Optimal Moves: 176, Optimal G cost: 203.580795
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007715, Nodes Expanded: 3116, Optimal Moves: 176, Optimal Gcost: 203.580795
Canonical A Star::A star my openlist elapsed time: 0.004826, Nodes Expanded: 3116, Optimal Moves: 176, Optimal Gcost: 203.580795
Jump Point Search::A star my openlist elapsed time: 0.000368, Nodes Expanded: 20, Optimal Moves: 176, Optimal Gcost: 203.580795
(startX, startY): (10,102) goalX, goalY: (139,150)
Octile::			 A star my openlist elapsed time: 0.018114, Nodes Expanded: 6730, Optimal Moves: 180, Optimal Gcost: 205.509735
Differential Heuristic::	 A star my openlist elapsed time: 0.004647, Nodes Expanded: 1995, Optimal Moves: 180, Optimal G cost: 205.509735
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004039, Nodes Expanded: 1854, Optimal Moves: 180, Optimal Gcost: 205.509735
Canonical A Star::A star my openlist elapsed time: 0.003132, Nodes Expanded: 1854, Optimal Moves: 180, Optimal Gcost: 205.509735
Jump Point Search::A star my openlist elapsed time: 0.000454, Nodes Expanded: 44, Optimal Moves: 180, Optimal Gcost: 205.509735
(startX, startY): (100,104) goalX, goalY: (83,149)
Octile::			 A star my openlist elapsed time: 0.009724, Nodes Expanded: 4127, Optimal Moves: 170, Optimal Gcost: 204.208237
Differential Heuristic::	 A star my openlist elapsed time: 0.005156, Nodes Expanded: 1993, Optimal Moves: 170, Optimal G cost: 204.208237
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004796, Nodes Expanded: 1796, Optimal Moves: 170, Optimal Gcost: 204.208237
Canonical A Star::A star my openlist elapsed time: 0.002978, Nodes Expanded: 1793, Optimal Moves: 170, Optimal Gcost: 204.208237
Jump Point Search::A star my openlist elapsed time: 0.000708, Nodes Expanded: 32, Optimal Moves: 170, Optimal Gcost: 204.208237
(startX, startY): (100,107) goalX, goalY: (80,150)
Octile::			 A star my openlist elapsed time: 0.009266, Nodes Expanded: 4008, Optimal Moves: 170, Optimal Gcost: 204.622452
Differential Heuristic::	 A star my openlist elapsed time: 0.005516, Nodes Expanded: 2089, Optimal Moves: 170, Optimal G cost: 204.622452
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004922, Nodes Expanded: 1861, Optimal Moves: 170, Optimal Gcost: 204.622452
Canonical A Star::A star my openlist elapsed time: 0.003853, Nodes Expanded: 1893, Optimal Moves: 170, Optimal Gcost: 204.622452
Jump Point Search::A star my openlist elapsed time: 0.000676, Nodes Expanded: 34, Optimal Moves: 170, Optimal Gcost: 204.622452
(startX, startY): (100,164) goalX, goalY: (80,90)
Octile::			 A star my openlist elapsed time: 0.025491, Nodes Expanded: 8239, Optimal Moves: 173, Optimal Gcost: 205.965607
Differential Heuristic::	 A star my openlist elapsed time: 0.008870, Nodes Expanded: 3854, Optimal Moves: 173, Optimal G cost: 205.965607
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008203, Nodes Expanded: 3633, Optimal Moves: 173, Optimal Gcost: 205.965607
Canonical A Star::A star my openlist elapsed time: 0.005173, Nodes Expanded: 3633, Optimal Moves: 173, Optimal Gcost: 205.965607
Jump Point Search::A star my openlist elapsed time: 0.000872, Nodes Expanded: 42, Optimal Moves: 173, Optimal Gcost: 205.965607
(startX, startY): (100,165) goalX, goalY: (50,28)
Octile::			 A star my openlist elapsed time: 0.011066, Nodes Expanded: 4251, Optimal Moves: 181, Optimal Gcost: 204.438660
Differential Heuristic::	 A star my openlist elapsed time: 0.010649, Nodes Expanded: 4816, Optimal Moves: 181, Optimal G cost: 204.438660
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006528, Nodes Expanded: 2901, Optimal Moves: 181, Optimal Gcost: 204.438660
Canonical A Star::A star my openlist elapsed time: 0.004005, Nodes Expanded: 2901, Optimal Moves: 181, Optimal Gcost: 204.438660
Jump Point Search::A star my openlist elapsed time: 0.000524, Nodes Expanded: 25, Optimal Moves: 181, Optimal Gcost: 204.438660
(startX, startY): (100,172) goalX, goalY: (85,82)
Octile::			 A star my openlist elapsed time: 0.020522, Nodes Expanded: 7563, Optimal Moves: 169, Optimal Gcost: 204.865097
Differential Heuristic::	 A star my openlist elapsed time: 0.007849, Nodes Expanded: 3554, Optimal Moves: 169, Optimal G cost: 204.865097
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007580, Nodes Expanded: 3328, Optimal Moves: 169, Optimal Gcost: 204.865097
Canonical A Star::A star my openlist elapsed time: 0.004802, Nodes Expanded: 3328, Optimal Moves: 169, Optimal Gcost: 204.865097
Jump Point Search::A star my openlist elapsed time: 0.000543, Nodes Expanded: 27, Optimal Moves: 169, Optimal Gcost: 204.865097
(startX, startY): (100,178) goalX, goalY: (77,37)
Octile::			 A star my openlist elapsed time: 0.011736, Nodes Expanded: 4785, Optimal Moves: 172, Optimal Gcost: 205.379822
Differential Heuristic::	 A star my openlist elapsed time: 0.011085, Nodes Expanded: 4732, Optimal Moves: 172, Optimal G cost: 205.379822
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004833, Nodes Expanded: 2523, Optimal Moves: 172, Optimal Gcost: 205.379822
Canonical A Star::A star my openlist elapsed time: 0.003033, Nodes Expanded: 2523, Optimal Moves: 172, Optimal Gcost: 205.379822
Jump Point Search::A star my openlist elapsed time: 0.000437, Nodes Expanded: 29, Optimal Moves: 172, Optimal Gcost: 205.379822
(startX, startY): (100,3) goalX, goalY: (85,145)
Octile::			 A star my openlist elapsed time: 0.004999, Nodes Expanded: 2753, Optimal Moves: 178, Optimal Gcost: 205.995041
Differential Heuristic::	 A star my openlist elapsed time: 0.001240, Nodes Expanded: 669, Optimal Moves: 178, Optimal G cost: 205.995041
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001260, Nodes Expanded: 666, Optimal Moves: 178, Optimal Gcost: 205.995041
Canonical A Star::A star my openlist elapsed time: 0.000771, Nodes Expanded: 666, Optimal Moves: 178, Optimal Gcost: 205.995041
Jump Point Search::A star my openlist elapsed time: 0.000291, Nodes Expanded: 16, Optimal Moves: 178, Optimal Gcost: 205.995041
(startX, startY): (100,36) goalX, goalY: (79,192)
Octile::			 A star my openlist elapsed time: 0.004505, Nodes Expanded: 2306, Optimal Moves: 162, Optimal Gcost: 204.906754
Differential Heuristic::	 A star my openlist elapsed time: 0.009381, Nodes Expanded: 4417, Optimal Moves: 162, Optimal G cost: 204.906769
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005001, Nodes Expanded: 2300, Optimal Moves: 162, Optimal Gcost: 204.906769
Canonical A Star::A star my openlist elapsed time: 0.003708, Nodes Expanded: 2300, Optimal Moves: 162, Optimal Gcost: 204.906769
Jump Point Search::A star my openlist elapsed time: 0.000348, Nodes Expanded: 33, Optimal Moves: 162, Optimal Gcost: 204.906769
(startX, startY): (100,39) goalX, goalY: (72,186)
Octile::			 A star my openlist elapsed time: 0.005496, Nodes Expanded: 2817, Optimal Moves: 165, Optimal Gcost: 205.835693
Differential Heuristic::	 A star my openlist elapsed time: 0.010334, Nodes Expanded: 4496, Optimal Moves: 165, Optimal G cost: 205.835693
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005441, Nodes Expanded: 2607, Optimal Moves: 165, Optimal Gcost: 205.835693
Canonical A Star::A star my openlist elapsed time: 0.003681, Nodes Expanded: 2607, Optimal Moves: 165, Optimal Gcost: 205.835693
Jump Point Search::A star my openlist elapsed time: 0.000478, Nodes Expanded: 37, Optimal Moves: 165, Optimal Gcost: 205.835693
(startX, startY): (10,101) goalX, goalY: (144,89)
Octile::			 A star my openlist elapsed time: 0.018114, Nodes Expanded: 6026, Optimal Moves: 185, Optimal Gcost: 210.509735
Differential Heuristic::	 A star my openlist elapsed time: 0.003102, Nodes Expanded: 1326, Optimal Moves: 185, Optimal G cost: 210.509735
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002937, Nodes Expanded: 1179, Optimal Moves: 185, Optimal Gcost: 210.509735
Canonical A Star::A star my openlist elapsed time: 0.001892, Nodes Expanded: 1179, Optimal Moves: 185, Optimal Gcost: 210.509735
Jump Point Search::A star my openlist elapsed time: 0.000458, Nodes Expanded: 29, Optimal Moves: 185, Optimal Gcost: 210.509735
(startX, startY): (10,111) goalX, goalY: (186,109)
Octile::			 A star my openlist elapsed time: 0.007123, Nodes Expanded: 2829, Optimal Moves: 186, Optimal Gcost: 211.923950
Differential Heuristic::	 A star my openlist elapsed time: 0.008713, Nodes Expanded: 3350, Optimal Moves: 186, Optimal G cost: 211.923950
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004696, Nodes Expanded: 1862, Optimal Moves: 186, Optimal Gcost: 211.923950
Canonical A Star::A star my openlist elapsed time: 0.003319, Nodes Expanded: 1862, Optimal Moves: 186, Optimal Gcost: 211.923950
Jump Point Search::A star my openlist elapsed time: 0.000364, Nodes Expanded: 42, Optimal Moves: 186, Optimal Gcost: 211.923950
(startX, startY): (10,123) goalX, goalY: (191,113)
Octile::			 A star my openlist elapsed time: 0.008928, Nodes Expanded: 3318, Optimal Moves: 182, Optimal Gcost: 208.338165
Differential Heuristic::	 A star my openlist elapsed time: 0.008515, Nodes Expanded: 3468, Optimal Moves: 182, Optimal G cost: 208.338165
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006301, Nodes Expanded: 2285, Optimal Moves: 182, Optimal Gcost: 208.338165
Canonical A Star::A star my openlist elapsed time: 0.004388, Nodes Expanded: 2285, Optimal Moves: 182, Optimal Gcost: 208.338165
Jump Point Search::A star my openlist elapsed time: 0.000530, Nodes Expanded: 55, Optimal Moves: 182, Optimal Gcost: 208.338165
(startX, startY): (10,132) goalX, goalY: (164,71)
Octile::			 A star my openlist elapsed time: 0.010453, Nodes Expanded: 4175, Optimal Moves: 184, Optimal Gcost: 208.681320
Differential Heuristic::	 A star my openlist elapsed time: 0.004256, Nodes Expanded: 1841, Optimal Moves: 184, Optimal G cost: 208.681320
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003195, Nodes Expanded: 1411, Optimal Moves: 184, Optimal Gcost: 208.681320
Canonical A Star::A star my openlist elapsed time: 0.002063, Nodes Expanded: 1380, Optimal Moves: 184, Optimal Gcost: 208.681320
Jump Point Search::A star my openlist elapsed time: 0.000325, Nodes Expanded: 31, Optimal Moves: 184, Optimal Gcost: 208.681320
(startX, startY): (100,1) goalX, goalY: (86,150)
Octile::			 A star my openlist elapsed time: 0.005455, Nodes Expanded: 2846, Optimal Moves: 179, Optimal Gcost: 209.066116
Differential Heuristic::	 A star my openlist elapsed time: 0.002012, Nodes Expanded: 1046, Optimal Moves: 179, Optimal G cost: 209.066116
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001885, Nodes Expanded: 967, Optimal Moves: 179, Optimal Gcost: 209.066116
Canonical A Star::A star my openlist elapsed time: 0.001306, Nodes Expanded: 1013, Optimal Moves: 179, Optimal Gcost: 209.066116
Jump Point Search::A star my openlist elapsed time: 0.000350, Nodes Expanded: 19, Optimal Moves: 179, Optimal Gcost: 209.066116
(startX, startY): (100,10) goalX, goalY: (104,183)
Octile::			 A star my openlist elapsed time: 0.004515, Nodes Expanded: 2534, Optimal Moves: 175, Optimal Gcost: 209.208267
Differential Heuristic::	 A star my openlist elapsed time: 0.007211, Nodes Expanded: 3458, Optimal Moves: 175, Optimal G cost: 209.208267
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005074, Nodes Expanded: 2461, Optimal Moves: 175, Optimal Gcost: 209.208267
Canonical A Star::A star my openlist elapsed time: 0.003250, Nodes Expanded: 2461, Optimal Moves: 175, Optimal Gcost: 209.208267
Jump Point Search::A star my openlist elapsed time: 0.000455, Nodes Expanded: 50, Optimal Moves: 175, Optimal Gcost: 209.208267
(startX, startY): (100,102) goalX, goalY: (94,143)
Octile::			 A star my openlist elapsed time: 0.011144, Nodes Expanded: 4322, Optimal Moves: 181, Optimal Gcost: 211.894516
Differential Heuristic::	 A star my openlist elapsed time: 0.001884, Nodes Expanded: 808, Optimal Moves: 181, Optimal G cost: 211.894516
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002016, Nodes Expanded: 808, Optimal Moves: 181, Optimal Gcost: 211.894516
Canonical A Star::A star my openlist elapsed time: 0.001184, Nodes Expanded: 832, Optimal Moves: 181, Optimal Gcost: 211.894531
Jump Point Search::A star my openlist elapsed time: 0.000322, Nodes Expanded: 22, Optimal Moves: 181, Optimal Gcost: 211.894531
(startX, startY): (100,104) goalX, goalY: (91,143)
Octile::			 A star my openlist elapsed time: 0.011053, Nodes Expanded: 4286, Optimal Moves: 178, Optimal Gcost: 209.722946
Differential Heuristic::	 A star my openlist elapsed time: 0.001819, Nodes Expanded: 791, Optimal Moves: 178, Optimal G cost: 209.722946
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001844, Nodes Expanded: 790, Optimal Moves: 178, Optimal Gcost: 209.722946
Canonical A Star::A star my openlist elapsed time: 0.001068, Nodes Expanded: 815, Optimal Moves: 178, Optimal Gcost: 209.722946
Jump Point Search::A star my openlist elapsed time: 0.000317, Nodes Expanded: 21, Optimal Moves: 178, Optimal Gcost: 209.722946
(startX, startY): (100,13) goalX, goalY: (83,170)
Octile::			 A star my openlist elapsed time: 0.004665, Nodes Expanded: 2760, Optimal Moves: 170, Optimal Gcost: 208.350403
Differential Heuristic::	 A star my openlist elapsed time: 0.006882, Nodes Expanded: 3215, Optimal Moves: 170, Optimal G cost: 208.350418
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005165, Nodes Expanded: 2290, Optimal Moves: 170, Optimal Gcost: 208.350418
Canonical A Star::A star my openlist elapsed time: 0.003074, Nodes Expanded: 2290, Optimal Moves: 170, Optimal Gcost: 208.350418
Jump Point Search::A star my openlist elapsed time: 0.000458, Nodes Expanded: 38, Optimal Moves: 170, Optimal Gcost: 208.350418
(startX, startY): (100,16) goalX, goalY: (72,151)
Octile::			 A star my openlist elapsed time: 0.005584, Nodes Expanded: 3099, Optimal Moves: 178, Optimal Gcost: 208.480316
Differential Heuristic::	 A star my openlist elapsed time: 0.002913, Nodes Expanded: 1358, Optimal Moves: 178, Optimal G cost: 208.480316
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002578, Nodes Expanded: 1217, Optimal Moves: 178, Optimal Gcost: 208.480316
Canonical A Star::A star my openlist elapsed time: 0.001497, Nodes Expanded: 1217, Optimal Moves: 178, Optimal Gcost: 208.480316
Jump Point Search::A star my openlist elapsed time: 0.000311, Nodes Expanded: 18, Optimal Moves: 178, Optimal Gcost: 208.480316
(startX, startY): (10,108) goalX, goalY: (142,78)
Octile::			 A star my openlist elapsed time: 0.017984, Nodes Expanded: 6367, Optimal Moves: 189, Optimal Gcost: 212.024445
Differential Heuristic::	 A star my openlist elapsed time: 0.005405, Nodes Expanded: 2073, Optimal Moves: 189, Optimal G cost: 212.024445
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004336, Nodes Expanded: 1785, Optimal Moves: 189, Optimal Gcost: 212.024445
Canonical A Star::A star my openlist elapsed time: 0.003460, Nodes Expanded: 1788, Optimal Moves: 189, Optimal Gcost: 212.024445
Jump Point Search::A star my openlist elapsed time: 0.000819, Nodes Expanded: 39, Optimal Moves: 189, Optimal Gcost: 212.024445
(startX, startY): (10,123) goalX, goalY: (166,71)
Octile::			 A star my openlist elapsed time: 0.014907, Nodes Expanded: 4767, Optimal Moves: 185, Optimal Gcost: 213.823456
Differential Heuristic::	 A star my openlist elapsed time: 0.005225, Nodes Expanded: 2021, Optimal Moves: 185, Optimal G cost: 213.823456
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004227, Nodes Expanded: 1610, Optimal Moves: 185, Optimal Gcost: 213.823456
Canonical A Star::A star my openlist elapsed time: 0.003060, Nodes Expanded: 1610, Optimal Moves: 185, Optimal Gcost: 213.823456
Jump Point Search::A star my openlist elapsed time: 0.000428, Nodes Expanded: 31, Optimal Moves: 185, Optimal Gcost: 213.823456
(startX, startY): (10,128) goalX, goalY: (138,63)
Octile::			 A star my openlist elapsed time: 0.017452, Nodes Expanded: 6185, Optimal Moves: 192, Optimal Gcost: 213.367599
Differential Heuristic::	 A star my openlist elapsed time: 0.009771, Nodes Expanded: 2850, Optimal Moves: 192, Optimal G cost: 213.367584
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005346, Nodes Expanded: 1881, Optimal Moves: 192, Optimal Gcost: 213.367584
Canonical A Star::A star my openlist elapsed time: 0.003225, Nodes Expanded: 1872, Optimal Moves: 192, Optimal Gcost: 213.367584
Jump Point Search::A star my openlist elapsed time: 0.000671, Nodes Expanded: 37, Optimal Moves: 192, Optimal Gcost: 213.367584
(startX, startY): (10,134) goalX, goalY: (131,70)
Octile::			 A star my openlist elapsed time: 0.019922, Nodes Expanded: 6875, Optimal Moves: 193, Optimal Gcost: 212.296524
Differential Heuristic::	 A star my openlist elapsed time: 0.006587, Nodes Expanded: 2615, Optimal Moves: 193, Optimal G cost: 212.296524
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004091, Nodes Expanded: 1796, Optimal Moves: 193, Optimal Gcost: 212.296524
Canonical A Star::A star my openlist elapsed time: 0.002844, Nodes Expanded: 1796, Optimal Moves: 193, Optimal Gcost: 212.296524
Jump Point Search::A star my openlist elapsed time: 0.000392, Nodes Expanded: 41, Optimal Moves: 193, Optimal Gcost: 212.296524
(startX, startY): (100,107) goalX, goalY: (80,162)
Octile::			 A star my openlist elapsed time: 0.010601, Nodes Expanded: 4274, Optimal Moves: 180, Optimal Gcost: 215.450882
Differential Heuristic::	 A star my openlist elapsed time: 0.008775, Nodes Expanded: 3352, Optimal Moves: 180, Optimal G cost: 215.450882
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008102, Nodes Expanded: 3003, Optimal Moves: 180, Optimal Gcost: 215.450882
Canonical A Star::A star my openlist elapsed time: 0.005548, Nodes Expanded: 2942, Optimal Moves: 180, Optimal Gcost: 215.450882
Jump Point Search::A star my openlist elapsed time: 0.000920, Nodes Expanded: 64, Optimal Moves: 180, Optimal Gcost: 215.450882
(startX, startY): (100,151) goalX, goalY: (99,94)
Octile::			 A star my openlist elapsed time: 0.028822, Nodes Expanded: 9509, Optimal Moves: 183, Optimal Gcost: 215.137192
Differential Heuristic::	 A star my openlist elapsed time: 0.007940, Nodes Expanded: 3578, Optimal Moves: 183, Optimal G cost: 215.137192
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007229, Nodes Expanded: 2999, Optimal Moves: 183, Optimal Gcost: 215.137192
Canonical A Star::A star my openlist elapsed time: 0.004442, Nodes Expanded: 2999, Optimal Moves: 183, Optimal Gcost: 215.137192
Jump Point Search::A star my openlist elapsed time: 0.000533, Nodes Expanded: 40, Optimal Moves: 183, Optimal Gcost: 215.137192
(startX, startY): (100,16) goalX, goalY: (70,160)
Octile::			 A star my openlist elapsed time: 0.006177, Nodes Expanded: 3196, Optimal Moves: 180, Optimal Gcost: 214.208252
Differential Heuristic::	 A star my openlist elapsed time: 0.007360, Nodes Expanded: 3117, Optimal Moves: 180, Optimal G cost: 214.208252
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005793, Nodes Expanded: 2361, Optimal Moves: 180, Optimal Gcost: 214.208252
Canonical A Star::A star my openlist elapsed time: 0.003178, Nodes Expanded: 2361, Optimal Moves: 180, Optimal Gcost: 214.208252
Jump Point Search::A star my openlist elapsed time: 0.000654, Nodes Expanded: 35, Optimal Moves: 180, Optimal Gcost: 214.208252
(startX, startY): (100,187) goalX, goalY: (28,53)
Octile::			 A star my openlist elapsed time: 0.015975, Nodes Expanded: 5821, Optimal Moves: 183, Optimal Gcost: 212.651871
Differential Heuristic::	 A star my openlist elapsed time: 0.009831, Nodes Expanded: 4238, Optimal Moves: 183, Optimal G cost: 212.651871
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008371, Nodes Expanded: 3451, Optimal Moves: 183, Optimal Gcost: 212.651871
Canonical A Star::A star my openlist elapsed time: 0.004968, Nodes Expanded: 3451, Optimal Moves: 183, Optimal Gcost: 212.651871
Jump Point Search::A star my openlist elapsed time: 0.000453, Nodes Expanded: 31, Optimal Moves: 183, Optimal Gcost: 212.651871
(startX, startY): (100,23) goalX, goalY: (65,164)
Octile::			 A star my openlist elapsed time: 0.006544, Nodes Expanded: 3340, Optimal Moves: 178, Optimal Gcost: 213.865112
Differential Heuristic::	 A star my openlist elapsed time: 0.009655, Nodes Expanded: 3910, Optimal Moves: 178, Optimal G cost: 213.865112
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006892, Nodes Expanded: 2792, Optimal Moves: 178, Optimal Gcost: 213.865112
Canonical A Star::A star my openlist elapsed time: 0.004260, Nodes Expanded: 2792, Optimal Moves: 178, Optimal Gcost: 213.865112
Jump Point Search::A star my openlist elapsed time: 0.000581, Nodes Expanded: 42, Optimal Moves: 178, Optimal Gcost: 213.865112
(startX, startY): (100,29) goalX, goalY: (63,124)
Octile::			 A star my openlist elapsed time: 0.010223, Nodes Expanded: 4226, Optimal Moves: 184, Optimal Gcost: 214.894516
Differential Heuristic::	 A star my openlist elapsed time: 0.006033, Nodes Expanded: 2592, Optimal Moves: 184, Optimal G cost: 214.894531
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005355, Nodes Expanded: 2237, Optimal Moves: 184, Optimal Gcost: 214.894531
Canonical A Star::A star my openlist elapsed time: 0.003209, Nodes Expanded: 2136, Optimal Moves: 184, Optimal Gcost: 214.894516
Jump Point Search::A star my openlist elapsed time: 0.000372, Nodes Expanded: 29, Optimal Moves: 184, Optimal Gcost: 214.894516
(startX, startY): (10,116) goalX, goalY: (161,71)
Octile::			 A star my openlist elapsed time: 0.015208, Nodes Expanded: 5606, Optimal Moves: 188, Optimal Gcost: 216.409241
Differential Heuristic::	 A star my openlist elapsed time: 0.005054, Nodes Expanded: 2104, Optimal Moves: 188, Optimal G cost: 216.409241
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003972, Nodes Expanded: 1697, Optimal Moves: 188, Optimal Gcost: 216.409241
Canonical A Star::A star my openlist elapsed time: 0.002584, Nodes Expanded: 1697, Optimal Moves: 188, Optimal Gcost: 216.409241
Jump Point Search::A star my openlist elapsed time: 0.000356, Nodes Expanded: 35, Optimal Moves: 188, Optimal Gcost: 216.409241
(startX, startY): (10,59) goalX, goalY: (129,127)
Octile::			 A star my openlist elapsed time: 0.016248, Nodes Expanded: 5892, Optimal Moves: 191, Optimal Gcost: 216.095520
Differential Heuristic::	 A star my openlist elapsed time: 0.003440, Nodes Expanded: 1450, Optimal Moves: 191, Optimal G cost: 216.095520
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002883, Nodes Expanded: 1375, Optimal Moves: 191, Optimal Gcost: 216.095520
Canonical A Star::A star my openlist elapsed time: 0.001772, Nodes Expanded: 1373, Optimal Moves: 191, Optimal Gcost: 216.095520
Jump Point Search::A star my openlist elapsed time: 0.001041, Nodes Expanded: 43, Optimal Moves: 191, Optimal Gcost: 216.095520
(startX, startY): (100,101) goalX, goalY: (66,168)
Octile::			 A star my openlist elapsed time: 0.012776, Nodes Expanded: 4761, Optimal Moves: 183, Optimal Gcost: 216.379807
Differential Heuristic::	 A star my openlist elapsed time: 0.010604, Nodes Expanded: 3989, Optimal Moves: 183, Optimal G cost: 216.379807
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010248, Nodes Expanded: 3642, Optimal Moves: 183, Optimal Gcost: 216.379807
Canonical A Star::A star my openlist elapsed time: 0.006674, Nodes Expanded: 3772, Optimal Moves: 183, Optimal Gcost: 216.379822
Jump Point Search::A star my openlist elapsed time: 0.001124, Nodes Expanded: 79, Optimal Moves: 183, Optimal Gcost: 216.379822
(startX, startY): (100,102) goalX, goalY: (88,165)
Octile::			 A star my openlist elapsed time: 0.010507, Nodes Expanded: 4195, Optimal Moves: 180, Optimal Gcost: 217.936172
Differential Heuristic::	 A star my openlist elapsed time: 0.009656, Nodes Expanded: 3379, Optimal Moves: 180, Optimal G cost: 217.936172
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008533, Nodes Expanded: 2915, Optimal Moves: 180, Optimal Gcost: 217.936172
Canonical A Star::A star my openlist elapsed time: 0.005640, Nodes Expanded: 2976, Optimal Moves: 180, Optimal Gcost: 217.936188
Jump Point Search::A star my openlist elapsed time: 0.000907, Nodes Expanded: 63, Optimal Moves: 180, Optimal Gcost: 217.936188
(startX, startY): (100,109) goalX, goalY: (89,159)
Octile::			 A star my openlist elapsed time: 0.009088, Nodes Expanded: 4035, Optimal Moves: 181, Optimal Gcost: 219.350403
Differential Heuristic::	 A star my openlist elapsed time: 0.008059, Nodes Expanded: 3129, Optimal Moves: 181, Optimal G cost: 219.350403
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007559, Nodes Expanded: 2676, Optimal Moves: 181, Optimal Gcost: 219.350403
Canonical A Star::A star my openlist elapsed time: 0.005219, Nodes Expanded: 2676, Optimal Moves: 181, Optimal Gcost: 219.350403
Jump Point Search::A star my openlist elapsed time: 0.000930, Nodes Expanded: 56, Optimal Moves: 181, Optimal Gcost: 219.350403
(startX, startY): (100,111) goalX, goalY: (63,162)
Octile::			 A star my openlist elapsed time: 0.013016, Nodes Expanded: 4825, Optimal Moves: 184, Optimal Gcost: 219.865112
Differential Heuristic::	 A star my openlist elapsed time: 0.009671, Nodes Expanded: 3704, Optimal Moves: 184, Optimal G cost: 219.865112
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009600, Nodes Expanded: 3563, Optimal Moves: 184, Optimal Gcost: 219.865112
Canonical A Star::A star my openlist elapsed time: 0.006598, Nodes Expanded: 3563, Optimal Moves: 184, Optimal Gcost: 219.865112
Jump Point Search::A star my openlist elapsed time: 0.001077, Nodes Expanded: 82, Optimal Moves: 184, Optimal Gcost: 219.865112
(startX, startY): (100,12) goalX, goalY: (89,189)
Octile::			 A star my openlist elapsed time: 0.004539, Nodes Expanded: 2692, Optimal Moves: 179, Optimal Gcost: 219.421494
Differential Heuristic::	 A star my openlist elapsed time: 0.009077, Nodes Expanded: 4075, Optimal Moves: 179, Optimal G cost: 219.421494
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005325, Nodes Expanded: 2685, Optimal Moves: 179, Optimal Gcost: 219.421494
Canonical A Star::A star my openlist elapsed time: 0.003734, Nodes Expanded: 2685, Optimal Moves: 179, Optimal Gcost: 219.421494
Jump Point Search::A star my openlist elapsed time: 0.000469, Nodes Expanded: 50, Optimal Moves: 179, Optimal Gcost: 219.421494
(startX, startY): (100,154) goalX, goalY: (101,90)
Octile::			 A star my openlist elapsed time: 0.028921, Nodes Expanded: 9791, Optimal Moves: 186, Optimal Gcost: 217.308746
Differential Heuristic::	 A star my openlist elapsed time: 0.009943, Nodes Expanded: 4104, Optimal Moves: 186, Optimal G cost: 217.308746
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008153, Nodes Expanded: 3577, Optimal Moves: 186, Optimal Gcost: 217.308746
Canonical A Star::A star my openlist elapsed time: 0.005493, Nodes Expanded: 3732, Optimal Moves: 186, Optimal Gcost: 217.308746
Jump Point Search::A star my openlist elapsed time: 0.000824, Nodes Expanded: 48, Optimal Moves: 186, Optimal Gcost: 217.308746
(startX, startY): (100,16) goalX, goalY: (79,189)
Octile::			 A star my openlist elapsed time: 0.004317, Nodes Expanded: 2330, Optimal Moves: 175, Optimal Gcost: 219.563629
Differential Heuristic::	 A star my openlist elapsed time: 0.009928, Nodes Expanded: 4331, Optimal Moves: 175, Optimal G cost: 219.563629
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004820, Nodes Expanded: 2326, Optimal Moves: 175, Optimal Gcost: 219.563629
Canonical A Star::A star my openlist elapsed time: 0.003363, Nodes Expanded: 2326, Optimal Moves: 175, Optimal Gcost: 219.563629
Jump Point Search::A star my openlist elapsed time: 0.000596, Nodes Expanded: 48, Optimal Moves: 175, Optimal Gcost: 219.563629
(startX, startY): (100,186) goalX, goalY: (52,31)
Octile::			 A star my openlist elapsed time: 0.010403, Nodes Expanded: 4531, Optimal Moves: 192, Optimal Gcost: 219.166580
Differential Heuristic::	 A star my openlist elapsed time: 0.009628, Nodes Expanded: 4460, Optimal Moves: 192, Optimal G cost: 219.166580
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007141, Nodes Expanded: 3020, Optimal Moves: 192, Optimal Gcost: 219.166580
Canonical A Star::A star my openlist elapsed time: 0.004691, Nodes Expanded: 3017, Optimal Moves: 192, Optimal Gcost: 219.166580
Jump Point Search::A star my openlist elapsed time: 0.000765, Nodes Expanded: 24, Optimal Moves: 192, Optimal Gcost: 219.166580
(startX, startY): (10,132) goalX, goalY: (180,83)
Octile::			 A star my openlist elapsed time: 0.018079, Nodes Expanded: 5744, Optimal Moves: 199, Optimal Gcost: 223.267105
Differential Heuristic::	 A star my openlist elapsed time: 0.004165, Nodes Expanded: 1837, Optimal Moves: 199, Optimal G cost: 223.267105
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004914, Nodes Expanded: 1695, Optimal Moves: 199, Optimal Gcost: 223.267105
Canonical A Star::A star my openlist elapsed time: 0.002801, Nodes Expanded: 1664, Optimal Moves: 199, Optimal Gcost: 223.267105
Jump Point Search::A star my openlist elapsed time: 0.000517, Nodes Expanded: 37, Optimal Moves: 199, Optimal Gcost: 223.267105
(startX, startY): (10,134) goalX, goalY: (175,70)
Octile::			 A star my openlist elapsed time: 0.013668, Nodes Expanded: 4876, Optimal Moves: 196, Optimal Gcost: 221.509750
Differential Heuristic::	 A star my openlist elapsed time: 0.004799, Nodes Expanded: 2186, Optimal Moves: 196, Optimal G cost: 221.509750
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004917, Nodes Expanded: 1962, Optimal Moves: 196, Optimal Gcost: 221.509750
Canonical A Star::A star my openlist elapsed time: 0.003402, Nodes Expanded: 1962, Optimal Moves: 196, Optimal Gcost: 221.509750
Jump Point Search::A star my openlist elapsed time: 0.000459, Nodes Expanded: 48, Optimal Moves: 196, Optimal Gcost: 221.509750
(startX, startY): (10,79) goalX, goalY: (148,121)
Octile::			 A star my openlist elapsed time: 0.015000, Nodes Expanded: 5593, Optimal Moves: 198, Optimal Gcost: 223.095520
Differential Heuristic::	 A star my openlist elapsed time: 0.004102, Nodes Expanded: 1603, Optimal Moves: 198, Optimal G cost: 223.095535
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003665, Nodes Expanded: 1439, Optimal Moves: 198, Optimal Gcost: 223.095535
Canonical A Star::A star my openlist elapsed time: 0.002133, Nodes Expanded: 1439, Optimal Moves: 198, Optimal Gcost: 223.095535
Jump Point Search::A star my openlist elapsed time: 0.000493, Nodes Expanded: 48, Optimal Moves: 198, Optimal Gcost: 223.095535
(startX, startY): (100,174) goalX, goalY: (85,98)
Octile::			 A star my openlist elapsed time: 0.029147, Nodes Expanded: 8601, Optimal Moves: 183, Optimal Gcost: 220.521957
Differential Heuristic::	 A star my openlist elapsed time: 0.008885, Nodes Expanded: 3844, Optimal Moves: 183, Optimal G cost: 220.521957
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007650, Nodes Expanded: 3458, Optimal Moves: 183, Optimal Gcost: 220.521957
Canonical A Star::A star my openlist elapsed time: 0.005303, Nodes Expanded: 3458, Optimal Moves: 183, Optimal Gcost: 220.521957
Jump Point Search::A star my openlist elapsed time: 0.000569, Nodes Expanded: 32, Optimal Moves: 183, Optimal Gcost: 220.521957
(startX, startY): (100,5) goalX, goalY: (78,176)
Octile::			 A star my openlist elapsed time: 0.005810, Nodes Expanded: 2794, Optimal Moves: 183, Optimal Gcost: 223.835709
Differential Heuristic::	 A star my openlist elapsed time: 0.008311, Nodes Expanded: 3847, Optimal Moves: 183, Optimal G cost: 223.835709
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006379, Nodes Expanded: 2480, Optimal Moves: 183, Optimal Gcost: 223.835709
Canonical A Star::A star my openlist elapsed time: 0.003321, Nodes Expanded: 2480, Optimal Moves: 183, Optimal Gcost: 223.835709
Jump Point Search::A star my openlist elapsed time: 0.000608, Nodes Expanded: 43, Optimal Moves: 183, Optimal Gcost: 223.835709
(startX, startY): (100,7) goalX, goalY: (75,172)
Octile::			 A star my openlist elapsed time: 0.005612, Nodes Expanded: 2987, Optimal Moves: 184, Optimal Gcost: 223.178848
Differential Heuristic::	 A star my openlist elapsed time: 0.008591, Nodes Expanded: 3808, Optimal Moves: 184, Optimal G cost: 223.178848
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007067, Nodes Expanded: 2595, Optimal Moves: 184, Optimal Gcost: 223.178848
Canonical A Star::A star my openlist elapsed time: 0.003980, Nodes Expanded: 2595, Optimal Moves: 184, Optimal Gcost: 223.178848
Jump Point Search::A star my openlist elapsed time: 0.000573, Nodes Expanded: 44, Optimal Moves: 184, Optimal Gcost: 223.178848
(startX, startY): (100,85) goalX, goalY: (102,165)
Octile::			 A star my openlist elapsed time: 0.011593, Nodes Expanded: 4336, Optimal Moves: 186, Optimal Gcost: 220.208252
Differential Heuristic::	 A star my openlist elapsed time: 0.007914, Nodes Expanded: 3135, Optimal Moves: 186, Optimal G cost: 220.208252
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006943, Nodes Expanded: 2625, Optimal Moves: 186, Optimal Gcost: 220.208252
Canonical A Star::A star my openlist elapsed time: 0.004737, Nodes Expanded: 2625, Optimal Moves: 186, Optimal Gcost: 220.208252
Jump Point Search::A star my openlist elapsed time: 0.000786, Nodes Expanded: 50, Optimal Moves: 186, Optimal Gcost: 220.208252
(startX, startY): (100,87) goalX, goalY: (72,184)
Octile::			 A star my openlist elapsed time: 0.012080, Nodes Expanded: 4544, Optimal Moves: 196, Optimal Gcost: 223.166595
Differential Heuristic::	 A star my openlist elapsed time: 0.012592, Nodes Expanded: 4614, Optimal Moves: 196, Optimal G cost: 223.166595
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009313, Nodes Expanded: 3671, Optimal Moves: 196, Optimal Gcost: 223.166595
Canonical A Star::A star my openlist elapsed time: 0.006387, Nodes Expanded: 3671, Optimal Moves: 196, Optimal Gcost: 223.166595
Jump Point Search::A star my openlist elapsed time: 0.001211, Nodes Expanded: 83, Optimal Moves: 196, Optimal Gcost: 223.166595
(startX, startY): (100,93) goalX, goalY: (101,159)
Octile::			 A star my openlist elapsed time: 0.011994, Nodes Expanded: 5015, Optimal Moves: 190, Optimal Gcost: 223.794037
Differential Heuristic::	 A star my openlist elapsed time: 0.007067, Nodes Expanded: 3119, Optimal Moves: 190, Optimal G cost: 223.794037
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007670, Nodes Expanded: 2923, Optimal Moves: 190, Optimal Gcost: 223.794037
Canonical A Star::A star my openlist elapsed time: 0.005464, Nodes Expanded: 2923, Optimal Moves: 190, Optimal Gcost: 223.794037
Jump Point Search::A star my openlist elapsed time: 0.000934, Nodes Expanded: 57, Optimal Moves: 190, Optimal Gcost: 223.794037
(startX, startY): (101,104) goalX, goalY: (67,170)
Octile::			 A star my openlist elapsed time: 0.012275, Nodes Expanded: 4720, Optimal Moves: 186, Optimal Gcost: 220.208237
Differential Heuristic::	 A star my openlist elapsed time: 0.011224, Nodes Expanded: 4131, Optimal Moves: 186, Optimal G cost: 220.208237
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009881, Nodes Expanded: 3708, Optimal Moves: 186, Optimal Gcost: 220.208237
Canonical A Star::A star my openlist elapsed time: 0.006752, Nodes Expanded: 3596, Optimal Moves: 186, Optimal Gcost: 220.208237
Jump Point Search::A star my openlist elapsed time: 0.001063, Nodes Expanded: 73, Optimal Moves: 186, Optimal Gcost: 220.208237
(startX, startY): (10,127) goalX, goalY: (182,84)
Octile::			 A star my openlist elapsed time: 0.018154, Nodes Expanded: 6193, Optimal Moves: 201, Optimal Gcost: 227.752380
Differential Heuristic::	 A star my openlist elapsed time: 0.005266, Nodes Expanded: 2243, Optimal Moves: 201, Optimal G cost: 227.752380
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004717, Nodes Expanded: 2007, Optimal Moves: 201, Optimal Gcost: 227.752380
Canonical A Star::A star my openlist elapsed time: 0.003214, Nodes Expanded: 2007, Optimal Moves: 201, Optimal Gcost: 227.752380
Jump Point Search::A star my openlist elapsed time: 0.000443, Nodes Expanded: 43, Optimal Moves: 201, Optimal Gcost: 227.752380
(startX, startY): (10,87) goalX, goalY: (162,145)
Octile::			 A star my openlist elapsed time: 0.014949, Nodes Expanded: 5331, Optimal Moves: 208, Optimal Gcost: 225.639664
Differential Heuristic::	 A star my openlist elapsed time: 0.007366, Nodes Expanded: 3078, Optimal Moves: 208, Optimal G cost: 225.639664
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005354, Nodes Expanded: 2381, Optimal Moves: 208, Optimal Gcost: 225.639664
Canonical A Star::A star my openlist elapsed time: 0.003537, Nodes Expanded: 2383, Optimal Moves: 208, Optimal Gcost: 225.639679
Jump Point Search::A star my openlist elapsed time: 0.000796, Nodes Expanded: 80, Optimal Moves: 208, Optimal Gcost: 225.639679
(startX, startY): (100,112) goalX, goalY: (75,170)
Octile::			 A star my openlist elapsed time: 0.010739, Nodes Expanded: 4359, Optimal Moves: 193, Optimal Gcost: 226.379807
Differential Heuristic::	 A star my openlist elapsed time: 0.012285, Nodes Expanded: 4016, Optimal Moves: 193, Optimal G cost: 226.379822
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009025, Nodes Expanded: 3531, Optimal Moves: 193, Optimal Gcost: 226.379822
Canonical A Star::A star my openlist elapsed time: 0.006489, Nodes Expanded: 3368, Optimal Moves: 193, Optimal Gcost: 226.379807
Jump Point Search::A star my openlist elapsed time: 0.001116, Nodes Expanded: 74, Optimal Moves: 193, Optimal Gcost: 226.379807
(startX, startY): (100,143) goalX, goalY: (114,91)
Octile::			 A star my openlist elapsed time: 0.031680, Nodes Expanded: 10457, Optimal Moves: 198, Optimal Gcost: 225.580826
Differential Heuristic::	 A star my openlist elapsed time: 0.008109, Nodes Expanded: 3368, Optimal Moves: 198, Optimal G cost: 225.580841
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005473, Nodes Expanded: 2501, Optimal Moves: 198, Optimal Gcost: 225.580841
Canonical A Star::A star my openlist elapsed time: 0.003888, Nodes Expanded: 2501, Optimal Moves: 198, Optimal Gcost: 225.580841
Jump Point Search::A star my openlist elapsed time: 0.000706, Nodes Expanded: 35, Optimal Moves: 198, Optimal Gcost: 225.580841
(startX, startY): (100,185) goalX, goalY: (91,85)
Octile::			 A star my openlist elapsed time: 0.025293, Nodes Expanded: 8331, Optimal Moves: 188, Optimal Gcost: 225.107742
Differential Heuristic::	 A star my openlist elapsed time: 0.007958, Nodes Expanded: 3683, Optimal Moves: 188, Optimal G cost: 225.107742
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007247, Nodes Expanded: 3417, Optimal Moves: 188, Optimal Gcost: 225.107742
Canonical A Star::A star my openlist elapsed time: 0.004656, Nodes Expanded: 3417, Optimal Moves: 188, Optimal Gcost: 225.107742
Jump Point Search::A star my openlist elapsed time: 0.000635, Nodes Expanded: 33, Optimal Moves: 188, Optimal Gcost: 225.107742
(startX, startY): (100,186) goalX, goalY: (21,39)
Octile::			 A star my openlist elapsed time: 0.015155, Nodes Expanded: 5822, Optimal Moves: 189, Optimal Gcost: 224.450882
Differential Heuristic::	 A star my openlist elapsed time: 0.010903, Nodes Expanded: 4803, Optimal Moves: 189, Optimal G cost: 224.450882
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007856, Nodes Expanded: 3381, Optimal Moves: 189, Optimal Gcost: 224.450882
Canonical A Star::A star my openlist elapsed time: 0.005161, Nodes Expanded: 3381, Optimal Moves: 189, Optimal Gcost: 224.450882
Jump Point Search::A star my openlist elapsed time: 0.000470, Nodes Expanded: 31, Optimal Moves: 189, Optimal Gcost: 224.450882
(startX, startY): (100,21) goalX, goalY: (60,172)
Octile::			 A star my openlist elapsed time: 0.006430, Nodes Expanded: 3514, Optimal Moves: 185, Optimal Gcost: 224.178833
Differential Heuristic::	 A star my openlist elapsed time: 0.011836, Nodes Expanded: 4853, Optimal Moves: 185, Optimal G cost: 224.178833
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007838, Nodes Expanded: 3232, Optimal Moves: 185, Optimal Gcost: 224.178833
Canonical A Star::A star my openlist elapsed time: 0.004707, Nodes Expanded: 3232, Optimal Moves: 185, Optimal Gcost: 224.178833
Jump Point Search::A star my openlist elapsed time: 0.000748, Nodes Expanded: 51, Optimal Moves: 185, Optimal Gcost: 224.178833
(startX, startY): (100,36) goalX, goalY: (42,144)
Octile::			 A star my openlist elapsed time: 0.009631, Nodes Expanded: 4200, Optimal Moves: 192, Optimal Gcost: 226.208252
Differential Heuristic::	 A star my openlist elapsed time: 0.005047, Nodes Expanded: 2269, Optimal Moves: 192, Optimal G cost: 226.208252
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004656, Nodes Expanded: 2050, Optimal Moves: 192, Optimal Gcost: 226.208252
Canonical A Star::A star my openlist elapsed time: 0.003049, Nodes Expanded: 2050, Optimal Moves: 192, Optimal Gcost: 226.208252
Jump Point Search::A star my openlist elapsed time: 0.000367, Nodes Expanded: 27, Optimal Moves: 192, Optimal Gcost: 226.208252
(startX, startY): (100,84) goalX, goalY: (112,159)
Octile::			 A star my openlist elapsed time: 0.013020, Nodes Expanded: 4738, Optimal Moves: 196, Optimal Gcost: 227.308746
Differential Heuristic::	 A star my openlist elapsed time: 0.009018, Nodes Expanded: 3119, Optimal Moves: 196, Optimal G cost: 227.308746
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008141, Nodes Expanded: 2673, Optimal Moves: 196, Optimal Gcost: 227.308746
Canonical A Star::A star my openlist elapsed time: 0.004645, Nodes Expanded: 2673, Optimal Moves: 196, Optimal Gcost: 227.308746
Jump Point Search::A star my openlist elapsed time: 0.000758, Nodes Expanded: 47, Optimal Moves: 196, Optimal Gcost: 227.308746
(startX, startY): (100,93) goalX, goalY: (113,146)
Octile::			 A star my openlist elapsed time: 0.011522, Nodes Expanded: 4643, Optimal Moves: 197, Optimal Gcost: 226.651886
Differential Heuristic::	 A star my openlist elapsed time: 0.004147, Nodes Expanded: 1749, Optimal Moves: 197, Optimal G cost: 226.651886
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003783, Nodes Expanded: 1573, Optimal Moves: 197, Optimal Gcost: 226.651886
Canonical A Star::A star my openlist elapsed time: 0.002407, Nodes Expanded: 1573, Optimal Moves: 197, Optimal Gcost: 226.651886
Jump Point Search::A star my openlist elapsed time: 0.000513, Nodes Expanded: 30, Optimal Moves: 197, Optimal Gcost: 226.651886
(startX, startY): (10,134) goalX, goalY: (170,89)
Octile::			 A star my openlist elapsed time: 0.023166, Nodes Expanded: 7939, Optimal Moves: 207, Optimal Gcost: 231.267105
Differential Heuristic::	 A star my openlist elapsed time: 0.004299, Nodes Expanded: 1888, Optimal Moves: 207, Optimal G cost: 231.267105
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004214, Nodes Expanded: 1819, Optimal Moves: 207, Optimal Gcost: 231.267105
Canonical A Star::A star my openlist elapsed time: 0.002622, Nodes Expanded: 1819, Optimal Moves: 207, Optimal Gcost: 231.267105
Jump Point Search::A star my openlist elapsed time: 0.000480, Nodes Expanded: 42, Optimal Moves: 207, Optimal Gcost: 231.267105
(startX, startY): (10,58) goalX, goalY: (146,123)
Octile::			 A star my openlist elapsed time: 0.014964, Nodes Expanded: 5673, Optimal Moves: 200, Optimal Gcost: 230.480316
Differential Heuristic::	 A star my openlist elapsed time: 0.003568, Nodes Expanded: 1554, Optimal Moves: 200, Optimal G cost: 230.480316
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003059, Nodes Expanded: 1406, Optimal Moves: 200, Optimal Gcost: 230.480316
Canonical A Star::A star my openlist elapsed time: 0.002137, Nodes Expanded: 1405, Optimal Moves: 200, Optimal Gcost: 230.480316
Jump Point Search::A star my openlist elapsed time: 0.000485, Nodes Expanded: 44, Optimal Moves: 200, Optimal Gcost: 230.480316
(startX, startY): (10,66) goalX, goalY: (153,147)
Octile::			 A star my openlist elapsed time: 0.015542, Nodes Expanded: 5565, Optimal Moves: 203, Optimal Gcost: 228.509735
Differential Heuristic::	 A star my openlist elapsed time: 0.007565, Nodes Expanded: 3241, Optimal Moves: 203, Optimal G cost: 228.509735
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006737, Nodes Expanded: 2763, Optimal Moves: 203, Optimal Gcost: 228.509735
Canonical A Star::A star my openlist elapsed time: 0.004691, Nodes Expanded: 2763, Optimal Moves: 203, Optimal Gcost: 228.509735
Jump Point Search::A star my openlist elapsed time: 0.001054, Nodes Expanded: 93, Optimal Moves: 203, Optimal Gcost: 228.509735
(startX, startY): (10,67) goalX, goalY: (153,152)
Octile::			 A star my openlist elapsed time: 0.016160, Nodes Expanded: 5736, Optimal Moves: 202, Optimal Gcost: 229.580811
Differential Heuristic::	 A star my openlist elapsed time: 0.007988, Nodes Expanded: 3319, Optimal Moves: 202, Optimal G cost: 229.580811
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006685, Nodes Expanded: 2754, Optimal Moves: 202, Optimal Gcost: 229.580811
Canonical A Star::A star my openlist elapsed time: 0.004673, Nodes Expanded: 2754, Optimal Moves: 202, Optimal Gcost: 229.580811
Jump Point Search::A star my openlist elapsed time: 0.001413, Nodes Expanded: 93, Optimal Moves: 202, Optimal Gcost: 229.580811
(startX, startY): (100,149) goalX, goalY: (111,100)
Octile::			 A star my openlist elapsed time: 0.032127, Nodes Expanded: 10271, Optimal Moves: 195, Optimal Gcost: 228.794052
Differential Heuristic::	 A star my openlist elapsed time: 0.009517, Nodes Expanded: 3917, Optimal Moves: 195, Optimal G cost: 228.794052
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006638, Nodes Expanded: 2994, Optimal Moves: 195, Optimal Gcost: 228.794052
Canonical A Star::A star my openlist elapsed time: 0.004738, Nodes Expanded: 2994, Optimal Moves: 195, Optimal Gcost: 228.794052
Jump Point Search::A star my openlist elapsed time: 0.000503, Nodes Expanded: 40, Optimal Moves: 195, Optimal Gcost: 228.794052
(startX, startY): (100,189) goalX, goalY: (41,24)
Octile::			 A star my openlist elapsed time: 0.011647, Nodes Expanded: 4930, Optimal Moves: 202, Optimal Gcost: 231.237656
Differential Heuristic::	 A star my openlist elapsed time: 0.011453, Nodes Expanded: 4968, Optimal Moves: 202, Optimal G cost: 231.237656
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007449, Nodes Expanded: 3309, Optimal Moves: 202, Optimal Gcost: 231.237656
Canonical A Star::A star my openlist elapsed time: 0.004942, Nodes Expanded: 3309, Optimal Moves: 202, Optimal Gcost: 231.237656
Jump Point Search::A star my openlist elapsed time: 0.000400, Nodes Expanded: 30, Optimal Moves: 202, Optimal Gcost: 231.237656
(startX, startY): (100,49) goalX, goalY: (29,137)
Octile::			 A star my openlist elapsed time: 0.008474, Nodes Expanded: 3943, Optimal Moves: 205, Optimal Gcost: 230.923950
Differential Heuristic::	 A star my openlist elapsed time: 0.001981, Nodes Expanded: 662, Optimal Moves: 205, Optimal G cost: 230.923950
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001661, Nodes Expanded: 662, Optimal Moves: 205, Optimal Gcost: 230.923950
Canonical A Star::A star my openlist elapsed time: 0.000909, Nodes Expanded: 690, Optimal Moves: 205, Optimal Gcost: 230.923965
Jump Point Search::A star my openlist elapsed time: 0.000418, Nodes Expanded: 16, Optimal Moves: 205, Optimal Gcost: 230.923965
(startX, startY): (100,6) goalX, goalY: (67,130)
Octile::			 A star my openlist elapsed time: 0.007827, Nodes Expanded: 3912, Optimal Moves: 201, Optimal Gcost: 230.237686
Differential Heuristic::	 A star my openlist elapsed time: 0.005125, Nodes Expanded: 2428, Optimal Moves: 201, Optimal G cost: 230.237686
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004689, Nodes Expanded: 2252, Optimal Moves: 201, Optimal Gcost: 230.237686
Canonical A Star::A star my openlist elapsed time: 0.003090, Nodes Expanded: 2252, Optimal Moves: 201, Optimal Gcost: 230.237686
Jump Point Search::A star my openlist elapsed time: 0.000355, Nodes Expanded: 34, Optimal Moves: 201, Optimal Gcost: 230.237686
(startX, startY): (100,97) goalX, goalY: (62,185)
Octile::			 A star my openlist elapsed time: 0.013392, Nodes Expanded: 5200, Optimal Moves: 197, Optimal Gcost: 231.622452
Differential Heuristic::	 A star my openlist elapsed time: 0.012807, Nodes Expanded: 5159, Optimal Moves: 197, Optimal G cost: 231.622452
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009961, Nodes Expanded: 4064, Optimal Moves: 197, Optimal Gcost: 231.622452
Canonical A Star::A star my openlist elapsed time: 0.007857, Nodes Expanded: 4213, Optimal Moves: 197, Optimal Gcost: 231.622452
Jump Point Search::A star my openlist elapsed time: 0.001540, Nodes Expanded: 95, Optimal Moves: 197, Optimal Gcost: 231.622452
(startX, startY): (101,106) goalX, goalY: (100,167)
Octile::			 A star my openlist elapsed time: 0.010433, Nodes Expanded: 4200, Optimal Moves: 189, Optimal Gcost: 231.078323
Differential Heuristic::	 A star my openlist elapsed time: 0.009053, Nodes Expanded: 3574, Optimal Moves: 189, Optimal G cost: 231.078323
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008620, Nodes Expanded: 3025, Optimal Moves: 189, Optimal Gcost: 231.078323
Canonical A Star::A star my openlist elapsed time: 0.005726, Nodes Expanded: 2977, Optimal Moves: 189, Optimal Gcost: 231.078323
Jump Point Search::A star my openlist elapsed time: 0.001032, Nodes Expanded: 63, Optimal Moves: 189, Optimal Gcost: 231.078323
(startX, startY): (10,123) goalX, goalY: (185,71)
Octile::			 A star my openlist elapsed time: 0.015994, Nodes Expanded: 5655, Optimal Moves: 204, Optimal Gcost: 232.823456
Differential Heuristic::	 A star my openlist elapsed time: 0.007492, Nodes Expanded: 3068, Optimal Moves: 204, Optimal G cost: 232.823456
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005592, Nodes Expanded: 2403, Optimal Moves: 204, Optimal Gcost: 232.823456
Canonical A Star::A star my openlist elapsed time: 0.004026, Nodes Expanded: 2403, Optimal Moves: 204, Optimal Gcost: 232.823456
Jump Point Search::A star my openlist elapsed time: 0.000574, Nodes Expanded: 50, Optimal Moves: 204, Optimal Gcost: 232.823456
(startX, startY): (10,126) goalX, goalY: (163,53)
Octile::			 A star my openlist elapsed time: 0.016886, Nodes Expanded: 6311, Optimal Moves: 202, Optimal Gcost: 232.066101
Differential Heuristic::	 A star my openlist elapsed time: 0.008265, Nodes Expanded: 3522, Optimal Moves: 202, Optimal G cost: 232.066101
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005547, Nodes Expanded: 2468, Optimal Moves: 202, Optimal Gcost: 232.066101
Canonical A Star::A star my openlist elapsed time: 0.003709, Nodes Expanded: 2467, Optimal Moves: 202, Optimal Gcost: 232.066101
Jump Point Search::A star my openlist elapsed time: 0.000454, Nodes Expanded: 46, Optimal Moves: 202, Optimal Gcost: 232.066101
(startX, startY): (10,61) goalX, goalY: (156,137)
Octile::			 A star my openlist elapsed time: 0.014131, Nodes Expanded: 5265, Optimal Moves: 210, Optimal Gcost: 233.438660
Differential Heuristic::	 A star my openlist elapsed time: 0.007565, Nodes Expanded: 3083, Optimal Moves: 210, Optimal G cost: 233.438660
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006835, Nodes Expanded: 2705, Optimal Moves: 210, Optimal Gcost: 233.438660
Canonical A Star::A star my openlist elapsed time: 0.004682, Nodes Expanded: 2705, Optimal Moves: 210, Optimal Gcost: 233.438660
Jump Point Search::A star my openlist elapsed time: 0.000898, Nodes Expanded: 92, Optimal Moves: 210, Optimal Gcost: 233.438660
(startX, startY): (10,74) goalX, goalY: (159,151)
Octile::			 A star my openlist elapsed time: 0.016524, Nodes Expanded: 5949, Optimal Moves: 208, Optimal Gcost: 233.095520
Differential Heuristic::	 A star my openlist elapsed time: 0.008444, Nodes Expanded: 3504, Optimal Moves: 208, Optimal G cost: 233.095520
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007409, Nodes Expanded: 2956, Optimal Moves: 208, Optimal Gcost: 233.095520
Canonical A Star::A star my openlist elapsed time: 0.005066, Nodes Expanded: 2956, Optimal Moves: 208, Optimal Gcost: 233.095520
Jump Point Search::A star my openlist elapsed time: 0.001226, Nodes Expanded: 97, Optimal Moves: 208, Optimal Gcost: 233.095520
(startX, startY): (10,84) goalX, goalY: (158,109)
Octile::			 A star my openlist elapsed time: 0.016114, Nodes Expanded: 5794, Optimal Moves: 205, Optimal Gcost: 233.409256
Differential Heuristic::	 A star my openlist elapsed time: 0.006276, Nodes Expanded: 2526, Optimal Moves: 205, Optimal G cost: 233.409256
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004730, Nodes Expanded: 2097, Optimal Moves: 205, Optimal Gcost: 233.409256
Canonical A Star::A star my openlist elapsed time: 0.003488, Nodes Expanded: 2097, Optimal Moves: 205, Optimal Gcost: 233.409256
Jump Point Search::A star my openlist elapsed time: 0.000450, Nodes Expanded: 55, Optimal Moves: 205, Optimal Gcost: 233.409256
(startX, startY): (10,90) goalX, goalY: (159,167)
Octile::			 A star my openlist elapsed time: 0.016999, Nodes Expanded: 6461, Optimal Moves: 213, Optimal Gcost: 235.196030
Differential Heuristic::	 A star my openlist elapsed time: 0.007431, Nodes Expanded: 3159, Optimal Moves: 213, Optimal G cost: 235.196030
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006048, Nodes Expanded: 2615, Optimal Moves: 213, Optimal Gcost: 235.196030
Canonical A Star::A star my openlist elapsed time: 0.004217, Nodes Expanded: 2618, Optimal Moves: 213, Optimal Gcost: 235.196045
Jump Point Search::A star my openlist elapsed time: 0.000816, Nodes Expanded: 81, Optimal Moves: 213, Optimal Gcost: 235.196045
(startX, startY): (100,103) goalX, goalY: (115,144)
Octile::			 A star my openlist elapsed time: 0.011290, Nodes Expanded: 4594, Optimal Moves: 202, Optimal Gcost: 233.722946
Differential Heuristic::	 A star my openlist elapsed time: 0.002466, Nodes Expanded: 1158, Optimal Moves: 202, Optimal G cost: 233.722946
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002858, Nodes Expanded: 1066, Optimal Moves: 202, Optimal Gcost: 233.722946
Canonical A Star::A star my openlist elapsed time: 0.001432, Nodes Expanded: 1043, Optimal Moves: 202, Optimal Gcost: 233.722946
Jump Point Search::A star my openlist elapsed time: 0.000416, Nodes Expanded: 24, Optimal Moves: 202, Optimal Gcost: 233.722946
(startX, startY): (100,169) goalX, goalY: (91,114)
Octile::			 A star my openlist elapsed time: 0.027860, Nodes Expanded: 9444, Optimal Moves: 197, Optimal Gcost: 235.764603
Differential Heuristic::	 A star my openlist elapsed time: 0.010661, Nodes Expanded: 4467, Optimal Moves: 197, Optimal G cost: 235.764603
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007890, Nodes Expanded: 3616, Optimal Moves: 197, Optimal Gcost: 235.764603
Canonical A Star::A star my openlist elapsed time: 0.005748, Nodes Expanded: 3835, Optimal Moves: 197, Optimal Gcost: 235.764603
Jump Point Search::A star my openlist elapsed time: 0.000667, Nodes Expanded: 37, Optimal Moves: 197, Optimal Gcost: 235.764603
(startX, startY): (100,2) goalX, goalY: (75,182)
Octile::			 A star my openlist elapsed time: 0.005323, Nodes Expanded: 2918, Optimal Moves: 191, Optimal Gcost: 233.492569
Differential Heuristic::	 A star my openlist elapsed time: 0.009809, Nodes Expanded: 4309, Optimal Moves: 191, Optimal G cost: 233.492569
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005747, Nodes Expanded: 2637, Optimal Moves: 191, Optimal Gcost: 233.492569
Canonical A Star::A star my openlist elapsed time: 0.003483, Nodes Expanded: 2690, Optimal Moves: 191, Optimal Gcost: 233.492569
Jump Point Search::A star my openlist elapsed time: 0.000496, Nodes Expanded: 53, Optimal Moves: 191, Optimal Gcost: 233.492569
(startX, startY): (100,45) goalX, goalY: (26,137)
Octile::			 A star my openlist elapsed time: 0.008311, Nodes Expanded: 3946, Optimal Moves: 208, Optimal Gcost: 235.580811
Differential Heuristic::	 A star my openlist elapsed time: 0.002198, Nodes Expanded: 879, Optimal Moves: 208, Optimal G cost: 235.580811
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001935, Nodes Expanded: 873, Optimal Moves: 208, Optimal Gcost: 235.580811
Canonical A Star::A star my openlist elapsed time: 0.001666, Nodes Expanded: 872, Optimal Moves: 208, Optimal Gcost: 235.580811
Jump Point Search::A star my openlist elapsed time: 0.000349, Nodes Expanded: 17, Optimal Moves: 208, Optimal Gcost: 235.580811
(startX, startY): (10,112) goalX, goalY: (124,55)
Octile::			 A star my openlist elapsed time: 0.023027, Nodes Expanded: 7957, Optimal Moves: 208, Optimal Gcost: 238.480316
Differential Heuristic::	 A star my openlist elapsed time: 0.009382, Nodes Expanded: 3760, Optimal Moves: 208, Optimal G cost: 238.480316
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005032, Nodes Expanded: 2101, Optimal Moves: 208, Optimal Gcost: 238.480316
Canonical A Star::A star my openlist elapsed time: 0.003582, Nodes Expanded: 2101, Optimal Moves: 208, Optimal Gcost: 238.480316
Jump Point Search::A star my openlist elapsed time: 0.000376, Nodes Expanded: 43, Optimal Moves: 208, Optimal Gcost: 238.480316
(startX, startY): (10,86) goalX, goalY: (162,166)
Octile::			 A star my openlist elapsed time: 0.016954, Nodes Expanded: 6259, Optimal Moves: 212, Optimal Gcost: 237.095535
Differential Heuristic::	 A star my openlist elapsed time: 0.008312, Nodes Expanded: 3220, Optimal Moves: 212, Optimal G cost: 237.095535
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006608, Nodes Expanded: 2582, Optimal Moves: 212, Optimal Gcost: 237.095535
Canonical A Star::A star my openlist elapsed time: 0.004308, Nodes Expanded: 2582, Optimal Moves: 212, Optimal Gcost: 237.095535
Jump Point Search::A star my openlist elapsed time: 0.000971, Nodes Expanded: 83, Optimal Moves: 212, Optimal Gcost: 237.095535
(startX, startY): (10,90) goalX, goalY: (168,160)
Octile::			 A star my openlist elapsed time: 0.016740, Nodes Expanded: 5926, Optimal Moves: 214, Optimal Gcost: 236.610245
Differential Heuristic::	 A star my openlist elapsed time: 0.007547, Nodes Expanded: 3281, Optimal Moves: 214, Optimal G cost: 236.610245
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005589, Nodes Expanded: 2497, Optimal Moves: 214, Optimal Gcost: 236.610245
Canonical A Star::A star my openlist elapsed time: 0.003915, Nodes Expanded: 2501, Optimal Moves: 214, Optimal Gcost: 236.610260
Jump Point Search::A star my openlist elapsed time: 0.000626, Nodes Expanded: 75, Optimal Moves: 214, Optimal Gcost: 236.610260
(startX, startY): (100,102) goalX, goalY: (96,180)
Octile::			 A star my openlist elapsed time: 0.010691, Nodes Expanded: 4505, Optimal Moves: 195, Optimal Gcost: 236.249893
Differential Heuristic::	 A star my openlist elapsed time: 0.011674, Nodes Expanded: 4798, Optimal Moves: 195, Optimal G cost: 236.249893
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009432, Nodes Expanded: 3723, Optimal Moves: 195, Optimal Gcost: 236.249893
Canonical A Star::A star my openlist elapsed time: 0.006510, Nodes Expanded: 3822, Optimal Moves: 195, Optimal Gcost: 236.249908
Jump Point Search::A star my openlist elapsed time: 0.000909, Nodes Expanded: 72, Optimal Moves: 195, Optimal Gcost: 236.249908
(startX, startY): (100,104) goalX, goalY: (103,177)
Octile::			 A star my openlist elapsed time: 0.010117, Nodes Expanded: 4100, Optimal Moves: 192, Optimal Gcost: 236.977829
Differential Heuristic::	 A star my openlist elapsed time: 0.010982, Nodes Expanded: 4219, Optimal Moves: 192, Optimal G cost: 236.977829
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008796, Nodes Expanded: 3361, Optimal Moves: 192, Optimal Gcost: 236.977829
Canonical A Star::A star my openlist elapsed time: 0.005570, Nodes Expanded: 3312, Optimal Moves: 192, Optimal Gcost: 236.977829
Jump Point Search::A star my openlist elapsed time: 0.001145, Nodes Expanded: 69, Optimal Moves: 192, Optimal Gcost: 236.977829
(startX, startY): (100,108) goalX, goalY: (100,176)
Octile::			 A star my openlist elapsed time: 0.010546, Nodes Expanded: 4217, Optimal Moves: 195, Optimal Gcost: 238.735184
Differential Heuristic::	 A star my openlist elapsed time: 0.010974, Nodes Expanded: 4304, Optimal Moves: 195, Optimal G cost: 238.735199
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009301, Nodes Expanded: 3508, Optimal Moves: 195, Optimal Gcost: 238.735199
Canonical A Star::A star my openlist elapsed time: 0.006041, Nodes Expanded: 3373, Optimal Moves: 195, Optimal Gcost: 238.735184
Jump Point Search::A star my openlist elapsed time: 0.001178, Nodes Expanded: 72, Optimal Moves: 195, Optimal Gcost: 238.735184
(startX, startY): (100,108) goalX, goalY: (112,148)
Octile::			 A star my openlist elapsed time: 0.011204, Nodes Expanded: 4680, Optimal Moves: 203, Optimal Gcost: 236.794022
Differential Heuristic::	 A star my openlist elapsed time: 0.005827, Nodes Expanded: 2259, Optimal Moves: 203, Optimal G cost: 236.794037
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005236, Nodes Expanded: 2032, Optimal Moves: 203, Optimal Gcost: 236.794037
Canonical A Star::A star my openlist elapsed time: 0.003403, Nodes Expanded: 1986, Optimal Moves: 203, Optimal Gcost: 236.794022
Jump Point Search::A star my openlist elapsed time: 0.000729, Nodes Expanded: 36, Optimal Moves: 203, Optimal Gcost: 236.794022
(startX, startY): (100,108) goalX, goalY: (61,184)
Octile::			 A star my openlist elapsed time: 0.012940, Nodes Expanded: 5237, Optimal Moves: 203, Optimal Gcost: 239.693527
Differential Heuristic::	 A star my openlist elapsed time: 0.012684, Nodes Expanded: 5070, Optimal Moves: 203, Optimal G cost: 239.693527
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010829, Nodes Expanded: 4186, Optimal Moves: 203, Optimal Gcost: 239.693527
Canonical A Star::A star my openlist elapsed time: 0.007018, Nodes Expanded: 4007, Optimal Moves: 203, Optimal Gcost: 239.693527
Jump Point Search::A star my openlist elapsed time: 0.001192, Nodes Expanded: 93, Optimal Moves: 203, Optimal Gcost: 239.693527
(startX, startY): (100,112) goalX, goalY: (110,140)
Octile::			 A star my openlist elapsed time: 0.011080, Nodes Expanded: 4822, Optimal Moves: 205, Optimal Gcost: 237.965607
Differential Heuristic::	 A star my openlist elapsed time: 0.002964, Nodes Expanded: 1276, Optimal Moves: 205, Optimal G cost: 237.965607
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002860, Nodes Expanded: 1264, Optimal Moves: 205, Optimal Gcost: 237.965607
Canonical A Star::A star my openlist elapsed time: 0.001702, Nodes Expanded: 1213, Optimal Moves: 205, Optimal Gcost: 237.965591
Jump Point Search::A star my openlist elapsed time: 0.000443, Nodes Expanded: 29, Optimal Moves: 205, Optimal Gcost: 237.965591
(startX, startY): (100,115) goalX, goalY: (66,177)
Octile::			 A star my openlist elapsed time: 0.012547, Nodes Expanded: 4885, Optimal Moves: 203, Optimal Gcost: 237.622467
Differential Heuristic::	 A star my openlist elapsed time: 0.012031, Nodes Expanded: 4631, Optimal Moves: 203, Optimal G cost: 237.622467
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010471, Nodes Expanded: 3994, Optimal Moves: 203, Optimal Gcost: 237.622467
Canonical A Star::A star my openlist elapsed time: 0.007076, Nodes Expanded: 3994, Optimal Moves: 203, Optimal Gcost: 237.622467
Jump Point Search::A star my openlist elapsed time: 0.001545, Nodes Expanded: 90, Optimal Moves: 203, Optimal Gcost: 237.622467
(startX, startY): (10,120) goalX, goalY: (187,83)
Octile::			 A star my openlist elapsed time: 0.022715, Nodes Expanded: 7775, Optimal Moves: 211, Optimal Gcost: 241.480316
Differential Heuristic::	 A star my openlist elapsed time: 0.008206, Nodes Expanded: 3475, Optimal Moves: 211, Optimal G cost: 241.480316
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007118, Nodes Expanded: 3029, Optimal Moves: 211, Optimal Gcost: 241.480316
Canonical A Star::A star my openlist elapsed time: 0.005428, Nodes Expanded: 3029, Optimal Moves: 211, Optimal Gcost: 241.480316
Jump Point Search::A star my openlist elapsed time: 0.000574, Nodes Expanded: 59, Optimal Moves: 211, Optimal Gcost: 241.480316
(startX, startY): (10,126) goalX, goalY: (116,46)
Octile::			 A star my openlist elapsed time: 0.022178, Nodes Expanded: 8150, Optimal Moves: 209, Optimal Gcost: 240.308746
Differential Heuristic::	 A star my openlist elapsed time: 0.010144, Nodes Expanded: 4000, Optimal Moves: 209, Optimal G cost: 240.308746
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004889, Nodes Expanded: 1941, Optimal Moves: 209, Optimal Gcost: 240.308746
Canonical A Star::A star my openlist elapsed time: 0.003241, Nodes Expanded: 1940, Optimal Moves: 209, Optimal Gcost: 240.308746
Jump Point Search::A star my openlist elapsed time: 0.000472, Nodes Expanded: 38, Optimal Moves: 209, Optimal Gcost: 240.308746
(startX, startY): (10,62) goalX, goalY: (158,156)
Octile::			 A star my openlist elapsed time: 0.016680, Nodes Expanded: 5938, Optimal Moves: 212, Optimal Gcost: 241.237671
Differential Heuristic::	 A star my openlist elapsed time: 0.009807, Nodes Expanded: 3583, Optimal Moves: 212, Optimal G cost: 241.237671
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006884, Nodes Expanded: 2945, Optimal Moves: 212, Optimal Gcost: 241.237671
Canonical A Star::A star my openlist elapsed time: 0.004931, Nodes Expanded: 2945, Optimal Moves: 212, Optimal Gcost: 241.237671
Jump Point Search::A star my openlist elapsed time: 0.001060, Nodes Expanded: 95, Optimal Moves: 212, Optimal Gcost: 241.237671
(startX, startY): (10,64) goalX, goalY: (164,139)
Octile::			 A star my openlist elapsed time: 0.015257, Nodes Expanded: 5611, Optimal Moves: 216, Optimal Gcost: 240.681305
Differential Heuristic::	 A star my openlist elapsed time: 0.008395, Nodes Expanded: 3572, Optimal Moves: 216, Optimal G cost: 240.681305
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007257, Nodes Expanded: 3003, Optimal Moves: 216, Optimal Gcost: 240.681305
Canonical A Star::A star my openlist elapsed time: 0.005114, Nodes Expanded: 3003, Optimal Moves: 216, Optimal Gcost: 240.681305
Jump Point Search::A star my openlist elapsed time: 0.001105, Nodes Expanded: 97, Optimal Moves: 216, Optimal Gcost: 240.681305
(startX, startY): (10,85) goalX, goalY: (146,94)
Octile::			 A star my openlist elapsed time: 0.018330, Nodes Expanded: 6980, Optimal Moves: 216, Optimal Gcost: 240.681320
Differential Heuristic::	 A star my openlist elapsed time: 0.001928, Nodes Expanded: 848, Optimal Moves: 216, Optimal G cost: 240.681320
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002284, Nodes Expanded: 810, Optimal Moves: 216, Optimal Gcost: 240.681320
Canonical A Star::A star my openlist elapsed time: 0.001038, Nodes Expanded: 811, Optimal Moves: 216, Optimal Gcost: 240.681320
Jump Point Search::A star my openlist elapsed time: 0.000315, Nodes Expanded: 23, Optimal Moves: 216, Optimal Gcost: 240.681320
(startX, startY): (10,89) goalX, goalY: (176,124)
Octile::			 A star my openlist elapsed time: 0.014809, Nodes Expanded: 5582, Optimal Moves: 222, Optimal Gcost: 242.539169
Differential Heuristic::	 A star my openlist elapsed time: 0.008192, Nodes Expanded: 3508, Optimal Moves: 222, Optimal G cost: 242.539169
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006736, Nodes Expanded: 2707, Optimal Moves: 222, Optimal Gcost: 242.539169
Canonical A Star::A star my openlist elapsed time: 0.004461, Nodes Expanded: 2778, Optimal Moves: 222, Optimal Gcost: 242.539185
Jump Point Search::A star my openlist elapsed time: 0.000652, Nodes Expanded: 81, Optimal Moves: 222, Optimal Gcost: 242.539185
(startX, startY): (10,91) goalX, goalY: (175,124)
Octile::			 A star my openlist elapsed time: 0.015195, Nodes Expanded: 5546, Optimal Moves: 221, Optimal Gcost: 240.710739
Differential Heuristic::	 A star my openlist elapsed time: 0.008160, Nodes Expanded: 3395, Optimal Moves: 221, Optimal G cost: 240.710739
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006140, Nodes Expanded: 2622, Optimal Moves: 221, Optimal Gcost: 240.710739
Canonical A Star::A star my openlist elapsed time: 0.004612, Nodes Expanded: 2684, Optimal Moves: 221, Optimal Gcost: 240.710754
Jump Point Search::A star my openlist elapsed time: 0.000661, Nodes Expanded: 76, Optimal Moves: 221, Optimal Gcost: 240.710754
(startX, startY): (100,103) goalX, goalY: (124,140)
Octile::			 A star my openlist elapsed time: 0.012006, Nodes Expanded: 5002, Optimal Moves: 211, Optimal Gcost: 243.551376
Differential Heuristic::	 A star my openlist elapsed time: 0.002061, Nodes Expanded: 872, Optimal Moves: 211, Optimal G cost: 243.551376
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001888, Nodes Expanded: 872, Optimal Moves: 211, Optimal Gcost: 243.551376
Canonical A Star::A star my openlist elapsed time: 0.001624, Nodes Expanded: 903, Optimal Moves: 211, Optimal Gcost: 243.551376
Jump Point Search::A star my openlist elapsed time: 0.000457, Nodes Expanded: 25, Optimal Moves: 211, Optimal Gcost: 243.551376
(startX, startY): (100,111) goalX, goalY: (100,176)
Octile::			 A star my openlist elapsed time: 0.010302, Nodes Expanded: 4217, Optimal Moves: 198, Optimal Gcost: 241.735199
Differential Heuristic::	 A star my openlist elapsed time: 0.010837, Nodes Expanded: 4304, Optimal Moves: 198, Optimal G cost: 241.735199
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008821, Nodes Expanded: 3508, Optimal Moves: 198, Optimal Gcost: 241.735199
Canonical A Star::A star my openlist elapsed time: 0.006329, Nodes Expanded: 3508, Optimal Moves: 198, Optimal Gcost: 241.735199
Jump Point Search::A star my openlist elapsed time: 0.001338, Nodes Expanded: 77, Optimal Moves: 198, Optimal Gcost: 241.735199
(startX, startY): (100,27) goalX, goalY: (33,143)
Octile::			 A star my openlist elapsed time: 0.009481, Nodes Expanded: 4285, Optimal Moves: 206, Optimal Gcost: 241.450897
Differential Heuristic::	 A star my openlist elapsed time: 0.004934, Nodes Expanded: 2252, Optimal Moves: 206, Optimal G cost: 241.450897
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005058, Nodes Expanded: 2079, Optimal Moves: 206, Optimal Gcost: 241.450897
Canonical A Star::A star my openlist elapsed time: 0.002926, Nodes Expanded: 2004, Optimal Moves: 206, Optimal Gcost: 241.450882
Jump Point Search::A star my openlist elapsed time: 0.000563, Nodes Expanded: 27, Optimal Moves: 206, Optimal Gcost: 241.450882
(startX, startY): (10,130) goalX, goalY: (116,40)
Octile::			 A star my openlist elapsed time: 0.024258, Nodes Expanded: 8316, Optimal Moves: 215, Optimal Gcost: 244.651886
Differential Heuristic::	 A star my openlist elapsed time: 0.009899, Nodes Expanded: 4104, Optimal Moves: 215, Optimal G cost: 244.651901
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005108, Nodes Expanded: 2054, Optimal Moves: 215, Optimal Gcost: 244.651901
Canonical A Star::A star my openlist elapsed time: 0.003228, Nodes Expanded: 2054, Optimal Moves: 215, Optimal Gcost: 244.651901
Jump Point Search::A star my openlist elapsed time: 0.000516, Nodes Expanded: 39, Optimal Moves: 215, Optimal Gcost: 244.651901
(startX, startY): (10,130) goalX, goalY: (148,33)
Octile::			 A star my openlist elapsed time: 0.020508, Nodes Expanded: 7525, Optimal Moves: 222, Optimal Gcost: 246.681320
Differential Heuristic::	 A star my openlist elapsed time: 0.010141, Nodes Expanded: 4180, Optimal Moves: 222, Optimal G cost: 246.681320
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005056, Nodes Expanded: 2161, Optimal Moves: 222, Optimal Gcost: 246.681320
Canonical A Star::A star my openlist elapsed time: 0.003346, Nodes Expanded: 2161, Optimal Moves: 222, Optimal Gcost: 246.681320
Jump Point Search::A star my openlist elapsed time: 0.000404, Nodes Expanded: 42, Optimal Moves: 222, Optimal Gcost: 246.681320
(startX, startY): (10,62) goalX, goalY: (165,148)
Octile::			 A star my openlist elapsed time: 0.016248, Nodes Expanded: 5779, Optimal Moves: 219, Optimal Gcost: 244.923950
Differential Heuristic::	 A star my openlist elapsed time: 0.008655, Nodes Expanded: 3744, Optimal Moves: 219, Optimal G cost: 244.923950
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007719, Nodes Expanded: 3005, Optimal Moves: 219, Optimal Gcost: 244.923950
Canonical A Star::A star my openlist elapsed time: 0.005073, Nodes Expanded: 3005, Optimal Moves: 219, Optimal Gcost: 244.923950
Jump Point Search::A star my openlist elapsed time: 0.001175, Nodes Expanded: 100, Optimal Moves: 219, Optimal Gcost: 244.923950
(startX, startY): (10,67) goalX, goalY: (167,122)
Octile::			 A star my openlist elapsed time: 0.015311, Nodes Expanded: 5747, Optimal Moves: 216, Optimal Gcost: 245.237671
Differential Heuristic::	 A star my openlist elapsed time: 0.008775, Nodes Expanded: 3611, Optimal Moves: 216, Optimal G cost: 245.237671
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007263, Nodes Expanded: 3051, Optimal Moves: 216, Optimal Gcost: 245.237671
Canonical A Star::A star my openlist elapsed time: 0.005166, Nodes Expanded: 3051, Optimal Moves: 216, Optimal Gcost: 245.237671
Jump Point Search::A star my openlist elapsed time: 0.000765, Nodes Expanded: 97, Optimal Moves: 216, Optimal Gcost: 245.237671
(startX, startY): (10,94) goalX, goalY: (147,87)
Octile::			 A star my openlist elapsed time: 0.019449, Nodes Expanded: 7068, Optimal Moves: 223, Optimal Gcost: 246.852890
Differential Heuristic::	 A star my openlist elapsed time: 0.003494, Nodes Expanded: 1179, Optimal Moves: 223, Optimal G cost: 246.852890
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002594, Nodes Expanded: 1080, Optimal Moves: 223, Optimal Gcost: 246.852890
Canonical A Star::A star my openlist elapsed time: 0.001567, Nodes Expanded: 1112, Optimal Moves: 223, Optimal Gcost: 246.852905
Jump Point Search::A star my openlist elapsed time: 0.000470, Nodes Expanded: 26, Optimal Moves: 223, Optimal Gcost: 246.852905
(startX, startY): (10,94) goalX, goalY: (173,107)
Octile::			 A star my openlist elapsed time: 0.015769, Nodes Expanded: 5855, Optimal Moves: 219, Optimal Gcost: 246.995041
Differential Heuristic::	 A star my openlist elapsed time: 0.008612, Nodes Expanded: 3669, Optimal Moves: 219, Optimal G cost: 246.995041
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006342, Nodes Expanded: 2633, Optimal Moves: 219, Optimal Gcost: 246.995041
Canonical A Star::A star my openlist elapsed time: 0.004515, Nodes Expanded: 2741, Optimal Moves: 219, Optimal Gcost: 246.995056
Jump Point Search::A star my openlist elapsed time: 0.000651, Nodes Expanded: 77, Optimal Moves: 219, Optimal Gcost: 246.995056
(startX, startY): (100,101) goalX, goalY: (122,154)
Octile::			 A star my openlist elapsed time: 0.012005, Nodes Expanded: 4981, Optimal Moves: 209, Optimal Gcost: 244.036667
Differential Heuristic::	 A star my openlist elapsed time: 0.009280, Nodes Expanded: 3410, Optimal Moves: 209, Optimal G cost: 244.036667
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007704, Nodes Expanded: 2919, Optimal Moves: 209, Optimal Gcost: 244.036667
Canonical A Star::A star my openlist elapsed time: 0.005447, Nodes Expanded: 3083, Optimal Moves: 209, Optimal Gcost: 244.036682
Jump Point Search::A star my openlist elapsed time: 0.000942, Nodes Expanded: 59, Optimal Moves: 209, Optimal Gcost: 244.036682
(startX, startY): (100,11) goalX, goalY: (41,136)
Octile::			 A star my openlist elapsed time: 0.007386, Nodes Expanded: 3833, Optimal Moves: 214, Optimal Gcost: 246.551407
Differential Heuristic::	 A star my openlist elapsed time: 0.001466, Nodes Expanded: 745, Optimal Moves: 214, Optimal G cost: 246.551407
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001518, Nodes Expanded: 730, Optimal Moves: 214, Optimal Gcost: 246.551407
Canonical A Star::A star my openlist elapsed time: 0.000931, Nodes Expanded: 725, Optimal Moves: 214, Optimal Gcost: 246.551407
Jump Point Search::A star my openlist elapsed time: 0.000361, Nodes Expanded: 16, Optimal Moves: 214, Optimal Gcost: 246.551407
(startX, startY): (100,114) goalX, goalY: (115,139)
Octile::			 A star my openlist elapsed time: 0.011446, Nodes Expanded: 4964, Optimal Moves: 212, Optimal Gcost: 245.379822
Differential Heuristic::	 A star my openlist elapsed time: 0.003934, Nodes Expanded: 1579, Optimal Moves: 212, Optimal G cost: 245.379822
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003601, Nodes Expanded: 1559, Optimal Moves: 212, Optimal Gcost: 245.379822
Canonical A Star::A star my openlist elapsed time: 0.002388, Nodes Expanded: 1559, Optimal Moves: 212, Optimal Gcost: 245.379822
Jump Point Search::A star my openlist elapsed time: 0.000368, Nodes Expanded: 32, Optimal Moves: 212, Optimal Gcost: 245.379822
(startX, startY): (100,154) goalX, goalY: (118,117)
Octile::			 A star my openlist elapsed time: 0.031541, Nodes Expanded: 10389, Optimal Moves: 205, Optimal Gcost: 246.664124
Differential Heuristic::	 A star my openlist elapsed time: 0.011507, Nodes Expanded: 4732, Optimal Moves: 205, Optimal G cost: 246.664124
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008587, Nodes Expanded: 3676, Optimal Moves: 205, Optimal Gcost: 246.664124
Canonical A Star::A star my openlist elapsed time: 0.005658, Nodes Expanded: 3831, Optimal Moves: 205, Optimal Gcost: 246.664124
Jump Point Search::A star my openlist elapsed time: 0.000788, Nodes Expanded: 51, Optimal Moves: 205, Optimal Gcost: 246.664124
(startX, startY): (10,108) goalX, goalY: (183,59)
Octile::			 A star my openlist elapsed time: 0.020176, Nodes Expanded: 7099, Optimal Moves: 218, Optimal Gcost: 251.379822
Differential Heuristic::	 A star my openlist elapsed time: 0.008844, Nodes Expanded: 3826, Optimal Moves: 218, Optimal G cost: 251.379822
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005736, Nodes Expanded: 2636, Optimal Moves: 218, Optimal Gcost: 251.379822
Canonical A Star::A star my openlist elapsed time: 0.004556, Nodes Expanded: 2636, Optimal Moves: 218, Optimal Gcost: 251.379822
Jump Point Search::A star my openlist elapsed time: 0.000658, Nodes Expanded: 58, Optimal Moves: 218, Optimal Gcost: 251.379822
(startX, startY): (10,122) goalX, goalY: (148,31)
Octile::			 A star my openlist elapsed time: 0.023297, Nodes Expanded: 7957, Optimal Moves: 224, Optimal Gcost: 251.995026
Differential Heuristic::	 A star my openlist elapsed time: 0.010351, Nodes Expanded: 4373, Optimal Moves: 224, Optimal G cost: 251.995026
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005886, Nodes Expanded: 2333, Optimal Moves: 224, Optimal Gcost: 251.995026
Canonical A Star::A star my openlist elapsed time: 0.003863, Nodes Expanded: 2333, Optimal Moves: 224, Optimal Gcost: 251.995026
Jump Point Search::A star my openlist elapsed time: 0.000523, Nodes Expanded: 42, Optimal Moves: 224, Optimal Gcost: 251.995026
(startX, startY): (10,128) goalX, goalY: (151,34)
Octile::			 A star my openlist elapsed time: 0.023208, Nodes Expanded: 8050, Optimal Moves: 225, Optimal Gcost: 250.095520
Differential Heuristic::	 A star my openlist elapsed time: 0.010255, Nodes Expanded: 4358, Optimal Moves: 225, Optimal G cost: 250.095520
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005638, Nodes Expanded: 2441, Optimal Moves: 225, Optimal Gcost: 250.095520
Canonical A Star::A star my openlist elapsed time: 0.003976, Nodes Expanded: 2432, Optimal Moves: 225, Optimal Gcost: 250.095520
Jump Point Search::A star my openlist elapsed time: 0.000532, Nodes Expanded: 46, Optimal Moves: 225, Optimal Gcost: 250.095520
(startX, startY): (10,93) goalX, goalY: (180,136)
Octile::			 A star my openlist elapsed time: 0.017082, Nodes Expanded: 6413, Optimal Moves: 227, Optimal Gcost: 249.610245
Differential Heuristic::	 A star my openlist elapsed time: 0.010109, Nodes Expanded: 3777, Optimal Moves: 227, Optimal G cost: 249.610245
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007566, Nodes Expanded: 3076, Optimal Moves: 227, Optimal Gcost: 249.610245
Canonical A Star::A star my openlist elapsed time: 0.005378, Nodes Expanded: 3127, Optimal Moves: 227, Optimal Gcost: 249.610260
Jump Point Search::A star my openlist elapsed time: 0.000878, Nodes Expanded: 97, Optimal Moves: 227, Optimal Gcost: 249.610260
(startX, startY): (100,111) goalX, goalY: (119,153)
Octile::			 A star my openlist elapsed time: 0.011800, Nodes Expanded: 4908, Optimal Moves: 213, Optimal Gcost: 248.865112
Differential Heuristic::	 A star my openlist elapsed time: 0.009198, Nodes Expanded: 3499, Optimal Moves: 213, Optimal G cost: 248.865112
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008035, Nodes Expanded: 3024, Optimal Moves: 213, Optimal Gcost: 248.865112
Canonical A Star::A star my openlist elapsed time: 0.005471, Nodes Expanded: 3024, Optimal Moves: 213, Optimal Gcost: 248.865112
Jump Point Search::A star my openlist elapsed time: 0.000933, Nodes Expanded: 61, Optimal Moves: 213, Optimal Gcost: 248.865112
(startX, startY): (100,24) goalX, goalY: (30,150)
Octile::			 A star my openlist elapsed time: 0.010022, Nodes Expanded: 4578, Optimal Moves: 212, Optimal Gcost: 250.350403
Differential Heuristic::	 A star my openlist elapsed time: 0.007756, Nodes Expanded: 3374, Optimal Moves: 212, Optimal G cost: 250.350403
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007055, Nodes Expanded: 2940, Optimal Moves: 212, Optimal Gcost: 250.350403
Canonical A Star::A star my openlist elapsed time: 0.004485, Nodes Expanded: 2940, Optimal Moves: 212, Optimal Gcost: 250.350403
Jump Point Search::A star my openlist elapsed time: 0.000722, Nodes Expanded: 46, Optimal Moves: 212, Optimal Gcost: 250.350403
(startX, startY): (100,30) goalX, goalY: (19,135)
Octile::			 A star my openlist elapsed time: 0.008594, Nodes Expanded: 4051, Optimal Moves: 218, Optimal Gcost: 251.379822
Differential Heuristic::	 A star my openlist elapsed time: 0.004034, Nodes Expanded: 1764, Optimal Moves: 218, Optimal G cost: 251.379822
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003799, Nodes Expanded: 1657, Optimal Moves: 218, Optimal Gcost: 251.379822
Canonical A Star::A star my openlist elapsed time: 0.002257, Nodes Expanded: 1615, Optimal Moves: 218, Optimal Gcost: 251.379807
Jump Point Search::A star my openlist elapsed time: 0.000435, Nodes Expanded: 29, Optimal Moves: 218, Optimal Gcost: 251.379807
(startX, startY): (100,97) goalX, goalY: (134,134)
Octile::			 A star my openlist elapsed time: 0.013527, Nodes Expanded: 5482, Optimal Moves: 218, Optimal Gcost: 251.794022
Differential Heuristic::	 A star my openlist elapsed time: 0.004458, Nodes Expanded: 1707, Optimal Moves: 218, Optimal G cost: 251.794022
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004172, Nodes Expanded: 1646, Optimal Moves: 218, Optimal Gcost: 251.794022
Canonical A Star::A star my openlist elapsed time: 0.002537, Nodes Expanded: 1656, Optimal Moves: 218, Optimal Gcost: 251.794022
Jump Point Search::A star my openlist elapsed time: 0.000468, Nodes Expanded: 35, Optimal Moves: 218, Optimal Gcost: 251.794022
(startX, startY): (101,177) goalX, goalY: (109,112)
Octile::			 A star my openlist elapsed time: 0.028815, Nodes Expanded: 9868, Optimal Moves: 201, Optimal Gcost: 248.463120
Differential Heuristic::	 A star my openlist elapsed time: 0.010788, Nodes Expanded: 4633, Optimal Moves: 201, Optimal G cost: 248.463120
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007737, Nodes Expanded: 3449, Optimal Moves: 201, Optimal Gcost: 248.463120
Canonical A Star::A star my openlist elapsed time: 0.004993, Nodes Expanded: 3449, Optimal Moves: 201, Optimal Gcost: 248.463120
Jump Point Search::A star my openlist elapsed time: 0.000526, Nodes Expanded: 32, Optimal Moves: 201, Optimal Gcost: 248.463120
(startX, startY): (101,86) goalX, goalY: (127,128)
Octile::			 A star my openlist elapsed time: 0.015485, Nodes Expanded: 6140, Optimal Moves: 221, Optimal Gcost: 249.823456
Differential Heuristic::	 A star my openlist elapsed time: 0.004969, Nodes Expanded: 2008, Optimal Moves: 221, Optimal G cost: 248.995026
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005276, Nodes Expanded: 1927, Optimal Moves: 221, Optimal Gcost: 248.995026
Canonical A Star::A star my openlist elapsed time: 0.003309, Nodes Expanded: 1927, Optimal Moves: 221, Optimal Gcost: 248.995026
Jump Point Search::A star my openlist elapsed time: 0.000779, Nodes Expanded: 35, Optimal Moves: 221, Optimal Gcost: 248.995026
(startX, startY): (10,114) goalX, goalY: (114,43)
Octile::			 A star my openlist elapsed time: 0.023862, Nodes Expanded: 8282, Optimal Moves: 218, Optimal Gcost: 252.622467
Differential Heuristic::	 A star my openlist elapsed time: 0.010639, Nodes Expanded: 4237, Optimal Moves: 218, Optimal G cost: 252.622467
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005181, Nodes Expanded: 2153, Optimal Moves: 218, Optimal Gcost: 252.622467
Canonical A Star::A star my openlist elapsed time: 0.003875, Nodes Expanded: 2153, Optimal Moves: 218, Optimal Gcost: 252.622467
Jump Point Search::A star my openlist elapsed time: 0.000477, Nodes Expanded: 43, Optimal Moves: 218, Optimal Gcost: 252.622467
(startX, startY): (10,62) goalX, goalY: (164,107)
Octile::			 A star my openlist elapsed time: 0.017068, Nodes Expanded: 6077, Optimal Moves: 218, Optimal Gcost: 253.450897
Differential Heuristic::	 A star my openlist elapsed time: 0.009310, Nodes Expanded: 3785, Optimal Moves: 218, Optimal G cost: 253.450897
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007764, Nodes Expanded: 3037, Optimal Moves: 218, Optimal Gcost: 253.450897
Canonical A Star::A star my openlist elapsed time: 0.005266, Nodes Expanded: 3037, Optimal Moves: 218, Optimal Gcost: 253.450897
Jump Point Search::A star my openlist elapsed time: 0.000986, Nodes Expanded: 98, Optimal Moves: 218, Optimal Gcost: 253.450897
(startX, startY): (100,114) goalX, goalY: (98,187)
Octile::			 A star my openlist elapsed time: 0.011390, Nodes Expanded: 4723, Optimal Moves: 212, Optimal Gcost: 254.906769
Differential Heuristic::	 A star my openlist elapsed time: 0.013331, Nodes Expanded: 5457, Optimal Moves: 212, Optimal G cost: 254.906769
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010295, Nodes Expanded: 4061, Optimal Moves: 212, Optimal Gcost: 254.906769
Canonical A Star::A star my openlist elapsed time: 0.007575, Nodes Expanded: 4061, Optimal Moves: 212, Optimal Gcost: 254.906769
Jump Point Search::A star my openlist elapsed time: 0.000874, Nodes Expanded: 80, Optimal Moves: 212, Optimal Gcost: 254.906769
(startX, startY): (100,20) goalX, goalY: (28,146)
Octile::			 A star my openlist elapsed time: 0.010130, Nodes Expanded: 4481, Optimal Moves: 218, Optimal Gcost: 254.693542
Differential Heuristic::	 A star my openlist elapsed time: 0.006808, Nodes Expanded: 3150, Optimal Moves: 218, Optimal G cost: 254.693542
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006493, Nodes Expanded: 2829, Optimal Moves: 218, Optimal Gcost: 254.693542
Canonical A Star::A star my openlist elapsed time: 0.004915, Nodes Expanded: 2829, Optimal Moves: 218, Optimal Gcost: 254.693542
Jump Point Search::A star my openlist elapsed time: 0.000636, Nodes Expanded: 36, Optimal Moves: 218, Optimal Gcost: 254.693542
(startX, startY): (100,42) goalX, goalY: (27,119)
Octile::			 A star my openlist elapsed time: 0.012163, Nodes Expanded: 5491, Optimal Moves: 223, Optimal Gcost: 252.651886
Differential Heuristic::	 A star my openlist elapsed time: 0.005090, Nodes Expanded: 2224, Optimal Moves: 223, Optimal G cost: 252.651886
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005187, Nodes Expanded: 2106, Optimal Moves: 223, Optimal Gcost: 252.651886
Canonical A Star::A star my openlist elapsed time: 0.003225, Nodes Expanded: 2106, Optimal Moves: 223, Optimal Gcost: 252.651886
Jump Point Search::A star my openlist elapsed time: 0.000562, Nodes Expanded: 27, Optimal Moves: 223, Optimal Gcost: 252.651886
(startX, startY): (100,85) goalX, goalY: (143,141)
Octile::			 A star my openlist elapsed time: 0.014674, Nodes Expanded: 5368, Optimal Moves: 227, Optimal Gcost: 254.580811
Differential Heuristic::	 A star my openlist elapsed time: 0.007759, Nodes Expanded: 2960, Optimal Moves: 227, Optimal G cost: 254.580811
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007316, Nodes Expanded: 2712, Optimal Moves: 227, Optimal Gcost: 254.580811
Canonical A Star::A star my openlist elapsed time: 0.005021, Nodes Expanded: 2712, Optimal Moves: 227, Optimal Gcost: 254.580811
Jump Point Search::A star my openlist elapsed time: 0.000859, Nodes Expanded: 53, Optimal Moves: 227, Optimal Gcost: 254.580811
(startX, startY): (101,177) goalX, goalY: (116,113)
Octile::			 A star my openlist elapsed time: 0.030251, Nodes Expanded: 10197, Optimal Moves: 207, Optimal Gcost: 255.291550
Differential Heuristic::	 A star my openlist elapsed time: 0.010769, Nodes Expanded: 4678, Optimal Moves: 207, Optimal G cost: 255.291550
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008157, Nodes Expanded: 3574, Optimal Moves: 207, Optimal Gcost: 255.291550
Canonical A Star::A star my openlist elapsed time: 0.005505, Nodes Expanded: 3574, Optimal Moves: 207, Optimal Gcost: 255.291550
Jump Point Search::A star my openlist elapsed time: 0.000524, Nodes Expanded: 33, Optimal Moves: 207, Optimal Gcost: 255.291550
(startX, startY): (101,24) goalX, goalY: (22,133)
Octile::			 A star my openlist elapsed time: 0.009223, Nodes Expanded: 4120, Optimal Moves: 220, Optimal Gcost: 254.208252
Differential Heuristic::	 A star my openlist elapsed time: 0.001719, Nodes Expanded: 758, Optimal Moves: 220, Optimal G cost: 254.208252
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001756, Nodes Expanded: 758, Optimal Moves: 220, Optimal Gcost: 254.208252
Canonical A Star::A star my openlist elapsed time: 0.001004, Nodes Expanded: 758, Optimal Moves: 220, Optimal Gcost: 254.208252
Jump Point Search::A star my openlist elapsed time: 0.000375, Nodes Expanded: 17, Optimal Moves: 220, Optimal Gcost: 254.208252
(startX, startY): (101,31) goalX, goalY: (34,124)
Octile::			 A star my openlist elapsed time: 0.014095, Nodes Expanded: 5996, Optimal Moves: 219, Optimal Gcost: 254.450882
Differential Heuristic::	 A star my openlist elapsed time: 0.002036, Nodes Expanded: 691, Optimal Moves: 219, Optimal G cost: 254.450882
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001604, Nodes Expanded: 690, Optimal Moves: 219, Optimal Gcost: 254.450882
Canonical A Star::A star my openlist elapsed time: 0.001104, Nodes Expanded: 702, Optimal Moves: 219, Optimal Gcost: 254.450882
Jump Point Search::A star my openlist elapsed time: 0.000485, Nodes Expanded: 17, Optimal Moves: 219, Optimal Gcost: 254.450882
(startX, startY): (101,41) goalX, goalY: (32,117)
Octile::			 A star my openlist elapsed time: 0.014124, Nodes Expanded: 6382, Optimal Moves: 224, Optimal Gcost: 255.308746
Differential Heuristic::	 A star my openlist elapsed time: 0.003130, Nodes Expanded: 1534, Optimal Moves: 224, Optimal G cost: 255.308746
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003317, Nodes Expanded: 1469, Optimal Moves: 224, Optimal Gcost: 255.308746
Canonical A Star::A star my openlist elapsed time: 0.002227, Nodes Expanded: 1469, Optimal Moves: 224, Optimal Gcost: 255.308746
Jump Point Search::A star my openlist elapsed time: 0.000576, Nodes Expanded: 24, Optimal Moves: 224, Optimal Gcost: 255.308746
(startX, startY): (10,102) goalX, goalY: (151,51)
Octile::			 A star my openlist elapsed time: 0.025104, Nodes Expanded: 8239, Optimal Moves: 222, Optimal Gcost: 256.208252
Differential Heuristic::	 A star my openlist elapsed time: 0.009838, Nodes Expanded: 3974, Optimal Moves: 222, Optimal G cost: 256.208252
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006685, Nodes Expanded: 2837, Optimal Moves: 222, Optimal Gcost: 256.208252
Canonical A Star::A star my openlist elapsed time: 0.004744, Nodes Expanded: 2837, Optimal Moves: 222, Optimal Gcost: 256.208252
Jump Point Search::A star my openlist elapsed time: 0.000546, Nodes Expanded: 50, Optimal Moves: 222, Optimal Gcost: 256.208252
(startX, startY): (10,115) goalX, goalY: (164,33)
Octile::			 A star my openlist elapsed time: 0.025789, Nodes Expanded: 8042, Optimal Moves: 227, Optimal Gcost: 259.965607
Differential Heuristic::	 A star my openlist elapsed time: 0.015112, Nodes Expanded: 5218, Optimal Moves: 227, Optimal G cost: 259.965607
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006552, Nodes Expanded: 2805, Optimal Moves: 227, Optimal Gcost: 259.965607
Canonical A Star::A star my openlist elapsed time: 0.004222, Nodes Expanded: 2805, Optimal Moves: 227, Optimal Gcost: 259.965607
Jump Point Search::A star my openlist elapsed time: 0.000552, Nodes Expanded: 59, Optimal Moves: 227, Optimal Gcost: 259.965607
(startX, startY): (10,118) goalX, goalY: (149,28)
Octile::			 A star my openlist elapsed time: 0.022400, Nodes Expanded: 8164, Optimal Moves: 229, Optimal Gcost: 258.237671
Differential Heuristic::	 A star my openlist elapsed time: 0.010517, Nodes Expanded: 4486, Optimal Moves: 229, Optimal G cost: 258.237671
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005177, Nodes Expanded: 2362, Optimal Moves: 229, Optimal Gcost: 258.237671
Canonical A Star::A star my openlist elapsed time: 0.003837, Nodes Expanded: 2362, Optimal Moves: 229, Optimal Gcost: 258.237671
Jump Point Search::A star my openlist elapsed time: 0.000510, Nodes Expanded: 45, Optimal Moves: 229, Optimal Gcost: 258.237671
(startX, startY): (10,122) goalX, goalY: (104,39)
Octile::			 A star my openlist elapsed time: 0.025318, Nodes Expanded: 8731, Optimal Moves: 220, Optimal Gcost: 256.279327
Differential Heuristic::	 A star my openlist elapsed time: 0.010460, Nodes Expanded: 4124, Optimal Moves: 220, Optimal G cost: 256.279327
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005189, Nodes Expanded: 2211, Optimal Moves: 220, Optimal Gcost: 256.279327
Canonical A Star::A star my openlist elapsed time: 0.003746, Nodes Expanded: 2211, Optimal Moves: 220, Optimal Gcost: 256.279327
Jump Point Search::A star my openlist elapsed time: 0.000535, Nodes Expanded: 42, Optimal Moves: 220, Optimal Gcost: 256.279327
(startX, startY): (10,84) goalX, goalY: (153,80)
Octile::			 A star my openlist elapsed time: 0.018343, Nodes Expanded: 7240, Optimal Moves: 230, Optimal Gcost: 257.995026
Differential Heuristic::	 A star my openlist elapsed time: 0.003293, Nodes Expanded: 1622, Optimal Moves: 230, Optimal G cost: 257.995026
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003091, Nodes Expanded: 1494, Optimal Moves: 230, Optimal Gcost: 257.995026
Canonical A Star::A star my openlist elapsed time: 0.002199, Nodes Expanded: 1497, Optimal Moves: 230, Optimal Gcost: 257.995056
Jump Point Search::A star my openlist elapsed time: 0.000583, Nodes Expanded: 34, Optimal Moves: 230, Optimal Gcost: 257.995056
(startX, startY): (10,86) goalX, goalY: (147,75)
Octile::			 A star my openlist elapsed time: 0.019024, Nodes Expanded: 7082, Optimal Moves: 235, Optimal Gcost: 259.681305
Differential Heuristic::	 A star my openlist elapsed time: 0.005911, Nodes Expanded: 2658, Optimal Moves: 235, Optimal G cost: 259.681305
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005334, Nodes Expanded: 2248, Optimal Moves: 235, Optimal Gcost: 259.681305
Canonical A Star::A star my openlist elapsed time: 0.003429, Nodes Expanded: 2253, Optimal Moves: 235, Optimal Gcost: 259.681335
Jump Point Search::A star my openlist elapsed time: 0.000489, Nodes Expanded: 50, Optimal Moves: 235, Optimal Gcost: 259.681335
(startX, startY): (10,86) goalX, goalY: (183,109)
Octile::			 A star my openlist elapsed time: 0.016165, Nodes Expanded: 6002, Optimal Moves: 229, Optimal Gcost: 256.995056
Differential Heuristic::	 A star my openlist elapsed time: 0.010818, Nodes Expanded: 4412, Optimal Moves: 229, Optimal G cost: 256.995056
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006985, Nodes Expanded: 3033, Optimal Moves: 229, Optimal Gcost: 256.995056
Canonical A Star::A star my openlist elapsed time: 0.005077, Nodes Expanded: 3033, Optimal Moves: 229, Optimal Gcost: 256.995056
Jump Point Search::A star my openlist elapsed time: 0.000727, Nodes Expanded: 92, Optimal Moves: 229, Optimal Gcost: 256.995056
(startX, startY): (10,87) goalX, goalY: (184,110)
Octile::			 A star my openlist elapsed time: 0.016094, Nodes Expanded: 6184, Optimal Moves: 230, Optimal Gcost: 257.995026
Differential Heuristic::	 A star my openlist elapsed time: 0.011895, Nodes Expanded: 4477, Optimal Moves: 230, Optimal G cost: 257.995026
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007324, Nodes Expanded: 3168, Optimal Moves: 230, Optimal Gcost: 257.995026
Canonical A Star::A star my openlist elapsed time: 0.005254, Nodes Expanded: 3169, Optimal Moves: 230, Optimal Gcost: 257.995056
Jump Point Search::A star my openlist elapsed time: 0.000814, Nodes Expanded: 96, Optimal Moves: 230, Optimal Gcost: 257.995056
(startX, startY): (10,89) goalX, goalY: (185,111)
Octile::			 A star my openlist elapsed time: 0.016148, Nodes Expanded: 6349, Optimal Moves: 231, Optimal Gcost: 258.580811
Differential Heuristic::	 A star my openlist elapsed time: 0.011139, Nodes Expanded: 4510, Optimal Moves: 231, Optimal G cost: 258.580811
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008857, Nodes Expanded: 3254, Optimal Moves: 231, Optimal Gcost: 258.580811
Canonical A Star::A star my openlist elapsed time: 0.006211, Nodes Expanded: 3264, Optimal Moves: 231, Optimal Gcost: 258.580841
Jump Point Search::A star my openlist elapsed time: 0.001187, Nodes Expanded: 94, Optimal Moves: 231, Optimal Gcost: 258.580841
(startX, startY): (100,168) goalX, goalY: (122,120)
Octile::			 A star my openlist elapsed time: 0.032769, Nodes Expanded: 10473, Optimal Moves: 209, Optimal Gcost: 257.705750
Differential Heuristic::	 A star my openlist elapsed time: 0.011135, Nodes Expanded: 4669, Optimal Moves: 209, Optimal G cost: 257.705750
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008445, Nodes Expanded: 3720, Optimal Moves: 209, Optimal Gcost: 257.705750
Canonical A Star::A star my openlist elapsed time: 0.005916, Nodes Expanded: 3940, Optimal Moves: 209, Optimal Gcost: 257.705780
Jump Point Search::A star my openlist elapsed time: 0.000712, Nodes Expanded: 44, Optimal Moves: 209, Optimal Gcost: 257.705780
(startX, startY): (10,66) goalX, goalY: (182,136)
Octile::			 A star my openlist elapsed time: 0.018344, Nodes Expanded: 6597, Optimal Moves: 232, Optimal Gcost: 262.894531
Differential Heuristic::	 A star my openlist elapsed time: 0.011882, Nodes Expanded: 4647, Optimal Moves: 232, Optimal G cost: 262.894531
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009656, Nodes Expanded: 3848, Optimal Moves: 232, Optimal Gcost: 262.894531
Canonical A Star::A star my openlist elapsed time: 0.006561, Nodes Expanded: 3848, Optimal Moves: 232, Optimal Gcost: 262.894531
Jump Point Search::A star my openlist elapsed time: 0.001304, Nodes Expanded: 124, Optimal Moves: 232, Optimal Gcost: 262.894531
(startX, startY): (10,91) goalX, goalY: (143,71)
Octile::			 A star my openlist elapsed time: 0.018805, Nodes Expanded: 7221, Optimal Moves: 239, Optimal Gcost: 261.610229
Differential Heuristic::	 A star my openlist elapsed time: 0.006816, Nodes Expanded: 2980, Optimal Moves: 239, Optimal G cost: 261.610229
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005671, Nodes Expanded: 2384, Optimal Moves: 239, Optimal Gcost: 261.610229
Canonical A Star::A star my openlist elapsed time: 0.004024, Nodes Expanded: 2392, Optimal Moves: 239, Optimal Gcost: 261.610260
Jump Point Search::A star my openlist elapsed time: 0.000537, Nodes Expanded: 54, Optimal Moves: 239, Optimal Gcost: 261.610260
(startX, startY): (100,10) goalX, goalY: (31,146)
Octile::			 A star my openlist elapsed time: 0.010206, Nodes Expanded: 4435, Optimal Moves: 225, Optimal Gcost: 261.693542
Differential Heuristic::	 A star my openlist elapsed time: 0.006586, Nodes Expanded: 3098, Optimal Moves: 225, Optimal G cost: 261.693542
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006757, Nodes Expanded: 2867, Optimal Moves: 225, Optimal Gcost: 261.693542
Canonical A Star::A star my openlist elapsed time: 0.004257, Nodes Expanded: 2860, Optimal Moves: 225, Optimal Gcost: 261.693542
Jump Point Search::A star my openlist elapsed time: 0.000749, Nodes Expanded: 40, Optimal Moves: 225, Optimal Gcost: 261.693542
(startX, startY): (100,42) goalX, goalY: (7,120)
Octile::			 A star my openlist elapsed time: 0.010117, Nodes Expanded: 4543, Optimal Moves: 227, Optimal Gcost: 262.865112
Differential Heuristic::	 A star my openlist elapsed time: 0.010817, Nodes Expanded: 4144, Optimal Moves: 227, Optimal G cost: 262.865112
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006427, Nodes Expanded: 2689, Optimal Moves: 227, Optimal Gcost: 262.865112
Canonical A Star::A star my openlist elapsed time: 0.004353, Nodes Expanded: 2689, Optimal Moves: 227, Optimal Gcost: 262.865112
Jump Point Search::A star my openlist elapsed time: 0.000569, Nodes Expanded: 39, Optimal Moves: 227, Optimal Gcost: 262.865112
(startX, startY): (100,46) goalX, goalY: (44,116)
Octile::			 A star my openlist elapsed time: 0.017958, Nodes Expanded: 7528, Optimal Moves: 227, Optimal Gcost: 260.794037
Differential Heuristic::	 A star my openlist elapsed time: 0.005327, Nodes Expanded: 1775, Optimal Moves: 227, Optimal G cost: 260.794037
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005273, Nodes Expanded: 1738, Optimal Moves: 227, Optimal Gcost: 260.794037
Canonical A Star::A star my openlist elapsed time: 0.004240, Nodes Expanded: 1738, Optimal Moves: 227, Optimal Gcost: 260.794037
Jump Point Search::A star my openlist elapsed time: 0.000648, Nodes Expanded: 27, Optimal Moves: 227, Optimal Gcost: 260.794037
(startX, startY): (100,87) goalX, goalY: (144,123)
Octile::			 A star my openlist elapsed time: 0.018958, Nodes Expanded: 5825, Optimal Moves: 228, Optimal Gcost: 262.208252
Differential Heuristic::	 A star my openlist elapsed time: 0.004931, Nodes Expanded: 1732, Optimal Moves: 228, Optimal G cost: 262.208252
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005349, Nodes Expanded: 1621, Optimal Moves: 228, Optimal Gcost: 262.208252
Canonical A Star::A star my openlist elapsed time: 0.003276, Nodes Expanded: 1621, Optimal Moves: 228, Optimal Gcost: 262.208252
Jump Point Search::A star my openlist elapsed time: 0.000552, Nodes Expanded: 31, Optimal Moves: 228, Optimal Gcost: 262.208252
(startX, startY): (101,28) goalX, goalY: (16,122)
Octile::			 A star my openlist elapsed time: 0.016063, Nodes Expanded: 4591, Optimal Moves: 224, Optimal Gcost: 261.936188
Differential Heuristic::	 A star my openlist elapsed time: 0.009980, Nodes Expanded: 3157, Optimal Moves: 224, Optimal G cost: 261.936188
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007956, Nodes Expanded: 2513, Optimal Moves: 224, Optimal Gcost: 261.936188
Canonical A Star::A star my openlist elapsed time: 0.005534, Nodes Expanded: 2391, Optimal Moves: 224, Optimal Gcost: 261.936157
Jump Point Search::A star my openlist elapsed time: 0.000800, Nodes Expanded: 31, Optimal Moves: 224, Optimal Gcost: 261.936157
(startX, startY): (101,49) goalX, goalY: (47,114)
Octile::			 A star my openlist elapsed time: 0.026086, Nodes Expanded: 7830, Optimal Moves: 229, Optimal Gcost: 262.379822
Differential Heuristic::	 A star my openlist elapsed time: 0.008724, Nodes Expanded: 2398, Optimal Moves: 229, Optimal G cost: 262.379822
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006898, Nodes Expanded: 2350, Optimal Moves: 229, Optimal Gcost: 262.379822
Canonical A Star::A star my openlist elapsed time: 0.004636, Nodes Expanded: 2331, Optimal Moves: 229, Optimal Gcost: 262.379822
Jump Point Search::A star my openlist elapsed time: 0.000778, Nodes Expanded: 30, Optimal Moves: 229, Optimal Gcost: 262.379822
(startX, startY): (101,97) goalX, goalY: (141,125)
Octile::			 A star my openlist elapsed time: 0.021223, Nodes Expanded: 5759, Optimal Moves: 226, Optimal Gcost: 263.521942
Differential Heuristic::	 A star my openlist elapsed time: 0.004072, Nodes Expanded: 1456, Optimal Moves: 226, Optimal G cost: 263.521942
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003574, Nodes Expanded: 1384, Optimal Moves: 226, Optimal Gcost: 263.521942
Canonical A Star::A star my openlist elapsed time: 0.002428, Nodes Expanded: 1395, Optimal Moves: 226, Optimal Gcost: 263.521973
Jump Point Search::A star my openlist elapsed time: 0.000537, Nodes Expanded: 31, Optimal Moves: 226, Optimal Gcost: 263.521973
(startX, startY): (102,26) goalX, goalY: (13,131)
Octile::			 A star my openlist elapsed time: 0.010872, Nodes Expanded: 4232, Optimal Moves: 227, Optimal Gcost: 261.622467
Differential Heuristic::	 A star my openlist elapsed time: 0.006987, Nodes Expanded: 2823, Optimal Moves: 227, Optimal G cost: 261.622467
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007277, Nodes Expanded: 2340, Optimal Moves: 227, Optimal Gcost: 261.622467
Canonical A Star::A star my openlist elapsed time: 0.004282, Nodes Expanded: 2340, Optimal Moves: 227, Optimal Gcost: 261.622467
Jump Point Search::A star my openlist elapsed time: 0.000675, Nodes Expanded: 32, Optimal Moves: 227, Optimal Gcost: 261.622467
(startX, startY): (10,115) goalX, goalY: (159,30)
Octile::			 A star my openlist elapsed time: 0.037861, Nodes Expanded: 8833, Optimal Moves: 231, Optimal Gcost: 265.622467
Differential Heuristic::	 A star my openlist elapsed time: 0.015701, Nodes Expanded: 5413, Optimal Moves: 231, Optimal G cost: 265.622467
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007680, Nodes Expanded: 3313, Optimal Moves: 231, Optimal Gcost: 265.622467
Canonical A Star::A star my openlist elapsed time: 0.005388, Nodes Expanded: 3313, Optimal Moves: 231, Optimal Gcost: 265.622467
Jump Point Search::A star my openlist elapsed time: 0.000664, Nodes Expanded: 71, Optimal Moves: 231, Optimal Gcost: 265.622467
(startX, startY): (10,77) goalX, goalY: (138,77)
Octile::			 A star my openlist elapsed time: 0.019344, Nodes Expanded: 7464, Optimal Moves: 236, Optimal Gcost: 265.237671
Differential Heuristic::	 A star my openlist elapsed time: 0.008429, Nodes Expanded: 3398, Optimal Moves: 236, Optimal G cost: 265.237671
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007013, Nodes Expanded: 3018, Optimal Moves: 236, Optimal Gcost: 265.237671
Canonical A Star::A star my openlist elapsed time: 0.004957, Nodes Expanded: 3018, Optimal Moves: 236, Optimal Gcost: 265.237701
Jump Point Search::A star my openlist elapsed time: 0.000883, Nodes Expanded: 88, Optimal Moves: 236, Optimal Gcost: 265.237701
(startX, startY): (10,78) goalX, goalY: (150,76)
Octile::			 A star my openlist elapsed time: 0.018780, Nodes Expanded: 7237, Optimal Moves: 237, Optimal Gcost: 264.995026
Differential Heuristic::	 A star my openlist elapsed time: 0.007078, Nodes Expanded: 2992, Optimal Moves: 237, Optimal G cost: 264.995026
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006055, Nodes Expanded: 2557, Optimal Moves: 237, Optimal Gcost: 264.995026
Canonical A Star::A star my openlist elapsed time: 0.003993, Nodes Expanded: 2579, Optimal Moves: 237, Optimal Gcost: 264.995056
Jump Point Search::A star my openlist elapsed time: 0.000610, Nodes Expanded: 65, Optimal Moves: 237, Optimal Gcost: 264.995056
(startX, startY): (100,29) goalX, goalY: (42,121)
Octile::			 A star my openlist elapsed time: 0.016861, Nodes Expanded: 7327, Optimal Moves: 228, Optimal Gcost: 265.521942
Differential Heuristic::	 A star my openlist elapsed time: 0.004197, Nodes Expanded: 1814, Optimal Moves: 228, Optimal G cost: 265.521942
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004014, Nodes Expanded: 1801, Optimal Moves: 228, Optimal Gcost: 265.521942
Canonical A Star::A star my openlist elapsed time: 0.002966, Nodes Expanded: 1804, Optimal Moves: 228, Optimal Gcost: 265.521942
Jump Point Search::A star my openlist elapsed time: 0.000422, Nodes Expanded: 27, Optimal Moves: 228, Optimal Gcost: 265.521942
(startX, startY): (100,4) goalX, goalY: (31,140)
Octile::			 A star my openlist elapsed time: 0.008882, Nodes Expanded: 4147, Optimal Moves: 231, Optimal Gcost: 265.208252
Differential Heuristic::	 A star my openlist elapsed time: 0.003724, Nodes Expanded: 1746, Optimal Moves: 231, Optimal G cost: 265.208252
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003632, Nodes Expanded: 1691, Optimal Moves: 231, Optimal Gcost: 265.208252
Canonical A Star::A star my openlist elapsed time: 0.002190, Nodes Expanded: 1711, Optimal Moves: 231, Optimal Gcost: 265.208252
Jump Point Search::A star my openlist elapsed time: 0.000438, Nodes Expanded: 31, Optimal Moves: 231, Optimal Gcost: 265.208252
(startX, startY): (100,45) goalX, goalY: (12,114)
Octile::			 A star my openlist elapsed time: 0.012103, Nodes Expanded: 5398, Optimal Moves: 230, Optimal Gcost: 264.622467
Differential Heuristic::	 A star my openlist elapsed time: 0.009402, Nodes Expanded: 4029, Optimal Moves: 230, Optimal G cost: 264.622467
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007328, Nodes Expanded: 3131, Optimal Moves: 230, Optimal Gcost: 264.622467
Canonical A Star::A star my openlist elapsed time: 0.004817, Nodes Expanded: 3131, Optimal Moves: 230, Optimal Gcost: 264.622467
Jump Point Search::A star my openlist elapsed time: 0.000688, Nodes Expanded: 46, Optimal Moves: 230, Optimal Gcost: 264.622467
(startX, startY): (100,47) goalX, goalY: (49,111)
Octile::			 A star my openlist elapsed time: 0.018263, Nodes Expanded: 7916, Optimal Moves: 232, Optimal Gcost: 267.450897
Differential Heuristic::	 A star my openlist elapsed time: 0.005839, Nodes Expanded: 2621, Optimal Moves: 232, Optimal G cost: 267.450897
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006277, Nodes Expanded: 2541, Optimal Moves: 232, Optimal Gcost: 267.450897
Canonical A Star::A star my openlist elapsed time: 0.003910, Nodes Expanded: 2542, Optimal Moves: 232, Optimal Gcost: 267.450897
Jump Point Search::A star my openlist elapsed time: 0.000566, Nodes Expanded: 31, Optimal Moves: 232, Optimal Gcost: 267.450897
(startX, startY): (100,48) goalX, goalY: (5,113)
Octile::			 A star my openlist elapsed time: 0.010767, Nodes Expanded: 4842, Optimal Moves: 231, Optimal Gcost: 266.450897
Differential Heuristic::	 A star my openlist elapsed time: 0.011870, Nodes Expanded: 4579, Optimal Moves: 231, Optimal G cost: 266.450897
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007246, Nodes Expanded: 2977, Optimal Moves: 231, Optimal Gcost: 266.450897
Canonical A Star::A star my openlist elapsed time: 0.004881, Nodes Expanded: 2977, Optimal Moves: 231, Optimal Gcost: 266.450897
Jump Point Search::A star my openlist elapsed time: 0.000503, Nodes Expanded: 45, Optimal Moves: 231, Optimal Gcost: 266.450897
(startX, startY): (100,78) goalX, goalY: (146,117)
Octile::			 A star my openlist elapsed time: 0.014813, Nodes Expanded: 5928, Optimal Moves: 231, Optimal Gcost: 266.036682
Differential Heuristic::	 A star my openlist elapsed time: 0.002224, Nodes Expanded: 1009, Optimal Moves: 231, Optimal G cost: 266.036682
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002077, Nodes Expanded: 952, Optimal Moves: 231, Optimal Gcost: 266.036682
Canonical A Star::A star my openlist elapsed time: 0.001322, Nodes Expanded: 978, Optimal Moves: 231, Optimal Gcost: 266.036682
Jump Point Search::A star my openlist elapsed time: 0.000398, Nodes Expanded: 25, Optimal Moves: 231, Optimal Gcost: 266.036682
(startX, startY): (101,22) goalX, goalY: (23,121)
Octile::			 A star my openlist elapsed time: 0.012112, Nodes Expanded: 5190, Optimal Moves: 231, Optimal Gcost: 266.036682
Differential Heuristic::	 A star my openlist elapsed time: 0.006867, Nodes Expanded: 2997, Optimal Moves: 231, Optimal G cost: 266.036682
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006474, Nodes Expanded: 2830, Optimal Moves: 231, Optimal Gcost: 266.036682
Canonical A Star::A star my openlist elapsed time: 0.004255, Nodes Expanded: 2830, Optimal Moves: 231, Optimal Gcost: 266.036682
Jump Point Search::A star my openlist elapsed time: 0.000536, Nodes Expanded: 40, Optimal Moves: 231, Optimal Gcost: 266.036682
(startX, startY): (10,123) goalX, goalY: (89,41)
Octile::			 A star my openlist elapsed time: 0.029574, Nodes Expanded: 9701, Optimal Moves: 235, Optimal Gcost: 270.036682
Differential Heuristic::	 A star my openlist elapsed time: 0.012172, Nodes Expanded: 4440, Optimal Moves: 235, Optimal G cost: 270.036682
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005833, Nodes Expanded: 2519, Optimal Moves: 235, Optimal Gcost: 270.036682
Canonical A Star::A star my openlist elapsed time: 0.004103, Nodes Expanded: 2519, Optimal Moves: 235, Optimal Gcost: 270.036682
Jump Point Search::A star my openlist elapsed time: 0.000554, Nodes Expanded: 48, Optimal Moves: 235, Optimal Gcost: 270.036682
(startX, startY): (10,130) goalX, goalY: (94,28)
Octile::			 A star my openlist elapsed time: 0.025814, Nodes Expanded: 9366, Optimal Moves: 233, Optimal Gcost: 270.107758
Differential Heuristic::	 A star my openlist elapsed time: 0.010193, Nodes Expanded: 4298, Optimal Moves: 233, Optimal G cost: 270.107758
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005020, Nodes Expanded: 2183, Optimal Moves: 233, Optimal Gcost: 270.107758
Canonical A Star::A star my openlist elapsed time: 0.003756, Nodes Expanded: 2255, Optimal Moves: 233, Optimal Gcost: 270.107758
Jump Point Search::A star my openlist elapsed time: 0.000532, Nodes Expanded: 44, Optimal Moves: 233, Optimal Gcost: 270.107758
(startX, startY): (100,41) goalX, goalY: (29,106)
Octile::			 A star my openlist elapsed time: 0.016207, Nodes Expanded: 7204, Optimal Moves: 236, Optimal Gcost: 271.036682
Differential Heuristic::	 A star my openlist elapsed time: 0.007129, Nodes Expanded: 3102, Optimal Moves: 236, Optimal G cost: 271.036682
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006801, Nodes Expanded: 2875, Optimal Moves: 236, Optimal Gcost: 271.036682
Canonical A Star::A star my openlist elapsed time: 0.004621, Nodes Expanded: 2875, Optimal Moves: 236, Optimal Gcost: 271.036682
Jump Point Search::A star my openlist elapsed time: 0.000662, Nodes Expanded: 38, Optimal Moves: 236, Optimal Gcost: 271.036682
(startX, startY): (100,42) goalX, goalY: (31,107)
Octile::			 A star my openlist elapsed time: 0.016507, Nodes Expanded: 7182, Optimal Moves: 235, Optimal Gcost: 268.794037
Differential Heuristic::	 A star my openlist elapsed time: 0.005654, Nodes Expanded: 2598, Optimal Moves: 235, Optimal G cost: 268.794037
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005643, Nodes Expanded: 2439, Optimal Moves: 235, Optimal Gcost: 268.794037
Canonical A Star::A star my openlist elapsed time: 0.004343, Nodes Expanded: 2439, Optimal Moves: 235, Optimal Gcost: 268.794037
Jump Point Search::A star my openlist elapsed time: 0.000537, Nodes Expanded: 33, Optimal Moves: 235, Optimal Gcost: 268.794037
(startX, startY): (100,50) goalX, goalY: (43,104)
Octile::			 A star my openlist elapsed time: 0.017648, Nodes Expanded: 7835, Optimal Moves: 238, Optimal Gcost: 270.965607
Differential Heuristic::	 A star my openlist elapsed time: 0.003506, Nodes Expanded: 1511, Optimal Moves: 238, Optimal G cost: 270.965607
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003186, Nodes Expanded: 1420, Optimal Moves: 238, Optimal Gcost: 270.965607
Canonical A Star::A star my openlist elapsed time: 0.001979, Nodes Expanded: 1378, Optimal Moves: 238, Optimal Gcost: 270.965607
Jump Point Search::A star my openlist elapsed time: 0.000499, Nodes Expanded: 25, Optimal Moves: 238, Optimal Gcost: 270.965607
(startX, startY): (100,81) goalX, goalY: (155,129)
Octile::			 A star my openlist elapsed time: 0.015604, Nodes Expanded: 6134, Optimal Moves: 243, Optimal Gcost: 270.580811
Differential Heuristic::	 A star my openlist elapsed time: 0.007967, Nodes Expanded: 3169, Optimal Moves: 243, Optimal G cost: 270.580811
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007521, Nodes Expanded: 3002, Optimal Moves: 243, Optimal Gcost: 270.580811
Canonical A Star::A star my openlist elapsed time: 0.005140, Nodes Expanded: 3004, Optimal Moves: 243, Optimal Gcost: 270.580811
Jump Point Search::A star my openlist elapsed time: 0.001005, Nodes Expanded: 61, Optimal Moves: 243, Optimal Gcost: 270.580811
(startX, startY): (101,106) goalX, goalY: (145,142)
Octile::			 A star my openlist elapsed time: 0.013918, Nodes Expanded: 5434, Optimal Moves: 234, Optimal Gcost: 269.036652
Differential Heuristic::	 A star my openlist elapsed time: 0.010061, Nodes Expanded: 3619, Optimal Moves: 234, Optimal G cost: 269.036652
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008986, Nodes Expanded: 3362, Optimal Moves: 234, Optimal Gcost: 269.036652
Canonical A Star::A star my openlist elapsed time: 0.005818, Nodes Expanded: 3362, Optimal Moves: 234, Optimal Gcost: 269.036652
Jump Point Search::A star my openlist elapsed time: 0.000851, Nodes Expanded: 73, Optimal Moves: 234, Optimal Gcost: 269.036652
(startX, startY): (101,26) goalX, goalY: (10,120)
Octile::			 A star my openlist elapsed time: 0.009505, Nodes Expanded: 4493, Optimal Moves: 230, Optimal Gcost: 269.593048
Differential Heuristic::	 A star my openlist elapsed time: 0.009193, Nodes Expanded: 3974, Optimal Moves: 230, Optimal G cost: 269.593048
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006325, Nodes Expanded: 2704, Optimal Moves: 230, Optimal Gcost: 269.593048
Canonical A Star::A star my openlist elapsed time: 0.004130, Nodes Expanded: 2704, Optimal Moves: 230, Optimal Gcost: 269.593048
Jump Point Search::A star my openlist elapsed time: 0.000496, Nodes Expanded: 44, Optimal Moves: 230, Optimal Gcost: 269.593048
(startX, startY): (101,38) goalX, goalY: (34,107)
Octile::			 A star my openlist elapsed time: 0.017083, Nodes Expanded: 7179, Optimal Moves: 234, Optimal Gcost: 268.208252
Differential Heuristic::	 A star my openlist elapsed time: 0.002994, Nodes Expanded: 1404, Optimal Moves: 234, Optimal G cost: 268.208252
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002981, Nodes Expanded: 1301, Optimal Moves: 234, Optimal Gcost: 268.208252
Canonical A Star::A star my openlist elapsed time: 0.001881, Nodes Expanded: 1301, Optimal Moves: 234, Optimal Gcost: 268.208252
Jump Point Search::A star my openlist elapsed time: 0.000470, Nodes Expanded: 24, Optimal Moves: 234, Optimal Gcost: 268.208252
(startX, startY): (101,81) goalX, goalY: (151,114)
Octile::			 A star my openlist elapsed time: 0.014112, Nodes Expanded: 5949, Optimal Moves: 236, Optimal Gcost: 271.450897
Differential Heuristic::	 A star my openlist elapsed time: 0.002689, Nodes Expanded: 1202, Optimal Moves: 236, Optimal G cost: 271.450897
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002555, Nodes Expanded: 1081, Optimal Moves: 236, Optimal Gcost: 271.450897
Canonical A Star::A star my openlist elapsed time: 0.001556, Nodes Expanded: 1078, Optimal Moves: 236, Optimal Gcost: 271.450897
Jump Point Search::A star my openlist elapsed time: 0.000348, Nodes Expanded: 26, Optimal Moves: 236, Optimal Gcost: 271.450897
(startX, startY): (10,101) goalX, goalY: (105,45)
Octile::			 A star my openlist elapsed time: 0.027647, Nodes Expanded: 9022, Optimal Moves: 238, Optimal Gcost: 275.936188
Differential Heuristic::	 A star my openlist elapsed time: 0.011282, Nodes Expanded: 4252, Optimal Moves: 238, Optimal G cost: 275.936188
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005803, Nodes Expanded: 2495, Optimal Moves: 238, Optimal Gcost: 275.936188
Canonical A Star::A star my openlist elapsed time: 0.004244, Nodes Expanded: 2495, Optimal Moves: 238, Optimal Gcost: 275.936188
Jump Point Search::A star my openlist elapsed time: 0.000500, Nodes Expanded: 45, Optimal Moves: 238, Optimal Gcost: 275.936188
(startX, startY): (10,61) goalX, goalY: (185,107)
Octile::			 A star my openlist elapsed time: 0.017274, Nodes Expanded: 6342, Optimal Moves: 239, Optimal Gcost: 274.865112
Differential Heuristic::	 A star my openlist elapsed time: 0.013973, Nodes Expanded: 5382, Optimal Moves: 239, Optimal G cost: 274.865112
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009701, Nodes Expanded: 3897, Optimal Moves: 239, Optimal Gcost: 274.865112
Canonical A Star::A star my openlist elapsed time: 0.007179, Nodes Expanded: 3897, Optimal Moves: 239, Optimal Gcost: 274.865112
Jump Point Search::A star my openlist elapsed time: 0.001068, Nodes Expanded: 116, Optimal Moves: 239, Optimal Gcost: 274.865112
(startX, startY): (10,62) goalX, goalY: (151,78)
Octile::			 A star my openlist elapsed time: 0.019362, Nodes Expanded: 7248, Optimal Moves: 240, Optimal Gcost: 272.965607
Differential Heuristic::	 A star my openlist elapsed time: 0.006586, Nodes Expanded: 2900, Optimal Moves: 240, Optimal G cost: 272.965607
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005953, Nodes Expanded: 2493, Optimal Moves: 240, Optimal Gcost: 272.965607
Canonical A Star::A star my openlist elapsed time: 0.003886, Nodes Expanded: 2493, Optimal Moves: 240, Optimal Gcost: 272.965607
Jump Point Search::A star my openlist elapsed time: 0.000709, Nodes Expanded: 65, Optimal Moves: 240, Optimal Gcost: 272.965607
(startX, startY): (10,64) goalX, goalY: (141,75)
Octile::			 A star my openlist elapsed time: 0.019466, Nodes Expanded: 7343, Optimal Moves: 241, Optimal Gcost: 273.137177
Differential Heuristic::	 A star my openlist elapsed time: 0.008696, Nodes Expanded: 3476, Optimal Moves: 241, Optimal G cost: 273.137177
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007758, Nodes Expanded: 3089, Optimal Moves: 241, Optimal Gcost: 273.137177
Canonical A Star::A star my openlist elapsed time: 0.005517, Nodes Expanded: 3089, Optimal Moves: 241, Optimal Gcost: 273.137177
Jump Point Search::A star my openlist elapsed time: 0.001229, Nodes Expanded: 91, Optimal Moves: 241, Optimal Gcost: 273.137177
(startX, startY): (10,67) goalX, goalY: (161,76)
Octile::			 A star my openlist elapsed time: 0.019144, Nodes Expanded: 7309, Optimal Moves: 238, Optimal Gcost: 274.693542
Differential Heuristic::	 A star my openlist elapsed time: 0.003643, Nodes Expanded: 1666, Optimal Moves: 238, Optimal G cost: 274.693542
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003313, Nodes Expanded: 1572, Optimal Moves: 238, Optimal Gcost: 274.693542
Canonical A Star::A star my openlist elapsed time: 0.002061, Nodes Expanded: 1572, Optimal Moves: 238, Optimal Gcost: 274.693542
Jump Point Search::A star my openlist elapsed time: 0.000584, Nodes Expanded: 40, Optimal Moves: 238, Optimal Gcost: 274.693542
(startX, startY): (10,68) goalX, goalY: (191,112)
Octile::			 A star my openlist elapsed time: 0.020386, Nodes Expanded: 6833, Optimal Moves: 240, Optimal Gcost: 275.450897
Differential Heuristic::	 A star my openlist elapsed time: 0.014019, Nodes Expanded: 5755, Optimal Moves: 240, Optimal G cost: 275.450897
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012381, Nodes Expanded: 4459, Optimal Moves: 240, Optimal Gcost: 275.450897
Canonical A Star::A star my openlist elapsed time: 0.008901, Nodes Expanded: 4459, Optimal Moves: 240, Optimal Gcost: 275.450897
Jump Point Search::A star my openlist elapsed time: 0.001669, Nodes Expanded: 133, Optimal Moves: 240, Optimal Gcost: 275.450897
(startX, startY): (10,75) goalX, goalY: (163,73)
Octile::			 A star my openlist elapsed time: 0.018247, Nodes Expanded: 7256, Optimal Moves: 240, Optimal Gcost: 274.622467
Differential Heuristic::	 A star my openlist elapsed time: 0.005512, Nodes Expanded: 2439, Optimal Moves: 240, Optimal G cost: 274.622467
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005365, Nodes Expanded: 2100, Optimal Moves: 240, Optimal Gcost: 274.622467
Canonical A Star::A star my openlist elapsed time: 0.004201, Nodes Expanded: 2100, Optimal Moves: 240, Optimal Gcost: 274.622467
Jump Point Search::A star my openlist elapsed time: 0.000529, Nodes Expanded: 51, Optimal Moves: 240, Optimal Gcost: 274.622467
(startX, startY): (10,84) goalX, goalY: (133,65)
Octile::			 A star my openlist elapsed time: 0.018390, Nodes Expanded: 7663, Optimal Moves: 245, Optimal Gcost: 274.651886
Differential Heuristic::	 A star my openlist elapsed time: 0.010489, Nodes Expanded: 4197, Optimal Moves: 245, Optimal G cost: 274.651886
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008400, Nodes Expanded: 3261, Optimal Moves: 245, Optimal Gcost: 274.651886
Canonical A Star::A star my openlist elapsed time: 0.005618, Nodes Expanded: 3303, Optimal Moves: 245, Optimal Gcost: 274.651917
Jump Point Search::A star my openlist elapsed time: 0.001307, Nodes Expanded: 95, Optimal Moves: 245, Optimal Gcost: 274.651917
(startX, startY): (10,86) goalX, goalY: (169,78)
Octile::			 A star my openlist elapsed time: 0.021299, Nodes Expanded: 7829, Optimal Moves: 243, Optimal Gcost: 272.237671
Differential Heuristic::	 A star my openlist elapsed time: 0.002403, Nodes Expanded: 996, Optimal Moves: 243, Optimal G cost: 272.237671
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002327, Nodes Expanded: 996, Optimal Moves: 243, Optimal Gcost: 272.237671
Canonical A Star::A star my openlist elapsed time: 0.001580, Nodes Expanded: 1045, Optimal Moves: 243, Optimal Gcost: 272.237671
Jump Point Search::A star my openlist elapsed time: 0.000399, Nodes Expanded: 29, Optimal Moves: 243, Optimal Gcost: 272.237671
(startX, startY): (100,25) goalX, goalY: (39,114)
Octile::			 A star my openlist elapsed time: 0.016270, Nodes Expanded: 7226, Optimal Moves: 235, Optimal Gcost: 272.936188
Differential Heuristic::	 A star my openlist elapsed time: 0.001734, Nodes Expanded: 816, Optimal Moves: 235, Optimal G cost: 272.936188
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001997, Nodes Expanded: 808, Optimal Moves: 235, Optimal Gcost: 272.936188
Canonical A Star::A star my openlist elapsed time: 0.001075, Nodes Expanded: 808, Optimal Moves: 235, Optimal Gcost: 272.936188
Jump Point Search::A star my openlist elapsed time: 0.000529, Nodes Expanded: 18, Optimal Moves: 235, Optimal Gcost: 272.936188
(startX, startY): (10,77) goalX, goalY: (160,69)
Octile::			 A star my openlist elapsed time: 0.017306, Nodes Expanded: 7373, Optimal Moves: 244, Optimal Gcost: 276.551392
Differential Heuristic::	 A star my openlist elapsed time: 0.007556, Nodes Expanded: 3211, Optimal Moves: 244, Optimal G cost: 276.551392
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006784, Nodes Expanded: 2766, Optimal Moves: 244, Optimal Gcost: 276.551392
Canonical A Star::A star my openlist elapsed time: 0.004843, Nodes Expanded: 2766, Optimal Moves: 244, Optimal Gcost: 276.551422
Jump Point Search::A star my openlist elapsed time: 0.000833, Nodes Expanded: 71, Optimal Moves: 244, Optimal Gcost: 276.551422
(startX, startY): (10,84) goalX, goalY: (129,68)
Octile::			 A star my openlist elapsed time: 0.023854, Nodes Expanded: 8163, Optimal Moves: 249, Optimal Gcost: 277.409241
Differential Heuristic::	 A star my openlist elapsed time: 0.009412, Nodes Expanded: 3973, Optimal Moves: 249, Optimal G cost: 277.409241
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006665, Nodes Expanded: 3050, Optimal Moves: 249, Optimal Gcost: 277.409241
Canonical A Star::A star my openlist elapsed time: 0.005775, Nodes Expanded: 3446, Optimal Moves: 249, Optimal Gcost: 277.409271
Jump Point Search::A star my openlist elapsed time: 0.000760, Nodes Expanded: 95, Optimal Moves: 249, Optimal Gcost: 277.409271
(startX, startY): (10,85) goalX, goalY: (134,61)
Octile::			 A star my openlist elapsed time: 0.018873, Nodes Expanded: 7702, Optimal Moves: 249, Optimal Gcost: 277.823456
Differential Heuristic::	 A star my openlist elapsed time: 0.010567, Nodes Expanded: 4424, Optimal Moves: 249, Optimal G cost: 277.823456
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007723, Nodes Expanded: 3317, Optimal Moves: 249, Optimal Gcost: 277.823456
Canonical A Star::A star my openlist elapsed time: 0.006389, Nodes Expanded: 3307, Optimal Moves: 249, Optimal Gcost: 277.823456
Jump Point Search::A star my openlist elapsed time: 0.001026, Nodes Expanded: 93, Optimal Moves: 249, Optimal Gcost: 277.823456
(startX, startY): (10,88) goalX, goalY: (130,63)
Octile::			 A star my openlist elapsed time: 0.020053, Nodes Expanded: 7797, Optimal Moves: 248, Optimal Gcost: 276.823456
Differential Heuristic::	 A star my openlist elapsed time: 0.011009, Nodes Expanded: 4354, Optimal Moves: 248, Optimal G cost: 276.823456
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007181, Nodes Expanded: 3277, Optimal Moves: 248, Optimal Gcost: 276.823456
Canonical A Star::A star my openlist elapsed time: 0.005249, Nodes Expanded: 3311, Optimal Moves: 248, Optimal Gcost: 276.823486
Jump Point Search::A star my openlist elapsed time: 0.000816, Nodes Expanded: 94, Optimal Moves: 248, Optimal Gcost: 276.823486
(startX, startY): (100,14) goalX, goalY: (13,124)
Octile::			 A star my openlist elapsed time: 0.009446, Nodes Expanded: 4418, Optimal Moves: 239, Optimal Gcost: 277.350403
Differential Heuristic::	 A star my openlist elapsed time: 0.008138, Nodes Expanded: 3410, Optimal Moves: 239, Optimal G cost: 277.350403
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006657, Nodes Expanded: 2660, Optimal Moves: 239, Optimal Gcost: 277.350403
Canonical A Star::A star my openlist elapsed time: 0.004199, Nodes Expanded: 2635, Optimal Moves: 239, Optimal Gcost: 277.350403
Jump Point Search::A star my openlist elapsed time: 0.000530, Nodes Expanded: 37, Optimal Moves: 239, Optimal Gcost: 277.350403
(startX, startY): (100,15) goalX, goalY: (35,119)
Octile::			 A star my openlist elapsed time: 0.016186, Nodes Expanded: 6600, Optimal Moves: 240, Optimal Gcost: 276.279327
Differential Heuristic::	 A star my openlist elapsed time: 0.001777, Nodes Expanded: 856, Optimal Moves: 240, Optimal G cost: 276.279327
Differential Heuristic & Octile::A star my openlist elapsed time: 0.001871, Nodes Expanded: 850, Optimal Moves: 240, Optimal Gcost: 276.279327
Canonical A Star::A star my openlist elapsed time: 0.001094, Nodes Expanded: 848, Optimal Moves: 240, Optimal Gcost: 276.279327
Jump Point Search::A star my openlist elapsed time: 0.000570, Nodes Expanded: 20, Optimal Moves: 240, Optimal Gcost: 276.279327
(startX, startY): (100,36) goalX, goalY: (22,110)
Octile::			 A star my openlist elapsed time: 0.018364, Nodes Expanded: 7560, Optimal Moves: 243, Optimal Gcost: 278.450867
Differential Heuristic::	 A star my openlist elapsed time: 0.009743, Nodes Expanded: 4167, Optimal Moves: 243, Optimal G cost: 278.450897
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009846, Nodes Expanded: 3997, Optimal Moves: 243, Optimal Gcost: 278.450897
Canonical A Star::A star my openlist elapsed time: 0.006756, Nodes Expanded: 3997, Optimal Moves: 243, Optimal Gcost: 278.450897
Jump Point Search::A star my openlist elapsed time: 0.000809, Nodes Expanded: 54, Optimal Moves: 243, Optimal Gcost: 278.450897
(startX, startY): (100,98) goalX, goalY: (157,154)
Octile::			 A star my openlist elapsed time: 0.014761, Nodes Expanded: 6066, Optimal Moves: 242, Optimal Gcost: 279.936188
Differential Heuristic::	 A star my openlist elapsed time: 0.011683, Nodes Expanded: 4499, Optimal Moves: 242, Optimal G cost: 279.936157
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010014, Nodes Expanded: 3961, Optimal Moves: 242, Optimal Gcost: 279.936157
Canonical A Star::A star my openlist elapsed time: 0.007044, Nodes Expanded: 4012, Optimal Moves: 242, Optimal Gcost: 279.936188
Jump Point Search::A star my openlist elapsed time: 0.001144, Nodes Expanded: 88, Optimal Moves: 242, Optimal Gcost: 279.936188
(startX, startY): (101,103) goalX, goalY: (137,116)
Octile::			 A star my openlist elapsed time: 0.015910, Nodes Expanded: 6738, Optimal Moves: 237, Optimal Gcost: 277.007233
Differential Heuristic::	 A star my openlist elapsed time: 0.004194, Nodes Expanded: 1814, Optimal Moves: 237, Optimal G cost: 276.178833
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004331, Nodes Expanded: 1771, Optimal Moves: 237, Optimal Gcost: 276.178833
Canonical A Star::A star my openlist elapsed time: 0.002712, Nodes Expanded: 1756, Optimal Moves: 237, Optimal Gcost: 276.178802
Jump Point Search::A star my openlist elapsed time: 0.000643, Nodes Expanded: 38, Optimal Moves: 237, Optimal Gcost: 276.178802
(startX, startY): (101,104) goalX, goalY: (149,119)
Octile::			 A star my openlist elapsed time: 0.013455, Nodes Expanded: 5937, Optimal Moves: 237, Optimal Gcost: 278.664093
Differential Heuristic::	 A star my openlist elapsed time: 0.004109, Nodes Expanded: 1747, Optimal Moves: 237, Optimal G cost: 278.664093
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004242, Nodes Expanded: 1700, Optimal Moves: 237, Optimal Gcost: 278.664093
Canonical A Star::A star my openlist elapsed time: 0.002649, Nodes Expanded: 1754, Optimal Moves: 237, Optimal Gcost: 278.664093
Jump Point Search::A star my openlist elapsed time: 0.000504, Nodes Expanded: 36, Optimal Moves: 237, Optimal Gcost: 278.664093
(startX, startY): (10,117) goalX, goalY: (85,31)
Octile::			 A star my openlist elapsed time: 0.025778, Nodes Expanded: 9669, Optimal Moves: 242, Optimal Gcost: 282.421478
Differential Heuristic::	 A star my openlist elapsed time: 0.011075, Nodes Expanded: 4801, Optimal Moves: 242, Optimal G cost: 282.421478
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005882, Nodes Expanded: 2559, Optimal Moves: 242, Optimal Gcost: 282.421478
Canonical A Star::A star my openlist elapsed time: 0.004040, Nodes Expanded: 2559, Optimal Moves: 242, Optimal Gcost: 282.421478
Jump Point Search::A star my openlist elapsed time: 0.000504, Nodes Expanded: 49, Optimal Moves: 242, Optimal Gcost: 282.421478
(startX, startY): (10,122) goalX, goalY: (77,39)
Octile::			 A star my openlist elapsed time: 0.028404, Nodes Expanded: 10104, Optimal Moves: 247, Optimal Gcost: 283.279327
Differential Heuristic::	 A star my openlist elapsed time: 0.011193, Nodes Expanded: 4949, Optimal Moves: 247, Optimal G cost: 283.279327
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006278, Nodes Expanded: 2718, Optimal Moves: 247, Optimal Gcost: 283.279327
Canonical A Star::A star my openlist elapsed time: 0.004564, Nodes Expanded: 2718, Optimal Moves: 247, Optimal Gcost: 283.279327
Jump Point Search::A star my openlist elapsed time: 0.000594, Nodes Expanded: 49, Optimal Moves: 247, Optimal Gcost: 283.279327
(startX, startY): (10,87) goalX, goalY: (171,66)
Octile::			 A star my openlist elapsed time: 0.019022, Nodes Expanded: 7742, Optimal Moves: 249, Optimal Gcost: 281.137177
Differential Heuristic::	 A star my openlist elapsed time: 0.006967, Nodes Expanded: 3290, Optimal Moves: 249, Optimal G cost: 281.137177
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006215, Nodes Expanded: 2877, Optimal Moves: 249, Optimal Gcost: 281.137177
Canonical A Star::A star my openlist elapsed time: 0.004232, Nodes Expanded: 2885, Optimal Moves: 249, Optimal Gcost: 281.137207
Jump Point Search::A star my openlist elapsed time: 0.000583, Nodes Expanded: 70, Optimal Moves: 249, Optimal Gcost: 281.137207
(startX, startY): (100,106) goalX, goalY: (146,114)
Octile::			 A star my openlist elapsed time: 0.014511, Nodes Expanded: 6196, Optimal Moves: 239, Optimal Gcost: 281.078308
Differential Heuristic::	 A star my openlist elapsed time: 0.002185, Nodes Expanded: 992, Optimal Moves: 239, Optimal G cost: 281.078308
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002148, Nodes Expanded: 974, Optimal Moves: 239, Optimal Gcost: 281.078308
Canonical A Star::A star my openlist elapsed time: 0.001384, Nodes Expanded: 1005, Optimal Moves: 239, Optimal Gcost: 281.078339
Jump Point Search::A star my openlist elapsed time: 0.000371, Nodes Expanded: 27, Optimal Moves: 239, Optimal Gcost: 281.078339
(startX, startY): (100,109) goalX, goalY: (157,137)
Octile::			 A star my openlist elapsed time: 0.012388, Nodes Expanded: 5435, Optimal Moves: 249, Optimal Gcost: 284.036682
Differential Heuristic::	 A star my openlist elapsed time: 0.009819, Nodes Expanded: 3819, Optimal Moves: 249, Optimal G cost: 283.208221
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008794, Nodes Expanded: 3455, Optimal Moves: 249, Optimal Gcost: 283.208221
Canonical A Star::A star my openlist elapsed time: 0.006011, Nodes Expanded: 3465, Optimal Moves: 249, Optimal Gcost: 283.208252
Jump Point Search::A star my openlist elapsed time: 0.000849, Nodes Expanded: 78, Optimal Moves: 249, Optimal Gcost: 283.208252
(startX, startY): (100,48) goalX, goalY: (44,94)
Octile::			 A star my openlist elapsed time: 0.018218, Nodes Expanded: 8179, Optimal Moves: 248, Optimal Gcost: 281.379822
Differential Heuristic::	 A star my openlist elapsed time: 0.003984, Nodes Expanded: 1877, Optimal Moves: 248, Optimal G cost: 281.379822
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003765, Nodes Expanded: 1813, Optimal Moves: 248, Optimal Gcost: 281.379822
Canonical A Star::A star my openlist elapsed time: 0.002316, Nodes Expanded: 1783, Optimal Moves: 248, Optimal Gcost: 281.379822
Jump Point Search::A star my openlist elapsed time: 0.000499, Nodes Expanded: 27, Optimal Moves: 248, Optimal Gcost: 281.379822
(startX, startY): (100,7) goalX, goalY: (31,119)
Octile::			 A star my openlist elapsed time: 0.012596, Nodes Expanded: 5994, Optimal Moves: 248, Optimal Gcost: 282.622467
Differential Heuristic::	 A star my openlist elapsed time: 0.002632, Nodes Expanded: 1397, Optimal Moves: 248, Optimal G cost: 282.622498
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002758, Nodes Expanded: 1352, Optimal Moves: 248, Optimal Gcost: 282.622498
Canonical A Star::A star my openlist elapsed time: 0.001651, Nodes Expanded: 1352, Optimal Moves: 248, Optimal Gcost: 282.622498
Jump Point Search::A star my openlist elapsed time: 0.000422, Nodes Expanded: 27, Optimal Moves: 248, Optimal Gcost: 282.622498
(startX, startY): (100,83) goalX, goalY: (153,102)
Octile::			 A star my openlist elapsed time: 0.015764, Nodes Expanded: 6616, Optimal Moves: 246, Optimal Gcost: 283.521973
Differential Heuristic::	 A star my openlist elapsed time: 0.002879, Nodes Expanded: 1243, Optimal Moves: 246, Optimal G cost: 283.521973
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002863, Nodes Expanded: 1138, Optimal Moves: 246, Optimal Gcost: 283.521973
Canonical A Star::A star my openlist elapsed time: 0.001691, Nodes Expanded: 1149, Optimal Moves: 246, Optimal Gcost: 283.521973
Jump Point Search::A star my openlist elapsed time: 0.000445, Nodes Expanded: 29, Optimal Moves: 246, Optimal Gcost: 283.521973
(startX, startY): (100,93) goalX, goalY: (160,123)
Octile::			 A star my openlist elapsed time: 0.015792, Nodes Expanded: 6427, Optimal Moves: 249, Optimal Gcost: 283.622467
Differential Heuristic::	 A star my openlist elapsed time: 0.009174, Nodes Expanded: 3720, Optimal Moves: 249, Optimal G cost: 283.622467
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008866, Nodes Expanded: 3512, Optimal Moves: 249, Optimal Gcost: 283.622467
Canonical A Star::A star my openlist elapsed time: 0.006237, Nodes Expanded: 3512, Optimal Moves: 249, Optimal Gcost: 283.622467
Jump Point Search::A star my openlist elapsed time: 0.000914, Nodes Expanded: 76, Optimal Moves: 249, Optimal Gcost: 283.622467
(startX, startY): (100,97) goalX, goalY: (150,108)
Octile::			 A star my openlist elapsed time: 0.015266, Nodes Expanded: 6400, Optimal Moves: 240, Optimal Gcost: 282.078308
Differential Heuristic::	 A star my openlist elapsed time: 0.002420, Nodes Expanded: 1091, Optimal Moves: 240, Optimal G cost: 282.078339
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002459, Nodes Expanded: 1091, Optimal Moves: 240, Optimal Gcost: 282.078339
Canonical A Star::A star my openlist elapsed time: 0.001509, Nodes Expanded: 1089, Optimal Moves: 240, Optimal Gcost: 282.078308
Jump Point Search::A star my openlist elapsed time: 0.000357, Nodes Expanded: 24, Optimal Moves: 240, Optimal Gcost: 282.078308
(startX, startY): (10,113) goalX, goalY: (83,39)
Octile::			 A star my openlist elapsed time: 0.026489, Nodes Expanded: 9954, Optimal Moves: 248, Optimal Gcost: 285.107758
Differential Heuristic::	 A star my openlist elapsed time: 0.011261, Nodes Expanded: 4786, Optimal Moves: 248, Optimal G cost: 285.107758
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006166, Nodes Expanded: 2721, Optimal Moves: 248, Optimal Gcost: 285.107758
Canonical A Star::A star my openlist elapsed time: 0.004470, Nodes Expanded: 2721, Optimal Moves: 248, Optimal Gcost: 285.107758
Jump Point Search::A star my openlist elapsed time: 0.000569, Nodes Expanded: 52, Optimal Moves: 248, Optimal Gcost: 285.107758
(startX, startY): (10,123) goalX, goalY: (75,43)
Octile::			 A star my openlist elapsed time: 0.028709, Nodes Expanded: 10438, Optimal Moves: 250, Optimal Gcost: 285.450897
Differential Heuristic::	 A star my openlist elapsed time: 0.011629, Nodes Expanded: 5014, Optimal Moves: 250, Optimal G cost: 285.450897
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007066, Nodes Expanded: 2851, Optimal Moves: 250, Optimal Gcost: 285.450897
Canonical A Star::A star my openlist elapsed time: 0.005111, Nodes Expanded: 2851, Optimal Moves: 250, Optimal Gcost: 285.450897
Jump Point Search::A star my openlist elapsed time: 0.000562, Nodes Expanded: 58, Optimal Moves: 250, Optimal Gcost: 285.450897
(startX, startY): (10,124) goalX, goalY: (98,11)
Octile::			 A star my openlist elapsed time: 0.023762, Nodes Expanded: 9117, Optimal Moves: 245, Optimal Gcost: 284.178833
Differential Heuristic::	 A star my openlist elapsed time: 0.012129, Nodes Expanded: 4978, Optimal Moves: 245, Optimal G cost: 284.178833
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005358, Nodes Expanded: 2241, Optimal Moves: 245, Optimal Gcost: 284.178833
Canonical A Star::A star my openlist elapsed time: 0.003507, Nodes Expanded: 2241, Optimal Moves: 245, Optimal Gcost: 284.178833
Jump Point Search::A star my openlist elapsed time: 0.000567, Nodes Expanded: 44, Optimal Moves: 245, Optimal Gcost: 284.178833
(startX, startY): (10,79) goalX, goalY: (158,59)
Octile::			 A star my openlist elapsed time: 0.018377, Nodes Expanded: 7575, Optimal Moves: 255, Optimal Gcost: 287.137177
Differential Heuristic::	 A star my openlist elapsed time: 0.011298, Nodes Expanded: 4487, Optimal Moves: 255, Optimal G cost: 287.137177
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008243, Nodes Expanded: 3565, Optimal Moves: 255, Optimal Gcost: 287.137177
Canonical A Star::A star my openlist elapsed time: 0.005270, Nodes Expanded: 3519, Optimal Moves: 255, Optimal Gcost: 287.137177
Jump Point Search::A star my openlist elapsed time: 0.000913, Nodes Expanded: 103, Optimal Moves: 255, Optimal Gcost: 287.137177
(startX, startY): (100,106) goalX, goalY: (148,108)
Octile::			 A star my openlist elapsed time: 0.015741, Nodes Expanded: 6501, Optimal Moves: 245, Optimal Gcost: 287.906738
Differential Heuristic::	 A star my openlist elapsed time: 0.002297, Nodes Expanded: 1040, Optimal Moves: 245, Optimal G cost: 287.906738
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002287, Nodes Expanded: 1024, Optimal Moves: 245, Optimal Gcost: 287.906738
Canonical A Star::A star my openlist elapsed time: 0.001526, Nodes Expanded: 1055, Optimal Moves: 245, Optimal Gcost: 287.906769
Jump Point Search::A star my openlist elapsed time: 0.000418, Nodes Expanded: 28, Optimal Moves: 245, Optimal Gcost: 287.906769
(startX, startY): (100,28) goalX, goalY: (22,113)
Octile::			 A star my openlist elapsed time: 0.017486, Nodes Expanded: 7722, Optimal Moves: 244, Optimal Gcost: 284.421478
Differential Heuristic::	 A star my openlist elapsed time: 0.010984, Nodes Expanded: 4444, Optimal Moves: 244, Optimal G cost: 284.421478
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010632, Nodes Expanded: 4299, Optimal Moves: 244, Optimal Gcost: 284.421478
Canonical A Star::A star my openlist elapsed time: 0.007218, Nodes Expanded: 4076, Optimal Moves: 244, Optimal Gcost: 284.421448
Jump Point Search::A star my openlist elapsed time: 0.000878, Nodes Expanded: 59, Optimal Moves: 244, Optimal Gcost: 284.421448
(startX, startY): (100,78) goalX, goalY: (149,169)
Octile::			 A star my openlist elapsed time: 0.018221, Nodes Expanded: 7653, Optimal Moves: 253, Optimal Gcost: 285.137177
Differential Heuristic::	 A star my openlist elapsed time: 0.012998, Nodes Expanded: 5218, Optimal Moves: 253, Optimal G cost: 285.137177
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011809, Nodes Expanded: 4857, Optimal Moves: 253, Optimal Gcost: 285.137177
Canonical A Star::A star my openlist elapsed time: 0.008969, Nodes Expanded: 4857, Optimal Moves: 253, Optimal Gcost: 285.137177
Jump Point Search::A star my openlist elapsed time: 0.001898, Nodes Expanded: 139, Optimal Moves: 253, Optimal Gcost: 285.137177
(startX, startY): (100,87) goalX, goalY: (159,119)
Octile::			 A star my openlist elapsed time: 0.017116, Nodes Expanded: 6945, Optimal Moves: 253, Optimal Gcost: 284.722961
Differential Heuristic::	 A star my openlist elapsed time: 0.008816, Nodes Expanded: 3582, Optimal Moves: 253, Optimal G cost: 284.722961
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008536, Nodes Expanded: 3466, Optimal Moves: 253, Optimal Gcost: 284.722961
Canonical A Star::A star my openlist elapsed time: 0.005849, Nodes Expanded: 3466, Optimal Moves: 253, Optimal Gcost: 284.722961
Jump Point Search::A star my openlist elapsed time: 0.000729, Nodes Expanded: 69, Optimal Moves: 253, Optimal Gcost: 284.722961
(startX, startY): (101,23) goalX, goalY: (14,109)
Octile::			 A star my openlist elapsed time: 0.013788, Nodes Expanded: 6270, Optimal Moves: 244, Optimal Gcost: 284.421478
Differential Heuristic::	 A star my openlist elapsed time: 0.010761, Nodes Expanded: 4580, Optimal Moves: 244, Optimal G cost: 284.421478
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008838, Nodes Expanded: 3911, Optimal Moves: 244, Optimal Gcost: 284.421478
Canonical A Star::A star my openlist elapsed time: 0.005979, Nodes Expanded: 3911, Optimal Moves: 244, Optimal Gcost: 284.421478
Jump Point Search::A star my openlist elapsed time: 0.000666, Nodes Expanded: 60, Optimal Moves: 244, Optimal Gcost: 284.421478
(startX, startY): (101,78) goalX, goalY: (159,165)
Octile::			 A star my openlist elapsed time: 0.015761, Nodes Expanded: 6812, Optimal Moves: 250, Optimal Gcost: 284.622467
Differential Heuristic::	 A star my openlist elapsed time: 0.012296, Nodes Expanded: 5171, Optimal Moves: 250, Optimal G cost: 284.622467
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011116, Nodes Expanded: 4579, Optimal Moves: 250, Optimal Gcost: 284.622467
Canonical A Star::A star my openlist elapsed time: 0.007986, Nodes Expanded: 4579, Optimal Moves: 250, Optimal Gcost: 284.622467
Jump Point Search::A star my openlist elapsed time: 0.001397, Nodes Expanded: 128, Optimal Moves: 250, Optimal Gcost: 284.622467
(startX, startY): (10,108) goalX, goalY: (77,49)
Octile::			 A star my openlist elapsed time: 0.027670, Nodes Expanded: 9951, Optimal Moves: 259, Optimal Gcost: 291.965607
Differential Heuristic::	 A star my openlist elapsed time: 0.011745, Nodes Expanded: 4925, Optimal Moves: 259, Optimal G cost: 291.965607
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006091, Nodes Expanded: 2622, Optimal Moves: 259, Optimal Gcost: 291.965607
Canonical A Star::A star my openlist elapsed time: 0.004432, Nodes Expanded: 2622, Optimal Moves: 259, Optimal Gcost: 291.965607
Jump Point Search::A star my openlist elapsed time: 0.000544, Nodes Expanded: 59, Optimal Moves: 259, Optimal Gcost: 291.965607
(startX, startY): (10,59) goalX, goalY: (133,67)
Octile::			 A star my openlist elapsed time: 0.018692, Nodes Expanded: 7781, Optimal Moves: 253, Optimal Gcost: 288.865112
Differential Heuristic::	 A star my openlist elapsed time: 0.011215, Nodes Expanded: 4641, Optimal Moves: 253, Optimal G cost: 288.865112
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008511, Nodes Expanded: 3774, Optimal Moves: 253, Optimal Gcost: 288.865112
Canonical A Star::A star my openlist elapsed time: 0.006036, Nodes Expanded: 3774, Optimal Moves: 253, Optimal Gcost: 288.865112
Jump Point Search::A star my openlist elapsed time: 0.000988, Nodes Expanded: 113, Optimal Moves: 253, Optimal Gcost: 288.865112
(startX, startY): (10,59) goalX, goalY: (141,62)
Octile::			 A star my openlist elapsed time: 0.017680, Nodes Expanded: 7408, Optimal Moves: 256, Optimal Gcost: 289.379822
Differential Heuristic::	 A star my openlist elapsed time: 0.011487, Nodes Expanded: 4716, Optimal Moves: 256, Optimal G cost: 289.379822
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008979, Nodes Expanded: 3663, Optimal Moves: 256, Optimal Gcost: 289.379822
Canonical A Star::A star my openlist elapsed time: 0.006118, Nodes Expanded: 3663, Optimal Moves: 256, Optimal Gcost: 289.379822
Jump Point Search::A star my openlist elapsed time: 0.000893, Nodes Expanded: 109, Optimal Moves: 256, Optimal Gcost: 289.379822
(startX, startY): (10,84) goalX, goalY: (142,48)
Octile::			 A star my openlist elapsed time: 0.018911, Nodes Expanded: 7888, Optimal Moves: 262, Optimal Gcost: 291.237671
Differential Heuristic::	 A star my openlist elapsed time: 0.010654, Nodes Expanded: 4384, Optimal Moves: 262, Optimal G cost: 291.237671
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006598, Nodes Expanded: 3096, Optimal Moves: 262, Optimal Gcost: 291.237671
Canonical A Star::A star my openlist elapsed time: 0.005496, Nodes Expanded: 3505, Optimal Moves: 262, Optimal Gcost: 291.237701
Jump Point Search::A star my openlist elapsed time: 0.000837, Nodes Expanded: 95, Optimal Moves: 262, Optimal Gcost: 291.237701
(startX, startY): (10,84) goalX, goalY: (143,52)
Octile::			 A star my openlist elapsed time: 0.020039, Nodes Expanded: 8050, Optimal Moves: 260, Optimal Gcost: 288.823456
Differential Heuristic::	 A star my openlist elapsed time: 0.011222, Nodes Expanded: 4528, Optimal Moves: 260, Optimal G cost: 288.823456
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007513, Nodes Expanded: 3498, Optimal Moves: 260, Optimal Gcost: 288.823456
Canonical A Star::A star my openlist elapsed time: 0.005468, Nodes Expanded: 3554, Optimal Moves: 260, Optimal Gcost: 288.823486
Jump Point Search::A star my openlist elapsed time: 0.000720, Nodes Expanded: 95, Optimal Moves: 260, Optimal Gcost: 288.823486
(startX, startY): (100,103) goalX, goalY: (161,124)
Octile::			 A star my openlist elapsed time: 0.015233, Nodes Expanded: 6251, Optimal Moves: 251, Optimal Gcost: 288.936157
Differential Heuristic::	 A star my openlist elapsed time: 0.010019, Nodes Expanded: 3896, Optimal Moves: 251, Optimal G cost: 288.936157
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009462, Nodes Expanded: 3621, Optimal Moves: 251, Optimal Gcost: 288.936157
Canonical A Star::A star my openlist elapsed time: 0.006531, Nodes Expanded: 3613, Optimal Moves: 251, Optimal Gcost: 288.936157
Jump Point Search::A star my openlist elapsed time: 0.000849, Nodes Expanded: 78, Optimal Moves: 251, Optimal Gcost: 288.936157
(startX, startY): (100,104) goalX, goalY: (165,126)
Octile::			 A star my openlist elapsed time: 0.014928, Nodes Expanded: 5948, Optimal Moves: 252, Optimal Gcost: 290.764618
Differential Heuristic::	 A star my openlist elapsed time: 0.011907, Nodes Expanded: 4341, Optimal Moves: 252, Optimal G cost: 290.764618
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010727, Nodes Expanded: 3869, Optimal Moves: 252, Optimal Gcost: 290.764618
Canonical A Star::A star my openlist elapsed time: 0.007219, Nodes Expanded: 3869, Optimal Moves: 252, Optimal Gcost: 290.764618
Jump Point Search::A star my openlist elapsed time: 0.000818, Nodes Expanded: 83, Optimal Moves: 252, Optimal Gcost: 290.764618
(startX, startY): (100,46) goalX, goalY: (48,88)
Octile::			 A star my openlist elapsed time: 0.021039, Nodes Expanded: 8693, Optimal Moves: 254, Optimal Gcost: 289.865112
Differential Heuristic::	 A star my openlist elapsed time: 0.007987, Nodes Expanded: 3512, Optimal Moves: 254, Optimal G cost: 289.865112
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007113, Nodes Expanded: 3198, Optimal Moves: 254, Optimal Gcost: 289.865112
Canonical A Star::A star my openlist elapsed time: 0.004562, Nodes Expanded: 3198, Optimal Moves: 254, Optimal Gcost: 289.865112
Jump Point Search::A star my openlist elapsed time: 0.000620, Nodes Expanded: 42, Optimal Moves: 254, Optimal Gcost: 289.865112
(startX, startY): (100,9) goalX, goalY: (38,114)
Octile::			 A star my openlist elapsed time: 0.016171, Nodes Expanded: 7148, Optimal Moves: 251, Optimal Gcost: 288.522003
Differential Heuristic::	 A star my openlist elapsed time: 0.002089, Nodes Expanded: 939, Optimal Moves: 251, Optimal G cost: 288.522003
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002061, Nodes Expanded: 920, Optimal Moves: 251, Optimal Gcost: 288.522003
Canonical A Star::A star my openlist elapsed time: 0.001223, Nodes Expanded: 920, Optimal Moves: 251, Optimal Gcost: 288.522003
Jump Point Search::A star my openlist elapsed time: 0.000412, Nodes Expanded: 21, Optimal Moves: 251, Optimal Gcost: 288.522003
(startX, startY): (100,96) goalX, goalY: (154,103)
Octile::			 A star my openlist elapsed time: 0.016271, Nodes Expanded: 6472, Optimal Moves: 245, Optimal Gcost: 288.320953
Differential Heuristic::	 A star my openlist elapsed time: 0.003587, Nodes Expanded: 1516, Optimal Moves: 245, Optimal G cost: 288.320953
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003325, Nodes Expanded: 1368, Optimal Moves: 245, Optimal Gcost: 288.320953
Canonical A Star::A star my openlist elapsed time: 0.002198, Nodes Expanded: 1424, Optimal Moves: 245, Optimal Gcost: 288.320984
Jump Point Search::A star my openlist elapsed time: 0.000564, Nodes Expanded: 33, Optimal Moves: 245, Optimal Gcost: 288.320984
(startX, startY): (10,113) goalX, goalY: (100,10)
Octile::			 A star my openlist elapsed time: 0.024453, Nodes Expanded: 9095, Optimal Moves: 253, Optimal Gcost: 293.007263
Differential Heuristic::	 A star my openlist elapsed time: 0.012392, Nodes Expanded: 5091, Optimal Moves: 253, Optimal G cost: 293.007263
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005445, Nodes Expanded: 2332, Optimal Moves: 253, Optimal Gcost: 293.007263
Canonical A Star::A star my openlist elapsed time: 0.003918, Nodes Expanded: 2332, Optimal Moves: 253, Optimal Gcost: 293.007263
Jump Point Search::A star my openlist elapsed time: 0.000583, Nodes Expanded: 47, Optimal Moves: 253, Optimal Gcost: 293.007263
(startX, startY): (10,119) goalX, goalY: (69,42)
Octile::			 A star my openlist elapsed time: 0.030027, Nodes Expanded: 10367, Optimal Moves: 256, Optimal Gcost: 292.693542
Differential Heuristic::	 A star my openlist elapsed time: 0.011922, Nodes Expanded: 5119, Optimal Moves: 256, Optimal G cost: 292.693542
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006688, Nodes Expanded: 2865, Optimal Moves: 256, Optimal Gcost: 292.693542
Canonical A Star::A star my openlist elapsed time: 0.005034, Nodes Expanded: 2865, Optimal Moves: 256, Optimal Gcost: 292.693542
Jump Point Search::A star my openlist elapsed time: 0.000573, Nodes Expanded: 57, Optimal Moves: 256, Optimal Gcost: 292.693542
(startX, startY): (10,84) goalX, goalY: (153,49)
Octile::			 A star my openlist elapsed time: 0.021379, Nodes Expanded: 8140, Optimal Moves: 261, Optimal Gcost: 293.965607
Differential Heuristic::	 A star my openlist elapsed time: 0.013655, Nodes Expanded: 5196, Optimal Moves: 261, Optimal G cost: 293.965607
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009189, Nodes Expanded: 3895, Optimal Moves: 261, Optimal Gcost: 293.965607
Canonical A Star::A star my openlist elapsed time: 0.005872, Nodes Expanded: 3727, Optimal Moves: 261, Optimal Gcost: 293.965607
Jump Point Search::A star my openlist elapsed time: 0.000848, Nodes Expanded: 101, Optimal Moves: 261, Optimal Gcost: 293.965607
(startX, startY): (10,84) goalX, goalY: (187,70)
Octile::			 A star my openlist elapsed time: 0.023976, Nodes Expanded: 8247, Optimal Moves: 261, Optimal Gcost: 294.379822
Differential Heuristic::	 A star my openlist elapsed time: 0.009228, Nodes Expanded: 3921, Optimal Moves: 261, Optimal G cost: 294.379822
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007248, Nodes Expanded: 3109, Optimal Moves: 261, Optimal Gcost: 294.379822
Canonical A Star::A star my openlist elapsed time: 0.005470, Nodes Expanded: 3409, Optimal Moves: 261, Optimal Gcost: 294.379822
Jump Point Search::A star my openlist elapsed time: 0.000943, Nodes Expanded: 91, Optimal Moves: 261, Optimal Gcost: 294.379822
(startX, startY): (10,90) goalX, goalY: (151,49)
Octile::			 A star my openlist elapsed time: 0.023286, Nodes Expanded: 8257, Optimal Moves: 261, Optimal Gcost: 292.308746
Differential Heuristic::	 A star my openlist elapsed time: 0.013241, Nodes Expanded: 5241, Optimal Moves: 261, Optimal G cost: 292.308777
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009807, Nodes Expanded: 3947, Optimal Moves: 261, Optimal Gcost: 292.308777
Canonical A Star::A star my openlist elapsed time: 0.006260, Nodes Expanded: 3947, Optimal Moves: 261, Optimal Gcost: 292.308777
Jump Point Search::A star my openlist elapsed time: 0.000763, Nodes Expanded: 96, Optimal Moves: 261, Optimal Gcost: 292.308777
(startX, startY): (100,13) goalX, goalY: (26,109)
Octile::			 A star my openlist elapsed time: 0.017361, Nodes Expanded: 7405, Optimal Moves: 258, Optimal Gcost: 295.521973
Differential Heuristic::	 A star my openlist elapsed time: 0.008894, Nodes Expanded: 3926, Optimal Moves: 258, Optimal G cost: 295.521973
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008386, Nodes Expanded: 3736, Optimal Moves: 258, Optimal Gcost: 295.521973
Canonical A Star::A star my openlist elapsed time: 0.006009, Nodes Expanded: 3736, Optimal Moves: 258, Optimal Gcost: 295.522003
Jump Point Search::A star my openlist elapsed time: 0.000864, Nodes Expanded: 56, Optimal Moves: 258, Optimal Gcost: 295.522003
(startX, startY): (100,14) goalX, goalY: (11,108)
Octile::			 A star my openlist elapsed time: 0.012380, Nodes Expanded: 5740, Optimal Moves: 254, Optimal Gcost: 293.593048
Differential Heuristic::	 A star my openlist elapsed time: 0.011253, Nodes Expanded: 4910, Optimal Moves: 254, Optimal G cost: 293.593048
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009255, Nodes Expanded: 3924, Optimal Moves: 254, Optimal Gcost: 293.593048
Canonical A Star::A star my openlist elapsed time: 0.006024, Nodes Expanded: 3921, Optimal Moves: 254, Optimal Gcost: 293.593048
Jump Point Search::A star my openlist elapsed time: 0.000794, Nodes Expanded: 61, Optimal Moves: 254, Optimal Gcost: 293.593048
(startX, startY): (100,23) goalX, goalY: (9,104)
Octile::			 A star my openlist elapsed time: 0.014976, Nodes Expanded: 6549, Optimal Moves: 250, Optimal Gcost: 292.492554
Differential Heuristic::	 A star my openlist elapsed time: 0.013358, Nodes Expanded: 5477, Optimal Moves: 250, Optimal G cost: 292.492554
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011057, Nodes Expanded: 4481, Optimal Moves: 250, Optimal Gcost: 292.492554
Canonical A Star::A star my openlist elapsed time: 0.008198, Nodes Expanded: 4481, Optimal Moves: 250, Optimal Gcost: 292.492554
Jump Point Search::A star my openlist elapsed time: 0.000888, Nodes Expanded: 73, Optimal Moves: 250, Optimal Gcost: 292.492554
(startX, startY): (100,37) goalX, goalY: (34,91)
Octile::			 A star my openlist elapsed time: 0.020735, Nodes Expanded: 8284, Optimal Moves: 255, Optimal Gcost: 292.936157
Differential Heuristic::	 A star my openlist elapsed time: 0.004919, Nodes Expanded: 2179, Optimal Moves: 255, Optimal G cost: 292.936188
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004814, Nodes Expanded: 2112, Optimal Moves: 255, Optimal Gcost: 292.936188
Canonical A Star::A star my openlist elapsed time: 0.003238, Nodes Expanded: 2112, Optimal Moves: 255, Optimal Gcost: 292.936188
Jump Point Search::A star my openlist elapsed time: 0.000464, Nodes Expanded: 30, Optimal Moves: 255, Optimal Gcost: 292.936188
(startX, startY): (100,96) goalX, goalY: (150,171)
Octile::			 A star my openlist elapsed time: 0.018867, Nodes Expanded: 7743, Optimal Moves: 255, Optimal Gcost: 292.521942
Differential Heuristic::	 A star my openlist elapsed time: 0.013236, Nodes Expanded: 5361, Optimal Moves: 255, Optimal G cost: 292.521942
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012457, Nodes Expanded: 4994, Optimal Moves: 255, Optimal Gcost: 292.521942
Canonical A Star::A star my openlist elapsed time: 0.009111, Nodes Expanded: 5004, Optimal Moves: 255, Optimal Gcost: 292.521973
Jump Point Search::A star my openlist elapsed time: 0.001676, Nodes Expanded: 141, Optimal Moves: 255, Optimal Gcost: 292.521973
(startX, startY): (10,78) goalX, goalY: (149,52)
Octile::			 A star my openlist elapsed time: 0.023443, Nodes Expanded: 8305, Optimal Moves: 261, Optimal Gcost: 296.865112
Differential Heuristic::	 A star my openlist elapsed time: 0.014214, Nodes Expanded: 5521, Optimal Moves: 261, Optimal G cost: 296.865112
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010691, Nodes Expanded: 4411, Optimal Moves: 261, Optimal Gcost: 296.865112
Canonical A Star::A star my openlist elapsed time: 0.007698, Nodes Expanded: 4288, Optimal Moves: 261, Optimal Gcost: 296.865112
Jump Point Search::A star my openlist elapsed time: 0.001469, Nodes Expanded: 118, Optimal Moves: 261, Optimal Gcost: 296.865112
(startX, startY): (10,85) goalX, goalY: (190,88)
Octile::			 A star my openlist elapsed time: 0.028616, Nodes Expanded: 9533, Optimal Moves: 265, Optimal Gcost: 298.379822
Differential Heuristic::	 A star my openlist elapsed time: 0.011075, Nodes Expanded: 4405, Optimal Moves: 265, Optimal G cost: 298.379822
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009254, Nodes Expanded: 3774, Optimal Moves: 265, Optimal Gcost: 298.379822
Canonical A Star::A star my openlist elapsed time: 0.006174, Nodes Expanded: 3627, Optimal Moves: 265, Optimal Gcost: 298.379822
Jump Point Search::A star my openlist elapsed time: 0.000891, Nodes Expanded: 95, Optimal Moves: 265, Optimal Gcost: 298.379822
(startX, startY): (10,88) goalX, goalY: (141,40)
Octile::			 A star my openlist elapsed time: 0.019976, Nodes Expanded: 7856, Optimal Moves: 270, Optimal Gcost: 297.166595
Differential Heuristic::	 A star my openlist elapsed time: 0.012490, Nodes Expanded: 5159, Optimal Moves: 270, Optimal G cost: 297.166595
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007466, Nodes Expanded: 3388, Optimal Moves: 270, Optimal Gcost: 297.166595
Canonical A Star::A star my openlist elapsed time: 0.005631, Nodes Expanded: 3483, Optimal Moves: 270, Optimal Gcost: 297.166626
Jump Point Search::A star my openlist elapsed time: 0.001088, Nodes Expanded: 97, Optimal Moves: 270, Optimal Gcost: 297.166626
(startX, startY): (100,107) goalX, goalY: (167,156)
Octile::			 A star my openlist elapsed time: 0.015462, Nodes Expanded: 6450, Optimal Moves: 259, Optimal Gcost: 299.421448
Differential Heuristic::	 A star my openlist elapsed time: 0.013134, Nodes Expanded: 5153, Optimal Moves: 259, Optimal G cost: 298.593018
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012131, Nodes Expanded: 4475, Optimal Moves: 259, Optimal Gcost: 298.593018
Canonical A Star::A star my openlist elapsed time: 0.008697, Nodes Expanded: 4603, Optimal Moves: 259, Optimal Gcost: 298.593048
Jump Point Search::A star my openlist elapsed time: 0.001832, Nodes Expanded: 118, Optimal Moves: 259, Optimal Gcost: 298.593048
(startX, startY): (100,108) goalX, goalY: (153,102)
Octile::			 A star my openlist elapsed time: 0.017277, Nodes Expanded: 6616, Optimal Moves: 253, Optimal Gcost: 297.977814
Differential Heuristic::	 A star my openlist elapsed time: 0.002687, Nodes Expanded: 1198, Optimal Moves: 253, Optimal G cost: 297.977814
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002597, Nodes Expanded: 1093, Optimal Moves: 253, Optimal Gcost: 297.977814
Canonical A Star::A star my openlist elapsed time: 0.001626, Nodes Expanded: 1114, Optimal Moves: 253, Optimal Gcost: 297.977814
Jump Point Search::A star my openlist elapsed time: 0.000479, Nodes Expanded: 30, Optimal Moves: 253, Optimal Gcost: 297.977814
(startX, startY): (100,111) goalX, goalY: (148,103)
Octile::			 A star my openlist elapsed time: 0.016228, Nodes Expanded: 6751, Optimal Moves: 255, Optimal Gcost: 298.735199
Differential Heuristic::	 A star my openlist elapsed time: 0.002806, Nodes Expanded: 1173, Optimal Moves: 255, Optimal G cost: 297.906769
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002569, Nodes Expanded: 1119, Optimal Moves: 255, Optimal Gcost: 297.906769
Canonical A Star::A star my openlist elapsed time: 0.001784, Nodes Expanded: 1130, Optimal Moves: 255, Optimal Gcost: 297.906769
Jump Point Search::A star my openlist elapsed time: 0.000531, Nodes Expanded: 29, Optimal Moves: 255, Optimal Gcost: 297.906769
(startX, startY): (100,111) goalX, goalY: (164,158)
Octile::			 A star my openlist elapsed time: 0.015243, Nodes Expanded: 6220, Optimal Moves: 258, Optimal Gcost: 300.078339
Differential Heuristic::	 A star my openlist elapsed time: 0.012825, Nodes Expanded: 5131, Optimal Moves: 258, Optimal G cost: 299.249908
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011622, Nodes Expanded: 4405, Optimal Moves: 258, Optimal Gcost: 299.249908
Canonical A Star::A star my openlist elapsed time: 0.008824, Nodes Expanded: 4405, Optimal Moves: 258, Optimal Gcost: 299.249908
Jump Point Search::A star my openlist elapsed time: 0.001556, Nodes Expanded: 112, Optimal Moves: 258, Optimal Gcost: 299.249908
(startX, startY): (100,42) goalX, goalY: (43,79)
Octile::			 A star my openlist elapsed time: 0.021613, Nodes Expanded: 8445, Optimal Moves: 263, Optimal Gcost: 298.450897
Differential Heuristic::	 A star my openlist elapsed time: 0.008463, Nodes Expanded: 3795, Optimal Moves: 263, Optimal G cost: 298.450897
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007248, Nodes Expanded: 3249, Optimal Moves: 263, Optimal Gcost: 298.450897
Canonical A Star::A star my openlist elapsed time: 0.005409, Nodes Expanded: 3249, Optimal Moves: 263, Optimal Gcost: 298.450897
Jump Point Search::A star my openlist elapsed time: 0.000613, Nodes Expanded: 43, Optimal Moves: 263, Optimal Gcost: 298.450897
(startX, startY): (100,44) goalX, goalY: (33,82)
Octile::			 A star my openlist elapsed time: 0.020010, Nodes Expanded: 8197, Optimal Moves: 260, Optimal Gcost: 297.107758
Differential Heuristic::	 A star my openlist elapsed time: 0.004640, Nodes Expanded: 2085, Optimal Moves: 260, Optimal G cost: 297.107758
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004674, Nodes Expanded: 1956, Optimal Moves: 260, Optimal Gcost: 297.107758
Canonical A Star::A star my openlist elapsed time: 0.002966, Nodes Expanded: 1956, Optimal Moves: 260, Optimal Gcost: 297.107758
Jump Point Search::A star my openlist elapsed time: 0.000644, Nodes Expanded: 32, Optimal Moves: 260, Optimal Gcost: 297.107758
(startX, startY): (100,49) goalX, goalY: (23,91)
Octile::			 A star my openlist elapsed time: 0.030177, Nodes Expanded: 9122, Optimal Moves: 266, Optimal Gcost: 298.965607
Differential Heuristic::	 A star my openlist elapsed time: 0.010486, Nodes Expanded: 4220, Optimal Moves: 266, Optimal G cost: 298.965607
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009313, Nodes Expanded: 3857, Optimal Moves: 266, Optimal Gcost: 298.965607
Canonical A Star::A star my openlist elapsed time: 0.006062, Nodes Expanded: 3784, Optimal Moves: 266, Optimal Gcost: 298.965607
Jump Point Search::A star my openlist elapsed time: 0.000914, Nodes Expanded: 56, Optimal Moves: 266, Optimal Gcost: 298.965607
(startX, startY): (10,59) goalX, goalY: (176,87)
Octile::			 A star my openlist elapsed time: 0.028703, Nodes Expanded: 9408, Optimal Moves: 266, Optimal Gcost: 303.521973
Differential Heuristic::	 A star my openlist elapsed time: 0.004693, Nodes Expanded: 2135, Optimal Moves: 266, Optimal G cost: 303.521973
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004669, Nodes Expanded: 2105, Optimal Moves: 266, Optimal Gcost: 303.521973
Canonical A Star::A star my openlist elapsed time: 0.003210, Nodes Expanded: 2105, Optimal Moves: 266, Optimal Gcost: 303.521973
Jump Point Search::A star my openlist elapsed time: 0.000565, Nodes Expanded: 56, Optimal Moves: 266, Optimal Gcost: 303.521973
(startX, startY): (10,67) goalX, goalY: (127,50)
Octile::			 A star my openlist elapsed time: 0.020627, Nodes Expanded: 8014, Optimal Moves: 263, Optimal Gcost: 300.936188
Differential Heuristic::	 A star my openlist elapsed time: 0.014794, Nodes Expanded: 6008, Optimal Moves: 263, Optimal G cost: 300.936188
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010817, Nodes Expanded: 4253, Optimal Moves: 263, Optimal Gcost: 300.936188
Canonical A Star::A star my openlist elapsed time: 0.007590, Nodes Expanded: 4253, Optimal Moves: 263, Optimal Gcost: 300.936188
Jump Point Search::A star my openlist elapsed time: 0.001314, Nodes Expanded: 115, Optimal Moves: 263, Optimal Gcost: 300.936188
(startX, startY): (10,74) goalX, goalY: (152,49)
Octile::			 A star my openlist elapsed time: 0.021855, Nodes Expanded: 8206, Optimal Moves: 264, Optimal Gcost: 300.279327
Differential Heuristic::	 A star my openlist elapsed time: 0.014358, Nodes Expanded: 5745, Optimal Moves: 264, Optimal G cost: 300.279327
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010720, Nodes Expanded: 4450, Optimal Moves: 264, Optimal Gcost: 300.279327
Canonical A Star::A star my openlist elapsed time: 0.007858, Nodes Expanded: 4450, Optimal Moves: 264, Optimal Gcost: 300.279327
Jump Point Search::A star my openlist elapsed time: 0.001250, Nodes Expanded: 121, Optimal Moves: 264, Optimal Gcost: 300.279327
(startX, startY): (10,75) goalX, goalY: (141,41)
Octile::			 A star my openlist elapsed time: 0.019292, Nodes Expanded: 7853, Optimal Moves: 272, Optimal Gcost: 303.308746
Differential Heuristic::	 A star my openlist elapsed time: 0.015003, Nodes Expanded: 6026, Optimal Moves: 272, Optimal G cost: 303.308746
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010443, Nodes Expanded: 4239, Optimal Moves: 272, Optimal Gcost: 303.308746
Canonical A Star::A star my openlist elapsed time: 0.007742, Nodes Expanded: 4240, Optimal Moves: 272, Optimal Gcost: 303.308746
Jump Point Search::A star my openlist elapsed time: 0.001327, Nodes Expanded: 117, Optimal Moves: 272, Optimal Gcost: 303.308746
(startX, startY): (10,91) goalX, goalY: (171,48)
Octile::			 A star my openlist elapsed time: 0.024524, Nodes Expanded: 8576, Optimal Moves: 267, Optimal Gcost: 301.622467
Differential Heuristic::	 A star my openlist elapsed time: 0.014480, Nodes Expanded: 5621, Optimal Moves: 267, Optimal G cost: 301.622498
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009928, Nodes Expanded: 4226, Optimal Moves: 267, Optimal Gcost: 301.622498
Canonical A Star::A star my openlist elapsed time: 0.007320, Nodes Expanded: 4226, Optimal Moves: 267, Optimal Gcost: 301.622498
Jump Point Search::A star my openlist elapsed time: 0.000931, Nodes Expanded: 116, Optimal Moves: 267, Optimal Gcost: 301.622498
(startX, startY): (100,107) goalX, goalY: (175,126)
Octile::			 A star my openlist elapsed time: 0.014320, Nodes Expanded: 6002, Optimal Moves: 265, Optimal Gcost: 303.764587
Differential Heuristic::	 A star my openlist elapsed time: 0.013245, Nodes Expanded: 4991, Optimal Moves: 265, Optimal G cost: 303.764587
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011310, Nodes Expanded: 4213, Optimal Moves: 265, Optimal Gcost: 303.764587
Canonical A Star::A star my openlist elapsed time: 0.008519, Nodes Expanded: 4351, Optimal Moves: 265, Optimal Gcost: 303.764618
Jump Point Search::A star my openlist elapsed time: 0.001380, Nodes Expanded: 90, Optimal Moves: 265, Optimal Gcost: 303.764618
(startX, startY): (100,112) goalX, goalY: (169,146)
Octile::			 A star my openlist elapsed time: 0.014491, Nodes Expanded: 5803, Optimal Moves: 264, Optimal Gcost: 300.279327
Differential Heuristic::	 A star my openlist elapsed time: 0.012814, Nodes Expanded: 5083, Optimal Moves: 264, Optimal G cost: 300.279327
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011840, Nodes Expanded: 4271, Optimal Moves: 264, Optimal Gcost: 300.279327
Canonical A Star::A star my openlist elapsed time: 0.008314, Nodes Expanded: 4271, Optimal Moves: 264, Optimal Gcost: 300.279327
Jump Point Search::A star my openlist elapsed time: 0.001538, Nodes Expanded: 103, Optimal Moves: 264, Optimal Gcost: 300.279327
(startX, startY): (100,114) goalX, goalY: (143,161)
Octile::			 A star my openlist elapsed time: 0.019663, Nodes Expanded: 7977, Optimal Moves: 262, Optimal Gcost: 302.007263
Differential Heuristic::	 A star my openlist elapsed time: 0.012758, Nodes Expanded: 5104, Optimal Moves: 262, Optimal G cost: 302.007263
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012579, Nodes Expanded: 4936, Optimal Moves: 262, Optimal Gcost: 302.007263
Canonical A Star::A star my openlist elapsed time: 0.009502, Nodes Expanded: 4936, Optimal Moves: 262, Optimal Gcost: 302.007263
Jump Point Search::A star my openlist elapsed time: 0.001954, Nodes Expanded: 135, Optimal Moves: 262, Optimal Gcost: 302.007263
(startX, startY): (100,5) goalX, goalY: (13,111)
Octile::			 A star my openlist elapsed time: 0.014022, Nodes Expanded: 5837, Optimal Moves: 260, Optimal Gcost: 300.421478
Differential Heuristic::	 A star my openlist elapsed time: 0.010970, Nodes Expanded: 4676, Optimal Moves: 260, Optimal G cost: 300.421509
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008834, Nodes Expanded: 3910, Optimal Moves: 260, Optimal Gcost: 300.421509
Canonical A Star::A star my openlist elapsed time: 0.005806, Nodes Expanded: 3910, Optimal Moves: 260, Optimal Gcost: 300.421509
Jump Point Search::A star my openlist elapsed time: 0.001058, Nodes Expanded: 65, Optimal Moves: 260, Optimal Gcost: 300.421509
(startX, startY): (101,113) goalX, goalY: (165,159)
Octile::			 A star my openlist elapsed time: 0.015072, Nodes Expanded: 6272, Optimal Moves: 261, Optimal Gcost: 303.906769
Differential Heuristic::	 A star my openlist elapsed time: 0.012851, Nodes Expanded: 4997, Optimal Moves: 261, Optimal G cost: 303.078308
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011052, Nodes Expanded: 4256, Optimal Moves: 261, Optimal Gcost: 303.078308
Canonical A Star::A star my openlist elapsed time: 0.008232, Nodes Expanded: 4455, Optimal Moves: 261, Optimal Gcost: 303.078339
Jump Point Search::A star my openlist elapsed time: 0.001853, Nodes Expanded: 116, Optimal Moves: 261, Optimal Gcost: 303.078339
(startX, startY): (10,59) goalX, goalY: (152,52)
Octile::			 A star my openlist elapsed time: 0.021304, Nodes Expanded: 8182, Optimal Moves: 266, Optimal Gcost: 306.421478
Differential Heuristic::	 A star my openlist elapsed time: 0.013704, Nodes Expanded: 5504, Optimal Moves: 266, Optimal G cost: 306.421478
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010827, Nodes Expanded: 4443, Optimal Moves: 266, Optimal Gcost: 306.421478
Canonical A Star::A star my openlist elapsed time: 0.007946, Nodes Expanded: 4443, Optimal Moves: 266, Optimal Gcost: 306.421478
Jump Point Search::A star my openlist elapsed time: 0.001652, Nodes Expanded: 122, Optimal Moves: 266, Optimal Gcost: 306.421478
(startX, startY): (10,62) goalX, goalY: (179,61)
Octile::			 A star my openlist elapsed time: 0.020706, Nodes Expanded: 8040, Optimal Moves: 266, Optimal Gcost: 306.835693
Differential Heuristic::	 A star my openlist elapsed time: 0.012573, Nodes Expanded: 4974, Optimal Moves: 266, Optimal G cost: 306.835693
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010456, Nodes Expanded: 4097, Optimal Moves: 266, Optimal Gcost: 306.835693
Canonical A Star::A star my openlist elapsed time: 0.007517, Nodes Expanded: 4097, Optimal Moves: 266, Optimal Gcost: 306.835693
Jump Point Search::A star my openlist elapsed time: 0.001572, Nodes Expanded: 118, Optimal Moves: 266, Optimal Gcost: 306.835693
(startX, startY): (10,77) goalX, goalY: (141,38)
Octile::			 A star my openlist elapsed time: 0.019480, Nodes Expanded: 7862, Optimal Moves: 275, Optimal Gcost: 305.480316
Differential Heuristic::	 A star my openlist elapsed time: 0.014656, Nodes Expanded: 5980, Optimal Moves: 275, Optimal G cost: 305.480316
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010468, Nodes Expanded: 4270, Optimal Moves: 275, Optimal Gcost: 305.480316
Canonical A Star::A star my openlist elapsed time: 0.007763, Nodes Expanded: 4335, Optimal Moves: 275, Optimal Gcost: 305.480347
Jump Point Search::A star my openlist elapsed time: 0.001727, Nodes Expanded: 119, Optimal Moves: 275, Optimal Gcost: 305.480347
(startX, startY): (10,79) goalX, goalY: (123,44)
Octile::			 A star my openlist elapsed time: 0.022632, Nodes Expanded: 8361, Optimal Moves: 270, Optimal Gcost: 305.865112
Differential Heuristic::	 A star my openlist elapsed time: 0.016694, Nodes Expanded: 6630, Optimal Moves: 270, Optimal G cost: 305.865112
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012359, Nodes Expanded: 4737, Optimal Moves: 270, Optimal Gcost: 305.865112
Canonical A Star::A star my openlist elapsed time: 0.008207, Nodes Expanded: 4666, Optimal Moves: 270, Optimal Gcost: 305.865112
Jump Point Search::A star my openlist elapsed time: 0.001311, Nodes Expanded: 123, Optimal Moves: 270, Optimal Gcost: 305.865112
(startX, startY): (100,113) goalX, goalY: (166,111)
Octile::			 A star my openlist elapsed time: 0.014898, Nodes Expanded: 6207, Optimal Moves: 262, Optimal Gcost: 306.977844
Differential Heuristic::	 A star my openlist elapsed time: 0.013031, Nodes Expanded: 4648, Optimal Moves: 262, Optimal G cost: 306.977814
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011110, Nodes Expanded: 3950, Optimal Moves: 262, Optimal Gcost: 306.977814
Canonical A Star::A star my openlist elapsed time: 0.007019, Nodes Expanded: 3927, Optimal Moves: 262, Optimal Gcost: 306.977814
Jump Point Search::A star my openlist elapsed time: 0.000878, Nodes Expanded: 87, Optimal Moves: 262, Optimal Gcost: 306.977814
(startX, startY): (100,12) goalX, goalY: (42,94)
Octile::			 A star my openlist elapsed time: 0.017742, Nodes Expanded: 7914, Optimal Moves: 268, Optimal Gcost: 307.178864
Differential Heuristic::	 A star my openlist elapsed time: 0.002970, Nodes Expanded: 1401, Optimal Moves: 268, Optimal G cost: 307.178864
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002979, Nodes Expanded: 1369, Optimal Moves: 268, Optimal Gcost: 307.178864
Canonical A Star::A star my openlist elapsed time: 0.001882, Nodes Expanded: 1369, Optimal Moves: 268, Optimal Gcost: 307.178864
Jump Point Search::A star my openlist elapsed time: 0.000493, Nodes Expanded: 25, Optimal Moves: 268, Optimal Gcost: 307.178864
(startX, startY): (100,33) goalX, goalY: (48,78)
Octile::			 A star my openlist elapsed time: 0.021528, Nodes Expanded: 8869, Optimal Moves: 264, Optimal Gcost: 305.249878
Differential Heuristic::	 A star my openlist elapsed time: 0.010203, Nodes Expanded: 4358, Optimal Moves: 264, Optimal G cost: 305.249878
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009163, Nodes Expanded: 3893, Optimal Moves: 264, Optimal Gcost: 305.249878
Canonical A Star::A star my openlist elapsed time: 0.006447, Nodes Expanded: 3830, Optimal Moves: 264, Optimal Gcost: 305.249878
Jump Point Search::A star my openlist elapsed time: 0.000668, Nodes Expanded: 53, Optimal Moves: 264, Optimal Gcost: 305.249878
(startX, startY): (100,35) goalX, goalY: (23,90)
Octile::			 A star my openlist elapsed time: 0.023562, Nodes Expanded: 9114, Optimal Moves: 266, Optimal Gcost: 305.178802
Differential Heuristic::	 A star my openlist elapsed time: 0.010032, Nodes Expanded: 4356, Optimal Moves: 266, Optimal G cost: 305.178833
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009667, Nodes Expanded: 3982, Optimal Moves: 266, Optimal Gcost: 305.178833
Canonical A Star::A star my openlist elapsed time: 0.006878, Nodes Expanded: 3982, Optimal Moves: 266, Optimal Gcost: 305.178833
Jump Point Search::A star my openlist elapsed time: 0.000862, Nodes Expanded: 57, Optimal Moves: 266, Optimal Gcost: 305.178833
(startX, startY): (100,40) goalX, goalY: (37,75)
Octile::			 A star my openlist elapsed time: 0.021091, Nodes Expanded: 8448, Optimal Moves: 267, Optimal Gcost: 304.107758
Differential Heuristic::	 A star my openlist elapsed time: 0.009631, Nodes Expanded: 4116, Optimal Moves: 267, Optimal G cost: 304.107758
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008924, Nodes Expanded: 3524, Optimal Moves: 267, Optimal Gcost: 304.107758
Canonical A Star::A star my openlist elapsed time: 0.005479, Nodes Expanded: 3524, Optimal Moves: 267, Optimal Gcost: 304.107758
Jump Point Search::A star my openlist elapsed time: 0.000776, Nodes Expanded: 48, Optimal Moves: 267, Optimal Gcost: 304.107758
(startX, startY): (100,5) goalX, goalY: (5,106)
Octile::			 A star my openlist elapsed time: 0.011861, Nodes Expanded: 5574, Optimal Moves: 265, Optimal Gcost: 307.078339
Differential Heuristic::	 A star my openlist elapsed time: 0.012658, Nodes Expanded: 5475, Optimal Moves: 265, Optimal G cost: 307.078369
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009596, Nodes Expanded: 4077, Optimal Moves: 265, Optimal Gcost: 307.078369
Canonical A Star::A star my openlist elapsed time: 0.006507, Nodes Expanded: 4077, Optimal Moves: 265, Optimal Gcost: 307.078369
Jump Point Search::A star my openlist elapsed time: 0.000758, Nodes Expanded: 75, Optimal Moves: 265, Optimal Gcost: 307.078369
(startX, startY): (10,64) goalX, goalY: (140,40)
Octile::			 A star my openlist elapsed time: 0.018755, Nodes Expanded: 7786, Optimal Moves: 276, Optimal Gcost: 310.208252
Differential Heuristic::	 A star my openlist elapsed time: 0.015584, Nodes Expanded: 6209, Optimal Moves: 276, Optimal G cost: 310.208252
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011101, Nodes Expanded: 4354, Optimal Moves: 276, Optimal Gcost: 310.208252
Canonical A Star::A star my openlist elapsed time: 0.008081, Nodes Expanded: 4354, Optimal Moves: 276, Optimal Gcost: 310.208252
Jump Point Search::A star my openlist elapsed time: 0.001265, Nodes Expanded: 119, Optimal Moves: 276, Optimal Gcost: 310.208252
(startX, startY): (10,84) goalX, goalY: (152,35)
Octile::			 A star my openlist elapsed time: 0.023684, Nodes Expanded: 8681, Optimal Moves: 275, Optimal Gcost: 310.865112
Differential Heuristic::	 A star my openlist elapsed time: 0.012419, Nodes Expanded: 5549, Optimal Moves: 275, Optimal G cost: 310.865112
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007419, Nodes Expanded: 3584, Optimal Moves: 275, Optimal Gcost: 310.865112
Canonical A Star::A star my openlist elapsed time: 0.005946, Nodes Expanded: 3902, Optimal Moves: 275, Optimal Gcost: 310.865112
Jump Point Search::A star my openlist elapsed time: 0.000874, Nodes Expanded: 107, Optimal Moves: 275, Optimal Gcost: 310.865112
(startX, startY): (10,87) goalX, goalY: (146,31)
Octile::			 A star my openlist elapsed time: 0.021052, Nodes Expanded: 8172, Optimal Moves: 279, Optimal Gcost: 308.651886
Differential Heuristic::	 A star my openlist elapsed time: 0.014911, Nodes Expanded: 5467, Optimal Moves: 279, Optimal G cost: 308.651886
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008093, Nodes Expanded: 3554, Optimal Moves: 279, Optimal Gcost: 308.651886
Canonical A Star::A star my openlist elapsed time: 0.005987, Nodes Expanded: 3635, Optimal Moves: 279, Optimal Gcost: 308.651917
Jump Point Search::A star my openlist elapsed time: 0.000934, Nodes Expanded: 101, Optimal Moves: 279, Optimal Gcost: 308.651917
(startX, startY): (100,102) goalX, goalY: (142,85)
Octile::			 A star my openlist elapsed time: 0.017882, Nodes Expanded: 7235, Optimal Moves: 266, Optimal Gcost: 308.906738
Differential Heuristic::	 A star my openlist elapsed time: 0.007707, Nodes Expanded: 3084, Optimal Moves: 266, Optimal G cost: 308.078308
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007340, Nodes Expanded: 2852, Optimal Moves: 266, Optimal Gcost: 308.078308
Canonical A Star::A star my openlist elapsed time: 0.005217, Nodes Expanded: 2922, Optimal Moves: 266, Optimal Gcost: 308.078339
Jump Point Search::A star my openlist elapsed time: 0.001026, Nodes Expanded: 60, Optimal Moves: 266, Optimal Gcost: 308.078339
(startX, startY): (100,108) goalX, goalY: (178,135)
Octile::			 A star my openlist elapsed time: 0.017288, Nodes Expanded: 6735, Optimal Moves: 269, Optimal Gcost: 310.664124
Differential Heuristic::	 A star my openlist elapsed time: 0.014743, Nodes Expanded: 5597, Optimal Moves: 269, Optimal G cost: 310.664124
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012884, Nodes Expanded: 4907, Optimal Moves: 269, Optimal Gcost: 310.664124
Canonical A Star::A star my openlist elapsed time: 0.009894, Nodes Expanded: 4907, Optimal Moves: 269, Optimal Gcost: 310.664124
Jump Point Search::A star my openlist elapsed time: 0.001570, Nodes Expanded: 126, Optimal Moves: 269, Optimal Gcost: 310.664124
(startX, startY): (100,114) goalX, goalY: (172,125)
Octile::			 A star my openlist elapsed time: 0.014281, Nodes Expanded: 6024, Optimal Moves: 269, Optimal Gcost: 308.178833
Differential Heuristic::	 A star my openlist elapsed time: 0.013157, Nodes Expanded: 4930, Optimal Moves: 269, Optimal G cost: 308.178833
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011237, Nodes Expanded: 4249, Optimal Moves: 269, Optimal Gcost: 308.178833
Canonical A Star::A star my openlist elapsed time: 0.008154, Nodes Expanded: 4249, Optimal Moves: 269, Optimal Gcost: 308.178833
Jump Point Search::A star my openlist elapsed time: 0.000905, Nodes Expanded: 92, Optimal Moves: 269, Optimal Gcost: 308.178833
(startX, startY): (100,14) goalX, goalY: (44,90)
Octile::			 A star my openlist elapsed time: 0.019673, Nodes Expanded: 8288, Optimal Moves: 270, Optimal Gcost: 310.007263
Differential Heuristic::	 A star my openlist elapsed time: 0.006055, Nodes Expanded: 2697, Optimal Moves: 270, Optimal G cost: 310.007263
Differential Heuristic & Octile::A star my openlist elapsed time: 0.005843, Nodes Expanded: 2541, Optimal Moves: 270, Optimal Gcost: 310.007263
Canonical A Star::A star my openlist elapsed time: 0.003765, Nodes Expanded: 2540, Optimal Moves: 270, Optimal Gcost: 310.007263
Jump Point Search::A star my openlist elapsed time: 0.000504, Nodes Expanded: 34, Optimal Moves: 270, Optimal Gcost: 310.007263
(startX, startY): (100,29) goalX, goalY: (37,75)
Octile::			 A star my openlist elapsed time: 0.022150, Nodes Expanded: 8448, Optimal Moves: 270, Optimal Gcost: 310.421448
Differential Heuristic::	 A star my openlist elapsed time: 0.009766, Nodes Expanded: 4177, Optimal Moves: 270, Optimal G cost: 310.421478
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008344, Nodes Expanded: 3585, Optimal Moves: 270, Optimal Gcost: 310.421478
Canonical A Star::A star my openlist elapsed time: 0.005476, Nodes Expanded: 3522, Optimal Moves: 270, Optimal Gcost: 310.421448
Jump Point Search::A star my openlist elapsed time: 0.000708, Nodes Expanded: 48, Optimal Moves: 270, Optimal Gcost: 310.421448
(startX, startY): (100,34) goalX, goalY: (54,76)
Octile::			 A star my openlist elapsed time: 0.021885, Nodes Expanded: 9171, Optimal Moves: 266, Optimal Gcost: 309.320953
Differential Heuristic::	 A star my openlist elapsed time: 0.012165, Nodes Expanded: 4897, Optimal Moves: 266, Optimal G cost: 309.320953
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012673, Nodes Expanded: 4609, Optimal Moves: 266, Optimal Gcost: 309.320953
Canonical A Star::A star my openlist elapsed time: 0.009277, Nodes Expanded: 4638, Optimal Moves: 266, Optimal Gcost: 309.320953
Jump Point Search::A star my openlist elapsed time: 0.000959, Nodes Expanded: 64, Optimal Moves: 266, Optimal Gcost: 309.320953
(startX, startY): (100,35) goalX, goalY: (30,76)
Octile::			 A star my openlist elapsed time: 0.021277, Nodes Expanded: 8453, Optimal Moves: 266, Optimal Gcost: 308.078308
Differential Heuristic::	 A star my openlist elapsed time: 0.010866, Nodes Expanded: 4345, Optimal Moves: 266, Optimal G cost: 308.078339
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008801, Nodes Expanded: 3708, Optimal Moves: 266, Optimal Gcost: 308.078339
Canonical A Star::A star my openlist elapsed time: 0.006144, Nodes Expanded: 3708, Optimal Moves: 266, Optimal Gcost: 308.078339
Jump Point Search::A star my openlist elapsed time: 0.000982, Nodes Expanded: 52, Optimal Moves: 266, Optimal Gcost: 308.078339
(startX, startY): (10,86) goalX, goalY: (107,35)
Octile::			 A star my openlist elapsed time: 0.032109, Nodes Expanded: 8604, Optimal Moves: 276, Optimal Gcost: 315.178833
Differential Heuristic::	 A star my openlist elapsed time: 0.017796, Nodes Expanded: 4630, Optimal Moves: 276, Optimal G cost: 315.178833
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008342, Nodes Expanded: 2588, Optimal Moves: 276, Optimal Gcost: 315.178833
Canonical A Star::A star my openlist elapsed time: 0.007668, Nodes Expanded: 3420, Optimal Moves: 276, Optimal Gcost: 315.178864
Jump Point Search::A star my openlist elapsed time: 0.001097, Nodes Expanded: 97, Optimal Moves: 276, Optimal Gcost: 315.178864
(startX, startY): (10,92) goalX, goalY: (101,39)
Octile::			 A star my openlist elapsed time: 0.032714, Nodes Expanded: 9028, Optimal Moves: 278, Optimal Gcost: 315.521973
Differential Heuristic::	 A star my openlist elapsed time: 0.015623, Nodes Expanded: 5338, Optimal Moves: 278, Optimal G cost: 315.521973
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009667, Nodes Expanded: 3488, Optimal Moves: 278, Optimal Gcost: 315.521973
Canonical A Star::A star my openlist elapsed time: 0.008612, Nodes Expanded: 3582, Optimal Moves: 278, Optimal Gcost: 315.522003
Jump Point Search::A star my openlist elapsed time: 0.001129, Nodes Expanded: 91, Optimal Moves: 278, Optimal Gcost: 315.522003
(startX, startY): (100,106) goalX, goalY: (178,110)
Octile::			 A star my openlist elapsed time: 0.022486, Nodes Expanded: 6493, Optimal Moves: 267, Optimal Gcost: 313.220459
Differential Heuristic::	 A star my openlist elapsed time: 0.017630, Nodes Expanded: 5024, Optimal Moves: 267, Optimal G cost: 313.220459
Differential Heuristic & Octile::A star my openlist elapsed time: 0.016025, Nodes Expanded: 4538, Optimal Moves: 267, Optimal Gcost: 313.220459
Canonical A Star::A star my openlist elapsed time: 0.012998, Nodes Expanded: 4804, Optimal Moves: 267, Optimal Gcost: 313.220490
Jump Point Search::A star my openlist elapsed time: 0.001919, Nodes Expanded: 111, Optimal Moves: 267, Optimal Gcost: 313.220490
(startX, startY): (100,22) goalX, goalY: (45,77)
Octile::			 A star my openlist elapsed time: 0.026243, Nodes Expanded: 8642, Optimal Moves: 275, Optimal Gcost: 315.421478
Differential Heuristic::	 A star my openlist elapsed time: 0.015328, Nodes Expanded: 4480, Optimal Moves: 275, Optimal G cost: 315.421478
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011489, Nodes Expanded: 3910, Optimal Moves: 275, Optimal Gcost: 315.421478
Canonical A Star::A star my openlist elapsed time: 0.007605, Nodes Expanded: 3910, Optimal Moves: 275, Optimal Gcost: 315.421478
Jump Point Search::A star my openlist elapsed time: 0.000882, Nodes Expanded: 55, Optimal Moves: 275, Optimal Gcost: 315.421478
(startX, startY): (101,10) goalX, goalY: (49,94)
Octile::			 A star my openlist elapsed time: 0.022489, Nodes Expanded: 8670, Optimal Moves: 271, Optimal Gcost: 312.249908
Differential Heuristic::	 A star my openlist elapsed time: 0.008327, Nodes Expanded: 3651, Optimal Moves: 271, Optimal G cost: 312.249908
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007874, Nodes Expanded: 3409, Optimal Moves: 271, Optimal Gcost: 312.249908
Canonical A Star::A star my openlist elapsed time: 0.005047, Nodes Expanded: 3399, Optimal Moves: 271, Optimal Gcost: 312.249908
Jump Point Search::A star my openlist elapsed time: 0.000681, Nodes Expanded: 44, Optimal Moves: 271, Optimal Gcost: 312.249908
(startX, startY): (101,111) goalX, goalY: (173,108)
Octile::			 A star my openlist elapsed time: 0.015276, Nodes Expanded: 6281, Optimal Moves: 268, Optimal Gcost: 314.220490
Differential Heuristic::	 A star my openlist elapsed time: 0.014934, Nodes Expanded: 5508, Optimal Moves: 268, Optimal G cost: 314.220490
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012300, Nodes Expanded: 4457, Optimal Moves: 268, Optimal Gcost: 314.220490
Canonical A Star::A star my openlist elapsed time: 0.008646, Nodes Expanded: 4457, Optimal Moves: 268, Optimal Gcost: 314.220490
Jump Point Search::A star my openlist elapsed time: 0.001023, Nodes Expanded: 98, Optimal Moves: 268, Optimal Gcost: 314.220490
(startX, startY): (101,45) goalX, goalY: (19,69)
Octile::			 A star my openlist elapsed time: 0.023535, Nodes Expanded: 8877, Optimal Moves: 274, Optimal Gcost: 315.664124
Differential Heuristic::	 A star my openlist elapsed time: 0.015268, Nodes Expanded: 6161, Optimal Moves: 274, Optimal G cost: 315.664124
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012550, Nodes Expanded: 4995, Optimal Moves: 274, Optimal Gcost: 315.664124
Canonical A Star::A star my openlist elapsed time: 0.009376, Nodes Expanded: 4995, Optimal Moves: 274, Optimal Gcost: 315.664124
Jump Point Search::A star my openlist elapsed time: 0.001288, Nodes Expanded: 73, Optimal Moves: 274, Optimal Gcost: 315.664124
(startX, startY): (101,92) goalX, goalY: (155,80)
Octile::			 A star my openlist elapsed time: 0.018298, Nodes Expanded: 7264, Optimal Moves: 270, Optimal Gcost: 312.492554
Differential Heuristic::	 A star my openlist elapsed time: 0.003837, Nodes Expanded: 1680, Optimal Moves: 270, Optimal G cost: 312.492554
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003856, Nodes Expanded: 1645, Optimal Moves: 270, Optimal Gcost: 312.492554
Canonical A Star::A star my openlist elapsed time: 0.002668, Nodes Expanded: 1645, Optimal Moves: 270, Optimal Gcost: 312.492554
Jump Point Search::A star my openlist elapsed time: 0.000538, Nodes Expanded: 37, Optimal Moves: 270, Optimal Gcost: 312.492554
(startX, startY): (102,104) goalX, goalY: (144,82)
Octile::			 A star my openlist elapsed time: 0.021953, Nodes Expanded: 7123, Optimal Moves: 271, Optimal Gcost: 313.078308
Differential Heuristic::	 A star my openlist elapsed time: 0.009562, Nodes Expanded: 3010, Optimal Moves: 271, Optimal G cost: 313.078308
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008849, Nodes Expanded: 2714, Optimal Moves: 271, Optimal Gcost: 313.078308
Canonical A Star::A star my openlist elapsed time: 0.006192, Nodes Expanded: 2802, Optimal Moves: 271, Optimal Gcost: 313.078339
Jump Point Search::A star my openlist elapsed time: 0.000962, Nodes Expanded: 56, Optimal Moves: 271, Optimal Gcost: 313.078339
(startX, startY): (102,105) goalX, goalY: (146,82)
Octile::			 A star my openlist elapsed time: 0.021572, Nodes Expanded: 7074, Optimal Moves: 271, Optimal Gcost: 314.320953
Differential Heuristic::	 A star my openlist elapsed time: 0.008259, Nodes Expanded: 2781, Optimal Moves: 271, Optimal G cost: 313.492523
Differential Heuristic & Octile::A star my openlist elapsed time: 0.006884, Nodes Expanded: 2505, Optimal Moves: 271, Optimal Gcost: 313.492523
Canonical A Star::A star my openlist elapsed time: 0.004435, Nodes Expanded: 2476, Optimal Moves: 271, Optimal Gcost: 313.492523
Jump Point Search::A star my openlist elapsed time: 0.000831, Nodes Expanded: 48, Optimal Moves: 271, Optimal Gcost: 313.492523
(startX, startY): (10,60) goalX, goalY: (112,48)
Octile::			 A star my openlist elapsed time: 0.024011, Nodes Expanded: 8624, Optimal Moves: 275, Optimal Gcost: 317.906769
Differential Heuristic::	 A star my openlist elapsed time: 0.017257, Nodes Expanded: 6844, Optimal Moves: 275, Optimal G cost: 317.906769
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013078, Nodes Expanded: 5047, Optimal Moves: 275, Optimal Gcost: 317.906769
Canonical A Star::A star my openlist elapsed time: 0.009337, Nodes Expanded: 5047, Optimal Moves: 275, Optimal Gcost: 317.906769
Jump Point Search::A star my openlist elapsed time: 0.001466, Nodes Expanded: 139, Optimal Moves: 275, Optimal Gcost: 317.906769
(startX, startY): (10,61) goalX, goalY: (172,49)
Octile::			 A star my openlist elapsed time: 0.023531, Nodes Expanded: 8456, Optimal Moves: 274, Optimal Gcost: 317.320984
Differential Heuristic::	 A star my openlist elapsed time: 0.015276, Nodes Expanded: 6091, Optimal Moves: 274, Optimal G cost: 317.320984
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011878, Nodes Expanded: 4783, Optimal Moves: 274, Optimal Gcost: 317.320984
Canonical A Star::A star my openlist elapsed time: 0.009085, Nodes Expanded: 4783, Optimal Moves: 274, Optimal Gcost: 317.320984
Jump Point Search::A star my openlist elapsed time: 0.001473, Nodes Expanded: 139, Optimal Moves: 274, Optimal Gcost: 317.320984
(startX, startY): (10,67) goalX, goalY: (109,42)
Octile::			 A star my openlist elapsed time: 0.022439, Nodes Expanded: 8519, Optimal Moves: 273, Optimal Gcost: 317.563629
Differential Heuristic::	 A star my openlist elapsed time: 0.017314, Nodes Expanded: 6984, Optimal Moves: 273, Optimal G cost: 317.563629
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012653, Nodes Expanded: 5059, Optimal Moves: 273, Optimal Gcost: 317.563629
Canonical A Star::A star my openlist elapsed time: 0.009068, Nodes Expanded: 5059, Optimal Moves: 273, Optimal Gcost: 317.563629
Jump Point Search::A star my openlist elapsed time: 0.001476, Nodes Expanded: 134, Optimal Moves: 273, Optimal Gcost: 317.563629
(startX, startY): (10,90) goalX, goalY: (106,32)
Octile::			 A star my openlist elapsed time: 0.023236, Nodes Expanded: 8719, Optimal Moves: 279, Optimal Gcost: 316.936218
Differential Heuristic::	 A star my openlist elapsed time: 0.013358, Nodes Expanded: 5492, Optimal Moves: 279, Optimal G cost: 316.936218
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007937, Nodes Expanded: 3375, Optimal Moves: 279, Optimal Gcost: 316.936218
Canonical A Star::A star my openlist elapsed time: 0.005303, Nodes Expanded: 3375, Optimal Moves: 279, Optimal Gcost: 316.936218
Jump Point Search::A star my openlist elapsed time: 0.000926, Nodes Expanded: 91, Optimal Moves: 279, Optimal Gcost: 316.936218
(startX, startY): (10,91) goalX, goalY: (100,38)
Octile::			 A star my openlist elapsed time: 0.024270, Nodes Expanded: 9067, Optimal Moves: 279, Optimal Gcost: 316.521973
Differential Heuristic::	 A star my openlist elapsed time: 0.013339, Nodes Expanded: 5468, Optimal Moves: 279, Optimal G cost: 316.521973
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008158, Nodes Expanded: 3582, Optimal Moves: 279, Optimal Gcost: 316.521973
Canonical A Star::A star my openlist elapsed time: 0.005538, Nodes Expanded: 3590, Optimal Moves: 279, Optimal Gcost: 316.522003
Jump Point Search::A star my openlist elapsed time: 0.000998, Nodes Expanded: 91, Optimal Moves: 279, Optimal Gcost: 316.522003
(startX, startY): (10,92) goalX, goalY: (98,39)
Octile::			 A star my openlist elapsed time: 0.025121, Nodes Expanded: 9282, Optimal Moves: 281, Optimal Gcost: 318.521973
Differential Heuristic::	 A star my openlist elapsed time: 0.012912, Nodes Expanded: 5410, Optimal Moves: 281, Optimal G cost: 318.521973
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008143, Nodes Expanded: 3556, Optimal Moves: 281, Optimal Gcost: 318.521973
Canonical A Star::A star my openlist elapsed time: 0.005884, Nodes Expanded: 3650, Optimal Moves: 281, Optimal Gcost: 318.522003
Jump Point Search::A star my openlist elapsed time: 0.000763, Nodes Expanded: 91, Optimal Moves: 281, Optimal Gcost: 318.522003
(startX, startY): (100,21) goalX, goalY: (28,79)
Octile::			 A star my openlist elapsed time: 0.020297, Nodes Expanded: 8321, Optimal Moves: 275, Optimal Gcost: 318.735199
Differential Heuristic::	 A star my openlist elapsed time: 0.010018, Nodes Expanded: 4260, Optimal Moves: 275, Optimal G cost: 318.735199
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008315, Nodes Expanded: 3705, Optimal Moves: 275, Optimal Gcost: 318.735199
Canonical A Star::A star my openlist elapsed time: 0.005773, Nodes Expanded: 3705, Optimal Moves: 275, Optimal Gcost: 318.735199
Jump Point Search::A star my openlist elapsed time: 0.001090, Nodes Expanded: 54, Optimal Moves: 275, Optimal Gcost: 318.735199
(startX, startY): (100,25) goalX, goalY: (21,94)
Octile::			 A star my openlist elapsed time: 0.025553, Nodes Expanded: 9439, Optimal Moves: 275, Optimal Gcost: 316.249908
Differential Heuristic::	 A star my openlist elapsed time: 0.011996, Nodes Expanded: 5007, Optimal Moves: 275, Optimal G cost: 316.249908
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011625, Nodes Expanded: 4683, Optimal Moves: 275, Optimal Gcost: 316.249908
Canonical A Star::A star my openlist elapsed time: 0.008959, Nodes Expanded: 4683, Optimal Moves: 275, Optimal Gcost: 316.249908
Jump Point Search::A star my openlist elapsed time: 0.001014, Nodes Expanded: 66, Optimal Moves: 275, Optimal Gcost: 316.249908
(startX, startY): (100,29) goalX, goalY: (51,70)
Octile::			 A star my openlist elapsed time: 0.023084, Nodes Expanded: 9177, Optimal Moves: 275, Optimal Gcost: 317.906738
Differential Heuristic::	 A star my openlist elapsed time: 0.013172, Nodes Expanded: 5666, Optimal Moves: 275, Optimal G cost: 317.906769
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012704, Nodes Expanded: 5158, Optimal Moves: 275, Optimal Gcost: 317.906769
Canonical A Star::A star my openlist elapsed time: 0.008598, Nodes Expanded: 5103, Optimal Moves: 275, Optimal Gcost: 317.906738
Jump Point Search::A star my openlist elapsed time: 0.000773, Nodes Expanded: 68, Optimal Moves: 275, Optimal Gcost: 317.906738
(startX, startY): (100,45) goalX, goalY: (29,64)
Octile::			 A star my openlist elapsed time: 0.022129, Nodes Expanded: 8816, Optimal Moves: 278, Optimal Gcost: 316.350403
Differential Heuristic::	 A star my openlist elapsed time: 0.015042, Nodes Expanded: 6233, Optimal Moves: 278, Optimal G cost: 316.350403
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012478, Nodes Expanded: 5034, Optimal Moves: 278, Optimal Gcost: 316.350403
Canonical A Star::A star my openlist elapsed time: 0.008933, Nodes Expanded: 5034, Optimal Moves: 278, Optimal Gcost: 316.350403
Jump Point Search::A star my openlist elapsed time: 0.000944, Nodes Expanded: 73, Optimal Moves: 278, Optimal Gcost: 316.350403
(startX, startY): (10,79) goalX, goalY: (104,38)
Octile::			 A star my openlist elapsed time: 0.022544, Nodes Expanded: 8725, Optimal Moves: 279, Optimal Gcost: 320.664124
Differential Heuristic::	 A star my openlist elapsed time: 0.018250, Nodes Expanded: 7322, Optimal Moves: 279, Optimal G cost: 320.664124
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013879, Nodes Expanded: 5367, Optimal Moves: 279, Optimal Gcost: 320.664124
Canonical A Star::A star my openlist elapsed time: 0.010273, Nodes Expanded: 5329, Optimal Moves: 279, Optimal Gcost: 320.664124
Jump Point Search::A star my openlist elapsed time: 0.001473, Nodes Expanded: 140, Optimal Moves: 279, Optimal Gcost: 320.664124
(startX, startY): (100,108) goalX, goalY: (143,75)
Octile::			 A star my openlist elapsed time: 0.018073, Nodes Expanded: 7209, Optimal Moves: 280, Optimal Gcost: 322.492523
Differential Heuristic::	 A star my openlist elapsed time: 0.010606, Nodes Expanded: 3983, Optimal Moves: 280, Optimal G cost: 322.492554
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010042, Nodes Expanded: 3604, Optimal Moves: 280, Optimal Gcost: 322.492554
Canonical A Star::A star my openlist elapsed time: 0.006448, Nodes Expanded: 3555, Optimal Moves: 280, Optimal Gcost: 322.492523
Jump Point Search::A star my openlist elapsed time: 0.000883, Nodes Expanded: 71, Optimal Moves: 280, Optimal Gcost: 322.492523
(startX, startY): (100,33) goalX, goalY: (10,87)
Octile::			 A star my openlist elapsed time: 0.025289, Nodes Expanded: 9414, Optimal Moves: 279, Optimal Gcost: 320.249878
Differential Heuristic::	 A star my openlist elapsed time: 0.014785, Nodes Expanded: 6206, Optimal Moves: 279, Optimal G cost: 320.249878
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014111, Nodes Expanded: 5649, Optimal Moves: 279, Optimal Gcost: 320.249878
Canonical A Star::A star my openlist elapsed time: 0.009869, Nodes Expanded: 5535, Optimal Moves: 279, Optimal Gcost: 320.249878
Jump Point Search::A star my openlist elapsed time: 0.000962, Nodes Expanded: 83, Optimal Moves: 279, Optimal Gcost: 320.249878
(startX, startY): (100,48) goalX, goalY: (15,63)
Octile::			 A star my openlist elapsed time: 0.025950, Nodes Expanded: 9225, Optimal Moves: 282, Optimal Gcost: 323.664124
Differential Heuristic::	 A star my openlist elapsed time: 0.018063, Nodes Expanded: 7148, Optimal Moves: 282, Optimal G cost: 323.664124
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014262, Nodes Expanded: 5418, Optimal Moves: 282, Optimal Gcost: 323.664124
Canonical A Star::A star my openlist elapsed time: 0.010007, Nodes Expanded: 5388, Optimal Moves: 282, Optimal Gcost: 323.664124
Jump Point Search::A star my openlist elapsed time: 0.000981, Nodes Expanded: 86, Optimal Moves: 282, Optimal Gcost: 323.664124
(startX, startY): (100,50) goalX, goalY: (60,61)
Octile::			 A star my openlist elapsed time: 0.022306, Nodes Expanded: 9492, Optimal Moves: 281, Optimal Gcost: 321.007263
Differential Heuristic::	 A star my openlist elapsed time: 0.015515, Nodes Expanded: 6591, Optimal Moves: 281, Optimal G cost: 321.007263
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014192, Nodes Expanded: 5877, Optimal Moves: 281, Optimal Gcost: 321.007263
Canonical A Star::A star my openlist elapsed time: 0.010404, Nodes Expanded: 5847, Optimal Moves: 281, Optimal Gcost: 321.007263
Jump Point Search::A star my openlist elapsed time: 0.000835, Nodes Expanded: 88, Optimal Moves: 281, Optimal Gcost: 321.007263
(startX, startY): (100,51) goalX, goalY: (60,59)
Octile::			 A star my openlist elapsed time: 0.022556, Nodes Expanded: 9532, Optimal Moves: 283, Optimal Gcost: 323.421478
Differential Heuristic::	 A star my openlist elapsed time: 0.017511, Nodes Expanded: 6848, Optimal Moves: 283, Optimal G cost: 323.421478
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014855, Nodes Expanded: 5914, Optimal Moves: 283, Optimal Gcost: 323.421478
Canonical A Star::A star my openlist elapsed time: 0.010817, Nodes Expanded: 5924, Optimal Moves: 283, Optimal Gcost: 323.421478
Jump Point Search::A star my openlist elapsed time: 0.000867, Nodes Expanded: 91, Optimal Moves: 283, Optimal Gcost: 323.421478
(startX, startY): (100,93) goalX, goalY: (165,78)
Octile::			 A star my openlist elapsed time: 0.020509, Nodes Expanded: 7669, Optimal Moves: 277, Optimal Gcost: 320.735199
Differential Heuristic::	 A star my openlist elapsed time: 0.003288, Nodes Expanded: 1442, Optimal Moves: 277, Optimal G cost: 320.735199
Differential Heuristic & Octile::A star my openlist elapsed time: 0.003416, Nodes Expanded: 1439, Optimal Moves: 277, Optimal Gcost: 320.735199
Canonical A Star::A star my openlist elapsed time: 0.002131, Nodes Expanded: 1439, Optimal Moves: 277, Optimal Gcost: 320.735199
Jump Point Search::A star my openlist elapsed time: 0.000471, Nodes Expanded: 33, Optimal Moves: 277, Optimal Gcost: 320.735199
(startX, startY): (101,18) goalX, goalY: (53,76)
Octile::			 A star my openlist elapsed time: 0.022502, Nodes Expanded: 9159, Optimal Moves: 280, Optimal Gcost: 323.320984
Differential Heuristic::	 A star my openlist elapsed time: 0.013165, Nodes Expanded: 5367, Optimal Moves: 280, Optimal G cost: 323.320984
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012407, Nodes Expanded: 4980, Optimal Moves: 280, Optimal Gcost: 323.320984
Canonical A Star::A star my openlist elapsed time: 0.008506, Nodes Expanded: 4980, Optimal Moves: 280, Optimal Gcost: 323.320984
Jump Point Search::A star my openlist elapsed time: 0.000962, Nodes Expanded: 73, Optimal Moves: 280, Optimal Gcost: 323.320984
(startX, startY): (101,36) goalX, goalY: (5,86)
Octile::			 A star my openlist elapsed time: 0.025045, Nodes Expanded: 9506, Optimal Moves: 283, Optimal Gcost: 323.421478
Differential Heuristic::	 A star my openlist elapsed time: 0.016712, Nodes Expanded: 6831, Optimal Moves: 283, Optimal G cost: 323.421478
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014963, Nodes Expanded: 6027, Optimal Moves: 283, Optimal Gcost: 323.421478
Canonical A Star::A star my openlist elapsed time: 0.011571, Nodes Expanded: 6027, Optimal Moves: 283, Optimal Gcost: 323.421478
Jump Point Search::A star my openlist elapsed time: 0.001054, Nodes Expanded: 97, Optimal Moves: 283, Optimal Gcost: 323.421478
(startX, startY): (101,43) goalX, goalY: (64,62)
Octile::			 A star my openlist elapsed time: 0.026175, Nodes Expanded: 9564, Optimal Moves: 280, Optimal Gcost: 323.320984
Differential Heuristic::	 A star my openlist elapsed time: 0.019956, Nodes Expanded: 6797, Optimal Moves: 280, Optimal G cost: 323.320984
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015229, Nodes Expanded: 6163, Optimal Moves: 280, Optimal Gcost: 323.320984
Canonical A Star::A star my openlist elapsed time: 0.011068, Nodes Expanded: 6163, Optimal Moves: 280, Optimal Gcost: 323.320984
Jump Point Search::A star my openlist elapsed time: 0.001152, Nodes Expanded: 100, Optimal Moves: 280, Optimal Gcost: 323.320984
(startX, startY): (10,58) goalX, goalY: (175,42)
Octile::			 A star my openlist elapsed time: 0.024813, Nodes Expanded: 8565, Optimal Moves: 281, Optimal Gcost: 326.806274
Differential Heuristic::	 A star my openlist elapsed time: 0.018957, Nodes Expanded: 7321, Optimal Moves: 281, Optimal G cost: 326.806274
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012783, Nodes Expanded: 5195, Optimal Moves: 281, Optimal Gcost: 326.806274
Canonical A Star::A star my openlist elapsed time: 0.010003, Nodes Expanded: 5195, Optimal Moves: 281, Optimal Gcost: 326.806274
Jump Point Search::A star my openlist elapsed time: 0.001401, Nodes Expanded: 149, Optimal Moves: 281, Optimal Gcost: 326.806274
(startX, startY): (10,75) goalX, goalY: (102,34)
Octile::			 A star my openlist elapsed time: 0.023072, Nodes Expanded: 8560, Optimal Moves: 280, Optimal Gcost: 324.563629
Differential Heuristic::	 A star my openlist elapsed time: 0.019052, Nodes Expanded: 7578, Optimal Moves: 280, Optimal G cost: 324.563629
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014834, Nodes Expanded: 5441, Optimal Moves: 280, Optimal Gcost: 324.563629
Canonical A Star::A star my openlist elapsed time: 0.011555, Nodes Expanded: 5442, Optimal Moves: 280, Optimal Gcost: 324.563629
Jump Point Search::A star my openlist elapsed time: 0.002109, Nodes Expanded: 144, Optimal Moves: 280, Optimal Gcost: 324.563629
(startX, startY): (10,77) goalX, goalY: (152,24)
Octile::			 A star my openlist elapsed time: 0.028723, Nodes Expanded: 8420, Optimal Moves: 289, Optimal Gcost: 324.036682
Differential Heuristic::	 A star my openlist elapsed time: 0.023055, Nodes Expanded: 7392, Optimal Moves: 289, Optimal G cost: 324.036682
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015196, Nodes Expanded: 5176, Optimal Moves: 289, Optimal Gcost: 324.036682
Canonical A Star::A star my openlist elapsed time: 0.009740, Nodes Expanded: 5176, Optimal Moves: 289, Optimal Gcost: 324.036713
Jump Point Search::A star my openlist elapsed time: 0.001468, Nodes Expanded: 136, Optimal Moves: 289, Optimal Gcost: 324.036713
(startX, startY): (100,102) goalX, goalY: (145,67)
Octile::			 A star my openlist elapsed time: 0.017201, Nodes Expanded: 7059, Optimal Moves: 284, Optimal Gcost: 324.835663
Differential Heuristic::	 A star my openlist elapsed time: 0.011668, Nodes Expanded: 4270, Optimal Moves: 284, Optimal G cost: 324.835663
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011249, Nodes Expanded: 4009, Optimal Moves: 284, Optimal Gcost: 324.835663
Canonical A Star::A star my openlist elapsed time: 0.008244, Nodes Expanded: 4074, Optimal Moves: 284, Optimal Gcost: 324.835693
Jump Point Search::A star my openlist elapsed time: 0.001023, Nodes Expanded: 83, Optimal Moves: 284, Optimal Gcost: 324.835693
(startX, startY): (100,102) goalX, goalY: (188,102)
Octile::			 A star my openlist elapsed time: 0.018660, Nodes Expanded: 6904, Optimal Moves: 278, Optimal Gcost: 324.634705
Differential Heuristic::	 A star my openlist elapsed time: 0.015958, Nodes Expanded: 5917, Optimal Moves: 278, Optimal G cost: 324.634674
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015019, Nodes Expanded: 5525, Optimal Moves: 278, Optimal Gcost: 324.634674
Canonical A Star::A star my openlist elapsed time: 0.011703, Nodes Expanded: 5726, Optimal Moves: 278, Optimal Gcost: 324.634705
Jump Point Search::A star my openlist elapsed time: 0.002208, Nodes Expanded: 147, Optimal Moves: 278, Optimal Gcost: 324.634705
(startX, startY): (100,11) goalX, goalY: (47,78)
Octile::			 A star my openlist elapsed time: 0.021974, Nodes Expanded: 8782, Optimal Moves: 285, Optimal Gcost: 326.249939
Differential Heuristic::	 A star my openlist elapsed time: 0.011914, Nodes Expanded: 4750, Optimal Moves: 285, Optimal G cost: 326.249939
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010390, Nodes Expanded: 4253, Optimal Moves: 285, Optimal Gcost: 326.249939
Canonical A Star::A star my openlist elapsed time: 0.006899, Nodes Expanded: 4253, Optimal Moves: 285, Optimal Gcost: 326.249939
Jump Point Search::A star my openlist elapsed time: 0.000893, Nodes Expanded: 65, Optimal Moves: 285, Optimal Gcost: 326.249939
(startX, startY): (100,113) goalX, goalY: (185,108)
Octile::			 A star my openlist elapsed time: 0.015894, Nodes Expanded: 6426, Optimal Moves: 281, Optimal Gcost: 327.220490
Differential Heuristic::	 A star my openlist elapsed time: 0.017418, Nodes Expanded: 6593, Optimal Moves: 281, Optimal G cost: 327.220490
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013799, Nodes Expanded: 5122, Optimal Moves: 281, Optimal Gcost: 327.220490
Canonical A Star::A star my openlist elapsed time: 0.009118, Nodes Expanded: 4801, Optimal Moves: 281, Optimal Gcost: 327.220459
Jump Point Search::A star my openlist elapsed time: 0.001597, Nodes Expanded: 125, Optimal Moves: 281, Optimal Gcost: 327.220459
(startX, startY): (100,29) goalX, goalY: (19,70)
Octile::			 A star my openlist elapsed time: 0.022583, Nodes Expanded: 8772, Optimal Moves: 277, Optimal Gcost: 324.048920
Differential Heuristic::	 A star my openlist elapsed time: 0.015155, Nodes Expanded: 6325, Optimal Moves: 277, Optimal G cost: 324.048920
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012729, Nodes Expanded: 5235, Optimal Moves: 277, Optimal Gcost: 324.048920
Canonical A Star::A star my openlist elapsed time: 0.009006, Nodes Expanded: 5177, Optimal Moves: 277, Optimal Gcost: 324.048889
Jump Point Search::A star my openlist elapsed time: 0.000802, Nodes Expanded: 76, Optimal Moves: 277, Optimal Gcost: 324.048889
(startX, startY): (100,52) goalX, goalY: (57,55)
Octile::			 A star my openlist elapsed time: 0.022330, Nodes Expanded: 9511, Optimal Moves: 287, Optimal Gcost: 326.593048
Differential Heuristic::	 A star my openlist elapsed time: 0.017365, Nodes Expanded: 7126, Optimal Moves: 287, Optimal G cost: 326.593048
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015208, Nodes Expanded: 5979, Optimal Moves: 287, Optimal Gcost: 326.593048
Canonical A Star::A star my openlist elapsed time: 0.012494, Nodes Expanded: 6066, Optimal Moves: 287, Optimal Gcost: 326.593048
Jump Point Search::A star my openlist elapsed time: 0.001067, Nodes Expanded: 96, Optimal Moves: 287, Optimal Gcost: 326.593048
(startX, startY): (100,84) goalX, goalY: (130,68)
Octile::			 A star my openlist elapsed time: 0.021781, Nodes Expanded: 8090, Optimal Moves: 286, Optimal Gcost: 324.350403
Differential Heuristic::	 A star my openlist elapsed time: 0.015993, Nodes Expanded: 5828, Optimal Moves: 286, Optimal G cost: 324.350403
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013870, Nodes Expanded: 4928, Optimal Moves: 286, Optimal Gcost: 324.350403
Canonical A Star::A star my openlist elapsed time: 0.011248, Nodes Expanded: 4928, Optimal Moves: 286, Optimal Gcost: 324.350403
Jump Point Search::A star my openlist elapsed time: 0.001410, Nodes Expanded: 110, Optimal Moves: 286, Optimal Gcost: 324.350403
(startX, startY): (10,66) goalX, goalY: (105,30)
Octile::			 A star my openlist elapsed time: 0.024328, Nodes Expanded: 8765, Optimal Moves: 285, Optimal Gcost: 331.634705
Differential Heuristic::	 A star my openlist elapsed time: 0.021130, Nodes Expanded: 7750, Optimal Moves: 285, Optimal G cost: 331.634705
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014906, Nodes Expanded: 5587, Optimal Moves: 285, Optimal Gcost: 331.634705
Canonical A Star::A star my openlist elapsed time: 0.010841, Nodes Expanded: 5587, Optimal Moves: 285, Optimal Gcost: 331.634705
Jump Point Search::A star my openlist elapsed time: 0.001758, Nodes Expanded: 148, Optimal Moves: 285, Optimal Gcost: 331.634705
(startX, startY): (10,69) goalX, goalY: (101,33)
Octile::			 A star my openlist elapsed time: 0.025345, Nodes Expanded: 8596, Optimal Moves: 281, Optimal Gcost: 328.463135
Differential Heuristic::	 A star my openlist elapsed time: 0.025099, Nodes Expanded: 7657, Optimal Moves: 281, Optimal G cost: 328.463135
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015196, Nodes Expanded: 5486, Optimal Moves: 281, Optimal Gcost: 328.463135
Canonical A Star::A star my openlist elapsed time: 0.011030, Nodes Expanded: 5486, Optimal Moves: 281, Optimal Gcost: 328.463135
Jump Point Search::A star my openlist elapsed time: 0.001611, Nodes Expanded: 149, Optimal Moves: 281, Optimal Gcost: 328.463135
(startX, startY): (100,11) goalX, goalY: (38,75)
Octile::			 A star my openlist elapsed time: 0.022804, Nodes Expanded: 8430, Optimal Moves: 288, Optimal Gcost: 328.007294
Differential Heuristic::	 A star my openlist elapsed time: 0.011389, Nodes Expanded: 4511, Optimal Moves: 288, Optimal G cost: 328.007294
Differential Heuristic & Octile::A star my openlist elapsed time: 0.010013, Nodes Expanded: 3907, Optimal Moves: 288, Optimal Gcost: 328.007294
Canonical A Star::A star my openlist elapsed time: 0.006788, Nodes Expanded: 3907, Optimal Moves: 288, Optimal Gcost: 328.007294
Jump Point Search::A star my openlist elapsed time: 0.001097, Nodes Expanded: 60, Optimal Moves: 288, Optimal Gcost: 328.007294
(startX, startY): (100,111) goalX, goalY: (162,80)
Octile::			 A star my openlist elapsed time: 0.023739, Nodes Expanded: 7605, Optimal Moves: 284, Optimal Gcost: 330.220459
Differential Heuristic::	 A star my openlist elapsed time: 0.003886, Nodes Expanded: 1401, Optimal Moves: 284, Optimal G cost: 330.220490
Differential Heuristic & Octile::A star my openlist elapsed time: 0.004258, Nodes Expanded: 1391, Optimal Moves: 284, Optimal Gcost: 330.220490
Canonical A Star::A star my openlist elapsed time: 0.002644, Nodes Expanded: 1391, Optimal Moves: 284, Optimal Gcost: 330.220490
Jump Point Search::A star my openlist elapsed time: 0.000756, Nodes Expanded: 34, Optimal Moves: 284, Optimal Gcost: 330.220490
(startX, startY): (100,23) goalX, goalY: (51,64)
Octile::			 A star my openlist elapsed time: 0.027599, Nodes Expanded: 9240, Optimal Moves: 287, Optimal Gcost: 329.906769
Differential Heuristic::	 A star my openlist elapsed time: 0.017680, Nodes Expanded: 6407, Optimal Moves: 287, Optimal G cost: 329.906769
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013768, Nodes Expanded: 5732, Optimal Moves: 287, Optimal Gcost: 329.906769
Canonical A Star::A star my openlist elapsed time: 0.009904, Nodes Expanded: 5732, Optimal Moves: 287, Optimal Gcost: 329.906769
Jump Point Search::A star my openlist elapsed time: 0.000884, Nodes Expanded: 89, Optimal Moves: 287, Optimal Gcost: 329.906769
(startX, startY): (100,28) goalX, goalY: (26,60)
Octile::			 A star my openlist elapsed time: 0.022926, Nodes Expanded: 8931, Optimal Moves: 286, Optimal Gcost: 330.977844
Differential Heuristic::	 A star my openlist elapsed time: 0.017750, Nodes Expanded: 7214, Optimal Moves: 286, Optimal G cost: 330.977844
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013780, Nodes Expanded: 5590, Optimal Moves: 286, Optimal Gcost: 330.977844
Canonical A Star::A star my openlist elapsed time: 0.009981, Nodes Expanded: 5572, Optimal Moves: 286, Optimal Gcost: 330.977814
Jump Point Search::A star my openlist elapsed time: 0.001114, Nodes Expanded: 95, Optimal Moves: 286, Optimal Gcost: 330.977814
(startX, startY): (100,28) goalX, goalY: (55,59)
Octile::			 A star my openlist elapsed time: 0.023347, Nodes Expanded: 9439, Optimal Moves: 287, Optimal Gcost: 331.563629
Differential Heuristic::	 A star my openlist elapsed time: 0.017309, Nodes Expanded: 6998, Optimal Moves: 287, Optimal G cost: 331.563629
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014205, Nodes Expanded: 6038, Optimal Moves: 287, Optimal Gcost: 331.563629
Canonical A Star::A star my openlist elapsed time: 0.009997, Nodes Expanded: 6007, Optimal Moves: 287, Optimal Gcost: 331.563599
Jump Point Search::A star my openlist elapsed time: 0.000981, Nodes Expanded: 99, Optimal Moves: 287, Optimal Gcost: 331.563599
(startX, startY): (100,29) goalX, goalY: (45,57)
Octile::			 A star my openlist elapsed time: 0.022679, Nodes Expanded: 9401, Optimal Moves: 288, Optimal Gcost: 331.735199
Differential Heuristic::	 A star my openlist elapsed time: 0.016909, Nodes Expanded: 7092, Optimal Moves: 288, Optimal G cost: 331.735199
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014791, Nodes Expanded: 5965, Optimal Moves: 288, Optimal Gcost: 331.735199
Canonical A Star::A star my openlist elapsed time: 0.010568, Nodes Expanded: 5907, Optimal Moves: 288, Optimal Gcost: 331.735168
Jump Point Search::A star my openlist elapsed time: 0.000902, Nodes Expanded: 99, Optimal Moves: 288, Optimal Gcost: 331.735168
(startX, startY): (100,37) goalX, goalY: (6,77)
Octile::			 A star my openlist elapsed time: 0.025157, Nodes Expanded: 9615, Optimal Moves: 286, Optimal Gcost: 328.492554
Differential Heuristic::	 A star my openlist elapsed time: 0.017747, Nodes Expanded: 7405, Optimal Moves: 286, Optimal G cost: 328.492554
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015051, Nodes Expanded: 6195, Optimal Moves: 286, Optimal Gcost: 328.492554
Canonical A Star::A star my openlist elapsed time: 0.011176, Nodes Expanded: 6195, Optimal Moves: 286, Optimal Gcost: 328.492554
Jump Point Search::A star my openlist elapsed time: 0.001436, Nodes Expanded: 106, Optimal Moves: 286, Optimal Gcost: 328.492554
(startX, startY): (100,44) goalX, goalY: (12,61)
Octile::			 A star my openlist elapsed time: 0.024444, Nodes Expanded: 9300, Optimal Moves: 285, Optimal Gcost: 329.149414
Differential Heuristic::	 A star my openlist elapsed time: 0.019117, Nodes Expanded: 7802, Optimal Moves: 285, Optimal G cost: 329.149414
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014810, Nodes Expanded: 5757, Optimal Moves: 285, Optimal Gcost: 329.149414
Canonical A Star::A star my openlist elapsed time: 0.010324, Nodes Expanded: 5757, Optimal Moves: 285, Optimal Gcost: 329.149414
Jump Point Search::A star my openlist elapsed time: 0.000862, Nodes Expanded: 101, Optimal Moves: 285, Optimal Gcost: 329.149414
(startX, startY): (10,58) goalX, goalY: (149,25)
Octile::			 A star my openlist elapsed time: 0.022001, Nodes Expanded: 8262, Optimal Moves: 293, Optimal Gcost: 332.593048
Differential Heuristic::	 A star my openlist elapsed time: 0.019013, Nodes Expanded: 7424, Optimal Moves: 293, Optimal G cost: 332.593048
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013273, Nodes Expanded: 5254, Optimal Moves: 293, Optimal Gcost: 332.593048
Canonical A Star::A star my openlist elapsed time: 0.009523, Nodes Expanded: 5254, Optimal Moves: 293, Optimal Gcost: 332.593048
Jump Point Search::A star my openlist elapsed time: 0.001496, Nodes Expanded: 145, Optimal Moves: 293, Optimal Gcost: 332.593048
(startX, startY): (10,73) goalX, goalY: (92,37)
Octile::			 A star my openlist elapsed time: 0.024661, Nodes Expanded: 9529, Optimal Moves: 290, Optimal Gcost: 334.149414
Differential Heuristic::	 A star my openlist elapsed time: 0.021254, Nodes Expanded: 8078, Optimal Moves: 290, Optimal G cost: 334.149414
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015242, Nodes Expanded: 6143, Optimal Moves: 290, Optimal Gcost: 334.149414
Canonical A Star::A star my openlist elapsed time: 0.011437, Nodes Expanded: 6143, Optimal Moves: 290, Optimal Gcost: 334.149414
Jump Point Search::A star my openlist elapsed time: 0.001995, Nodes Expanded: 158, Optimal Moves: 290, Optimal Gcost: 334.149414
(startX, startY): (10,85) goalX, goalY: (91,32)
Octile::			 A star my openlist elapsed time: 0.026849, Nodes Expanded: 9787, Optimal Moves: 292, Optimal Gcost: 332.835693
Differential Heuristic::	 A star my openlist elapsed time: 0.014378, Nodes Expanded: 5902, Optimal Moves: 292, Optimal G cost: 332.835693
Differential Heuristic & Octile::A star my openlist elapsed time: 0.008762, Nodes Expanded: 3897, Optimal Moves: 292, Optimal Gcost: 332.835693
Canonical A Star::A star my openlist elapsed time: 0.005655, Nodes Expanded: 3541, Optimal Moves: 292, Optimal Gcost: 332.835693
Jump Point Search::A star my openlist elapsed time: 0.000855, Nodes Expanded: 96, Optimal Moves: 292, Optimal Gcost: 332.835693
(startX, startY): (10,89) goalX, goalY: (81,50)
Octile::			 A star my openlist elapsed time: 0.030010, Nodes Expanded: 9995, Optimal Moves: 298, Optimal Gcost: 332.208252
Differential Heuristic::	 A star my openlist elapsed time: 0.016689, Nodes Expanded: 5893, Optimal Moves: 298, Optimal G cost: 332.208252
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009291, Nodes Expanded: 3801, Optimal Moves: 298, Optimal Gcost: 332.208252
Canonical A Star::A star my openlist elapsed time: 0.006616, Nodes Expanded: 3812, Optimal Moves: 298, Optimal Gcost: 332.208282
Jump Point Search::A star my openlist elapsed time: 0.000805, Nodes Expanded: 106, Optimal Moves: 298, Optimal Gcost: 332.208282
(startX, startY): (100,101) goalX, goalY: (172,78)
Octile::			 A star my openlist elapsed time: 0.019783, Nodes Expanded: 7905, Optimal Moves: 287, Optimal Gcost: 332.806244
Differential Heuristic::	 A star my openlist elapsed time: 0.003081, Nodes Expanded: 1357, Optimal Moves: 287, Optimal G cost: 332.806244
Differential Heuristic & Octile::A star my openlist elapsed time: 0.002999, Nodes Expanded: 1357, Optimal Moves: 287, Optimal Gcost: 332.806244
Canonical A Star::A star my openlist elapsed time: 0.001927, Nodes Expanded: 1399, Optimal Moves: 287, Optimal Gcost: 332.806274
Jump Point Search::A star my openlist elapsed time: 0.000430, Nodes Expanded: 35, Optimal Moves: 287, Optimal Gcost: 332.806274
(startX, startY): (100,29) goalX, goalY: (6,75)
Octile::			 A star my openlist elapsed time: 0.025386, Nodes Expanded: 9687, Optimal Moves: 290, Optimal Gcost: 334.977844
Differential Heuristic::	 A star my openlist elapsed time: 0.019399, Nodes Expanded: 7623, Optimal Moves: 290, Optimal G cost: 334.977844
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015755, Nodes Expanded: 6320, Optimal Moves: 290, Optimal Gcost: 334.977844
Canonical A Star::A star my openlist elapsed time: 0.011214, Nodes Expanded: 6303, Optimal Moves: 290, Optimal Gcost: 334.977814
Jump Point Search::A star my openlist elapsed time: 0.001165, Nodes Expanded: 114, Optimal Moves: 290, Optimal Gcost: 334.977814
(startX, startY): (100,30) goalX, goalY: (65,60)
Octile::			 A star my openlist elapsed time: 0.022143, Nodes Expanded: 9511, Optimal Moves: 285, Optimal Gcost: 333.291565
Differential Heuristic::	 A star my openlist elapsed time: 0.016008, Nodes Expanded: 6818, Optimal Moves: 285, Optimal G cost: 333.291534
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014822, Nodes Expanded: 6152, Optimal Moves: 285, Optimal Gcost: 333.291534
Canonical A Star::A star my openlist elapsed time: 0.010840, Nodes Expanded: 6189, Optimal Moves: 285, Optimal Gcost: 333.291534
Jump Point Search::A star my openlist elapsed time: 0.001225, Nodes Expanded: 107, Optimal Moves: 285, Optimal Gcost: 333.291534
(startX, startY): (100,33) goalX, goalY: (42,54)
Octile::			 A star my openlist elapsed time: 0.025636, Nodes Expanded: 9549, Optimal Moves: 288, Optimal Gcost: 332.563599
Differential Heuristic::	 A star my openlist elapsed time: 0.018454, Nodes Expanded: 7430, Optimal Moves: 288, Optimal G cost: 332.563599
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014609, Nodes Expanded: 6081, Optimal Moves: 288, Optimal Gcost: 332.563599
Canonical A Star::A star my openlist elapsed time: 0.010410, Nodes Expanded: 5965, Optimal Moves: 288, Optimal Gcost: 332.563599
Jump Point Search::A star my openlist elapsed time: 0.000950, Nodes Expanded: 99, Optimal Moves: 288, Optimal Gcost: 332.563599
(startX, startY): (100,34) goalX, goalY: (67,72)
Octile::			 A star my openlist elapsed time: 0.026028, Nodes Expanded: 10630, Optimal Moves: 288, Optimal Gcost: 333.392029
Differential Heuristic::	 A star my openlist elapsed time: 0.016004, Nodes Expanded: 7037, Optimal Moves: 288, Optimal G cost: 333.392029
Differential Heuristic & Octile::A star my openlist elapsed time: 0.017517, Nodes Expanded: 6922, Optimal Moves: 288, Optimal Gcost: 333.392029
Canonical A Star::A star my openlist elapsed time: 0.011923, Nodes Expanded: 6873, Optimal Moves: 288, Optimal Gcost: 333.392029
Jump Point Search::A star my openlist elapsed time: 0.001447, Nodes Expanded: 117, Optimal Moves: 288, Optimal Gcost: 333.392029
(startX, startY): (100,44) goalX, goalY: (34,53)
Octile::			 A star my openlist elapsed time: 0.031172, Nodes Expanded: 10461, Optimal Moves: 295, Optimal Gcost: 335.835693
Differential Heuristic::	 A star my openlist elapsed time: 0.022748, Nodes Expanded: 7939, Optimal Moves: 295, Optimal G cost: 335.835693
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015694, Nodes Expanded: 6568, Optimal Moves: 295, Optimal Gcost: 335.835693
Canonical A Star::A star my openlist elapsed time: 0.011667, Nodes Expanded: 6568, Optimal Moves: 295, Optimal Gcost: 335.835693
Jump Point Search::A star my openlist elapsed time: 0.000927, Nodes Expanded: 116, Optimal Moves: 295, Optimal Gcost: 335.835693
(startX, startY): (100,34) goalX, goalY: (63,50)
Octile::			 A star my openlist elapsed time: 0.023138, Nodes Expanded: 9720, Optimal Moves: 292, Optimal Gcost: 339.048889
Differential Heuristic::	 A star my openlist elapsed time: 0.019258, Nodes Expanded: 7820, Optimal Moves: 292, Optimal G cost: 339.048889
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015705, Nodes Expanded: 6439, Optimal Moves: 292, Optimal Gcost: 339.048889
Canonical A Star::A star my openlist elapsed time: 0.012380, Nodes Expanded: 6390, Optimal Moves: 292, Optimal Gcost: 339.048889
Jump Point Search::A star my openlist elapsed time: 0.001230, Nodes Expanded: 107, Optimal Moves: 292, Optimal Gcost: 339.048889
(startX, startY): (100,39) goalX, goalY: (57,45)
Octile::			 A star my openlist elapsed time: 0.022422, Nodes Expanded: 9601, Optimal Moves: 297, Optimal Gcost: 339.492554
Differential Heuristic::	 A star my openlist elapsed time: 0.019445, Nodes Expanded: 8033, Optimal Moves: 297, Optimal G cost: 339.492554
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014900, Nodes Expanded: 6401, Optimal Moves: 297, Optimal Gcost: 339.492554
Canonical A Star::A star my openlist elapsed time: 0.011348, Nodes Expanded: 6401, Optimal Moves: 297, Optimal Gcost: 339.492554
Jump Point Search::A star my openlist elapsed time: 0.001138, Nodes Expanded: 108, Optimal Moves: 297, Optimal Gcost: 339.492554
(startX, startY): (100,41) goalX, goalY: (41,45)
Octile::			 A star my openlist elapsed time: 0.023113, Nodes Expanded: 9672, Optimal Moves: 297, Optimal Gcost: 338.664124
Differential Heuristic::	 A star my openlist elapsed time: 0.020071, Nodes Expanded: 8030, Optimal Moves: 297, Optimal G cost: 338.664124
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015650, Nodes Expanded: 6304, Optimal Moves: 297, Optimal Gcost: 338.664124
Canonical A Star::A star my openlist elapsed time: 0.011108, Nodes Expanded: 6304, Optimal Moves: 297, Optimal Gcost: 338.664124
Jump Point Search::A star my openlist elapsed time: 0.000989, Nodes Expanded: 107, Optimal Moves: 297, Optimal Gcost: 338.664124
(startX, startY): (100,46) goalX, goalY: (40,43)
Octile::			 A star my openlist elapsed time: 0.023507, Nodes Expanded: 9729, Optimal Moves: 299, Optimal Gcost: 339.007263
Differential Heuristic::	 A star my openlist elapsed time: 0.020794, Nodes Expanded: 8132, Optimal Moves: 299, Optimal G cost: 339.007263
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014840, Nodes Expanded: 6329, Optimal Moves: 299, Optimal Gcost: 339.007263
Canonical A Star::A star my openlist elapsed time: 0.010718, Nodes Expanded: 6329, Optimal Moves: 299, Optimal Gcost: 339.007263
Jump Point Search::A star my openlist elapsed time: 0.000899, Nodes Expanded: 107, Optimal Moves: 299, Optimal Gcost: 339.007263
(startX, startY): (100,78) goalX, goalY: (155,52)
Octile::			 A star my openlist elapsed time: 0.019243, Nodes Expanded: 7925, Optimal Moves: 296, Optimal Gcost: 338.078339
Differential Heuristic::	 A star my openlist elapsed time: 0.016865, Nodes Expanded: 6309, Optimal Moves: 296, Optimal G cost: 338.078339
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013899, Nodes Expanded: 5143, Optimal Moves: 296, Optimal Gcost: 338.078339
Canonical A Star::A star my openlist elapsed time: 0.010623, Nodes Expanded: 5143, Optimal Moves: 296, Optimal Gcost: 338.078339
Jump Point Search::A star my openlist elapsed time: 0.001522, Nodes Expanded: 106, Optimal Moves: 296, Optimal Gcost: 338.078339
(startX, startY): (100,78) goalX, goalY: (186,74)
Octile::			 A star my openlist elapsed time: 0.024514, Nodes Expanded: 8399, Optimal Moves: 298, Optimal Gcost: 339.664124
Differential Heuristic::	 A star my openlist elapsed time: 0.011526, Nodes Expanded: 4439, Optimal Moves: 298, Optimal G cost: 339.664124
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009994, Nodes Expanded: 3947, Optimal Moves: 298, Optimal Gcost: 339.664124
Canonical A Star::A star my openlist elapsed time: 0.007197, Nodes Expanded: 3947, Optimal Moves: 298, Optimal Gcost: 339.664124
Jump Point Search::A star my openlist elapsed time: 0.000967, Nodes Expanded: 80, Optimal Moves: 298, Optimal Gcost: 339.664124
(startX, startY): (100,81) goalX, goalY: (184,70)
Octile::			 A star my openlist elapsed time: 0.022037, Nodes Expanded: 8134, Optimal Moves: 296, Optimal Gcost: 338.078339
Differential Heuristic::	 A star my openlist elapsed time: 0.011283, Nodes Expanded: 4373, Optimal Moves: 296, Optimal G cost: 338.078339
Differential Heuristic & Octile::A star my openlist elapsed time: 0.009778, Nodes Expanded: 3860, Optimal Moves: 296, Optimal Gcost: 338.078339
Canonical A Star::A star my openlist elapsed time: 0.007389, Nodes Expanded: 4052, Optimal Moves: 296, Optimal Gcost: 338.078339
Jump Point Search::A star my openlist elapsed time: 0.000847, Nodes Expanded: 83, Optimal Moves: 296, Optimal Gcost: 338.078339
(startX, startY): (101,103) goalX, goalY: (130,64)
Octile::			 A star my openlist elapsed time: 0.019255, Nodes Expanded: 7867, Optimal Moves: 290, Optimal Gcost: 336.634674
Differential Heuristic::	 A star my openlist elapsed time: 0.016531, Nodes Expanded: 6075, Optimal Moves: 290, Optimal G cost: 336.634705
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013407, Nodes Expanded: 5049, Optimal Moves: 290, Optimal Gcost: 336.634705
Canonical A Star::A star my openlist elapsed time: 0.009882, Nodes Expanded: 4997, Optimal Moves: 290, Optimal Gcost: 336.634674
Jump Point Search::A star my openlist elapsed time: 0.001532, Nodes Expanded: 105, Optimal Moves: 290, Optimal Gcost: 336.634674
(startX, startY): (101,105) goalX, goalY: (164,64)
Octile::			 A star my openlist elapsed time: 0.018002, Nodes Expanded: 7422, Optimal Moves: 288, Optimal Gcost: 337.948395
Differential Heuristic::	 A star my openlist elapsed time: 0.011733, Nodes Expanded: 4418, Optimal Moves: 288, Optimal G cost: 337.948395
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011001, Nodes Expanded: 3985, Optimal Moves: 288, Optimal Gcost: 337.948395
Canonical A Star::A star my openlist elapsed time: 0.007789, Nodes Expanded: 3987, Optimal Moves: 288, Optimal Gcost: 337.948395
Jump Point Search::A star my openlist elapsed time: 0.001136, Nodes Expanded: 80, Optimal Moves: 288, Optimal Gcost: 337.948395
(startX, startY): (101,106) goalX, goalY: (136,59)
Octile::			 A star my openlist elapsed time: 0.018947, Nodes Expanded: 7673, Optimal Moves: 294, Optimal Gcost: 339.806244
Differential Heuristic::	 A star my openlist elapsed time: 0.015154, Nodes Expanded: 5564, Optimal Moves: 294, Optimal G cost: 339.806244
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013591, Nodes Expanded: 5068, Optimal Moves: 294, Optimal Gcost: 339.806244
Canonical A Star::A star my openlist elapsed time: 0.009883, Nodes Expanded: 5013, Optimal Moves: 294, Optimal Gcost: 339.806244
Jump Point Search::A star my openlist elapsed time: 0.001336, Nodes Expanded: 107, Optimal Moves: 294, Optimal Gcost: 339.806244
(startX, startY): (100,104) goalX, goalY: (167,58)
Octile::			 A star my openlist elapsed time: 0.018594, Nodes Expanded: 7474, Optimal Moves: 293, Optimal Gcost: 343.776825
Differential Heuristic::	 A star my openlist elapsed time: 0.014388, Nodes Expanded: 5121, Optimal Moves: 293, Optimal G cost: 343.776825
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012419, Nodes Expanded: 4519, Optimal Moves: 293, Optimal Gcost: 343.776825
Canonical A Star::A star my openlist elapsed time: 0.008930, Nodes Expanded: 4520, Optimal Moves: 293, Optimal Gcost: 343.776825
Jump Point Search::A star my openlist elapsed time: 0.001076, Nodes Expanded: 91, Optimal Moves: 293, Optimal Gcost: 343.776825
(startX, startY): (100,38) goalX, goalY: (43,42)
Octile::			 A star my openlist elapsed time: 0.024140, Nodes Expanded: 9606, Optimal Moves: 300, Optimal Gcost: 342.078339
Differential Heuristic::	 A star my openlist elapsed time: 0.021054, Nodes Expanded: 8123, Optimal Moves: 300, Optimal G cost: 342.078339
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015591, Nodes Expanded: 6309, Optimal Moves: 300, Optimal Gcost: 342.078339
Canonical A Star::A star my openlist elapsed time: 0.011127, Nodes Expanded: 6309, Optimal Moves: 300, Optimal Gcost: 342.078339
Jump Point Search::A star my openlist elapsed time: 0.000983, Nodes Expanded: 105, Optimal Moves: 300, Optimal Gcost: 342.078339
(startX, startY): (100,43) goalX, goalY: (59,43)
Octile::			 A star my openlist elapsed time: 0.023594, Nodes Expanded: 9699, Optimal Moves: 299, Optimal Gcost: 340.664124
Differential Heuristic::	 A star my openlist elapsed time: 0.025741, Nodes Expanded: 8149, Optimal Moves: 299, Optimal G cost: 340.664124
Differential Heuristic & Octile::A star my openlist elapsed time: 0.020009, Nodes Expanded: 6497, Optimal Moves: 299, Optimal Gcost: 340.664124
Canonical A Star::A star my openlist elapsed time: 0.012319, Nodes Expanded: 6497, Optimal Moves: 299, Optimal Gcost: 340.664124
Jump Point Search::A star my openlist elapsed time: 0.001018, Nodes Expanded: 109, Optimal Moves: 299, Optimal Gcost: 340.664124
(startX, startY): (100,6) goalX, goalY: (22,76)
Octile::			 A star my openlist elapsed time: 0.022316, Nodes Expanded: 8769, Optimal Moves: 296, Optimal Gcost: 340.977844
Differential Heuristic::	 A star my openlist elapsed time: 0.013149, Nodes Expanded: 5665, Optimal Moves: 296, Optimal G cost: 340.977844
Differential Heuristic & Octile::A star my openlist elapsed time: 0.011617, Nodes Expanded: 4926, Optimal Moves: 296, Optimal Gcost: 340.977844
Canonical A Star::A star my openlist elapsed time: 0.008198, Nodes Expanded: 4944, Optimal Moves: 296, Optimal Gcost: 340.977875
Jump Point Search::A star my openlist elapsed time: 0.000821, Nodes Expanded: 80, Optimal Moves: 296, Optimal Gcost: 340.977875
(startX, startY): (100,7) goalX, goalY: (20,76)
Octile::			 A star my openlist elapsed time: 0.025256, Nodes Expanded: 8977, Optimal Moves: 297, Optimal Gcost: 341.977844
Differential Heuristic::	 A star my openlist elapsed time: 0.017049, Nodes Expanded: 5946, Optimal Moves: 297, Optimal G cost: 341.977844
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013265, Nodes Expanded: 5220, Optimal Moves: 297, Optimal Gcost: 341.977844
Canonical A Star::A star my openlist elapsed time: 0.008862, Nodes Expanded: 5236, Optimal Moves: 297, Optimal Gcost: 341.977875
Jump Point Search::A star my openlist elapsed time: 0.001377, Nodes Expanded: 84, Optimal Moves: 297, Optimal Gcost: 341.977875
(startX, startY): (100,83) goalX, goalY: (160,49)
Octile::			 A star my openlist elapsed time: 0.019545, Nodes Expanded: 7916, Optimal Moves: 299, Optimal Gcost: 341.906769
Differential Heuristic::	 A star my openlist elapsed time: 0.018142, Nodes Expanded: 6696, Optimal Moves: 299, Optimal G cost: 341.906769
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014837, Nodes Expanded: 5361, Optimal Moves: 299, Optimal Gcost: 341.906769
Canonical A Star::A star my openlist elapsed time: 0.010308, Nodes Expanded: 5361, Optimal Moves: 299, Optimal Gcost: 341.906769
Jump Point Search::A star my openlist elapsed time: 0.001371, Nodes Expanded: 120, Optimal Moves: 299, Optimal Gcost: 341.906769
(startX, startY): (100,95) goalX, goalY: (177,88)
Octile::			 A star my openlist elapsed time: 0.028035, Nodes Expanded: 9511, Optimal Moves: 297, Optimal Gcost: 342.392029
Differential Heuristic::	 A star my openlist elapsed time: 0.007927, Nodes Expanded: 3296, Optimal Moves: 297, Optimal G cost: 342.392059
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007829, Nodes Expanded: 3219, Optimal Moves: 297, Optimal Gcost: 342.392059
Canonical A Star::A star my openlist elapsed time: 0.005547, Nodes Expanded: 3219, Optimal Moves: 297, Optimal Gcost: 342.392059
Jump Point Search::A star my openlist elapsed time: 0.000725, Nodes Expanded: 58, Optimal Moves: 297, Optimal Gcost: 342.392059
(startX, startY): (100,97) goalX, goalY: (125,56)
Octile::			 A star my openlist elapsed time: 0.019347, Nodes Expanded: 7919, Optimal Moves: 292, Optimal Gcost: 340.291534
Differential Heuristic::	 A star my openlist elapsed time: 0.018811, Nodes Expanded: 6975, Optimal Moves: 292, Optimal G cost: 340.291565
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013912, Nodes Expanded: 5385, Optimal Moves: 292, Optimal Gcost: 340.291565
Canonical A Star::A star my openlist elapsed time: 0.010238, Nodes Expanded: 5324, Optimal Moves: 292, Optimal Gcost: 340.291534
Jump Point Search::A star my openlist elapsed time: 0.001589, Nodes Expanded: 130, Optimal Moves: 292, Optimal Gcost: 340.291534
(startX, startY): (100,98) goalX, goalY: (126,53)
Octile::			 A star my openlist elapsed time: 0.019882, Nodes Expanded: 7969, Optimal Moves: 296, Optimal Gcost: 343.877319
Differential Heuristic::	 A star my openlist elapsed time: 0.019065, Nodes Expanded: 7249, Optimal Moves: 296, Optimal G cost: 343.877350
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014354, Nodes Expanded: 5514, Optimal Moves: 296, Optimal Gcost: 343.877350
Canonical A Star::A star my openlist elapsed time: 0.011325, Nodes Expanded: 5514, Optimal Moves: 296, Optimal Gcost: 343.877350
Jump Point Search::A star my openlist elapsed time: 0.001509, Nodes Expanded: 138, Optimal Moves: 296, Optimal Gcost: 343.877350
(startX, startY): (101,114) goalX, goalY: (141,62)
Octile::			 A star my openlist elapsed time: 0.018158, Nodes Expanded: 7408, Optimal Moves: 299, Optimal Gcost: 342.735199
Differential Heuristic::	 A star my openlist elapsed time: 0.015151, Nodes Expanded: 5794, Optimal Moves: 299, Optimal G cost: 342.735199
Differential Heuristic & Octile::A star my openlist elapsed time: 0.012758, Nodes Expanded: 4741, Optimal Moves: 299, Optimal Gcost: 342.735199
Canonical A Star::A star my openlist elapsed time: 0.009251, Nodes Expanded: 4741, Optimal Moves: 299, Optimal Gcost: 342.735199
Jump Point Search::A star my openlist elapsed time: 0.001212, Nodes Expanded: 99, Optimal Moves: 299, Optimal Gcost: 342.735199
(startX, startY): (10,69) goalX, goalY: (86,27)
Octile::			 A star my openlist elapsed time: 0.025483, Nodes Expanded: 9772, Optimal Moves: 299, Optimal Gcost: 347.705780
Differential Heuristic::	 A star my openlist elapsed time: 0.025042, Nodes Expanded: 8966, Optimal Moves: 299, Optimal G cost: 347.705780
Differential Heuristic & Octile::A star my openlist elapsed time: 0.017925, Nodes Expanded: 6639, Optimal Moves: 299, Optimal Gcost: 347.705780
Canonical A Star::A star my openlist elapsed time: 0.013608, Nodes Expanded: 6639, Optimal Moves: 299, Optimal Gcost: 347.705780
Jump Point Search::A star my openlist elapsed time: 0.002487, Nodes Expanded: 172, Optimal Moves: 299, Optimal Gcost: 347.705780
(startX, startY): (10,94) goalX, goalY: (97,7)
Octile::			 A star my openlist elapsed time: 0.023560, Nodes Expanded: 9206, Optimal Moves: 304, Optimal Gcost: 346.492554
Differential Heuristic::	 A star my openlist elapsed time: 0.014423, Nodes Expanded: 6241, Optimal Moves: 304, Optimal G cost: 346.492554
Differential Heuristic & Octile::A star my openlist elapsed time: 0.007678, Nodes Expanded: 3457, Optimal Moves: 304, Optimal Gcost: 346.492554
Canonical A Star::A star my openlist elapsed time: 0.005313, Nodes Expanded: 3558, Optimal Moves: 304, Optimal Gcost: 346.492584
Jump Point Search::A star my openlist elapsed time: 0.000870, Nodes Expanded: 92, Optimal Moves: 304, Optimal Gcost: 346.492584
(startX, startY): (100,18) goalX, goalY: (53,55)
Octile::			 A star my openlist elapsed time: 0.022691, Nodes Expanded: 9380, Optimal Moves: 301, Optimal Gcost: 344.735199
Differential Heuristic::	 A star my openlist elapsed time: 0.018190, Nodes Expanded: 7280, Optimal Moves: 301, Optimal G cost: 344.735199
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015386, Nodes Expanded: 6058, Optimal Moves: 301, Optimal Gcost: 344.735199
Canonical A Star::A star my openlist elapsed time: 0.010457, Nodes Expanded: 6058, Optimal Moves: 301, Optimal Gcost: 344.735199
Jump Point Search::A star my openlist elapsed time: 0.000962, Nodes Expanded: 104, Optimal Moves: 301, Optimal Gcost: 344.735199
(startX, startY): (100,39) goalX, goalY: (37,39)
Octile::			 A star my openlist elapsed time: 0.024457, Nodes Expanded: 9892, Optimal Moves: 303, Optimal Gcost: 347.149414
Differential Heuristic::	 A star my openlist elapsed time: 0.021482, Nodes Expanded: 8363, Optimal Moves: 303, Optimal G cost: 347.149414
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015054, Nodes Expanded: 6390, Optimal Moves: 303, Optimal Gcost: 347.149414
Canonical A Star::A star my openlist elapsed time: 0.012362, Nodes Expanded: 6390, Optimal Moves: 303, Optimal Gcost: 347.149414
Jump Point Search::A star my openlist elapsed time: 0.001114, Nodes Expanded: 108, Optimal Moves: 303, Optimal Gcost: 347.149414
(startX, startY): (100,46) goalX, goalY: (26,50)
Octile::			 A star my openlist elapsed time: 0.030398, Nodes Expanded: 11147, Optimal Moves: 303, Optimal Gcost: 344.249908
Differential Heuristic::	 A star my openlist elapsed time: 0.022409, Nodes Expanded: 8362, Optimal Moves: 303, Optimal G cost: 344.249908
Differential Heuristic & Octile::A star my openlist elapsed time: 0.022214, Nodes Expanded: 6757, Optimal Moves: 303, Optimal Gcost: 344.249908
Canonical A Star::A star my openlist elapsed time: 0.016739, Nodes Expanded: 6757, Optimal Moves: 303, Optimal Gcost: 344.249908
Jump Point Search::A star my openlist elapsed time: 0.001074, Nodes Expanded: 115, Optimal Moves: 303, Optimal Gcost: 344.249908
(startX, startY): (101,19) goalX, goalY: (69,72)
Octile::			 A star my openlist elapsed time: 0.032201, Nodes Expanded: 10600, Optimal Moves: 301, Optimal Gcost: 347.634705
Differential Heuristic::	 A star my openlist elapsed time: 0.021917, Nodes Expanded: 7110, Optimal Moves: 301, Optimal G cost: 347.634705
Differential Heuristic & Octile::A star my openlist elapsed time: 0.019915, Nodes Expanded: 6983, Optimal Moves: 301, Optimal Gcost: 347.634705
Canonical A Star::A star my openlist elapsed time: 0.016246, Nodes Expanded: 6983, Optimal Moves: 301, Optimal Gcost: 347.634705
Jump Point Search::A star my openlist elapsed time: 0.001595, Nodes Expanded: 120, Optimal Moves: 301, Optimal Gcost: 347.634705
(startX, startY): (101,27) goalX, goalY: (38,47)
Octile::			 A star my openlist elapsed time: 0.034161, Nodes Expanded: 9824, Optimal Moves: 301, Optimal Gcost: 346.806274
Differential Heuristic::	 A star my openlist elapsed time: 0.026725, Nodes Expanded: 8025, Optimal Moves: 301, Optimal G cost: 346.806274
Differential Heuristic & Octile::A star my openlist elapsed time: 0.019138, Nodes Expanded: 6332, Optimal Moves: 301, Optimal Gcost: 346.806274
Canonical A Star::A star my openlist elapsed time: 0.015215, Nodes Expanded: 6305, Optimal Moves: 301, Optimal Gcost: 346.806244
Jump Point Search::A star my openlist elapsed time: 0.001413, Nodes Expanded: 109, Optimal Moves: 301, Optimal Gcost: 346.806244
(startX, startY): (101,81) goalX, goalY: (146,44)
Octile::			 A star my openlist elapsed time: 0.028334, Nodes Expanded: 8080, Optimal Moves: 305, Optimal Gcost: 344.593048
Differential Heuristic::	 A star my openlist elapsed time: 0.019327, Nodes Expanded: 7042, Optimal Moves: 305, Optimal G cost: 344.593048
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014340, Nodes Expanded: 5488, Optimal Moves: 305, Optimal Gcost: 344.593048
Canonical A Star::A star my openlist elapsed time: 0.010575, Nodes Expanded: 5489, Optimal Moves: 305, Optimal Gcost: 344.593048
Jump Point Search::A star my openlist elapsed time: 0.002087, Nodes Expanded: 134, Optimal Moves: 305, Optimal Gcost: 344.593048
(startX, startY): (101,88) goalX, goalY: (122,49)
Octile::			 A star my openlist elapsed time: 0.020903, Nodes Expanded: 8128, Optimal Moves: 300, Optimal Gcost: 345.806274
Differential Heuristic::	 A star my openlist elapsed time: 0.019914, Nodes Expanded: 7651, Optimal Moves: 300, Optimal G cost: 345.806274
Differential Heuristic & Octile::A star my openlist elapsed time: 0.015285, Nodes Expanded: 5731, Optimal Moves: 300, Optimal Gcost: 345.806274
Canonical A Star::A star my openlist elapsed time: 0.011319, Nodes Expanded: 5731, Optimal Moves: 300, Optimal Gcost: 345.806274
Jump Point Search::A star my openlist elapsed time: 0.002015, Nodes Expanded: 147, Optimal Moves: 300, Optimal Gcost: 345.806274
(startX, startY): (102,102) goalX, goalY: (124,55)
Octile::			 A star my openlist elapsed time: 0.020369, Nodes Expanded: 7964, Optimal Moves: 298, Optimal Gcost: 347.534180
Differential Heuristic::	 A star my openlist elapsed time: 0.015443, Nodes Expanded: 5855, Optimal Moves: 298, Optimal G cost: 347.534180
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013794, Nodes Expanded: 5284, Optimal Moves: 298, Optimal Gcost: 347.534180
Canonical A Star::A star my openlist elapsed time: 0.010385, Nodes Expanded: 5458, Optimal Moves: 298, Optimal Gcost: 347.534210
Jump Point Search::A star my openlist elapsed time: 0.001527, Nodes Expanded: 133, Optimal Moves: 298, Optimal Gcost: 347.534210
(startX, startY): (10,61) goalX, goalY: (85,34)
Octile::			 A star my openlist elapsed time: 0.024422, Nodes Expanded: 9775, Optimal Moves: 302, Optimal Gcost: 350.291565
Differential Heuristic::	 A star my openlist elapsed time: 0.023995, Nodes Expanded: 8783, Optimal Moves: 302, Optimal G cost: 350.291565
Differential Heuristic & Octile::A star my openlist elapsed time: 0.017323, Nodes Expanded: 6662, Optimal Moves: 302, Optimal Gcost: 350.291565
Canonical A Star::A star my openlist elapsed time: 0.012685, Nodes Expanded: 6662, Optimal Moves: 302, Optimal Gcost: 350.291565
Jump Point Search::A star my openlist elapsed time: 0.002113, Nodes Expanded: 182, Optimal Moves: 302, Optimal Gcost: 350.291565
(startX, startY): (100,36) goalX, goalY: (31,39)
Octile::			 A star my openlist elapsed time: 0.024852, Nodes Expanded: 10093, Optimal Moves: 303, Optimal Gcost: 350.877350
Differential Heuristic::	 A star my openlist elapsed time: 0.020842, Nodes Expanded: 8461, Optimal Moves: 303, Optimal G cost: 350.877350
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014533, Nodes Expanded: 6363, Optimal Moves: 303, Optimal Gcost: 350.877350
Canonical A Star::A star my openlist elapsed time: 0.010847, Nodes Expanded: 6363, Optimal Moves: 303, Optimal Gcost: 350.877350
Jump Point Search::A star my openlist elapsed time: 0.000960, Nodes Expanded: 110, Optimal Moves: 303, Optimal Gcost: 350.877350
(startX, startY): (100,48) goalX, goalY: (27,39)
Octile::			 A star my openlist elapsed time: 0.029075, Nodes Expanded: 10790, Optimal Moves: 307, Optimal Gcost: 349.906769
Differential Heuristic::	 A star my openlist elapsed time: 0.022472, Nodes Expanded: 8630, Optimal Moves: 307, Optimal G cost: 349.906769
Differential Heuristic & Octile::A star my openlist elapsed time: 0.016218, Nodes Expanded: 6601, Optimal Moves: 307, Optimal Gcost: 349.906769
Canonical A Star::A star my openlist elapsed time: 0.011215, Nodes Expanded: 6433, Optimal Moves: 307, Optimal Gcost: 349.906769
Jump Point Search::A star my openlist elapsed time: 0.001049, Nodes Expanded: 114, Optimal Moves: 307, Optimal Gcost: 349.906769
(startX, startY): (100,95) goalX, goalY: (188,67)
Octile::			 A star my openlist elapsed time: 0.023346, Nodes Expanded: 8193, Optimal Moves: 300, Optimal Gcost: 349.119965
Differential Heuristic::	 A star my openlist elapsed time: 0.016316, Nodes Expanded: 6029, Optimal Moves: 300, Optimal G cost: 349.119995
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014406, Nodes Expanded: 5021, Optimal Moves: 300, Optimal Gcost: 349.119995
Canonical A Star::A star my openlist elapsed time: 0.010641, Nodes Expanded: 5021, Optimal Moves: 300, Optimal Gcost: 349.119995
Jump Point Search::A star my openlist elapsed time: 0.001345, Nodes Expanded: 109, Optimal Moves: 300, Optimal Gcost: 349.119995
(startX, startY): (100,96) goalX, goalY: (162,47)
Octile::			 A star my openlist elapsed time: 0.020606, Nodes Expanded: 7959, Optimal Moves: 301, Optimal Gcost: 350.119965
Differential Heuristic::	 A star my openlist elapsed time: 0.016049, Nodes Expanded: 5925, Optimal Moves: 301, Optimal G cost: 350.119965
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014452, Nodes Expanded: 5393, Optimal Moves: 301, Optimal Gcost: 350.119965
Canonical A Star::A star my openlist elapsed time: 0.011049, Nodes Expanded: 5578, Optimal Moves: 301, Optimal Gcost: 350.119995
Jump Point Search::A star my openlist elapsed time: 0.001417, Nodes Expanded: 124, Optimal Moves: 301, Optimal Gcost: 350.119995
(startX, startY): (101,105) goalX, goalY: (164,53)
Octile::			 A star my openlist elapsed time: 0.019624, Nodes Expanded: 7950, Optimal Moves: 299, Optimal Gcost: 351.433685
Differential Heuristic::	 A star my openlist elapsed time: 0.015643, Nodes Expanded: 5638, Optimal Moves: 299, Optimal G cost: 351.433685
Differential Heuristic & Octile::A star my openlist elapsed time: 0.014171, Nodes Expanded: 5163, Optimal Moves: 299, Optimal Gcost: 351.433685
Canonical A Star::A star my openlist elapsed time: 0.010675, Nodes Expanded: 5291, Optimal Moves: 299, Optimal Gcost: 351.433685
Jump Point Search::A star my openlist elapsed time: 0.001397, Nodes Expanded: 104, Optimal Moves: 299, Optimal Gcost: 351.433685
(startX, startY): (101,13) goalX, goalY: (15,60)
Octile::			 A star my openlist elapsed time: 0.023464, Nodes Expanded: 9212, Optimal Moves: 303, Optimal Gcost: 351.291565
Differential Heuristic::	 A star my openlist elapsed time: 0.018283, Nodes Expanded: 7691, Optimal Moves: 303, Optimal G cost: 351.291565
Differential Heuristic & Octile::A star my openlist elapsed time: 0.013610, Nodes Expanded: 5691, Optimal Moves: 303, Optimal Gcost: 351.291565
Canonical A Star::A star my openlist elapsed time: 0.009670, Nodes Expanded: 5667, Optimal Moves: 303, Optimal Gcost: 351.291565
Jump Point Search::A star my openlist elapsed time: 0.000887, Nodes Expanded: 105, Optimal Moves: 303, Optimal Gcost: 351.291565
(startX, startY): (101,21) goalX, goalY: (69,75)
Octile::			 A star my openlist elapsed time: 0.027122, Nodes Expanded: 10783, Optimal Moves: 302, Optimal Gcost: 348.634705
Differential Heuristic::	 A star my openlist elapsed time: 0.016225, Nodes Expanded: 7189, Optimal Moves: 302, Optimal G cost: 348.634705
Differential Heuristic & Octile::A star my openlist elapsed time: 0.016809, Nodes Expanded: 7070, Optimal Moves: 302, Optimal Gcost: 348.634705
Canonical A Star::A star my openlist elapsed time: 0.012706, Nodes Expanded: 7070, Optimal Moves: 302, Optimal Gcost: 348.634705
Jump Point Search::A star my openlist elapsed time: 0.001447, Nodes Expanded: 122, Optimal Moves: 302, Optimal Gcost: 348.634705
(startX, startY): (101,22) goalX, goalY: (72,78)
Octile::			 A star my openlist elapsed time: 0.027502, Nodes Expanded: 10854, Optimal Moves: 304, Optimal Gcost: 351.877350
Differential Heuristic::	 A star my openlist elapsed time: 0.016424, Nodes Expanded: 7288, Optimal Moves: 304, Optimal G cost: 351.877350
Differential Heuristic & Octile::A star my openlist elapsed time: 0.016118, Nodes Expanded: 7118, Optimal Moves: 304, Optimal Gcost: 351.877350
Canonical A Star::A star my openlist elapsed time: 0.011551, Nodes Expanded: 7118, Optimal Moves: 304, Optimal Gcost: 351.877350
Jump Point Search::A star my openlist elapsed time: 0.001124, Nodes Expanded: 122, Optimal Moves: 304, Optimal Gcost: 351.877350
(startX, startY): (101,24) goalX, goalY: (72,77)
Octile::			 A star my openlist elapsed time: 0.026286, Nodes Expanded: 10801, Optimal Moves: 301, Optimal Gcost: 348.877350
Differential Heuristic::	 A star my openlist elapsed time: 0.016260, Nodes Expanded: 7272, Optimal Moves: 301, Optimal G cost: 348.877350
Differential Heuristic & Octile::A star my openlist elapsed time: 0.016820, Nodes Expanded: 7109, Optimal Moves: 301, Optimal Gcost: 348.877350
Canonical A Star::A star my openlist elapsed time: 0.012263, Nodes Expanded: 7109, Optimal Moves: 301, Optimal Gcost: 348.877350
Jump Point Search::A star my openlist elapsed time: 0.001289, Nodes Expanded: 121, Optimal Moves: 301, Optimal Gcost: 348.877350
(startX, startY): (100,1) goalX, goalY: (