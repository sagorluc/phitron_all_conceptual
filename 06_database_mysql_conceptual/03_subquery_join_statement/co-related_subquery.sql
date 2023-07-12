/* find the employee who's salary is greter then the average salary of that department */
SELECT first_name , salary, department_id
FROM employees e
WHERE salary > (SELECT AVG(salary) FROM employees e1 WHERE e.department_id = e1.department_id)
ORDER BY department_id ASC; /* co-related subquery */