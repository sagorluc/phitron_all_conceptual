/* find the employees who eran the highest salary in each departmen */
SELECT department_id, MAX(salary) AS highest_salary 
FROM employees 
GROUP BY department_id;

SELECT first_name, salary, department_id 
FROM employees 
WHERE (department_id , salary) IN (SELECT department_id , MAX(salary) FROM employees GROUP BY department_id)
ORDER BY department_id ASC; /* multiple subquery */