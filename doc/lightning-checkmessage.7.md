lightning-checkmessage -- Command to check if a signature is from a node
=====================================================================

SYNOPSIS
--------

**checkmessage** *message* *zbase* [*pubkey*]

DESCRIPTION
-----------

The **checkmessage** RPC command is the counterpart to
**signmessage**: given a node id (*pubkey*), signature (*zbase*) and a
*message*, it verifies that the signature was generated by that node
for that message (more technically: by someone who knows that node's
secret).

As a special case, if *pubkey* is not specified, we will try every
known node key (as per *listnodes*), and verification succeeds if it
matches for any one of them.  Note: this is implemented far more
efficiently than trying each one, so performance is not a concern.

On failure, an error is returned and core lightning exit with the following error code:
- -32602: Parameter missed or malformed;
- 1301: *pubkey* not found in the graph.

RETURN VALUE
------------

[comment]: # (GENERATE-FROM-SCHEMA-START)
On success, an object is returned, containing:

- **verified** (boolean): whether the signature was valid (always *true*)
- **pubkey** (pubkey): the *pubkey* parameter, or the pubkey found by looking for known nodes

[comment]: # (GENERATE-FROM-SCHEMA-END)

AUTHOR
------

Rusty Russell <<rusty@rustcorp.com.au>> is mainly responsible.

SEE ALSO
--------

lightning-signmessage(7)

RESOURCES
---------

Main web site: <https://github.com/ElementsProject/lightning>

[comment]: # ( SHA256STAMP:4a7c148e1b7f321a7710f540de2d8418850f1a6269badab8cbe47545c41f4d01)
