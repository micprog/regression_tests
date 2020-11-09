/*
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * Mantainer: Luca Valente, luca.valente2@unibo.it
 */
unsigned int g_min_a[] = {
0x06A52549,
0x378A567E,
0x1C169EC2,
0x24E2AEB8,
0x32EC712E,
0x8204D5BF,
0xB8D10EF2,
0x9F8BA951,
0xEB7011FD,
0xE47086C8,
};

unsigned int g_min_b[] = {
0xA201625C,
0xEB8E2A3F,
0xFFACB2EE,
0x14656D4A,
0xB82BCA6A,
0x152A8178,
0xAB342995,
0x0D9FB0F8,
0x00A027B2,
0x2C5B5EEB,
};

unsigned int g_min_exp[] = {
0xA201625C,
0xEB8E2A3F,
0xFFACB2EE,
0x14656D4A,
0xB82BCA6A,
0x8204D5BF,
0xAB342995,
0x9F8BA951,
0xEB7011FD,
0xE47086C8,
};

unsigned int g_minu_a[] = {
0xBCA4D1CF,
0x66F8F7E0,
0xF5098C62,
0x5461CF13,
0xE88BE493,
0xCAB33966,
0xE92E6042,
0xDB8E8A18,
0x71D6B54E,
0x069211E3,
};

unsigned int g_minu_b[] = {
0xC349C325,
0xB15AACB3,
0xC5479399,
0xC90AD8D4,
0x8146C4CD,
0x5C2D5EE9,
0x786621ED,
0xEFAD088F,
0x6B818AC9,
0x535388C6,
};

unsigned int g_minu_exp[] = {
0xBCA4D1CF,
0x66F8F7E0,
0xC5479399,
0x5461CF13,
0x8146C4CD,
0x5C2D5EE9,
0x786621ED,
0xDB8E8A18,
0x6B818AC9,
0x069211E3,
};

unsigned int g_min_h_a[] = {
0x8A92A6AB,
0xE37773E8,
0x85B0E12E,
0x7FA9678D,
0x2A2E2833,
0x291071DE,
0x8D4D0EEE,
0xA79CBC51,
0x8416932C,
0x639C03F3,
};

unsigned int g_min_h_b[] = {
0x82E77B73,
0x44330915,
0x6CA1BA95,
0xCD3949BB,
0x7366F54A,
0x827D35D9,
0xFFDC5FE0,
0x139E1A5A,
0x1C934175,
0x891C0892,
};

unsigned int g_min_h_exp[] = {
0x82E7A6AB,
0xE3770915,
0x85B0BA95,
0xCD3949BB,
0x2A2EF54A,
0x827D35D9,
0x8D4D0EEE,
0xA79CBC51,
0x8416932C,
0x891C03F3,
};

unsigned int g_min_h_sc_a[] = {
0x33A388EB,
0x6C255634,
0xED24CC32,
0x5A922EA1,
0xDA96BC6C,
0x12F05318,
0x62BB11D8,
0x8DDEDBCB,
0x48BD64B7,
0x9A2F308D,
};

unsigned int g_min_h_sc_b[] = {
0xA73B6225,
0xC06DB2D1,
0x20DD20AE,
0xE347C239,
0x2B8797B7,
0x74401E4E,
0xCD397914,
0x981257D7,
0x79C17991,
0xC593D9D2,
};

unsigned int g_min_h_sc_exp[] = {
0x33A388EB,
0xB2D1B2D1,
0xED24CC32,
0xC239C239,
0x97B797B7,
0x12F01E4E,
0x62BB11D8,
0x8DDEDBCB,
0x48BD64B7,
0x9A2FD9D2,
};

unsigned int g_min_h_sci_a[] = {
0x3116ABA8,
0xF270FB23,
0xF45DE902,
0xEFB53863,
0xD8A79A5B,
0x393D28BD,
0xB856E62A,
0x01FD3631,
0x6658239B,
0x3DF63993,
};

unsigned int g_min_h_sci_exp[] = {
0x000BABA8,
0xF270FB23,
0xF45DE902,
0xEFB5000B,
0xD8A79A5B,
0x000B000B,
0xB856E62A,
0x000B000B,
0x000B000B,
0x000B000B,
};

unsigned int g_minu_h_a[] = {
0xE2B42A68,
0xC219637D,
0x92C439EE,
0x66033850,
0xE6DC3826,
0xC26FE8B9,
0xF39D0C7A,
0x0865B338,
0x8F637002,
0xF8F1C50F,
};

