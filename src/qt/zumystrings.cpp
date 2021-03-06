// Copyright (c) 2009-2018 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Developers
// Copyright (c) 2014-2018 The Dash Core Developers
// Copyright (c) 2016-2018 Duality Blockchain Solutions Developers
// Copyright (c) 2017-2018 Zumy Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *zumy_strings[] = {
QT_TRANSLATE_NOOP("zumy", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("zumy", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("zumy", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("zumy", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("zumy", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("zumy", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("zumy", ""
"Cannot obtain a lock on data directory %s. Zumy is probably already "
"running."),
QT_TRANSLATE_NOOP("zumy", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("zumy", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("zumy", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("zumy", ""
"PrivateSend uses exact denominated amounts to send funds, you might simply need "
"to anonymize some more coins."),
QT_TRANSLATE_NOOP("zumy", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("zumy", ""
"Disable all Zumy specific functionality (Masternodes, PrivateSend, InstantSend, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("zumy", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("zumy", ""
"Enable InstantSend, show confirmations for locked transactions (bool, default: "
"%s)"),
QT_TRANSLATE_NOOP("zumy", ""
"Enable use of automated privatesend for funds stored in this wallet (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("zumy", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("zumy", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("zumy", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("zumy", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("zumy", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("zumy", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("zumy", ""
"Fees (in ZMY/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("zumy", ""
"Fees (in ZMY/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("zumy", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("zumy", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("zumy", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("zumy", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("zumy", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("zumy", ""
"InstantSend requires inputs with at least 10 confirmations, you might need to "
"wait a few minutes and try again."),
QT_TRANSLATE_NOOP("zumy", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("zumy", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("zumy", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("zumy", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("zumy", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("zumy", ""
"Name to construct url for KeePass entry that stores the wallet passphrase"),
QT_TRANSLATE_NOOP("zumy", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("zumy", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("zumy", ""
"Provide liquidity to PrivateSend by infrequently mixing coins on a continual "
"basis (0-100, default: %u, 1=very frequent, high fees, 100=very infrequent, "
"low fees)"),
QT_TRANSLATE_NOOP("zumy", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("zumy", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("zumy", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("zumy", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("zumy", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("zumy", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("zumy", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("zumy", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("zumy", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("zumy", ""
"To use zumyd, or the -server option to zumy-qt, you must set an rpcpassword "
"in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=zumyrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Zumy Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("zumy", ""
"Unable to bind to %s on this computer. Zumy is probably already running."),
QT_TRANSLATE_NOOP("zumy", ""
"Unable to locate enough PrivateSend denominated funds for this transaction."),
QT_TRANSLATE_NOOP("zumy", ""
"Unable to locate enough PrivateSend non-denominated funds for this transaction "
"that are not equal 1000 ZMY."),
QT_TRANSLATE_NOOP("zumy", ""
"Unable to locate enough funds for this transaction that are not equal 1000 "
"ZMY."),
QT_TRANSLATE_NOOP("zumy", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("zumy", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("zumy", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("zumy", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Zumy will not work properly."),
QT_TRANSLATE_NOOP("zumy", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("zumy", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("zumy", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("zumy", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("zumy", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("zumy", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("zumy", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("zumy", "(32000 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("zumy", "(default: %s)"),
QT_TRANSLATE_NOOP("zumy", "(default: 1)"),
QT_TRANSLATE_NOOP("zumy", "(must be 32000 for mainnet)"),
QT_TRANSLATE_NOOP("zumy", "<category> can be:\n"),
QT_TRANSLATE_NOOP("zumy", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("zumy", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("zumy", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("zumy", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("zumy", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("zumy", "Already have that input."),
QT_TRANSLATE_NOOP("zumy", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("zumy", "Block creation options:"),
QT_TRANSLATE_NOOP("zumy", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("zumy", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("zumy", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("zumy", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("zumy", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("zumy", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("zumy", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("zumy", "Cannot write default address"),
QT_TRANSLATE_NOOP("zumy", "Collateral not valid."),
QT_TRANSLATE_NOOP("zumy", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("zumy", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("zumy", "Connect to KeePassHttp on port <port> (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("zumy", "Connection options:"),
QT_TRANSLATE_NOOP("zumy", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("zumy", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("zumy", "Copyright (C) %i Credits Developers"),
QT_TRANSLATE_NOOP("zumy", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("zumy", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("zumy", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("zumy", "PrivateSend is idle."),
QT_TRANSLATE_NOOP("zumy", "PrivateSend options:"),
QT_TRANSLATE_NOOP("zumy", "PrivateSend request complete:"),
QT_TRANSLATE_NOOP("zumy", "PrivateSend request incomplete:"),
QT_TRANSLATE_NOOP("zumy", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("zumy", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("zumy", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("zumy", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("zumy", "Done loading"),
QT_TRANSLATE_NOOP("zumy", "Enable the client to act as a Masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Entries are full."),
QT_TRANSLATE_NOOP("zumy", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("zumy", "Error initializing block database"),
QT_TRANSLATE_NOOP("zumy", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("zumy", "Error loading block database"),
QT_TRANSLATE_NOOP("zumy", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("zumy", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("zumy", "Error loading wallet.dat: Wallet requires newer version of Zumy"),
QT_TRANSLATE_NOOP("zumy", "Error opening block database"),
QT_TRANSLATE_NOOP("zumy", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("zumy", "Error recovering public key."),
QT_TRANSLATE_NOOP("zumy", "Error"),
QT_TRANSLATE_NOOP("zumy", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("zumy", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("zumy", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("zumy", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("zumy", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("zumy", "Error: You already have pending entries in the PrivateSend pool"),
QT_TRANSLATE_NOOP("zumy", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("zumy", "Failed to read block"),
QT_TRANSLATE_NOOP("zumy", "Fee (in ZMY/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("zumy", "Finalizing transaction."),
QT_TRANSLATE_NOOP("zumy", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("zumy", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("zumy", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("zumy", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("zumy", "Importing..."),
QT_TRANSLATE_NOOP("zumy", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("zumy", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Incompatible mode."),
QT_TRANSLATE_NOOP("zumy", "Incompatible version."),
QT_TRANSLATE_NOOP("zumy", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("zumy", "Information"),
QT_TRANSLATE_NOOP("zumy", "Initialization sanity check failed. Zumy is shutting down."),
QT_TRANSLATE_NOOP("zumy", "Input is not valid."),
QT_TRANSLATE_NOOP("zumy", "InstantSend options:"),
QT_TRANSLATE_NOOP("zumy", "Insufficient funds."),
QT_TRANSLATE_NOOP("zumy", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("zumy", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("zumy", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("zumy", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("zumy", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("zumy", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("zumy", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("zumy", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("zumy", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("zumy", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("zumy", "Invalid private key."),
QT_TRANSLATE_NOOP("zumy", "Invalid script detected."),
QT_TRANSLATE_NOOP("zumy", "KeePassHttp id for the established association"),
QT_TRANSLATE_NOOP("zumy", "KeePassHttp key for AES encrypted communication with KeePass"),
QT_TRANSLATE_NOOP("zumy", "Keep N ZMY anonymized (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Last PrivateSend was too recent."),
QT_TRANSLATE_NOOP("zumy", "Last successful PrivateSend action was too recent."),
QT_TRANSLATE_NOOP("zumy", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Line: %d"),
QT_TRANSLATE_NOOP("zumy", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("zumy", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("zumy", "Loading addresses..."),
QT_TRANSLATE_NOOP("zumy", "Loading block index..."),
QT_TRANSLATE_NOOP("zumy", "Loading budget cache..."),
QT_TRANSLATE_NOOP("zumy", "Loading Masternode cache..."),
QT_TRANSLATE_NOOP("zumy", "Loading Masternode payment cache..."),
QT_TRANSLATE_NOOP("zumy", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("zumy", "Loading wallet..."),
QT_TRANSLATE_NOOP("zumy", "Lock is already in place."),
QT_TRANSLATE_NOOP("zumy", "Lock Masternodes from Masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Masternode options:"),
QT_TRANSLATE_NOOP("zumy", "Masternode queue is full."),
QT_TRANSLATE_NOOP("zumy", "Masternode:"),
QT_TRANSLATE_NOOP("zumy", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Missing input transaction information."),
QT_TRANSLATE_NOOP("zumy", "Mixing in progress..."),
QT_TRANSLATE_NOOP("zumy", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("zumy", "No Masternodes detected."),
QT_TRANSLATE_NOOP("zumy", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("zumy", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("zumy", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("zumy", "Node relay options:"),
QT_TRANSLATE_NOOP("zumy", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("zumy", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("zumy", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("zumy", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("zumy", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("zumy", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("zumy", "Options:"),
QT_TRANSLATE_NOOP("zumy", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("zumy", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("zumy", "RPC server options:"),
QT_TRANSLATE_NOOP("zumy", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("zumy", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("zumy", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("zumy", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("zumy", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("zumy", "Rescanning..."),
QT_TRANSLATE_NOOP("zumy", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("zumy", "Send trace/debug info to debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("zumy", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("zumy", "Session not complete!"),
QT_TRANSLATE_NOOP("zumy", "Session timed out."),
QT_TRANSLATE_NOOP("zumy", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("zumy", "Set external address:port to get to this Masternode (example: %s)"),
QT_TRANSLATE_NOOP("zumy", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("zumy", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Set the Masternode private key"),
QT_TRANSLATE_NOOP("zumy", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("zumy", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("zumy", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("zumy", "Signing failed."),
QT_TRANSLATE_NOOP("zumy", "Signing timed out."),
QT_TRANSLATE_NOOP("zumy", "Signing transaction failed"),
QT_TRANSLATE_NOOP("zumy", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("zumy", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("zumy", "Specify data directory"),
QT_TRANSLATE_NOOP("zumy", "Specify Masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("zumy", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("zumy", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("zumy", "Specify your own public address"),
QT_TRANSLATE_NOOP("zumy", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Submitted following entries to Masternode: %u / %d"),
QT_TRANSLATE_NOOP("zumy", "Submitted to Masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("zumy", "Submitted to Masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("zumy", "Synchronization failed"),
QT_TRANSLATE_NOOP("zumy", "Synchronization finished"),
QT_TRANSLATE_NOOP("zumy", "Synchronization pending..."),
QT_TRANSLATE_NOOP("zumy", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("zumy", "Synchronizing Masternode winners..."),
QT_TRANSLATE_NOOP("zumy", "Synchronizing Masternodes..."),
QT_TRANSLATE_NOOP("zumy", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("zumy", "This help message"),
QT_TRANSLATE_NOOP("zumy", "This is experimental software."),
QT_TRANSLATE_NOOP("zumy", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("zumy", "This is not a Masternode."),
QT_TRANSLATE_NOOP("zumy", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Transaction amount too small"),
QT_TRANSLATE_NOOP("zumy", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("zumy", "Transaction created successfully."),
QT_TRANSLATE_NOOP("zumy", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("zumy", "Transaction not valid."),
QT_TRANSLATE_NOOP("zumy", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("zumy", "Transaction too large"),
QT_TRANSLATE_NOOP("zumy", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("zumy", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("zumy", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("zumy", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("zumy", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("zumy", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("zumy", "Use KeePass 2 integration using KeePassHttp plugin (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Use N separate Masternodes to anonymize funds  (2-8, default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("zumy", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("zumy", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("zumy", "Use the test network"),
QT_TRANSLATE_NOOP("zumy", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("zumy", "Value more than PrivateSend pool maximum allows."),
QT_TRANSLATE_NOOP("zumy", "Verifying blocks..."),
QT_TRANSLATE_NOOP("zumy", "Verifying wallet..."),
QT_TRANSLATE_NOOP("zumy", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("zumy", "Wallet is locked."),
QT_TRANSLATE_NOOP("zumy", "Wallet needed to be rewritten: restart Zumy to complete"),
QT_TRANSLATE_NOOP("zumy", "Wallet options:"),
QT_TRANSLATE_NOOP("zumy", "Wallet window title"),
QT_TRANSLATE_NOOP("zumy", "Warning"),
QT_TRANSLATE_NOOP("zumy", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("zumy", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("zumy", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("zumy", "Will retry..."),
QT_TRANSLATE_NOOP("zumy", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("zumy", "Your entries added successfully."),
QT_TRANSLATE_NOOP("zumy", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("zumy", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("zumy", "on startup"),
QT_TRANSLATE_NOOP("zumy", "wallet.dat corrupt, salvage failed"),
};
