# Write your MySQL query statement below
SELECT customer_id, COUNT(Visits.visit_id) AS count_no_trans 
FROM Visits
-- LEFT JOIN Transactions 
-- ON Visits.visit_id = Transactions.visit_id
WHERE visit_id NOT IN(
    SELECT visit_id FROM transactions
)
GROUP BY customer_id;


