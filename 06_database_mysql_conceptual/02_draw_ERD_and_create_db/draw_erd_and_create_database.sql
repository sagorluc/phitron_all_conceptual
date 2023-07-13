CREATE DATABASE employeeDB;
USE employeeDB;

CREATE TABLE Department (
	Department_id INT NOT NULL PRIMARY KEY,
	Department_Name VARCHAR(30) NOT NULL
);

CREATE TABLE Employees (
	employee_id INT NOT NULL PRIMARY KEY,
	Name VARCHAR(30) NOT NULL,
	Email VARCHAR(40) NOT NULL UNIQUE,
	Phone VARCHAR(20) NOT NULL,
	Hire_date DATE DEFAULT (CURRENT_DATE()),
	Salary DECIMAL(10, 2),
	Department_id INT,
	CONSTRAINT fk_dept FOREIGN KEY (Department_id) REFERENCES Department (Department_id)
);

SHOW CREATE TABLE Employees;

/* delete constraint foreign key */
ALTER TABLE Employees
DROP FOREIGN KEY fk_dept;

/* strong relation between two table */
/* if update and delete one table will also change in another table */
ALTER TABLE Employees
ADD FOREIGN KEY(Department_id)
REFERENCES Department(Department_id)
ON UPDATE CASCADE
ON DELETE CASCADE;

INSERT INTO Department(Department_id, Department_Name)
VALUES 
  (1, 'Sales'),
  (2, 'Marketing'),
  (3, 'Human Resources'),
  (4, 'Finance'),
  (5, 'IT');
  
  -- SELECT * FROM Department;
INSERT INTO Employees
VALUES
  (1, 'John Smith', 'john@example.com', '1234567890', '2022-01-01', 5000.00, 1),
  (2, 'Emma Johnson', 'emma@example.com', '0987654321', '2022-02-01', 6000.00, 2),
  (3, 'Michael Davis', 'michael@example.com', '5555555555', '2022-03-01', 5500.00, 1),
  (4, 'Sarah Wilson', 'sarah@example.com', '9876543210', '2022-04-01', 4500.00, 3),
  (5, 'David Thompson', 'david@example.com', '4444444444', '2022-05-01', 5200.00, 5),
  (6, 'Emily Anderson', 'emily@example.com', '1111111111', '2022-06-01', 4800.00, 2),
  (7, 'Christopher Clark', 'christopher@example.com', '7777777777', '2022-07-01', 6200.00, 3),
  (8, 'Olivia Parker', 'olivia@example.com', '2222222222', '2022-08-01', 5100.00, 1),
  (9, 'Daniel Evans', 'daniel@example.com', '6666666666', '2022-09-01', 5400.00, 2),
  (10, 'Sophia Turner', 'sophia@example.com', '3333333333', '2022-10-01', 5900.00, 4),
  (11, 'Matthew Wilson', 'matthew@example.com', '9999999999', '2022-11-01', 4700.00, 3),
  (12, 'Ava Thomas', 'ava@example.com', '8888888888', '2022-12-01', 5300.00, 2),
  (13, 'James Brown', 'james@example.com', '7777777777', '2023-01-01', 6100.00, 3),
  (14, 'Mia Martin', 'mia@example.com', '6666666666', '2023-02-01', 5200.00, 1),
  (15, 'Benjamin Rodriguez', 'benjamin@example.com', '5555555555', '2023-03-01', 4800.00, 2),
  (16, 'Charlotte Scott', 'charlotte@example.com', '4444444444', '2023-04-01', 5700.00, 1),
  (17, 'Davidson Turner', 'davidson@example.com', '3333333333', '2023-05-01', 5100.00, 3),
  (18, 'Scarlett White', 'scarlett@example.com', '2222222222', '2023-06-01', 5900.00, 5),
  (19, 'Henry Adams', 'henry@example.com', '1111111111', '2023-07-01', 5300.00, 2),
  (20, 'Amelia Green', 'amelia@example.com', '9999999999', '2023-08-01', 5500.00, 3);
  
  INSERT INTO Employees(employee_id, Name, Email, Phone, Salary, Department_id)
  VALUES (21, "Rohim", "rohim@gmail.com","017856662366", 10000.00, 5);
  
  INSERT INTO Employees(employee_id, Name, Email, Phone, Hire_date, Salary, Department_id)
  VALUES(22, "Korim", "korim@gmail.com", "0135698666","2023-07-07", 12000.00, 4);  
  
  INSERT INTO Employees(employee_id, Name, Email, Phone, Hire_date, Salary, Department_id)
  VALUES(23, "Korim", "krm@gmail.com", "0135698666","2021-03-25", 12000.00, 4);

/* update the date */
  UPDATE Employees
  SET Hire_date = (SELECT Hire_date WHERE employee_id = 21) - 1
  WHERE employee_id = 21;
  
  /* safe mood ON and OFF*/
  SET SQL_SAFE_UPDATES = 0;
  SET SQL_SAFE_UPDATES = 1;
  
  /* update department id will also update in all table */
  UPDATE Department
  SET Department_id = 10
  WHERE Department_Name = "Finance";
  
  /* delete department data*/
  DELETE FROM Department
  WHERE Department_id = 2;
  
  /* join two table referance by department_id */
  SELECT Employees.employee_id, Employees.Name, Department.Department_id, Department.Department_Name
  FROM Employees
  JOIN Department ON Department.Department_id = Employees.Department_id
  ORDER BY Employees.employee_id ASC;
  
  /* count the all department employee */
  SELECT Department_id , COUNT(Name) AS employee_count 
  FROM Employees
  GROUP BY Department_id
  HAVING COUNT(*) >= 5;
  
  SELECT * FROM Department;
  SELECT * FROM Employees;


