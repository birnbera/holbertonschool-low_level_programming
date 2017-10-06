<h1 class="gap">0x1B. C - Makefiles</h1>


<h4 class="task">
    0. make -f 0-Makefile
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Create your first Makefile.</p><p>Requirements:</p><ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>
<ul>
<li>The <code>all</code> rule builds your executable</li>
</ul></li>
<li>variables: none</li>
</ul>


<h4 class="task">
    1. make -f 1-Makefile
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Requirements:</p><ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>
<ul>
<li>The <code>all</code> rule build your executable</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>
<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
</ul></li>
</ul>


<h4 class="task">
    2. make -f 2-Makefile
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Create your first useful Makefile.</p><p>Requirements:</p><ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>
<ul>
<li>The <code>all</code> rule builds your executable</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>
<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li>You are not allowed to have a list of all the <code>.o</code> files</li>
</ul>


<h4 class="task">
    3. make -f 3-Makefile
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Requirements:</p><ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>, <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code>
<ul>
<li><code>all</code>: builds your executable</li>
<li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
<li><code>oclean</code>: deletes the object files</li>
<li><code>fclean</code>: deletes the Emacs temporary files, the executable, and the object files</li>
<li><code>re</code>: forces recompilation of all source files</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>
<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
<li><code>RM</code>: the program to delete files</li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</li>
<li>You are not allowed to have a list of all the <code>.o</code> files</li>
</ul>


<h4 class="task">
    4. A complete Makefile
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Requirements:</p><ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>oclean</code>, <code>re</code>
<ul>
<li><code>all</code>: builds your executable</li>
<li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
<li><code>oclean</code>: deletes the object files</li>
<li><code>fclean</code>: deletes the Emacs temporary files, the executable, and the object files</li>
<li><code>re</code>: forces recompilation of all source files</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>, <code>CFLAGS</code>
<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
<li><code>RM</code>: the program to delete files</li>
<li><code>CFLAGS</code>: your favorite compiler flags: <code>-Wall -Werror -Wextra -pedantic</code></li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li><p>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</p></li>
<li><p>You are not allowed to have a list of all the <code>.o</code> files</p></li>
</ul>


<h4 class="task">
    5. make -f 100-Makefile
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Requirements:</p><ul>
<li>name of the executable: <code>holberton</code></li>
<li>rules: <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>oclean</code>, <code>re</code>
<ul>
<li><code>all</code>: builds your executable</li>
<li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
<li><code>oclean</code>: deletes the object files</li>
<li><code>fclean</code>: deletes the Emacs temporary files, the executable, and the object files</li>
<li><code>re</code>: forces recompilation of all source files</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>, <code>CFLAGS</code>
<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
<li><code>RM</code>: the program to delete files</li>
<li><code>CFLAGS</code>: your favorite compiler flags: <code>-Wall -Werror -Wextra -pedantic</code></li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</li>
<li>You are not allowed to have a list of all the <code>.o</code> files</li>
<li>You have to use <code>$(RM)</code> for the cleaning up rules, but you are not allowed to set the <code>RM</code> variable</li>
<li>You are only allowed to use the string <code>$(CC)</code> once in your Makefile</li>
<li>You are only allowed to use the string <code>$(RM)</code> twice in your Makefile</li>
<li>You are not allowed to use the string <code>$(CFLAGS)</code> (but the compiler should still use the flags you set in this variable)</li>
<li>You are not allowed to have an <code>$(OBJ)</code> rule</li>
<li>You are not allowed to use the <code>%.o: %.c</code> rule</li>
<li>Your Makefile should work even if there is a file in the folder that has the same name as one of your rule</li>
<li>Your Makefile should not compile if the header file <code>m.h</code> is missing</li>
</ul>

