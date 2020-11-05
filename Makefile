PATH_SAMPLE1 = ./EvelCodeAnalysis/sample-1

Sample: misra2012r2_2.c
	gcc -o $(PATH_SAMPLE1)/misra2012r2_2 $(PATH_SAMPLE1)/misra2012r2_2.c

clean:
	$(RM) $(PATH_SAMPLE1)/misra2012r2_2
