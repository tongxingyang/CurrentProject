﻿using UnityEngine;
using System.Collections;

public class HuoLiDataMgr
{
    private static HuoLiDataMgr instance = null;
    
    public  static  HuoLiDataMgr    Instance
    {
        get
        {
            if(null == instance)
            {
                instance = new HuoLiDataMgr();
            }
            return instance;
        }
    }

    public string huoliyao_1 = "50005";
    public string huoliyao_2 = "50006";
    public string huoliyao_3 = "50006";

    public bool showHuoliBuyDlg = true;

    public  int GetHuoliYaoLeftTime(string itemid)
    {
        return Random.Range(0, 2);
    }

    public  string  GetHuoliyaoId(int index)
    {
        if(0 == index)
        {
            return huoliyao_1;
        }
        else if( 1 == index)
        {
            return huoliyao_2;
        }
        else if (3 == index)
        {
            return huoliyao_3;
        }
        return huoliyao_1;
    }
}