unsigned int g_minu_h_b[] = {
0x6A212B4A,
0x50AA84CC,
0x5790DCDC,
0x0BED56DB,
0xFF1A2F5B,
0x4D4790D6,
0xFF597DB2,
0xF48337ED,
0x7EE9A870,
0x9560FA28,
};

unsigned int g_minu_h_exp[] = {
0x6A212A68,
0x50AA637D,
0x579039EE,
0x0BED3850,
0xE6DC2F5B,
0x4D4790D6,
0xF39D0C7A,
0x086537ED,
0x7EE97002,
0x9560C50F,
};

unsigned int g_minu_h_sc_a[] = {
0x7EF4D67D,
0x9A9F3E8A,
0x844C6178,
0x6EED79A0,
0x974AE0FE,
0x94B41D0F,
0xB4195DE9,
0x043C3050,
0xBE35EDEF,
0x38BCD014,
};

unsigned int g_minu_h_sc_b[] = {
0x268CA8D0,
0x2E6A8C9F,
0x7A819ECF,
0xFA30293B,
0xA0211024,
0x5DADF4C5,
0xB0BCD3D2,
0xBC590036,
0x875C1E29,
0xA0241E1C,
};

unsigned int g_minu_h_sc_exp[] = {
0x7EF4A8D0,
0x8C9F3E8A,
0x844C6178,
0x293B293B,
0x10241024,
0x94B41D0F,
0xB4195DE9,
0x00360036,
0x1E291E29,
0x1E1C1E1C,
};

unsigned int g_minu_h_sci_a[] = {
0x2E8024BF,
0x7070C7D7,
0x6955494F,
0x608DE013,
0xA46564E3,
0x725018A1,
0x6159742A,
0x92483FDF,
0x952418D1,
0xD754E528,
};

unsigned int g_minu_h_sci_exp[] = {
0x000B000B,
0x000B000B,
0x000B000B,
0x000B000B,
0x000B000B,
0x000B000B,
0x000B000B,
0x000B000B,
0x000B000B,
0x000B000B,
};

unsigned int g_min_b_a[] = {
0x3BF5A5CD,
0xF4D42C6F,
0x13CB8AE9,
0x84C245E2,
0xF940F82F,
0x1A3843AD,
0xEF39D398,
0x7BBF234E,
0xA3533D4E,
0x40DB8C66,
};

unsigned int g_min_b_b[] = {
0x59D1618C,
0x99C57ABA,
0x47F8D538,
0x707D0E6B,
0x75570A6D,
0xA3009C77,
0x00258252,
0x3BE49470,
0x14A1F0ED,
0x3B400D45,
};

unsigned int g_min_b_exp[] = {
0x3BD1A58C,
0x99C52CBA,
0x13CB8AE9,
0x84C20EE2,
0xF940F82F,
0xA3009CAD,
0xEF258298,
0x3BBF944E,
0xA3A1F0ED,
0x3BDB8C45,
};

unsigned int g_min_b_sc_a[] = {
0xDCC161BB,
0x3059A553,
0x97EC4211,
0x022CD0C1,
0x149784D0,
0x2F13BCF7,
0xA2423AFC,
0xC518D91B,
0x5B1EFB3F,
0x55FD412C,
};

unsigned int g_min_b_sc_b[] = {
0x41A0EA7B,
0xB80EA978,
0x8059FEEF,
0x7EDBF5C0,
0x9981F743,
0x193297C0,
0x14AA3611,
0x1BBB1947,
0xC5C2BE02,
0xDBB09817,
};

unsigned int g_min_b_sc_exp[] = {
0xDCC161BB,
0x3059A553,
0x97ECEFEF,
0xC0C0C0C0,
0x149784D0,
0xC0C0BCC0,
0xA21111FC,
0xC518D91B,
0x0202FB02,
0x17FD1717,
};

unsigned int g_min_b_sci_a[] = {
0x732DB986,
0xF47567E7,
0x7DF77268,
0xD3FE08AE,
0x5FB404F3,
0x47B0BA12,
0x03FB6D93,
0x9A306F61,
0x5CA42564,
0x0C46D64D,
};

unsigned int g_min_b_sci_exp[] = {
0x0B0BB986,
0xF40B0BE7,
0x0BF70B0B,
0xD3FE08AE,
0x0BB404F3,
0x0BB0BA0B,
0x03FB0B93,
0x9A0B0B0B,
0x0BA40B0B,
0x0B0BD60B,
};

