SELECT MCDP_CD AS '진료과코드', 
    COUNT(MCDP_CD) AS '5월예약건수' # 카운팅 count()
FROM APPOINTMENT
WHERE APNT_YMD LIKE "%2022-05%" # 5월 예약, % = 생략
GROUP BY MCDP_CD  # 진료과 별로 구분
ORDER BY 2 ASC, 1 ASC; # asc, desc















# # 특정한 날 지정 
# SELECT MCDP_CD AS "진료과코드", COUNT(*) AS "5월예약건수"
# FROM APPOINTMENT 
# WHERE APNT_YMD LIKE '2022-05%'
# GROUP BY MCDP_CD
# ORDER BY "5월예약건수" ASC, "진료과코드" ASC