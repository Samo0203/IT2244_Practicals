
@echo off
:: Create directories on Desktop
cd Desktop
mkdir CSC2244 Marks Exam
pause

:: Create subdirectories inside CSC2244
cd CSC2244
mkdir practical theory "exam papers"

:: Create sample files in each subdirectory
cd practical
echo Practical Text File > practical.txt
echo. > practical.docx
echo. > practical.pptx

cd ..\theory
echo Theory Text File > theory.txt
echo. > theory.docx
echo. > theory.pptx

cd ..\"exam papers"
echo Exam Text File > exam.txt
echo. > exam.docx
echo. > exam.pptx

:: Create Excel files and move them
cd %USERPROFILE%\Desktop
echo. > "Icae Marks.xlsx"
echo. > "Final Exam Marks.xlsx"
move "Icae Marks.xlsx" Marks
move "Final Exam Marks.xlsx" Marks

:: Copy Marks directory into Exam and hide Exam
xcopy /E /I Marks Exam\Marks
attrib +h Exam


 


