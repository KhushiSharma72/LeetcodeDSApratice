# Write your MySQL query statement below
WITH res AS (
SELECT d.name As Department,
e.name As Employee,e.salary As Salary,
DENSE_RANK() OVER(PARTITION BY d.id ORDER BY Salary DESC) AS ranked
FROM Employee e INNER JOIN Department d
ON e.departmentId= d.id
)
SELECT Department, Employee, Salary FROM res WHERE ranked <=3;