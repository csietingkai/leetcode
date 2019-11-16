# Write your MySQL query statement below
SELECT w1.Id
FROM weather AS w1, weather AS w2
WHERE SUBDATE(w1.RecordDate, 1) = w2.RecordDate
	AND w1.Temperature > w2.Temperature

