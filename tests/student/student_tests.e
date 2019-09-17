note
	description: "Tests created by student"
	author: "You"
	date: "$Date$"
	revision: "$Revision$"

class
	STUDENT_TESTS

inherit
	ES_TEST

create
	make

feature -- Add tests

	make
		do
			add_boolean_case (agent t1)
			add_boolean_case (agent t2)
			add_boolean_case (agent t3)
			add_boolean_case (agent t4)
			add_boolean_case (agent t5)
		end

feature -- Tests

	t1: BOOLEAN
		local
			h: ARRAYED_HEAP
		do
			comment ("t1: insert into array")



			create h.make (<<4, 1, 3, 2, 16, 9, 10, 14, 8, 7>>, 15)
			Result := h.array ~ <<4, 1, 3, 2, 16, 9, 10, 14, 8, 7, 0, 0, 0 , 0 ,0>>
			check Result end
		end

	t2: BOOLEAN

		local
				h: ARRAYED_HEAP
		do
			comment ("t2: test heapify")
			-- Add your own test on heap and scheduler.
			create h.make (<<4, 1, 3, 2, 16, 9, 10, 14, 8, 7>>, 15)
			 Result := h.array ~ <<16, 14, 10, 8, 7, 9, 3, 2, 4, 1, 0, 0, 0, 0, 0>>

			across
				h.array.lower |..| h.array.upper is i
			loop
				Io.put_integer (h.array[i])
				Io.new_line
			end
			 check Result end
		end

	t3: BOOLEAN
	local
			h: ARRAYED_HEAP
		do
			comment ("t3: testing add")
			-- Add your own test on heap and scheduler.
			create h.make (<<4, 1, 3, 2, 16, 9, 10, 14, 8, 7>>, 15)
			h.insert (17)
			Result := h.array ~ <<17,16, 10, 8, 14, 9, 3, 2, 4, 1, 7, 0, 0, 0, 0>>
			across
				h.array.lower |..| h.array.upper is i
			loop
				Io.put_integer (h.array[i])
				Io.new_line
			end
			 check Result end
		end

	t4: BOOLEAN
		local
				h: ARRAYED_HEAP
		do
				comment ("t4: remove max from heap")
			-- Add your own test on heap and scheduler.
			create h.make (<<4, 1, 3, 2, 16, 9, 10, 14, 8, 7>>, 15)
			h.insert (17)

			h.remove_maximum
			Result := h.array ~ <<16,14,10,8,7,9,3,2,4,1, 0, 0, 0 ,0,0>>
			across
				h.array.lower |..| h.array.upper is i
			loop
				Io.put_integer (h.array[i])
				Io.new_line
			end
			check Result end
		end

	t5: BOOLEAN
		local
			s: SCHEDULER[STRING] -- the TASK genenic type parameter in SCHEDULER is instantiated by STRING
		do
				comment ("t5: scheduler")
				comment ("t2: create a new scheduler, add a new task, execute the next task, basic queries")
						create s.make_from_array (
							<<	["Alan's Request"		,   4], ["Mark's Request"         ,   1],
									["Tom's Request"		,   3], ["SuYeon's Request"     ,   2],
									["Yuna's Request"		, 16], ["JaeBin's Request"       ,   9],
									["JiYoon's Request"	, 10], ["SeungYeon's Request", 14],
									["SunHye's Request"	,   8], ["JiHye's Request"         , 7 ]	>>
							, 15)
				Result := s.pq.array ~ <<16, 14, 10, 8, 7, 9, 3, 2, 4, 1, 0, 0, 0, 0, 0>>
						check Result end
				Io.put_boolean (s.count = 10)
				Io.put_boolean (s.is_empty)
				Result := s.count = 10 and not s.is_empty
				check Result end

				Result := s.next_task_to_execute ~ "Yuna's Request"
				check Result end

				Result := not s.priority_exists (15)
				check Result end

				s.add_task (["HeeYeon's Request", 15])

				Io.put_integer (s.tasks.count)
				Io.put_integer (s.pq.count)
				Result := s.pq.array ~ <<16, 15, 10, 8, 14, 9, 3, 2, 4, 1, 7, 0, 0, 0, 0>>
				check Result end

				Result := s.priority_exists (15)
				check Result end

				Result := s.next_task_to_execute ~ "Yuna's Request"
				check Result end

				s.execute_next_task

				Result := s.pq.array ~ <<15, 14, 10, 8, 7, 9, 3, 2, 4, 1, 0, 0, 0, 0, 0>>
				check Result end

				Result := s.next_task_to_execute ~ "HeeYeon's Request"
				check Result end

		end
end
