CREATE DATABASE phitron;
/* SHOW DATABASES; */

USE phitron;

CREATE TABLE student_info(

    Roll INT NOT NULL UNIQUE PRIMARY KEY,
    Name VARCHAR(30) NOT NULL,
    Parent_contact_no CHAR(11),
    Email VARCHAR(30) NOT NULL
);
CREATE TABLE DS_exam(
    Roll_ds INT NOT NULL,
    Obtained_number INT NOT NULL
);
CREATE TABLE ALGO_exam(
    Roll_algo INT NOT NULL,
    Obtained_number INT NOT NULL
);
CREATE TABLE OOP_exam(
    Roll_oop INT NOT NULL,
    Obtained_number INT NOT NULL
);

/*SHOW TABLES; */

/* RENAME TABLE student_table TO student_info;
SHOW TABLES; */

INSERT INTO student_info(Roll, Name, Parent_contact_no, Email) VALUES
(1, 'John Doe', '12345678901', 'john.doe@example.com'),
(2, 'Jane Smith', '23456789012', 'jane.smith@example.com'),
(3, 'Michael Johnson', '34567890123', 'michael.johnson@example.com'),
(4, 'Emily Davis', '45678901234', 'emily.davis@example.com'),
(5, 'Robert Wilson', '23456789012', 'robert.wilson@example.com'),
(6, 'Jessica Taylor', '67890123456', 'jessica.taylor@example.com'),
(7, 'Christopher Anderson', '78901234567', 'christopher.anderson@example.com'),
(8, 'Amanda Brown', '89012345678', 'amanda.brown@example.com'),
(9, 'Daniel Martinez', '23456789012', 'daniel.martinez@example.com'),
(10, 'Olivia Thompson', '01234567890', 'olivia.thompson@example.com'),
(11, 'James Garcia', '12345678901', 'james.garcia@example.com'),
(12, 'Sophia Lopez', '23456789012', 'sophia.lopez@example.com'),
(13, 'David Hernandez', '34567890123', 'david.hernandez@example.com'),
(14, 'Isabella Clark', '45678901234', 'isabella.clark@example.com'),
(15, 'Joseph Young', '56789012345', 'joseph.young@example.com'),
(16, 'Mia Lewis', '67890123456', 'mia.lewis@example.com'),
(17, 'Alexander Lee', '78901234567', 'alexander.lee@example.com'),
(18, 'Abigail Walker', '89012345678', 'abigail.walker@example.com'),
(19, 'Matthew Hall', '90123456789', 'matthew.hall@example.com'),
(20, 'Sofia Hill', '23456789012', 'sofia.hill@example.com');

/* SELECT * FROM student_info; */

/* Generate random number as obtained number */

/* SELECT FLOOR(RAND()*101); */

INSERT INTO DS_exam(Roll_ds, Obtained_number)
SELECT Roll, FLOOR(RAND()*101) FROM student_info LIMIT 20;
/* SELECT * FROM DS_exam; */


INSERT INTO ALGO_exam(Roll_algo, Obtained_number)
SELECT Roll, FLOOR(RAND()*101) FROM student_info;
/* SELECT * FROM ALGO_exam; */

INSERT INTO OOP_exam(Roll_oop, Obtained_number)
SELECT Roll, FLOOR(RAND()*101) FROM student_info;
/* SELECT * FROM OOP_exam; */

-- SELECT * FROM DS_exam ORDER BY Obtained_number DESC
-- LIMIT 3;

-- SELECT * FROM DS_exam ORDER BY Obtained_number ASC
-- LIMIT 3;

-- SELECT student_info.Name , DS_exam.Obtained_number
-- FROM student_info
-- JOIN DS_exam ON student_info.Roll = DS_exam.Roll_ds;
-- ORDER BY Obtained_number DESC LIMIT 1;

/* show student roll, name, obtained number from two table who got the mark below of 50 */
SELECT student_info.Roll, student_info.Name, DS_exam.Obtained_number
FROM student_info 
JOIN DS_exam ON student_info.Roll = DS_exam.Roll_ds
WHERE DS_exam.Obtained_number < 50;

/* count the student who got the mark below of 50 */
SELECT COUNT(*) AS Faild_student_number
FROM DS_exam 
WHERE Obtained_number < 50;

/* show the student who's are belong to same family */
SELECT Name AS student_name_belong_to_same_family
FROM student_info
WHERE Parent_contact_no = '23456789012';