unsigned int g_minu_b_a[] = {
0x46F51795,
0xA33FAB2C,
0xF49B5111,
0x69C24BF8,
0x273C0381,
0x595A3123,
0x6A3B0B74,
0x8ECFF69C,
0x025D9C68,
0xFCB8C118,
};

unsigned int g_minu_b_b[] = {
0xAAA4C60C,
0xE140C044,
0x43018736,
0xE7BA5741,
0x2253BEFA,
0x63360B27,
0x8AE4B42D,
0xCA172ACC,
0x4CBC939A,
0xDC03B38B,
};

unsigned int g_minu_b_exp[] = {
0x46A4170C,
0xA33FAB2C,
0x43015111,
0x69BA4B41,
0x223C0381,
0x59360B23,
0x6A3B0B2D,
0x8E172A9C,
0x025D9368,
0xDC03B318,
};

unsigned int g_minu_b_sc_a[] = {
0x3EBF291F,
0x00555837,
0x47AB06B4,
0xD99C896B,
0xC8F4D061,
0xE2D2A251,
0xEBC90B6B,
0xAAF889C8,
0x7DF5F2E1,
0xA2FDDBF4,
};

unsigned int g_minu_b_sc_b[] = {
0x909B9AB0,
0x7F61610C,
0x0E0F9001,
0x552A9852,
0x5D0BF731,
0x840A8633,
0xF18A4277,
0xA4174954,
0x1BDB4929,
0xC0FDC17B,
};

unsigned int g_minu_b_sc_exp[] = {
0x3EB0291F,
0x000C0C0C,
0x01010101,
0x52525252,
0x31313131,
0x33333333,
0x77770B6B,
0x54545454,
0x29292929,
0x7B7B7B7B,
};

unsigned int g_minu_b_sci_a[] = {
0xBEAF5AAB,
0xDC152410,
0x1DAD56C8,
0xDE5ACA2F,
0xC341E98E,
0x7E62AA2C,
0xC0B8EA7F,
0x7D3BB4B8,
0xB05C6C61,
0x0A1CCA76,
};

unsigned int g_minu_b_sci_exp[] = {
0x0B0B0B0B,
0x0B0B0B0B,
0x0B0B0B0B,
0x0B0B0B0B,
0x0B0B0B0B,
0x0B0B0B0B,
0x0B0B0B0B,
0x0B0B0B0B,
0x0B0B0B0B,
0x0A0B0B0B,
};

unsigned int g_max_a[] = {
0x96B168C0,
0x569AE166,
0x1F30F4AA,
0xB70D4033,
0x6BC08F32,
0x868B095B,
0x0B2D11E5,
0x78F4FC75,
0x3A0B0A67,
0x24334124,
};

unsigned int g_max_b[] = {
0x8D084962,
0xB8EF993D,
0x492C53E7,
0xBA3EFABF,
0x57FBDF53,
0x74CD6AD1,
0x35D23BC0,
0x5F04E44E,
0xD475A694,
0xC15AA5D1,
};

unsigned int g_max_exp[] = {
0x96B168C0,
0x569AE166,
0x492C53E7,
0xBA3EFABF,
0x6BC08F32,
0x74CD6AD1,
0x35D23BC0,
0x78F4FC75,
0x3A0B0A67,
0x24334124,
};

unsigned int g_maxu_a[] = {
0x5AB35527,
0x758E7CCD,
0xF5DD0C7C,
0x98549193,
0x26244E2A,
0xCCDAFFEE,
0x8F965795,
0x8188258D,
0x8ABC7729,
0xDA3E168D,
};

unsigned int g_maxu_b[] = {
0xD2F15339,
0xC8707807,
0x4D330BE1,
0x17C14E5C,
0x057F656F,
0x05A20AF5,
0x1FBCDD3E,
0x2357B4F1,
0x36E13D8E,
0x03CF941A,
};

unsigned int g_maxu_exp[] = {
0xD2F15339,
0xC8707807,
0xF5DD0C7C,
0x98549193,
0x26244E2A,
0xCCDAFFEE,
0x8F965795,
0x8188258D,
0x8ABC7729,
0xDA3E168D,
};

unsigned int g_max_h_a[] = {
0xF4D3B4D4,
0x0E5963C7,
0x10AF37F3,
0xBBF45A5E,
0x4311DAE1,
0x9BB11408,
0xE349DA5E,
0x17D2AA54,
0xF3C3149E,
0xBF6232B7,
};

unsigned int g_max_h_b[] = {
0x731E1846,
0xC078A04B,
0xA4DA964F,
0xB2705CB4,
0x51EF956D,
0x6923421D,
0x616C3186,
0x64AC30DF,
0x4C7192DE,
0x35B58584,
};

