# Write your MySQL query statement below
select Product.product_name, Sales.year, Sales.price from Product 
Left Join Sales on Product.product_id = Sales.product_id
where Product.product_id is not null and Sales.product_id is not null