note
	description: "A maximum heap implemented using an array."
	author: "Jackie and You"
	date: "$Date$"
	revision: "$Revision$"

class
	ARRAYED_HEAP

create
	-- Select command `make` to be the only constructor of the current class.
	make

feature -- Representation of an array-based heap

-- Do not modify any of these attributes.
-- Your implementation of heap features must make use of these attributes when appropriate.

	count: INTEGER
		-- number of keys stored in the heap
	max_capacity: INTEGER
		-- maximum number of keys that can be stored in the heap
	array: ARRAY[INTEGER]
		-- array representation of the heap

feature -- Constructor

	make (a: ARRAY[INTEGER]; n: INTEGER)
			-- Create a heap from an unsorted array `a`, with maximum capacity `n`.
			-- See all invariants which must be established by this constructor.
		require
			enough_capacity:
				-- TODO: What's the relation between size of `a` and `n`?
				-- Length of a has to be smaller or equal to n
				a.count <= n

			all_positive:
				-- TODO: All keys to be added to the heap should be strictly positive.
				across
					a.lower |..| a.upper is i
				all
					a[i] > 0
				end

			no_duplicates:
				-- TODO: No duplicates of keys are to be added to the heap.
				across
					1 |..| a.count is i
				all
					a.occurrences (a[i]) = 1
				end

		do
			-- TODO: Initialize `array` such that it represents a binary tree
			-- satisfying the maximum heap property.
			-- Be sure to initialize `max_capacity` and `count` properly.
			-- Hint: Make use of the `heapify` command.
			-- Watch out for infinite loops!

			create array.make_empty
			max_capacity := n
			count := a.count
			across
				a.lower |..| a.upper is i
			loop

				array.force (a[i], i)
				end



			across
				(a.count+1) |..| n is i
			loop
				array.force (0, i)
			end

			across - (1 |..| (count//2)).new_cursor is k
			loop

				heapify(k)
			end

		ensure
			max_capacity_set:
				-- Completed for you. Do not modify.
				array.count = max_capacity and max_capacity = n
			heap_size_set:
				-- Completed for you. Do not modify.
				count = a.count
		end

feature -- Commands

	heapify (i: INTEGER)
			-- Starting from the node stored at index `i`,
			-- fix the heap property downwards, until an external node if necessary.

		require
			valid_index:
				-- Completed for you. Do not modify.
				is_valid_index (i)
		local
			start :INTEGER
			parent:INTEGER
			lchild:INTEGER
			rchild:INTEGER
			largestChild:INTEGER
			temp : INTEGER
		do
			-- TODO: Complete the implementation.
			-- Watch out for infinite loops!
		lchild := 2*i
		rchild := 2*i+1

		if
			lchild <= count and array[lchild] > array[i]

		then
			largestChild := lchild
		else
			largestChild := i
		end

		if
			rchild <= count and array[rchild] > array[largestChild]
		then
			largestChild := rchild
		end

		if
			largestChild /= i
		then
			temp := array[i]
			array[i] := array[largestChild]
			array[largestChild] := temp

			heapify(largestChild)
		end

		ensure
--			-- Heap property is maintained, see invariant `heap_property`.

--			same_set_of_keys:
--				-- TODO: old and new versions of `array` store the same set of integer keys.
--				-- Hint: You may want to make use of the `is_permutation_of` query.

		end

	insert (new_key: INTEGER)
			-- Add `new_key` into the heap, if it does not exist.
		require
			non_existing_key:
				-- Completed for you. Do not modify.
				not key_exists (new_key)
		do
			-- TODO: Complete the implementation.
			-- Watch out for infinite loops!
			count := count + 1
			array[count] := new_key
			across - (1 |..| (count//2)).new_cursor is k
			loop

				heapify(k)
			end
		ensure
--			-- Heap property is maintained, see invariant `heap_property`.

			size_incremented:
				-- TODO: Constraint on `count`
				count = old count +1

--			same_set_of_keys_except_the_new_key:
--				-- TODO: Except `new_key` being just added,
--				-- all other keys in the new `array` already exist in the old `array`.
--				True
		end

	remove_maximum
			-- Remove the maximum key from heap, if it is not empty.
		require
			non_empty_heap:
				-- Completed for you. Do not modify.
				not is_empty
		do
			-- TODO: Complete the implementation.
			-- Hint: Make use of the `heapify` command.
			-- Watch out for infinite loops!
			array[1] := array[count]
			array[count] := 0
			count := count - 1

			across - (1 |..| (count//2)).new_cursor is k
			loop

				heapify(k)
			end

		ensure
			-- Heap property is maintained, see invariant `heap_property`.

			size_decremented:
				-- TODO: Constraint on `count`
				count = old count-1

--			same_set_of_keys_except_the_removed_key:
--				 --TODO: Except the key being just removed,
--				 --all other keys in the old `array` still exist in the new `array`.
--				(make_set(old array.deep_twin)-0-array[1])~ (make_set(array)-0)



		end

feature -- Auxiliary queries for writing contracts

	is_permutation_of (a1, a2: like array): BOOLEAN
			-- Do arrays `a1` and `a2` store the same set of items,
			-- though they may be arranged in different orders?
			-- e.g., <<1, 2, 3, 4>> is a permutation of <<2, 1, 4, 3>>
			-- You can assume that both `a1` and `a2` are heap representation,
			-- and they thus contain no duplicates from indices 1 to `count`, whereas
			-- there are all zeros from indices `count` + 1 to `max_capacity`.

			-- No precondition or postcondition is needed.
		do
			-- TODO: Complete the implementation.
			Result := make_set(a1) - 0 ~ make_set(a2) - 0

		end
	make_set(a : like  ARRAY):SET[INTEGER]
		do
			Result := create {SET[INTEGER]}.make_from_array (a)
		end

feature -- Queries related to heaps

	is_empty: BOOLEAN
			-- Does the current heap store no integer keys?

			-- No precondition or postcondition is needed.
		do
			-- TODO: Complete the implementation.
			Result:= count =0

		end

	key_exists (a_key: INTEGER): BOOLEAN
			-- Does `a_key` exist in the current heap?

			-- No precondition is needed.
		do
			-- TODO: Complete the implementation.
			Result:= array.has (a_key)
		ensure
			correct_result:
				-- TODO: Constraint on the return value `Result`
				Result = array.has (a_key)
		end

feature -- Queries related to binary trees

	is_valid_index (i: INTEGER): BOOLEAN
			-- Does index `i` denote an existing node in the current heap?

			-- No precondition or postcondition is needed.
		do
			-- TODO: Complete the implementation.
			Result:= i<=count and i>= 1
		end

	has_left_child (i: INTEGER): BOOLEAN
			-- Does index `i` store a node that has a left child node?

			-- No precondition or postcondition is needed.
		do
			-- TODO: Complete the implementation.
			if
				i<= count//2
			then
				Result:=  array[2*i] /= 0
			else
				Result:= False
			end

		end

	has_right_child (i: INTEGER): BOOLEAN
			-- Does index `i` store a node that has a right child node?

			-- No precondition or postcondition is needed.
		do
			-- TODO: Complete the implementation.
			if
				i<=count//2
			then
				Result:=  array[2*i+1] /= 0
			else
				Result:=False
			end

		end

	has_parent (i: INTEGER): BOOLEAN
			-- Does index `i` store a node that has a parent node?

			-- No precondition or postcondition is needed.
		do
			-- TODO: Complete the implementation.
			Result := i /= 1
		end

	left_child_of (i: INTEGER): INTEGER
			-- Left child node of what is stored at index `i`
			-- No postcondition is needed.
		require
			-- Precondition completed for you. Do not modify.
			valid_index:
				is_valid_index (i)
			left_child_exists:
				has_left_child (i)
		do
			-- TODO: Complete the implementation.
			if
				i<= count//2
			then
				Result:= array[2*i]
			end

		end

	right_child_of (i: INTEGER): INTEGER
			-- Right child node of what is stored at index `i`
			-- No postcondition is needed.
		require
			-- Precondition completed for you. Do not modify.
			valid_index:
				is_valid_index (i)
			right_child_exists:
				has_right_child (i)
		do
			-- TODO: Complete the implementation.
			if
				i<= count//2
			then
				Result:= array[2*i+1]
			end

		end

	parent_of (i: INTEGER): INTEGER
			-- Parent node of what is stored at index `i`
			-- No postcondition is needed.
		require
--			-- Precondition completed for you. Do not modify.
			valid_index:
				is_valid_index (i)
			not_root:
				i /= 1
		do
			-- TODO: Complete the implementation.
			Result:= array[i//2]
		end

	maximum: INTEGER
			-- Maximum of the current heap.
		require
			-- Precondition completed for you. Do not modify.
			non_empty:
				not is_empty
		do
			-- TODO: Complete the implementation.
			Result := array[1]
		ensure
			correct_result:
				-- TODO: The return value `Result` is the maximum integer key.
				True
		end

	is_a_max_heap (i: INTEGER): BOOLEAN
			-- Does the subtree rooted at node stored at index `i` satisfy the maximum heap property?
		require
			-- Precondition completed for you. Do not modify.
			valid_index:
				is_valid_index (i)
		local
			isMaxHeap: BOOLEAN
		do
			-- TODO: Complete the implementation.
--			across
--				i |..| (count//2) is j
--			loop
--				Io.put_string ("testing")
--				Io.put_integer (i)
--				Io.put_new_line
--				Io.put_integer (array[j])
--				Io.put_integer (array[2*j+1])
--				Io.put_integer (array[2*j])
--			end
			isMaxHeap := True

			across
				i |..| (count//2) is k
			loop
				if
					has_left_child(k) and not has_right_child(k)
				then
					isMaxHeap := array[k] > left_child_of(k) and isMaxHeap

				elseif
					has_right_child(k) and not has_left_child(k)
				then
					isMaxHeap:=array[k] > right_child_of(k) and isMaxHeap
				elseif
					has_left_child(k) and has_right_child(k)
				then
				 isMaxHeap:=(array[k] > array[2*k+1] and array[k] > array[2*k]) and isMaxHeap
				elseif
					not has_left_child(k) and not has_right_child(k)
				then
					isMaxHeap := isMaxHeap and True
				end

			end

			Result:= isMaxHeap

		ensure
			case_of_no_children:
				--TODO: When index `i` denotes an external node, what happens to `Result`?

				 not has_right_child(i) and not has_left_child(i) implies Result = True




			case_of_two_children:
				-- TODO: When index `i` denotes an internal node with both children, what happens to `Result`?

					(array[i] > right_child_of(i) and array[i] > left_child_of(i)) implies Result = True


			case_of_one_child:
--				-- TODO: When index `i` denotes an internal node with only one child, what happens to `Result`?
				(not has_right_child(i) and has_left_child(i) and array[i]>left_child_of(i))
				 and (not has_left_child(i) and has_right_child(i) and array[i]>right_child_of(i)) implies Result=True

		end

invariant
	-- All invariants are completed for you. Do not modify this section.

	implementation_indices:
		array.lower = 1 and array.upper = max_capacity

	no_heap_overflow:
		count <= max_capacity

	no_heap_underflow:
		count >= 0

	-- The tree is filled up from indices 1 to `count` in the array.
	-- Indices `count` + 1 to `n` should store zeros.
	-- all stored keys are strictly positive; all unused slots store zeros
	contents_of_heap:
		across 1 |..| count is i all array[i] > 0 end
		and
		across (count + 1) |..| max_capacity is i all array[i] = 0 end

	-- The maximum heap property.
	heap_property:
		is_a_max_heap (1)
end
