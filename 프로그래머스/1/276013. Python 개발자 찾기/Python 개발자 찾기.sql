-- 코드를 작성해주세요
select id, email, first_name, last_name
from developer_infos
where skill_1 = 'python' or skill_3 = 'python' or skill_2 = 'python'
order by id asc;