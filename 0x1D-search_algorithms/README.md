<h1 class="gap">0x1D. C - Search Algorithms</h1>


<h4 class="task">
    0. Linear search
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that searches for a value in an array of integers using the <a href="/rltoken/60Mr-aRkqqgLCHEF9HZ64A" target="_blank" title="Linear search algorithm">Linear search algorithm</a></p><ul>
<li>Prototype : <code>int linear_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
</ul>


<h4 class="task">
    1. Binary search
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that searches for a value in a sorted array of integers using the <a href="/rltoken/WyWx1D9mcUcAwpEA2ifkeQ" target="_blank" title="Binary search algorithm">Binary search algorithm</a></p><ul>
<li>Prototype : <code>int binary_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>You can assume that <code>value</code> won’t appear more than once in <code>array</code></li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)</li>
</ul>


<h4 class="task">
    2. Big O #0
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>What is the time complexity of a basic linear search algorithm in an array of size n?</p>


<h4 class="task">
    3. Big O #1
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>What is the space complexity of a basic linear search algorithm in an array of size n?</p>


<h4 class="task">
    4. Big O #2
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>What is the time complexity of a basic binary search algorithm of an array of size n?</p>


<h4 class="task">
    5. Big O #3
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>What is the space complexity of a basic binary search algorithm of an array of size n?</p>


<h4 class="task">
    6. Big O #4
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>What is the space complexity of this function / algorithm?</p>


<h4 class="task">
    7. Jump search
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that searches for a value in a sorted array of integers using the <a href="/rltoken/4_BD4JVE3OEcj0sPnXgFFw" target="_blank" title="Jump search algorithm">Jump search algorithm</a></p><ul>
<li>Prototype : <code>int jump_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>You have to use the square root of the size of the array as the jump step. </li>
<li>You can use the <code>sqrt()</code> function included in <code>&lt;math.h&gt;</code> (don’t forget to compile with -lm)</li>
<li>Every time you compare a value in the array to the value you are searching for, you have to print this value (see example)</li>
</ul>


<h4 class="task">
    8. Big O #5
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>What is the time complexity of a jump algorithm in an array of size n, using step = sqrt(n)?</p>


<h4 class="task">
    9. Interpolation search
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that searches for a value in a sorted array of integers using the <a href="/rltoken/Iqh-g78gZgeWAKNGhWnJnQ" target="_blank" title="Interpolation search algorithm">Interpolation search algorithm</a></p><ul>
<li>Prototype : <code>int interpolation_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>To determine the probe position, you can use : <code>size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))</code></li>
<li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
</ul>


<h4 class="task">
    10. Exponential search
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>Write a function that searches for a value in a sorted array of integers using the <a href="/rltoken/79MgoRBwFqDTmVTv-7GORw" target="_blank" title="Exponential search algorithm">Exponential search algorithm</a></p><ul>
<li>Prototype : <code>int exponential_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>You have to use powers of 2 as exponential ranges to search in your array</li>
<li>Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)</li>
<li>Once you’ve found the good range, you need to use a binary search:

<ul>
<li>Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)</li>
</ul></li>
</ul>


<h4 class="task">
    11. Advanced binary search
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>You may have noticed that the basic binary search does not necessarily return the index of the <em>first</em> value in the array (if this value appears more than once in the array).
In this exercise, you’ll have to solve this problem.</p><p>Write a function that searches for a value in a sorted array of integers.</p><ul>
<li>Prototype : <code>int advanced_binary(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>You have to use recursion. Any kind of loop (<code>while</code>, <code>for</code>, <code>do while</code>,  <code>go to</code>) is forbidden.</li>
<li>Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)</li>
</ul>


<h4 class="task">
    12. Jump search in a single linked list
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a single linked list.</p><p>Please define the following data structure in your <code>search_algos.h</code> header file:</p>


<h4 class="task">
    13. Linear search in a skip list
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>As you see now, looking for a specific value in a single linked list always leads to browse every element of the list.
A common way to optimize the time complexity of a search in a single linked list is to modify the list itself by adding an “express lane” to browse it.
A linked list with an express lane is called a <a href="/rltoken/kPRt_1l8Gep1UBS2iGaNnw" target="_blank" title="skip list">skip list</a>.
This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as <code>sizeof(skiplist_t) &gt; sizeof(listint_t)</code> (see example below).</p><p>Please define the following data structure in your <code>search_algos.h</code> header file:</p>


<h4 class="task">
    14. Big O #6
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>What is the time complexity of a jump algorithm in a single linked list of size n, using step = sqrt(n)?</p>


<h4 class="task">
    15. Big O #7
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
</h4><p>What is the time complexity of a jump algorithm in a skip list of size n, with an express lane using step = sqrt(n)?</p>