unsigned int g_max_h_exp[] = {
0x731E1846,
0x0E5963C7,
0x10AF37F3,
0xBBF45CB4,
0x51EFDAE1,
0x6923421D,
0x616C3186,
0x64AC30DF,
0x4C71149E,
0x35B532B7,
};

unsigned int g_max_h_sc_a[] = {
0xC86DA7A4,
0x1EBE021F,
0xCD6ACE5B,
0x2CA3B795,
0x6C847209,
0x9EF58887,
0x51F58643,
0x2DE21757,
0xA219AAA1,
0x9C3A82B8,
};

unsigned int g_max_h_sc_b[] = {
0x5AC6FDCC,
0xAEAF6F09,
0xA0D172AF,
0x6554E019,
0x263619C9,
0x7DAFFC14,
0xF8B1FAE9,
0x17EE5521,
0x9B7FBF6A,
0x80591864,
};

unsigned int g_max_h_sc_exp[] = {
0xFDCCFDCC,
0x6F096F09,
0x72AF72AF,
0x2CA3E019,
0x6C847209,
0xFC14FC14,
0x51F5FAE9,
0x55215521,
0xBF6ABF6A,
0x18641864,
};

unsigned int g_max_h_sci_a[] = {
0xAD6D1FDD,
0xAAF6EBB0,
0x252BC255,
0x5EE1A710,
0x5917F4CE,
0x35560114,
0x9D0944C5,
0x994973C6,
0xDF252858,
0x794246BB,
};

unsigned int g_max_h_sci_exp[] = {
0x000B1FDD,
0x000B000B,
0x252B000B,
0x5EE1000B,
0x5917000B,
0x35560114,
0x000B44C5,
0x000B73C6,
0x000B2858,
0x794246BB,
};

unsigned int g_maxu_h_a[] = {
0x3C369136,
0xC9E60677,
0x42D67990,
0xA54DF4F0,
0x82000959,
0xA1333961,
0x6D901EDA,
0xBCB43B4E,
0x185D7A06,
0x7E83BD2F,
};

unsigned int g_maxu_h_b[] = {
0xBA524CAE,
0x00145AD2,
0x244A0E31,
0x3A0C307F,
0xD3E311F4,
0xC37C143A,
0x04B826C1,
0x7A646340,
0xE05EDDA0,
0xC68D7C93,
};

unsigned int g_maxu_h_exp[] = {
0xBA529136,
0xC9E65AD2,
0x42D67990,
0xA54DF4F0,
0xD3E311F4,
0xC37C3961,
0x6D9026C1,
0xBCB46340,
0xE05EDDA0,
0xC68DBD2F,
};

unsigned int g_maxu_h_sc_a[] = {
0x36D0CB1F,
0xAE6DE3C7,
0xB6CDD3B0,
0x6918A043,
0x51F140D0,
0x6B6C4655,
0x2136E6C8,
0xA5E0B1FC,
0xA421791E,
0x80282CCC,
};

unsigned int g_maxu_h_sc_b[] = {
0x426D0434,
0x6ACB58AD,
0x1CF29759,
0xAAE57AD8,
0xF2A5C666,
0x91E5FC4A,
0xE4738B94,
0x55635485,
0x3AB2820E,
0x4AF384E3,
};

unsigned int g_maxu_h_sc_exp[] = {
0x36D0CB1F,
0xAE6DE3C7,
0xB6CDD3B0,
0x7AD8A043,
0xC666C666,
0xFC4AFC4A,
0x8B94E6C8,
0xA5E0B1FC,
0xA421820E,
0x84E384E3,
};

unsigned int g_maxu_h_sci_a[] = {
0xF503CA6A,
0x6781179C,
0xB778D8A3,
0x95ED8EDD,
0x2B3939E3,
0xF1FA41FA,
0xF019F4C5,
0x7CFA3990,
0x6ABB8A03,
0xC5101B48,
};

unsigned int g_maxu_h_sci_exp[] = {
0xF503CA6A,
0x6781179C,
0xB778D8A3,
0x95ED8EDD,
0x2B3939E3,
0xF1FA41FA,
0xF019F4C5,
0x7CFA3990,
0x6ABB8A03,
0xC5101B48,
};

unsigned int g_max_b_a[] = {
0xB040FD9D,
0xD749FDBE,
0xC5755F6A,
0xCE5BD841,
0x34ABE0E9,
0x70349DC5,
0x4FF140A3,
0x49FE5FAA,
0xFCC4CE5D,
0xC354FDBF,
};

