awk -F, 'NR==1 || $4 > 3.5' data.csv

::output
::Name,Age,Department,GPA
::Priya,21,Environmentscience,3.7
::Carol,23,Physicalscience,3.99
::David,21,IT,3.98
::Riya,22,Physicalscience,3.6
::Rahman,21,Environmentscience,3.7
::Anna,23,Physicalscience,3.78
::Riyas,21,IT,3.76

awk -F, 'NR>1 {sum+=$4; count++} END{if (count > 0) print "Average GPA:", sum/count}' data.csv

::output


::awk -F, 'NR>1 {sum+=$4; count++}
::{if (count > 0) print "Average GPA:", sum/count}' data.csv

::output
::Average GPA: 3.5
::Average GPA: 3.6
::Average GPA: 3.43333
::Average GPA: 3.5725
::Average GPA: 3.654
::Average GPA: 3.645
::Average GPA: 3.65286
::Average GPA: 3.44625
::Average GPA: 3.48333
::Average GPA: 3.511