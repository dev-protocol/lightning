#include "config.h"
#include "../block.c"
#include "../psbt.c"
#include "../shadouble.c"
#include "../signature.c"
#include "../tx.c"
#include "../varint.c"
#include <assert.h>
#include <common/setup.h>
#include <stdio.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for amount_asset_is_main */
bool amount_asset_is_main(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_is_main called!\n"); abort(); }
/* Generated stub for amount_asset_to_sat */
struct amount_sat amount_asset_to_sat(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_to_sat called!\n"); abort(); }
/* Generated stub for amount_sat */
struct amount_sat amount_sat(u64 satoshis UNNEEDED)
{ fprintf(stderr, "amount_sat called!\n"); abort(); }
/* Generated stub for amount_sat_add */
 bool amount_sat_add(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_add called!\n"); abort(); }
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_greater_eq */
bool amount_sat_greater_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_greater_eq called!\n"); abort(); }
/* Generated stub for amount_sat_sub */
 bool amount_sat_sub(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_sub called!\n"); abort(); }
/* Generated stub for amount_sat_to_asset */
struct amount_asset amount_sat_to_asset(struct amount_sat *sat UNNEEDED, const u8 *asset UNNEEDED)
{ fprintf(stderr, "amount_sat_to_asset called!\n"); abort(); }
/* Generated stub for amount_tx_fee */
struct amount_sat amount_tx_fee(u32 fee_per_kw UNNEEDED, size_t weight UNNEEDED)
{ fprintf(stderr, "amount_tx_fee called!\n"); abort(); }
/* Generated stub for fromwire */
const u8 *fromwire(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, void *copy UNNEEDED, size_t n UNNEEDED)
{ fprintf(stderr, "fromwire called!\n"); abort(); }
/* Generated stub for fromwire_fail */
void *fromwire_fail(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_fail called!\n"); abort(); }
/* Generated stub for fromwire_secp256k1_ecdsa_signature */
void fromwire_secp256k1_ecdsa_signature(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
					secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "fromwire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for fromwire_sha256 */
void fromwire_sha256(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "fromwire_sha256 called!\n"); abort(); }
/* Generated stub for fromwire_u32 */
u32 fromwire_u32(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u32 called!\n"); abort(); }
/* Generated stub for fromwire_u8 */
u8 fromwire_u8(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u8 called!\n"); abort(); }
/* Generated stub for fromwire_u8_array */
void fromwire_u8_array(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_u8_array called!\n"); abort(); }
/* Generated stub for is_anchor_witness_script */
bool is_anchor_witness_script(const u8 *script UNNEEDED, size_t script_len UNNEEDED)
{ fprintf(stderr, "is_anchor_witness_script called!\n"); abort(); }
/* Generated stub for pubkey_to_der */
void pubkey_to_der(u8 der[PUBKEY_CMPR_LEN] UNNEEDED, const struct pubkey *key UNNEEDED)
{ fprintf(stderr, "pubkey_to_der called!\n"); abort(); }
/* Generated stub for pubkey_to_hash160 */
void pubkey_to_hash160(const struct pubkey *pk UNNEEDED, struct ripemd160 *hash UNNEEDED)
{ fprintf(stderr, "pubkey_to_hash160 called!\n"); abort(); }
/* Generated stub for scriptpubkey_p2wsh */
u8 *scriptpubkey_p2wsh(const tal_t *ctx UNNEEDED, const u8 *witnessscript UNNEEDED)
{ fprintf(stderr, "scriptpubkey_p2wsh called!\n"); abort(); }
/* Generated stub for towire_secp256k1_ecdsa_signature */
void towire_secp256k1_ecdsa_signature(u8 **pptr UNNEEDED,
			      const secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "towire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for towire_sha256 */
void towire_sha256(u8 **pptr UNNEEDED, const struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "towire_sha256 called!\n"); abort(); }
/* Generated stub for towire_u32 */
void towire_u32(u8 **pptr UNNEEDED, u32 v UNNEEDED)
{ fprintf(stderr, "towire_u32 called!\n"); abort(); }
/* Generated stub for towire_u8 */
void towire_u8(u8 **pptr UNNEEDED, u8 v UNNEEDED)
{ fprintf(stderr, "towire_u8 called!\n"); abort(); }
/* Generated stub for towire_u8_array */
void towire_u8_array(u8 **pptr UNNEEDED, const u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "towire_u8_array called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

static const char block[] =
	"00a09265c15bea24321eecadb27ddf660035ac1f2b450ec03b973e17310f000"
	"0000000008a0ee58ded5de949325ebc99583e3ca84f96a6597465c611685413"
	"f50f0ead7eafdc6a5c00013f1a3580194903010000000001010000000000000"
	"000000000000000000000000000000000000000000000000000ffffffff2703"
	"9985161a4d696e656420627920416e74506f6f6c2094000103208efc8ad9030"
	"00000101f0100ffffffff02d2545402000000001976a9144afc312d452c9c49"
	"9fb8662728b19ac0cd3ea68888ac0000000000000000266a24aa21a9ed08b1d"
	"c37da139ccd00803738db33e05331819736b3336352dc6e2fa74f1fd67b0120"
	"000000000000000000000000000000000000000000000000000000000000000"
	"00000000001000000019b1a8eaec64d596296c3abe9af09cce1dc09996a9ad0"
	"84aaef0e4f79eb13f1e400000000fd5e0100483045022100b16d81821baf80d"
	"6af47afea73cbd3f013bf4905c87ba896ed6e545dd00edd3a0220043262bf51"
	"fe21b22b74a3ed148396077da75969e76b5fd647cda138f323634d014830450"
	"22100a2b86c9e21b5b8ff0b185e42274bfe1ef6c8d4ec6e43c174bfdac360b6"
	"8ac2b80220440a60482cfccd5c384c7d62e16e03a86295224b3ef82fb6f7d29"
	"42657a4b330014cc95241048aa0d470b7a9328889c84ef0291ed30346986e22"
	"558e80c3ae06199391eae21308a00cdcfb34febc0ea9c80dfd16b01f26c7ec6"
	"7593cb8ab474aca8fa1d7029d4104cf54956634c4d0bdaf00e6b1871c089b7a"
	"892d0fecc077f03b91e8d4d146861b0a4fdd237891a9819c878984d4b123f6f"
	"e92d9bbc05873a1bb4fe510145bf369410471843c33b2971e4944c73d4500ab"
	"d6f61f7edf9ec919c408cbe12a6c9132d2cb8ebed8253322760d5ec6081165e"
	"0ab68900683de503f1544f03816d47fec699a53aeffffffff02707712000000"
	"00001976a9147e1d98594b7b8417ed905904bad4d0de0217ee0288acc9a20a0"
	"20000000017a9145629021f7668d4ec310ac5e99701a6d6cf95eb8f87000000"
	"0003000000046113feede7973b484e4b8605d4f8cf2d498c98cef1a30898eb2"
	"5e0958805031c000000006a47304402207afc3e15fc3c3657981cd4e0cf8afc"
	"2c62bf37efa7f92eef669d1b4ec0701c93022057bbcb4bb3b5b7b7341d708e8"
	"bf62975013f658c29fcd22482307b4ee8e223b3012103585914f7d7e37df12b"
	"df0171503922c86ea2c9f09d4f20c40660a74c883687adffffffff6d2663970"
	"ee08fbbf1dd9a30ba71ef1bc196cba2b9f6a19db1af4c7995003e8500000000"
	"6b483045022100906fd4411926dca316ba7127e7072bd0691481883811856ff"
	"81e4f9c526ec08e022005afc833c37cec7b87c58a8eec66704a0ed277f8e497"
	"f7512b9cefae3d50d3db012103585914f7d7e37df12bdf0171503922c86ea2c"
	"9f09d4f20c40660a74c883687adffffffff8356393fa3711040b67f221f1246"
	"4ea09a770381130b4070bf8514307decba18010000006a47304402200657e98"
	"4c480a37e2d73534d8314e2a73d315cb2934ad47a84d1ca9f5304332702206b"
	"212bb3ec549c39dca2f5e7ba5f8ba6020f5d4a975433a2334ceb8ff2f040590"
	"12103585914f7d7e37df12bdf0171503922c86ea2c9f09d4f20c40660a74c88"
	"3687adffffffffca9dd5661fc8caf4e5e75aa218c29a004a1d18a6461c493ef"
	"7c29e9cb77b54c9010000006b483045022100da7635fdaa91d5c293915802b4"
	"d02a044cd64548b8c23bfaaeec47d25d6039df022053927423c4d29c9a30458"
	"a837b6715ff50a3a2f5e97268cf606d9a52a30fa486012103585914f7d7e37d"
	"f12bdf0171503922c86ea2c9f09d4f20c40660a74c883687adffffffff02404"
	"20f00000000001976a914a2fdc4acc57254d6922607cd02b4826bb458528288"
	"ac0eb82500000000001976a914e05655a7d90b01ba874d81beff57ee09610ca"
	"3ce88ac00000000";

STRUCTEQ_DEF(sha256_double, 0, sha);

static bool bitcoin_blkid_from_hex(const char *hexstr, size_t hexstr_len,
				   struct bitcoin_blkid *blockid)
{
	struct bitcoin_txid fake_txid;
	if (!bitcoin_txid_from_hex(hexstr, hexstr_len, &fake_txid))
		return false;
	blockid->shad = fake_txid.shad;
	return true;
}
int main(int argc, const char *argv[])
{
	struct bitcoin_blkid prev;
	struct sha256_double merkle;
	struct bitcoin_txid txid, expected_txid;
	struct bitcoin_block *b;

	common_setup(argv[0]);
	chainparams = chainparams_for_network("bitcoin");
	b = bitcoin_block_from_hex(NULL, chainparams,
				   block, strlen(block));

	assert(b);
	assert(b->hdr.version == 0x6592a000);
	bitcoin_blkid_from_hex("0000000000000f31173e973bc00e452b1fac350066df7db2adec1e3224ea5bc1", strlen("0000000000000f31173e973bc00e452b1fac350066df7db2adec1e3224ea5bc1"), &prev);
	assert(bitcoin_blkid_eq(&prev, &b->hdr.prev_hash));
	hex_decode("8a0ee58ded5de949325ebc99583e3ca84f96a6597465c611685413f50f0ead7e", strlen("8a0ee58ded5de949325ebc99583e3ca84f96a6597465c611685413f50f0ead7e"), &merkle, sizeof(merkle));
	assert(sha256_double_eq(&merkle, &b->hdr.merkle_hash));
	assert(b->hdr.timestamp == 1550507183);
	assert(b->hdr.nonce == 1226407989);

	assert(tal_count(b->tx) == 3);
	bitcoin_txid(b->tx[0], &txid);
	bitcoin_txid_from_hex("14d86acd2158acd1f59ab77ab251e3f5073db905a7b2aed25d3ba7780c3d790c",
			      strlen("14d86acd2158acd1f59ab77ab251e3f5073db905a7b2aed25d3ba7780c3d790c"),
			      &expected_txid);
	assert(bitcoin_txid_eq(&txid, &expected_txid));

	bitcoin_txid(b->tx[1], &txid);
	bitcoin_txid_from_hex("c261a53121cc9841f843e2e6e0cff337e4f3c5eee788c982a0bffe771ce69919",
			      strlen("c261a53121cc9841f843e2e6e0cff337e4f3c5eee788c982a0bffe771ce69919"),
			      &expected_txid);
	assert(bitcoin_txid_eq(&txid, &expected_txid));

	bitcoin_txid(b->tx[2], &txid);
	bitcoin_txid_from_hex("80cea306607b708a03a1854520729da884e4317b7b51f3d4a622f88176f5e034",
			      strlen("80cea306607b708a03a1854520729da884e4317b7b51f3d4a622f88176f5e034"),
			      &expected_txid);
	assert(bitcoin_txid_eq(&txid, &expected_txid));

	tal_free(b);
	common_shutdown();
	return 0;
}
