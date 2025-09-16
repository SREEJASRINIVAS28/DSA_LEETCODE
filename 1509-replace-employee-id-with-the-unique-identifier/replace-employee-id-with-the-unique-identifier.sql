/* Write your T-SQL query statement below */
select eu.unique_id, name from Employees as e left join EmployeeUNI as eu on e.id=eu.id;