unsigned int g_max_b_b[] = {
0xF2842D09,
0x78652008,
0xAD1CD088,
0xEB64BB3A,
0xD856FC20,
0xA91E453A,
0x298DD43C,
0xCD1D1A4B,
0x9EECA905,
0x44B39AB2,
};

unsigned int g_max_b_exp[] = {
0xF2402D09,
0x78652008,
0xC5755F6A,
0xEB64D841,
0x3456FC20,
0x7034453A,
0x4FF1403C,
0x491D5F4B,
0xFCECCE5D,
0x4454FDBF,
};

unsigned int g_max_b_sc_a[] = {
0x01B6C06B,
0x4A547B78,
0x027B0E5F,
0xC83D7C21,
0xA0889160,
0x85795412,
0x69A1D110,
0xBC78E7F1,
0x7C125837,
0xBCD7B00D,
};

unsigned int g_max_b_sc_b[] = {
0xC1698275,
0xCD4D377B,
0x595E995D,
0xAD70F21A,
0xA41BF73D,
0xF78F2CDF,
0x961BE92B,
0x85F4DE14,
0x414FC27B,
0x63E22D4D,
};

unsigned int g_max_b_sc_exp[] = {
0x75757575,
0x7B7B7B7B,
0x5D7B5D5F,
0x1A3D7C21,
0x3D3D3D60,
0xDF795412,
0x692B2B2B,
0x14781414,
0x7C7B7B7B,
0x4D4D4D4D,
};

unsigned int g_max_b_sci_a[] = {
0xEB06FBAB,
0x56249726,
0x5F32211E,
0xEA63841B,
0xAD5D5AB3,
0xBFF6194C,
0x0899E963,
0x6564115E,
0x065E16C9,
0x9721E7F1,
};

unsigned int g_max_b_sci_exp[] = {
0x0B0B0B0B,
0x56240B26,
0x5F32211E,
0x0B630B1B,
0x0B5D5A0B,
0x0B0B194C,
0x0B0B0B63,
0x6564115E,
0x0B5E160B,
0x0B210B0B,
};

unsigned int g_maxu_b_a[] = {
0x0DF91FD2,
0x434FEFA4,
0x56955708,
0x2601817B,
0x7D0D9FD3,
0x9566C986,
0xF250E07B,
0x6A489C0A,
0x3740B5C4,
0x36A7CBC5,
};

unsigned int g_maxu_b_b[] = {
0x1703C18D,
0xD032B42E,
0x8A08BFF2,
0x50420268,
0x05476133,
0xC076E723,
0x8B687AC0,
0xAAB1FC74,
0xBE515F39,
0x379BA196,
};

unsigned int g_maxu_b_exp[] = {
0x17F9C1D2,
0xD04FEFA4,
0x8A95BFF2,
0x5042817B,
0x7D479FD3,
0xC076E786,
0xF268E0C0,
0xAAB1FC74,
0xBE51B5C4,
0x37A7CBC5,
};

unsigned int g_maxu_b_sc_a[] = {
0x318C6A64,
0xDFE73909,
0x6FF07641,
0x22CA0DB4,
0xE7A64886,
0xFAEEAFEE,
0x867032EC,
0x6794E301,
0x3C5312DF,
0xBE49D11E,
};

unsigned int g_maxu_b_sc_b[] = {
0x82B8BEE8,
0xBFC58126,
0x5689109D,
0x27EA9D33,
0xA73AA187,
0x7D851F76,
0xEFC78976,
0xE399D40A,
0x12B5DD0F,
0x1D46968F,
};

unsigned int g_maxu_b_sc_exp[] = {
0xE8E8E8E8,
0xDFE73926,
0x9DF09D9D,
0x33CA33B4,
0xE7A68787,
0xFAEEAFEE,
0x867676EC,
0x6794E30A,
0x3C5312DF,
0xBE8FD18F,
};

unsigned int g_maxu_b_sci_a[] = {
0x0A7062D8,
0x07469D5D,
0x4E875E27,
0xBCA8D3D3,
0xC39B71CE,
0xFAA41C3E,
0x8D2C3E0B,
0xC9CAF37C,
0xF22BBEF7,
0xF791BB17,
};

unsigned int g_maxu_b_sci_exp[] = {
0x0B7062D8,
0x0B469D5D,
0x4E875E27,
0xBCA8D3D3,
0xC39B71CE,
0xFAA41C3E,
0x8D2C3E0B,
0xC9CAF37C,
0xF22BBEF7,
0xF791BB17,
};
