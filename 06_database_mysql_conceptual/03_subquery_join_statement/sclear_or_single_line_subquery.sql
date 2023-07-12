/* find a employee who's salary is greter then average of all salary */
SELECT first_name, salary 
FROM employees 
WHERE salary > (SELECT AVG(salary) FROM employees); /* scelar or single line subquery */