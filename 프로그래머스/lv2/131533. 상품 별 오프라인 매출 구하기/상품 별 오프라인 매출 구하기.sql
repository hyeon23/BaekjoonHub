-- 코드를 입력하세요
SELECT a.PRODUCT_CODE, a.PRICE * SUM(b.SALES_AMOUNT) AS SALES
FROM PRODUCT AS a JOIN OFFLINE_SALE AS b ON a.PRODUCT_ID = b.PRODUCT_ID
GROUP BY a.PRODUCT_CODE
ORDER BY SALES DESC, a.PRODUCT_CODE ASC
