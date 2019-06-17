# Write your MySQL query statement below
SELECT 
	per.FirstName,
	per.LastName,
	addr.City,
	addr.State
FROM Person AS per LEFT JOIN Address AS addr ON per.PersonId = addr.PersonId
