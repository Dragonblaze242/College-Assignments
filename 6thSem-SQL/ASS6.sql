CREATE VIEW vw_client_master AS SELECT client_no, name, address1, balance_due FROM client_master;
SELECT * FROM vw_client_master;
INSERT INTO vw_client_master VALUES('C008','Spandan Halder','G-9',7000);
INSERT INTO vw_client_master VALUES('C009','Supriyo Halder','Z-9',8000);
INSERT INTO vw_client_master VALUES('C010','Debtanu Ganguly','X-9',9000);
select * from vw_client_master;
UPDATE vw_client_master SET Address1='K-9' where client_no='C008';
SELECT * FROM vw_client_master;
DELETE vw_client_master WHERE client_no='C008';
SELECT * FROM vw_client_master;

CREATE VIEW vw_sales_det AS SELECT order_no, order_date, product_no, qty_ordered, order_status FROM sales_order_details NATURAL JOIN sales_order WHERE sales_order.order_status = 'BackOrder';
SELECT * FROM vw_sales_det;
INSERT INTO vw_sales_det VALUES('O12007', '27-JAN-96', 'P00007', 10, 'BackOrder');
select * from vw_sales_det;
UPDATE vw_sales_det SET qty_ordered = 40;
select * from vw_sales_det;
DELETE vw_sales_det WHERE order_no = 'O19002';
select * from vw_sales_det;
DROP VIEW vw_sales_det;
DROP VIEW vw_client_master;