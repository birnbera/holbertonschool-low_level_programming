<h1 class="gap">0x1A. C - Sorting algorithms &amp; Big O</h1>
  <h4 class="task">
    0. Bubble sort
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p><iframe width="560" height="315" src="https://www.youtube.com/embed/lyZQPjUT5B4" frameborder="0" allowfullscreen></iframe><br />
<br /></p>

<p>Write a function that sorts an array of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Bubble_sort">Bubble sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void bubble_sort(int *array, size_t size);</code></li>
<li>You&#39;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>0-O</code>, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
  <h4 class="task">
    1. Insertion sort
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p><iframe width="560" height="315" src="https://www.youtube.com/embed/ROalU379l3U" frameborder="0" allowfullscreen></iframe><br />
<br /></p>

<p>Write a function that sorts a doubly linked list of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Insertion_sort">Insertion sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void insertion_sort_list(listint_t **list);</code></li>
<li>You are not allowed to modify the integer <code>n</code> of a node. You have to swap the nodes themselves.</li>
<li>You&#39;re expected to print the <code>list</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>1-O</code>, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
  <h4 class="task">
    2. Selection sort
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p><iframe width="560" height="315" src="https://www.youtube.com/embed/Ns4TPTC8whw" frameborder="0" allowfullscreen></iframe><br />
<br /></p>

<p>Write a function that sorts an array of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Selection_sort">Selection sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void selection_sort(int *array, size_t size);</code></li>
<li>You&#39;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>2-O</code>, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
  <h4 class="task">
    3. Quick sort
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>Write a function that sorts an array of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Quicksort">Quick sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void quick_sort(int *array, size_t size);</code></li>
<li>You must implement the <code>Lomuto</code> partition scheme.</li>
<li>The pivot should always be the last element of the partition being sorted.</li>
<li>You&#39;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>3-O</code>, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>
  <h4 class="task">
    4. Big O #0
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What is the time complexity of this function / algorithm?</p>

<pre><code>void f(int n)
{
    printf(&quot;n = %d\n&quot;, n);
}
</code></pre>
  <h4 class="task">
    5. Big O #1
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What is the time complexity of this function / algorithm?</p>

<pre><code>void f(int n)
{
    int i;

    for (i = 0; i &lt; n; i++)
    {
        printf(&quot;[%d]\n&quot;, i);
    }
}
</code></pre>
  <h4 class="task">
    6. Big O #2
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What is the time complexity of this function / algorithm?</p>

<pre><code>void f(int n)
{
    int i;

    for (i = 0; i &lt; n; i += 98)
    {
        printf(&quot;[%d]\n&quot;, i);
    }
}
</code></pre>
  <h4 class="task">
    7. Big O #3
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What is the time complexity of this function / algorithm?</p>

<pre><code>void f(unsigned int n)
{
    int i;

    for (i = 1; i &lt; n; i = i * 2)
    {
        printf(&quot;[%d]\n&quot;, i);
    }
}
</code></pre>
  <h4 class="task">
    8. Big O #4
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What is the time complexity of this function / algorithm?</p>

<pre><code>var factorial = function(n) {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n - 1);
    }
}
</code></pre>
  <h4 class="task">
    9. Big O #5
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What is the time complexity of this function / algorithm?</p>

<pre><code>foreach($numbers as $number)
{
    echo $number;
}
</code></pre>
  <h4 class="task">
    10. Big O #6
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What is the time complexity of this function / algorithm?</p>

<pre><code>void f(unsigned int n)
{
    int i;
    int j;

    for (i = 0; i &lt; n; i++)
    {
        for (j = 1; j &lt; n; j = j * 2)
        {
            printf(&quot;[%d] [%d]\n&quot;, i, j);
        }
    }
}
</code></pre>
  <h4 class="task">
    11. Big O #7
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What is the time complexity of this function / algorithm?</p>

