

## in Emacs, use C-q TAB to insert tab
## https://stackoverflow.com/questions/5146621/emacs-insert-tab-instead-of-spaces





# chapter2 : chapter2/atoi.c chapter2/boolean.c chapter2/conditionalExpression.c chapter2/ranges.c chapter2/stringLeng.c
# 	cc chapter2/atoi.c chapter2/boolean.c chapter2/conditionalExpression.c chapter2/ranges.c chapter2/stringLeng.c

# https://stackoverflow.com/questions/2706064/compile-all-c-files-in-a-directory-into-separate-programs


chapter2/conditionalExpression.o: chapter2/conditionalExpression.c
	cc chapter2/conditionalExpression.c -o chapter2/conditionalExpression.o

%/%.o : %/%.c
	cc -o $@ $<

chapter2 :
	cc chapter2/atoi.c chapter2/boolean.c chapter2/conditionalExpression.c chapter2/ranges.c chapter2/stringLength.c


