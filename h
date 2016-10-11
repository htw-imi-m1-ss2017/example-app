   44  cd calibre_library/
   45  ls
   46  pwd
   47  ls
   48  cd ..
   49  ls
   50  open .
   51  cd ..
   52  mv calibre_library/ calibre_library_murks
   53  mv calibre_library_murks/calibre_library/ .
   54  ls
   55  cd calibre_library
   56  pwd
   57  cd ..
   58  ls
   59  ls books/
   60  mkdir books_to_sort
   61  mv books books_to_sort/
   62  ls
   63  mv calibre_library_murks/ books_to_sort/
   64  ls calibre_library/
   65  ls
   66  cd books_to_sort/
   67  ls
   68  mkdir mine_books
   69  cd mine_books/
   70  pwd
   71  ls
   72  c d..
   73  cd ..
   74  cd ..
   75  cd Calibre\ Library/
   76  ls
   77  ls -lart
   78  . aliasses.sh 
   79  rj
   80  rj
   81  cd
   82  cd mine/current/htw/courses/info1/
   83  ls
   84  ls
   85  ls
   86  cd code/class/kara/
   87  ls
   88  git status
   89  git lg1
   90  git status
   91  git diff
   92  git add .
   93  git commit -m "modifications by barne for slides"
   94  git checkout master
   95  git lg1
   96  open .
   97  git status
   98  git status
   99  git checkout .
  100  git status
  101  rm 01-08-changing-forrest/AnotherForrest.*
  102  git status
  103  ls
  104  git lg1
  105  ls
  106  git status
  107  git lg1
  108  git checkout e526926
  109  ls
  110  git checkout master
  111  git push origin master
  112  git lg1
  113  less .git/config 
  114  ls
  115  less .gitignore 
  116  touch 01-01-walk-roboter/x
  117  git status
  118  git add .
  119  git status
  120  ls 01-01-walk-roboter/
  121  rm -rf 01-01-walk-roboter/
  122  git lg1
  123  ls
  124  ls
  125  cd
  126  cd mine/
  127  ols
  128  ls
  129  mkdir students
  130  cd students/
  131  ls
  132  mkdir ics
  133  cd ics
  134  open .
  135  cd
  136  cd mine/current/htw/courses/info1/
  137  l
  138  ls
  139  find . -name "*inary*.*"
  140  find . -name "*inary*.*"
  141  ls
  142  cd code
  143  ls
  144  cd labs/
  145  ls
  146  cd exercise01
  147  ls
  148  ls -lart
  149  cd kara-exercise01/
  150  ls
  151  git status
  152  cd ..
  153  ls
  154  cd exercise01-kara/
  155  ls
  156  git status
  157  git lg1
  158  hub browse
  159  less .git/config 
  160  ls
  161  open .
  162  cp -r lab01_kara06 lab01_kara07
  163  ls
  164  open lab01_kara07/project.greenfoot 
  165  git status
  166  git checkout lab01_kara06/
  167  git status
  168  git checkout -b binary
  169  git status
  170  git add .
  171  git commit -m "created binary project and random numbers"
  172  ls
  173  git checkout solution
  174  git rebase binary
  175  git lg1
  176  git status
  177  git add .
  178  git commit -m "first draft of solution"
  179  git status
  180  git checkout binary
  181  ls
  182  open lab01_kara07/project.greenfoot 
  183  open lab01_kara07/project.greenfoot 
  184  open lab01_kara06/project.greenfoot 
  185  ls
  186  git status
  187  git diff lab01_kara07/project.greenfoot 
  188  open lab01_kara06/project.greenfoot 
  189  open lab01_kara07/project.greenfoot 
  190  open lab01_kara07/
  191  git status
  192  git add .
  193  git commit -m "added check"
  194  git checkout solution
  195  git rebase binary
  196  git status
  197  atom lab01_kara07/Kara06.java
  198  open lab01_kara07/project.greenfoot 
  199  git add lab01_kara07/Kara06.java 
  200  git status
  201  git add lab01_kara07/project.greenfoot 
  202  git status
  203  ls
  204  cd lab01_kara07/
  205  grep <<<< *.*
  206  grep "<<<<" *.*
  207  git status
  208  git checkout -- Kara06.java 
  209  git status
  210  grep "<<<<" *.*
  211  ls
  212  cd ..
  213  git status
  214  git rebase --continue
  215  git status
  216  git status
  217  git checkout .
  218  git checkout binary
  219  open lab01_kara07/
  220  open lab01_kara07/project.greenfoot 
  221  git status
  222  git add .
  223  git commit -m "binary completed"
  224  git status
  225  git checkout solution
  226  git rebase binary
  227  git status
  228  git checkout lab01_kara07/project.greenfoot 
  229  atom lab01_kara07/project.greenfoot 
  230  git status
  231  cd lab01_kara07/
  232  git add project.greenfoot 
  233  open project.greenfoot 
  234  git status
  235  git add Kara06.java 
  236  cd ..
  237  git status
  238  git commit -m "merged binary with solution"
  239  git lg1
  240  git checkout master
  241  git rebase --continue
  242  git status
  243  git rebase --continue
  244  git add .
  245  git rebase --continue
  246  gt status
  247  git status
  248  git lg1
  249  git rebase --abort
  250  git status
  251  git lg1
  252  git rebase binary
  253  git status
  254  cd lab01_kara07/
  255  open project.greenfoot 
  256  git status
  257  git add .
  258  git rebase --continue
  259  git status
  260  git lg1
  261  git checkout master
  262  git rebase binary
  263  git status
  264  git lg1
  265  git checkout -b faster
  266  cd ..
  267  atom .
  268  git status
  269  git add .
  270  git commit -m "increase speed from 20 to 40 in all projects"
  271  open lab01_kara01/project.greenfoot 
  272  git status
  273  git checkout .
  274  git status
  275  git checkout master
  276  git rebase faster
  277  git push origin master
  278  git branch -d faster
  279  git lg1
  280  git branch -d binary
  281  cd ..
  282  cd ..
  283  cd ..
  284  cd ..
  285  cd ..
  286  cd ..
  287  ls
  288  cd courses/info1/
  289  ls
  290  cd code/class/kara/
  291  ls
  292  git status
  293  git lg1
  294  git status
  295  git reset HEAD 01-01-walk-roboter
  296  git status
  297  ls
  298  git checkout .
  299  git status
  300  git lg1
  301  atom .
  302  ls
  303  open 01-04-square-drop/
  304  git status
  305  git diff
  306  git add .
  307  git commit -m "increased speed in all projects"
  308  git status
  309  git lg1
  310  git push origin master
  311  rvm gemset list
  312  brew install hub
  313  git status
  314  open .
  315  git status
  316  git checkout .
  317  git checkout solution
  318  git lg1
  319  git checkout solutions
  320  open .
  321  git lg1
  322  git rebase master
  323  git status
  324  open 01-04-square-drop/project.greenfoot 
  325  git status
  326  git add 01-04-square-drop/project.greenfoot
  327  git status
  328  git rebase --continue
  329  git statu
  330  git add 01-04-square-drop/project.greenfoot
  331  git status
  332  git rebase --continue
  333  atom 02-08-push-mushroom-through-tunnel/KaraWorld.java
  334  git add 02-08-push-mushroom-through-tunnel/KaraWorld.java
  335  git status
  336  git rebase --continue
  337  git lg1
  338  open .
  339  git lg1
  340  git checkout master
  341  ls
  342  cp -r 01-02-walk-drop/ 03-02-walk-to-tree
  343  open 03-02-walk-to-tree/project.greenfoot 
  344  git status
  345  git checkout 01-01-walk/project.greenfoot
  346  git checkout 01-02-walk-drop/project.greenfoot
  347  git status
  348  git checkout master
  349  git status
  350  git add .
  351  git commit -m "prepared walk to tree"
  352  git status
  353  git push origin master
  354  git checkout -b ws2016
  355  git push origin ws2016
  356  ls -lart
  357  ls
  358  git rm exercise-12-switch.md 
  359  git rm exercise-11-with-switch.md 
  360  git status
  361  ls
  362  git diff exercise-02-full.md 
  363  git diff exercise-02-full.md exercise-02.md 
  364  diff exercise-02-full.md exercise-02.md 
  365  dls
  366  ls
  367  git rm exercise-02-full.md 
  368  git status
  369  cd ..
  370  cd ..
  371  cd ..
  372  atom 
  373  atom  .
  374  git status
  375  git add .
  376  git commit -m "cleaned up info1 exercises, published exercise 01"
  377  _bin/deploy-htw.sh 
  378  atom .
  379  i1
  380  atom aliasses.sh 
  381  i1
  382  git rm ws2016/info1/labs/exercise-01-a.md 
  383  git status
  384  git status
  385  git add .
  386  git commit -m "slight improvements"
  387  _bin/deploy-htw.sh 
  388  ls
  389  git status
  390  atom .
  391  git checkout -b mediaprogramming
  392  ls
  393  cd _bin/
  394  ls
  395  atom ruby-dates.rb 
  396  ruby ruby-dates.rb 
  397  ruby ruby-dates.rb 
  398  ruby ruby-dates.rb 
  399  ruby ruby-dates.rb 
  400  cd ..
  401  cd ..
  402  cd ..
  403  . aliasses.sh 
  404  rj
  405  cd
  406  cd mine/archiv/htw/
  407  ls
  408  open sortieren/
  409  find . -name info3
  410  ls info3
  411  ls sortieren/info3
  412  ls ./sortieren/htw/info3
  413  ls ./sortieren/htw/info3/code/
  414  cd courses/
  415  ls
  416  ls ws2015
  417  ls ss2014
  418  ls ss2015
  419  ls ss2016
  420  ls ws2015
  421  ls ss2015
  422  ls
  423  ls ws2014-wt1wa/
  424  ls ws2014-wt1wa/wt1wa/
  425  ls
  426  find . -name ws2014
  427  find . -name info3
  428  cd ws2014
  429  ls
  430  ls ws2014/
  431  ls
  432  ls ws2014/
  433  cd ws2014/
  434  ls
  435  ls -lart
  436  cd ..
  437  rm ws2014/
  438  ls
  439  rmdir ws2014/
  440  ls
  441  less info3/
  442  open info3/
  443  cd 
  444  cd /Volumes/Raute/MERLIN/mine/
  445  ls
  446  cd htw/
  447  ls
  448  cd info3
  449  ls
  450  cd ..
  451  ls courses/
  452  cd
  453  cd mine/current/htw/
  454  cd bkleinen.github.io/
  455  git status
  456  open .
  457  open ws2016/info1/1
  458  open ws2016/info1/
  459  atom .
  460  i1
  461  i1
  462  atom aliasses.sh 
  463  . aliasses.sh 
  464  i1
  465  git status
  466  git add ws2016/
  467  git commit -m "new version of ws 1"
  468  git add .
  469  git commit -m "draft"
  470  git pull --rebase
  471  git status
  472  git lg21
  473  git lg1
  474  git show f148260
  475  _bin/deploy-htw.sh 
  476  git status
  477  atom .
  478  atom .
  479  atom .
  480  git status
  481  git add .
  482  git commit -m "startseite und news"
  483  _bin/deploy-htw.sh 
  484  ls
  485  atom .
  486  i1
  487  atom .
  488  git mv ws2016/info1/labs/exercise-01-b.md ws2016/info1/labs/exercise-01.md
  489  git status
  490  atom .
  491  i1
  492  cd ws2016/info1/labs/
  493  diff exercise-11.md exercise-11-with-switch.md 
  494  diff exercise-11.md exercise-11-with-switch.md 
  495  grep  14.12.2011 *.md
  496  grep "I have been asked" *.md
  497  atom exercise-11.md 
  498  diff exercise-12.md 
  499  diff exercise-12.md exercise-12-switch.md 
  500  atom exercise-12.md 
  501  rails c
  502  rails c
  503  rails c
  504  cd ..
  505  rails new my-habits
  506  git commit -m "rails new my-habits"
  507  cd my-habits/
  508  git commit -m "rails new my-habits"
  509  rails db:migrate
  510  atom .
  511  bin/rails db:migrate RAILS_ENV=development
  512  rails db:migrate
  513  rm db/development.sqlite3 
  514  rails db:migrate
  515  rails c
  516  cd ..
  517  cd habits/
  518  ls
  519  git status
  520  atom .
  521  cd ..
  522  ls
  523  rm -rf my-habits/
  524  git status
  525  cd habits/
  526  git status
  527  git add .
  528  git commit -m "remove option to set last done date in new and edit actions"
  529  rails c
  530  rails routes
  531  rails routes
  532  git status
  533  git add .
  534  git commit -m "done last can be logged from index page"
  535  git status
  536  git add .
  537  git status
  538  git commit -m "replaced log link with log button"
  539  hub browse
  540  less .git/config 
  541  git push origin master
  542  history
  543  history > h
