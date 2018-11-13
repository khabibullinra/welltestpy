------------------------------------ Schedule Section -----------------------------
SCHEDULE
WELSPECS
-- name group x y pwf_depth phase /
  M1     G1   19 75 1*        OIL /
/
COMPDAT
-- name x y z1 z2 perf table  CF  diam KH skin  /
   M1   2*   1 13  SHUT     2*      0.2  1*  1 /
/
TSTEP
 1*1.0
/
WELSPECS
-- name group x y pwf_depth phase /
  M2     G1   29 85 1*        OIL /
/
COMPDAT
-- name x y z1 z2 perf table  CF  diam KH skin  /
   M2   2*   1 13  SHUT     2*      0.2  1*  1 /
/
TSTEP
 1*1.0
/
WELSPECS
-- name group x y pwf_depth phase /
  MI1     G1   24 8 1*        WATER /
/
COMPDAT
-- name x y z1 z2 perf table  CF  diam KH skin  /
   MI1   2*   1 13  SHUT     2*      0.2  1*  1 /
/
TSTEP
 1*1.0
/
WELSPECS
-- name group x y pwf_depth phase /
  �6     G1   19 51 1*        OIL /
/
COMPDAT
-- name x y z1 z2 perf table  CF  diam KH skin  /
   �6   2*   1 13  SHUT     2*      0.2  1*  1 /
/
TSTEP
 1*1.0
/
WELSPECS
-- name group x y pwf_depth phase /
  �5     G1   51 19 1*        OIL /
/
COMPDAT
-- name x y z1 z2 perf table  CF  diam KH skin  /
   �5   2*   1 13  SHUT     2*      0.2  1*  1 /
/
TSTEP
 1*1.0
/
WELSPECS
-- name group x y pwf_depth phase /
  �4     G1   85 51 1*        OIL /
/
COMPDAT
-- name x y z1 z2 perf table  CF  diam KH skin  /
   �4   2*   1 13  SHUT     2*      0.2  1*  1 /
/
TSTEP
 1*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   M1    OPEN  LRAT           3*          100        1*   1* /
/
TSTEP
 1*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   M2    OPEN  LRAT           3*          100        1*   1* /
/
TSTEP
 1*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   MI1    OPEN  BHP           3*          1*        1*   350 /
/
TSTEP
 1*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   �6    OPEN  LRAT           3*          100        1*   1* /
/
TSTEP
 1*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   �5    OPEN  LRAT           3*          200        1*   1* /
/
TSTEP
 1*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   �4    OPEN  LRAT           3*          50        1*   1* /
/
TSTEP
 1*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   P1    SHUT  BHP           3*          10        1*   50 /
/
TSTEP
 27*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   P1    OPEN  BHP           3*          1*        1*   100 /
/
TSTEP
 30*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   P3    SHUT  BHP           3*          10        1*   50 /
/
TSTEP
 7*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   P3    OPEN  BHP           3*          1*        1*   100 /
/
TSTEP
 10*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   P4    SHUT  BHP           3*          10        1*   50 /
/
TSTEP
 17*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   P4    OPEN  BHP           3*          1*        1*   100 /
/
TSTEP
 20*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   P5    SHUT  BHP           3*          10        1*   50 /
/
TSTEP
 13*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   P5    OPEN  BHP           3*          1*        1*   100 /
/
TSTEP
 16*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   P6    SHUT  BHP           3*          10        1*   50 /
/
TSTEP
 22*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   P6    OPEN  BHP           3*          1*        1*   100 /
/
TSTEP
 25*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   PS1    SHUT  BHP           3*          10        1*   50 /
/
TSTEP
 1*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   PS1    OPEN  BHP           3*          1*        1*   100 /
/
TSTEP
 3*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   PS2    SHUT  BHP           3*          10        1*   50 /
/
TSTEP
 3*1.0
/
WCONPROD
-- name status control orate wrate grate lrate lrateres bhp /
   PS2    OPEN  BHP           3*          1*        1*   100 /
/
TSTEP
 5*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I1   WATER  SHUT  BHP     10        1*   50 /
/
TSTEP
 10*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I1   WATER  OPEN  BHP     1*        1*   100 /
/
TSTEP
 11*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I2   WATER  SHUT  BHP     10        1*   50 /
/
TSTEP
 5*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I2   WATER  OPEN  BHP     1*        1*   100 /
/
TSTEP
 6*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I3   WATER  SHUT  BHP     10        1*   50 /
/
TSTEP
 30*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I3   WATER  OPEN  BHP     1*        1*   100 /
/
TSTEP
 1*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I4   WATER  SHUT  BHP     10        1*   50 /
/
TSTEP
 25*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I4   WATER  OPEN  BHP     1*        1*   100 /
/
TSTEP
 27*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I5   WATER  SHUT  BHP     10        1*   50 /
/
TSTEP
 15*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I5   WATER  OPEN  BHP     1*        1*   100 /
/
TSTEP
 17*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I6   WATER  SHUT  BHP     10        1*   50 /
/
TSTEP
 20*1.0
/
WCONINJE
-- name fluid status control lrate lrateres bhp /
   I6   WATER  OPEN  BHP     1*        1*   100 /
/
TSTEP
 22*1.0
/