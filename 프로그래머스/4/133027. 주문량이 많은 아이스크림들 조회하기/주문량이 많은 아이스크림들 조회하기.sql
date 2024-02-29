WITH VALUE AS(
(
    SELECT FLAVOR, TOTAL_ORDER
    FROM FIRST_HALF 
)
UNION
(
    SELECT FLAVOR, TOTAL_ORDER
    FROM JULY
))

SELECT FLAVOR
FROM VALUE
GROUP BY FLAVOR
ORDER BY SUM(TOTAL_ORDER) DESC
LIMIT 3;