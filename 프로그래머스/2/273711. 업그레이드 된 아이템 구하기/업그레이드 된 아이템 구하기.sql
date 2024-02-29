select child.item_id, child.item_name, child.rarity
from item_info as parent
join item_tree as it on it.parent_item_id = parent.item_id
join item_info as child on it.item_id = child.item_id
where parent.rarity = 'rare'
order by child.item_id desc;