#/!/bin/bash

paste -d " "  ~/new/GPLUM/src/rm_n1000_s2_1/A_kikaku.dat ~/new/GPLUM/src/rm_n1000_s2_2/A_kikaku.dat ~/new/GPLUM/src/rm_n1000_s2_3/A_kikaku.dat ~/new/GPLUM/src/rm_n1000_s2_4/A_kikaku.dat ~/new/GPLUM/src/rm_n1000_s2_5/A_kikaku.dat ~/new/GPLUM/src/rm_n1000_s2_6/A_kikaku.dat ~/new/GPLUM/src/rm_n1000_s2_7/A_kikaku.dat ~/new/GPLUM/src/rm_n1000_s2_8/A_kikaku.dat ~/new/GPLUM/src/rm_n1000_s2_9/A_kikaku.dat ~/new/GPLUM/src/rm_n1000_s2_10/A_kikaku.dat | awk '{print $1, $4, $8, $12, $16, $20, $24, $28, $32, $36, $40}' > Az_kikaku_10.dat
