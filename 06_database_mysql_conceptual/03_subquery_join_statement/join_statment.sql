-- join (USING / ON)
SELECT first_name, department_id, department_name
FROM employees JOIN departments USING (department_id);

SELECT employees.first_name, employees.department_id, departments.department_name
FROM employees JOIN departments ON employees.department_id = departments.department_id;

/* without join statment */
SELECT employees.first_name, employees.department_id, departments.department_name
FROM employees , departments
WHERE employees.department_id = departments.department_id;