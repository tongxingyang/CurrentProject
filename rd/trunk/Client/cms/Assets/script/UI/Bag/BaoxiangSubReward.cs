﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class BaoxiangSubReward : MonoBehaviour
{
	public	static	BaoxiangSubReward	CreateWith(PB.RewardItem reward)
	{
		GameObject go = ResourceMgr.Instance.LoadAsset ("BaoxiangSubReward", false);
		BaoxiangSubReward boxSubReward = (BaoxiangSubReward)go.GetComponent<BaoxiangSubReward> ();
		if (boxSubReward.InitWithRewardInfo (reward)) 
		{
			return boxSubReward;
		}
		ResourceMgr.Instance.DestroyAsset (go);
		return	null;
	}

	public	Transform	rewardIconParent;
	public	Text		itemNameText;

	public	bool	InitWithRewardInfo(PB.RewardItem reward)
	{
		string name = null;
		if (reward.type == (int)PB.itemType.MONSTER)
		{
			GameUnit unit = GameDataMgr.Instance.PlayerDataAttr.GetPetWithKey((int)reward.id);
			if(null == unit)
			{
				Logger.LogError(string.Format("can't find monster guid = {0} with open box",reward.id));
				return false;
			}
			MonsterIcon icon = MonsterIcon.CreateIcon();
			icon.SetId(reward.id.ToString());
			icon.SetMonsterStaticId(unit.pbUnit.id);
			icon.SetStage(unit.pbUnit.stage);

			icon.transform.SetParent(rewardIconParent);
			icon.transform.localScale = Vector3.one;

			name = unit.name;
		} 
		else  if (reward.type == (int)PB.itemType.ITEM) 
		{
			ItemIcon icon = ItemIcon.CreateItemIcon(ItemData.valueof(reward.itemId, reward.count));
			icon.transform.SetParent(rewardIconParent);
			icon.transform.localScale = Vector3.one;
			name = GetItemName(reward.itemId);
		}
		else if (reward.type == (int)PB.itemType.EQUIP)
		{
			EquipData equipData = new EquipData()
			{
				id = reward.id,
				equipId = reward.itemId,
				stage = reward.stage,
				level = reward.level
			};
			ItemIcon icon = ItemIcon.CreateItemIcon(equipData);
			icon.transform.SetParent(rewardIconParent);
			icon.transform.localScale = Vector3.one;
			name = GetItemName(reward.itemId);
		}
		//itemNameText.text =   StaticDataMgr.Instance.GetTextByID (name);
		return true;
	}

	string GetItemName(string itemId)
	{
		ItemStaticData stData = StaticDataMgr.Instance.GetItemData (itemId);
		if (stData != null)
		{
			return stData.name;
		}
		return null;
	}
}
