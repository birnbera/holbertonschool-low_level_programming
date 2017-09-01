<h2>0x19. C - Hash tables</h2>
  <h4 class="task">
    0. &gt;&gt;&gt; ht = {}
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>Write a function that creates a hash table.</p>

<ul>
<li>Prototype: <code>hash_table_t *hash_table_create(unsigned long int size);</code>

<ul>
<li>where <code>size</code> is the size of the array</li>
</ul></li>
<li>Returns a pointer to the newly created hash table</li>
<li>If something went wrong, your function should return <code>NULL</code></li>
</ul>
  <h4 class="task">
    1. djb2
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>Write a hash function implementing the djb2 algorithm.</p>

<ul>
<li>Prototype: <code>unsigned long int hash_djb2(const unsigned char *str);</code></li>
<li>You are allowed to copy and paste the function from <a href="http://www.cse.yorku.ca/%7Eoz/hash.html">this page</a></li>
</ul>
  <h4 class="task">
    2. key -&gt; index
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>Write a function that gives you the index of a key.</p>

<ul>
<li>Prototype: <code>unsigned long int key_index(const unsigned char *key, unsigned long int size);</code>

<ul>
<li>where <code>key</code> is the key</li>
<li>and <code>size</code> is the size of the array of the hash table</li>
</ul></li>
<li>This function should use the <code>hash_djb2</code> function that you wrote earlier</li>
<li>Returns the index at which the key/value pair should be stored in the array of the hash table</li>
<li>You will have to use this hash function for all the next tasks</li>
</ul>
  <h4 class="task">
    3. &gt;&gt;&gt; ht[&#39;betty&#39;] = &#39;holberton&#39;
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>Write a function that adds an element to the hash table.</p>

<ul>
<li>Prototype: <code>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</code>

<ul>
<li>Where <code>ht</code> is the hash table you want to add or update the key/value to</li>
<li><code>key</code> is the key. <code>key</code> can not be an empty string</li>
<li>and <code>value</code> is the value associated with the key. <code>value</code> can be an empty string</li>
</ul></li>
<li>Returns: <code>1</code> if it succeeded, <code>0</code> otherwise</li>
<li>In case of collision, add the new node at the beginning of the list</li>
</ul>
  <h4 class="task">
    4. &gt;&gt;&gt; ht[&#39;betty&#39;]
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>Write a function that retrieves a value associated with a key.</p>

<ul>
<li>Prototype: <code>char *hash_table_get(const hash_table_t *ht, const char *key);</code>

<ul>
<li>where <code>ht</code> is the hash table you want to look into</li>
<li>and <code>key</code> is the key you are looking for</li>
</ul></li>
<li>Returns the value associated with the element, or <code>NULL</code> if <code>key</code> couldn&#39;t be found</li>
</ul>
  <h4 class="task">
    5. &gt;&gt;&gt; print(ht)
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>Write a function that prints a hash table.</p>

<ul>
<li>Prototype: <code>void hash_table_print(const hash_table_t *ht);</code>

<ul>
<li>where <code>ht</code> is the hash table</li>
</ul></li>
<li>You should print the key/value in the order that they appear in the array of hash table

<ul>
<li>Order: array, list</li>
</ul></li>
<li>Format: see example</li>
<li>If <code>ht</code> is NULL, don&#39;t print anything</li>
</ul>
  <h4 class="task">
    6. &gt;&gt;&gt; del ht
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>Write a function that deletes a hash table.</p>

<ul>
<li>Prototype: <code>void hash_table_delete(hash_table_t *ht);</code>

<ul>
<li>where <code>ht</code> is the hash table</li>
</ul></li>
</ul>
  <h4 class="task">
    7. $ht[&#39;Betty&#39;] = &#39;Holberton&#39;
      <span class="alert alert-info mandatory-optional">
        #advanced
      </span>
  </h4>


  <!-- Progress vs Score -->

<!-- Task Body -->
  <p>In <a href="http://php.net/manual/en/intro-whatis.php">PHP</a>, hash tables are <strong>ordered</strong>. Wait... WAT? How is this even possible?</p>

<p><img src="https://media.giphy.com/media/IUp9WRHyCwUEg/giphy.gif" /><br />
<br /></p>

<p><strong>Before you continue</strong>, please take a moment to think about it: how you would implement it if you were asked to during an interview or a job. What data structures would you use? How would it work?</p>

<p>For this task, please:</p>

<ul>
<li>Read <a href="http://www.phpinternalsbook.com/hashtables/basic_structure.html">PHP Internals Book: HashTable</a></li>
<li>Use the same hash function</li>
<li>Use these data structures:</li>
</ul>

<pre><code>/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;
</code></pre>

<p>Rewrite the previous functions using those data structures:</p>

<ul>
<li><code>shash_table_t *shash_table_create(unsigned long int size);</code></li>
<li><code>int shash_table_set(shash_table_t *ht, const char *key, const char *value);</code>

<ul>
<li>The key/value pair should be inserted in the sorted list at the right place</li>
<li>Note that here we do not want to do exactly like <code>PHP</code>: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.</li>
</ul></li>
<li><code>char *shash_table_get(const shash_table_t *ht, const char *key);</code></li>
<li><code>void shash_table_print(const shash_table_t *ht);</code>

<ul>
<li>Should print the hash table using the sorted linked list</li>
</ul></li>
<li><code>void shash_table_print_rev(const shash_table_t *ht);</code>

<ul>
<li>Should print the hash tables key/value pairs in reverse order using the sorted linked list</li>
</ul></li>
<li><code>void shash_table_delete(shash_table_t *ht);</code></li>
<li>You are allowed to have more than 5 functions in your file</li>
</ul>
