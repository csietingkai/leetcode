# Write your MySQL query statement below
SELECT class
FROM (
	SELECT 
		class,
		COUNT(DISTINCT student) AS cnt
	FROM courses
	GROUP BY class
) AS calc
WHERE calc.cnt >= 5
