SELECT B.BOOK_ID, AU.AUTHOR_NAME,
       DATE_FORMAT(B.PUBLISHED_DATE, '%Y-%m-%d')
        as PUBLISHED_DATE
FROM BOOK B JOIN AUTHOR AU
                 ON B.AUTHOR_ID = AU.AUTHOR_ID
WHERE B.CATEGORY = '경제'
ORDER BY PUBLISHED_DATE;