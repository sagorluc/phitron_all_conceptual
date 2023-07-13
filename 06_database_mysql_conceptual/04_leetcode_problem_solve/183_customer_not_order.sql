/* first method */
SELECT Customers.Name AS Customers
FROM Customers
WHERE NOT EXISTS (SELECT 1 FROM Orders WHERE Customers.id = Orders.customerId);

/* second method */
SELECT Customers.Name AS Customers
FROM Customers
LEFT JOIN Orders 
ON Customers.id = Orders.customerId
WHERE Orders.customerId IS NULL;