<pre><code>void f(int n)
{
    int i;
    int j;

    for (i = 0; i &lt; n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j &lt; n; j = j * 2)
            {
                printf(&quot;[%d] [%d]\n&quot;, i, j);
            }
        }
        else
        {
            for (j = 0; j &lt; n; j = j + 2)
            {
                printf(&quot;[%d] [%d]\n&quot;, i, j);
            }
        }
    }
}
</code></pre>
  <h4 class="task">
    12. Big O #8
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What is the time complexity of this function / algorithm?</p>

<pre><code>int Fibonacci(int number)
{
    if (number &lt;= 1) return number;

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}
</code></pre>
  <h4 class="task">
    13. Big O #9
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What is the time complexity of this function / algorithm?</p>

<pre><code>def func(n):
    a=5
    b=6
    c=10
    for i in range(n):
        for j in range(n):
            x = i * i
            y = j * j
            z = i * j
    for k in range(n):
        w = a*k + 45
        v = b*b
    d = 33
</code></pre>
  <h4 class="task">
    14. Big O #10
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What is the time complexity of this function / algorithm?</p>

<pre><code>void f(int n)
{
     int i;
     int j;

     for (i = 0; i &lt; n; i++)
     {
          for (j = i + 1; j &lt; n; j++)
          {
               printf(&quot;[%d] [%d]\n&quot;, i, j);
          }
     }
}
</code></pre>
  <h4 class="task">
    15. Big O #Arrays
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What are the time complexities of those operations on an unsorted array (one answer per line):</p>

<ul>
<li>Accessing the nth element</li>
<li>Inserting at index n</li>
<li>Removing at index n</li>
<li>Searching for an element in an array of size n</li>
<li>Setting value at index n</li>
</ul>
  <h4 class="task">
    16. Big O #Singly linked lists
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What are the time complexities of those operations on a singly linked list (one answer per line):</p>

<ul>
<li>Accessing the nth element</li>
<li>Inserting after the nth element (Considering you have a pointer to the node to insert)</li>
<li>Removing the nth element (Considering you have a pointer to the node to remove)</li>
<li>Searching for an element in a linked list of size n</li>
<li>Setting the value of the nth element (Considering you have a pointer to the node to set the value of)</li>
</ul>
  <h4 class="task">
    17. Big O #Doubly linked lists
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What are the time complexities of those operations on a doubly linked list (one answer per line):</p>

<ul>
<li>Accessing the nth element</li>
<li>Inserting after the nth element (Considering you have a pointer to the node to insert)</li>
<li>Removing the nth element (Considering you have a pointer to the node to remove)</li>
<li>Searching for an element in a linked list of size n</li>
<li>Setting the value of the nth element (Considering you have a pointer to the node to set the value of)</li>
</ul>
  <h4 class="task">
    18. Big O #Python 3 lists
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What are the time complexities of those operations on an unsorted Python 3 list (one answer per line):</p>

<ul>
<li>Accessing the nth element</li>
<li>Inserting at index n</li>
<li>Removing at index n</li>
<li>Searching for an element in a Python list of size n</li>
<li>Setting value at index n</li>
</ul>
  <h4 class="task">
    19. Big O #Stacks
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What are the time complexities of those operations on a stack (one answer per line):</p>

<ul>
<li>push</li>
<li>pop</li>
<li>Searching for an element in a stack of size n</li>
</ul>
  <h4 class="task">
    20. Big O #Queues
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What are the time complexities of those operations on a queue (one answer per line):</p>

<ul>
<li>push</li>
<li>pop</li>
<li>Searching for an element in a queue of size n</li>
</ul>
  <h4 class="task">
    21. Big O #Hash tables
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>What are the time complexities of those operations on a hash table (one answer per line) - with the implementation you used during the previous Hash Table C project (chaining):</p>

<ul>
<li>Searching for an element, best case</li>
<li>Searching for an element, worst case</li>
<li>Insertion, best case</li>
<li>Insertion, worst case</li>
<li>Deletion, best case</li>
<li>Deletion, worst case</li>
</ul>
