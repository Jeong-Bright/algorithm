SELECT b.TITLE, b.BOARD_ID, r.REPLY_ID, r.WRITER_ID, r.CONTENTS, date_format(r.created_date, '%Y-%m-%d') as CREATED_DATE
from used_goods_reply as r join used_goods_board as b
                                on r.board_id = b.board_id
where DATE_FORMAT(b.created_date, '%Y-%m') = '2022-10'
order by created_date asc, title asc;