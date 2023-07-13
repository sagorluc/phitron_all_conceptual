/* first solution */
SELECT Email
FROM Person
GROUP BY Email
HAVING COUNT(Email) > 1;

/* second solution */
SELECT DISTINCT p1.Email
FROM Person p1
INNER JOIN Person p2
ON p1.email = p2.email
WHERE p1.id != p2.id;