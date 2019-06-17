# Write your MySQL query statement below
SELECT
	Score,
	@rank := 
		CASE 
			WHEN @rankval = Score THEN CONVERT(@rank, SIGNED INTEGER)
			WHEN (@rankval := Score) IS NOT NULL THEN CONVERT(@rank, SIGNED INTEGER) + 1
		END AS Rank
FROM Scores, (SELECT @rank := 0, @rankval := null) AS R
ORDER BY Score DESC
