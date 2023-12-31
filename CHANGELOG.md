# Change Log

## [Unreleased](https://github.com/khulnasoft-lab/figurative/compare/0.3.7...HEAD)

## 0.3.7 - 2022-02

Thanks to our external contributors!
 - [sobolevn](https://github.com/khulnasoft-lab/figurative/pulls?q=is%3Apr+author%3Asobolevn)
 - [G-11-P](https://github.com/khulnasoft-lab/figurative/pulls?q=is%3Apr+author%3AG-11-P)

### Ethereum
* Use `crytic-compile` 0.2.2 [#2530](https://github.com/khulnasoft-lab/figurative/pull/2530)
* Multi-transaction analysis now uses fixed attacker and owner contracts [#2464](https://github.com/khulnasoft-lab/figurative/pull/2464)

### Native
* **[Added API]** Retrieve list of unimplemented syscalls [#2491](https://github.com/khulnasoft-lab/figurative/pull/2491)
* Add `FXSAVE`/`FXRSTOR` concrete support on x86 [#2511](https://github.com/khulnasoft-lab/figurative/pull/2511)
* Add `last_executed_pc` property to CPU [#2475](https://github.com/khulnasoft-lab/figurative/pull/2475)
* Support LD_LIBRARY_PATH [#2476](https://github.com/khulnasoft-lab/figurative/pull/2476)
* Optional `will/did_read_memory` events [#2488](https://github.com/khulnasoft-lab/figurative/pull/2488) 
* Fixed base address handling on Linux [#2500](https://github.com/khulnasoft-lab/figurative/pull/2500)
* Add `ENDBR`-style NOPs [#2533](https://github.com/khulnasoft-lab/figurative/pull/2533)
* Support `epoll`-related syscalls [#2529](https://github.com/khulnasoft-lab/figurative/pull/2529)

### Other
* **[Added API]** Add fork policy for providing explicit values [#2514](https://github.com/khulnasoft-lab/figurative/pull/2514)
* Fixed Constant Folding [#2524](https://github.com/khulnasoft-lab/figurative/pull/2524)
* Add simplifications for subtraction [#2504](https://github.com/khulnasoft-lab/figurative/pull/2504)
* Parent state ID, last PC now available in state descriptors [#2479](https://github.com/khulnasoft-lab/figurative/pull/2479), [#2471](https://github.com/khulnasoft-lab/figurative/pull/2471)
* States now contain a reference to the current figurative instance [#2486](https://github.com/khulnasoft-lab/figurative/pull/2486)
* `fast_fail` config to exit after first state exception [#2487](https://github.com/khulnasoft-lab/figurative/pull/2487)
* Scaling bugfix for large solver queries [#2502](https://github.com/khulnasoft-lab/figurative/pull/2502)
* Don't fork when only one solution is found for `Concretize` [#2527](https://github.com/khulnasoft-lab/figurative/pull/2527)

## 0.3.6 - 2021-06-09

Thanks to our external contributors!
 - [timgates42](https://github.com/khulnasoft-lab/figurative/commits?author=timgates42)

### Ethereum
* **[Changed API]** Default to quick mode: disable detectors and gas [#2457](https://github.com/khulnasoft-lab/figurative/pull/2457)
* Allow symbolic balances from the beginning of execution [#1818](https://github.com/khulnasoft-lab/figurative/pull/1818)
* Disable EVM Events in Testcases [#2417](https://github.com/khulnasoft-lab/figurative/pull/2417)

### Native
* **[Added API]** Syscall-specific hooks [#2389](https://github.com/khulnasoft-lab/figurative/pull/2389)
* Fix wildcard behavior in symbolic files [#2454](https://github.com/khulnasoft-lab/figurative/pull/2454)
* Bugfixes for control transfer between Figurative & Unicorn [#1796](https://github.com/khulnasoft-lab/figurative/pull/1796)

### Other
* Run multiple SMT solvers in parallel, take the fastest response [#2420](https://github.com/khulnasoft-lab/figurative/pull/2420)
* Add socket for TUI [#1620](https://github.com/khulnasoft-lab/figurative/pull/1620)
* Memory usage improvements in expression system [#2394](https://github.com/khulnasoft-lab/figurative/pull/2394)
* Support for Boolector [#2410](https://github.com/khulnasoft-lab/figurative/pull/2410)
* Solver Statistics API [#2415](https://github.com/khulnasoft-lab/figurative/pull/2415)
* Allow duplicated config options [#2397](https://github.com/khulnasoft-lab/figurative/pull/2397)


## 0.3.5 - 2020-11-06

Thanks to our external contributors!
 - [wolfo](https://github.com/khulnasoft-lab/figurative/commits?author=wolfo)
 - [geohot](https://github.com/khulnasoft-lab/figurative/commits?author=geohot)
 - [romits800](https://github.com/khulnasoft-lab/figurative/commits?author=romits800)

### Ethereum
* Made EVM module ignore runtime gas calculations by default [#1816](https://github.com/khulnasoft-lab/figurative/pull/1816)
* Updated gas calculations for calls to empty accounts [#1774](https://github.com/khulnasoft-lab/figurative/pull/1774)
* Fixed account existence checks for `selfdestruct` and `call` [#1801](https://github.com/khulnasoft-lab/figurative/pull/1801)

### Native
* **[Added API]** new `strlen` models [#1725](https://github.com/khulnasoft-lab/figurative/pull/1725)
* **[Added API]** State-specific hooks [#1777](https://github.com/khulnasoft-lab/figurative/pull/1777)
* Improved system call argument handling [#1785](https://github.com/khulnasoft-lab/figurative/pull/1785)
* Improved `stat` support for file descriptors [#1780](https://github.com/khulnasoft-lab/figurative/pull/1780)
* Support symbolic-length reads from sockets [#1786](https://github.com/khulnasoft-lab/figurative/pull/1786)
* Add stubs for `sendto` [#1791](https://github.com/khulnasoft-lab/figurative/pull/1791)

### WASM
* Fix type confusion when importing external functions [#1803](https://github.com/khulnasoft-lab/figurative/pull/1803)

### Other
* Made [Yices2](https://yices.csl.sri.com/) the default SMT Solver [#1820](https://github.com/khulnasoft-lab/figurative/pull/1820)
* **[Added API]** Added an API for introspecting live states [#1775](https://github.com/khulnasoft-lab/figurative/pull/1775)
* Changed default multiprocessing type to threading [#1779](https://github.com/khulnasoft-lab/figurative/pull/1779)
* Improved array serialization performance [#1756](https://github.com/khulnasoft-lab/figurative/pull/1756)
* Fix name collisions in SMT variables [#1792](https://github.com/khulnasoft-lab/figurative/pull/1792)


## 0.3.4 - 2020-06-26

Thanks to our external contributors!
 - [jimpo](https://github.com/khulnasoft-lab/figurative/commits?author=jimpo)
 - [langston-barrett](https://github.com/khulnasoft-lab/figurative/commits?author=langston-barrett)

### Ethereum
* Support and test against EVM Istanbul [#1676](https://github.com/khulnasoft-lab/figurative/pull/1676)
* **[Added API]** Added a `figurative-verifier` script for checking properties of smart contracts [#1717](https://github.com/khulnasoft-lab/figurative/pull/1717)
* Fixed RETURNDATASIZE [#1612](https://github.com/khulnasoft-lab/figurative/pull/1612)
* Added strategies for symbolic SHA3 replacement [#1609](https://github.com/khulnasoft-lab/figurative/pull/1609)
* Fixed GAS instruction [#1633](https://github.com/khulnasoft-lab/figurative/pull/1633)
* Improved balance-related exploration [#1615](https://github.com/khulnasoft-lab/figurative/pull/1615)
* Add `__format__` to EVM accounts [#1613](https://github.com/khulnasoft-lab/figurative/pull/1613)
* Discard basic blocks that unavoidably REVERT [#1630](https://github.com/khulnasoft-lab/figurative/pull/1630)
* Extract printable bytes from return data [#1671](https://github.com/khulnasoft-lab/figurative/pull/1671)
* Support CHAINID, EXTCODEHASH, and SELFBALANCE instructions [#1644](https://github.com/khulnasoft-lab/figurative/pull/1644)
* **[Changed API]** Renamed several arguments in EVM API, including `gaslimit` --> `gas` [#1652](https://github.com/khulnasoft-lab/figurative/pull/1652)
* Explore states that self-destruct [#1699](https://github.com/khulnasoft-lab/figurative/pull/1699)
* Lazy solving for the Ethereum leak detector [#1727](https://github.com/khulnasoft-lab/figurative/pull/1727)

### Native
* Support for ARM modified-immediate encodings [#1638](https://github.com/khulnasoft-lab/figurative/pull/1638)
* Support for `/proc/self/maps` [#1639](https://github.com/khulnasoft-lab/figurative/pull/1639)
* Support for `llseek` [#1640](https://github.com/khulnasoft-lab/figurative/pull/1640)
* Support for `arm_fadvise64_64` [#1648](https://github.com/khulnasoft-lab/figurative/pull/1648)
* Allow symbolic sockets in `accept` [#1618](https://github.com/khulnasoft-lab/figurative/pull/1618)
* Fixes to `open` [#1657](https://github.com/khulnasoft-lab/figurative/pull/1657)
* Overhauled filesystem emulation [#1673](https://github.com/khulnasoft-lab/figurative/pull/1673)
* Fixed system call argument concretization [#1697](https://github.com/khulnasoft-lab/figurative/pull/1697)
* **[Added API]** Add a symbolic model for `strcpy` [#1681](https://github.com/khulnasoft-lab/figurative/pull/1681)

### WASM
* Delay branch condition concretization for better coverage [#1641](https://github.com/khulnasoft-lab/figurative/pull/1641)

### Other
* **[Added API]** Added a snapshot system [#1710](https://github.com/khulnasoft-lab/figurative/pull/1710)
* Transparent compression for state files [#1624](https://github.com/khulnasoft-lab/figurative/pull/1624)
* Unify around singleton interface for solver [#1649](https://github.com/khulnasoft-lab/figurative/pull/1649)
* Use `__slots__` to reduce memory usage in expression system [#1635](https://github.com/khulnasoft-lab/figurative/pull/1635)
* **[Removed API]** Removed `policy` argument from FigurativeBase, added `outputspace_url` to optionally separate working files from output files [#1651](https://github.com/khulnasoft-lab/figurative/pull/1651)
* Disable broken `get_related` logic [#1674](https://github.com/khulnasoft-lab/figurative/pull/1674)
* Disable flaky Z3 tactics [#1691](https://github.com/khulnasoft-lab/figurative/pull/1691)
* Remove Keystone engine from dependencies [#1684](https://github.com/khulnasoft-lab/figurative/pull/1684)
* Improved error messages [#1632](https://github.com/khulnasoft-lab/figurative/pull/1632), [#1704](https://github.com/khulnasoft-lab/figurative/pull/1704)
* Made ConstraintSets hashable [#1703](https://github.com/khulnasoft-lab/figurative/pull/1703)
* Added system to dynamically enable/disable plugins [#1696](https://github.com/khulnasoft-lab/figurative/pull/1696) [#1708](https://github.com/khulnasoft-lab/figurative/pull/1708)
* Re-establish support for Yices and CVC4 [#1714](https://github.com/khulnasoft-lab/figurative/pull/1714)
* Improved constant folding and constraint set slicing [#1706](https://github.com/khulnasoft-lab/figurative/pull/1706)


## 0.3.3 - 2020-01-30

Thanks to our external contributors!

 - [catenacyber](https://github.com/khulnasoft-lab/figurative/commits?author=catenacyber)

### Ethereum
* **[added API]** Flag to only generate alive states when finalizing Figurative [#1554](https://github.com/khulnasoft-lab/figurative/pull/1554)
* Fix gas check [#1587](https://github.com/khulnasoft-lab/figurative/pull/1587)

### Native
* **[added API]** Add post-instruction hooks [#1579](https://github.com/khulnasoft-lab/figurative/pull/1579)
* Fix issue with re-using stdio file descriptors after they'd been closed [#1604](https://github.com/khulnasoft-lab/figurative/pull/1604)

### WASM
* **[added API]** getattr-style calls for WASM functions [#1578](https://github.com/khulnasoft-lab/figurative/pull/1578)
* **[changed API]** Pass state to function calls instead of constraint sets [#1578](https://github.com/khulnasoft-lab/figurative/pull/1578)
* **[added API]** Added read/write helper methods to memory instances [#1589](https://github.com/khulnasoft-lab/figurative/pull/1589)

### Other
* **[added API]** Added streamlined state serialization interface [#1596](https://github.com/khulnasoft-lab/figurative/pull/1596)
* Fixed Z3 version parsing [#1551](https://github.com/khulnasoft-lab/figurative/pull/1551)
* Unique names for ArrayVars [#1552](https://github.com/khulnasoft-lab/figurative/pull/1552)
* Improve pickling and multiprocessing compatibility [#1583](https://github.com/khulnasoft-lab/figurative/pull/1583)
* Fix SMTLib visitor bug that broke the example tests [#1577](https://github.com/khulnasoft-lab/figurative/pull/1577)
* Optimize MinMax SMTLib operations [#1599](https://github.com/khulnasoft-lab/figurative/pull/1599)

## 0.3.2 - 2019-11-11

Thanks to our external contributors!

 - [Srinivas11789](https://github.com/khulnasoft-lab/figurative/commits?author=Srinivas11789)
 - [catenacyber](https://github.com/khulnasoft-lab/figurative/commits?author=catenacyber)
 - [Boyan-MILANOV](https://github.com/khulnasoft-lab/figurative/commits?author=Boyan-MILANOV)

### Ethereum
* **[added API]** Use higher-level test generation to symbolically execute SHA3 [#1526](https://github.com/khulnasoft-lab/figurative/pull/1526)
* **[added API]** Added fast unsound SHA3 strategy [#1549](https://github.com/khulnasoft-lab/figurative/pull/1549)
* **[added API]** Added plugin for discarding states without changes to storage [#1507](https://github.com/khulnasoft-lab/figurative/pull/1507)
* **[fixed API]** Fix `ADDMOD` and `MULMOD` [#1531](https://github.com/khulnasoft-lab/figurative/pull/1531)
* Warn on missing bytecode [#1534](https://github.com/khulnasoft-lab/figurative/pull/1534)
* Simplifiy PC upon modification [#1523](https://github.com/khulnasoft-lab/figurative/pull/1523)


### Native
* Better memory tests ([#1506](https://github.com/khulnasoft-lab/figurative/pull/1506), [1524](https://github.com/khulnasoft-lab/figurative/pull/1524))
* Memory IO performance improvements [#1509](https://github.com/khulnasoft-lab/figurative/pull/1509)
* **[added API]**  Expose ELF dynamic load addresses [#1515](https://github.com/khulnasoft-lab/figurative/pull/1515)
* Optimize instruction decoding ([#1522](https://github.com/khulnasoft-lab/figurative/pull/1522), [#1527](https://github.com/khulnasoft-lab/figurative/pull/1527))
* Add partial support for `recvfrom` syscall [#1514](https://github.com/khulnasoft-lab/figurative/pull/1514)
* **[fixed API]** Add `will_write_memory` event to `write_bytes` [#1535](https://github.com/khulnasoft-lab/figurative/pull/1535)
* Update supported Unicorn version [#1536](https://github.com/khulnasoft-lab/figurative/pull/1536)
* Fix file pointer leak in ELF interpreter [#1538](https://github.com/khulnasoft-lab/figurative/pull/1538)
* Deduplicate socket symbol names [#1542](https://github.com/khulnasoft-lab/figurative/pull/1542)
* Improve environment variable parsing [#1545](https://github.com/khulnasoft-lab/figurative/pull/1545)
* **[fixed API]** Reduce chance of orphaned `did_execute_instruction` event [#1529](https://github.com/khulnasoft-lab/figurative/pull/1529)

### WASM
* **[added API]** Added initial support for webassembly [#1495](https://github.com/khulnasoft-lab/figurative/pull/1495)

### Other
* Incorporate type checking (mypy) into CI [#1544](https://github.com/khulnasoft-lab/figurative/pull/1544)
* Fixes to smtlib ([#1512](https://github.com/khulnasoft-lab/figurative/pull/1512), [#1511](https://github.com/khulnasoft-lab/figurative/pull/1511))
* Remove runtime type checking from smtlib to improve performance [#1543](https://github.com/khulnasoft-lab/figurative/pull/1543)
* Logging improvements ([#1518](https://github.com/khulnasoft-lab/figurative/pull/1518), [#1520](https://github.com/khulnasoft-lab/figurative/pull/1520))
* Simplify unsigned division constant folding [#1530](https://github.com/khulnasoft-lab/figurative/pull/1530)
* Improve signed division logic [#1540](https://github.com/khulnasoft-lab/figurative/pull/1540)
* **[changed API]** Move to figurative-specific exception types [#1537](https://github.com/khulnasoft-lab/figurative/pull/1537)
* **[changed API]** Save profiling data in the workspace instead of the current directory [#1539](https://github.com/khulnasoft-lab/figurative/pull/1539)


## 0.3.1 - 2019-08-06

Thanks to our external contributors!

 - [arcz](https://github.com/khulnasoft-lab/figurative/commits?author=arcz)

### Ethereum
* Smart contracts are now compiled using [Crytic-Compile](https://github.com/crytic/crytic-compile) [#1406](https://github.com/khulnasoft-lab/figurative/pull/1406)
* Added detector for strict comparisons to BALANCE [#1481](https://github.com/khulnasoft-lab/figurative/pull/1481)
* Added bitshift instructions [#1498](https://github.com/khulnasoft-lab/figurative/pull/1498)
* Added stub for STATICCALL (does not enforce static nature) [#1494](https://github.com/khulnasoft-lab/figurative/pull/1494)
* Updated EVM Examples [#1486](https://github.com/khulnasoft-lab/figurative/pull/1486)

### Native
* Fixed `getdents` syscall [#1472](https://github.com/khulnasoft-lab/figurative/pull/1472)
* Fixed state merging examples [#1482](https://github.com/khulnasoft-lab/figurative/pull/1482)
* Support LSR.W on ARMV7 [#1363](https://github.com/khulnasoft-lab/figurative/pull/1363)
* Fixed CrackMe Example [#1502](https://github.com/khulnasoft-lab/figurative/pull/1502)
* Optimize CMPXCHG8B [#1501](https://github.com/khulnasoft-lab/figurative/pull/1501)
* Added `fast_crash` configuration setting that causes Figurative to immediately produce a finding on memory unsafety [#1485](https://github.com/khulnasoft-lab/figurative/pull/1485)

### Other
* **[changed API]** Moved `issymbolic` into SMTLib to improve performance [#1456](https://github.com/khulnasoft-lab/figurative/pull/1456)
* Refactored API Docs [#1469](https://github.com/khulnasoft-lab/figurative/pull/1469)
* Fixed `FileNotFound` Error on state loading [#1480](https://github.com/khulnasoft-lab/figurative/pull/1480)

## 0.3.0 - 2019-06-06

Thanks to our external contributors!

 - [catenacyber](https://github.com/khulnasoft-lab/figurative/commits?author=catenacyber)
 - [binaryflesh](https://github.com/khulnasoft-lab/figurative/commits?author=binaryflesh)
 
### Major Changes
##### Executor Refactor ([#1385](https://github.com/khulnasoft-lab/figurative/pull/1385))
We've completed a major refactor of the core executor that reorganizes Figurative's state machine to be more amenable toward use with the multiprocesssing module. This refactor introduces some small API changes:
* One must explicitly call the `finalize` method to dump test cases from a run
* The `will_start_run` event has been renamed to `will_run`
* The `solver` module requires explicitly accessing the Z3Solver singleton. `from figurative.core.smtlib import solver` becomes:
```python
from figurative.core.smtlib.solver import Z3Solver
solver = Z3Solver.instance()
```
* `figurative.running_states` has been renamed to `figurative._busy_states`
For more information about changes to the state machine, see [the diagram in core/figurative.py](https://github.com/khulnasoft-lab/figurative/blob/451965f03a5e0d6766e499bf3246e4796b35638f/figurative/core/figurative.py#L132-L239)

##### Blacken ([#1438](https://github.com/khulnasoft-lab/figurative/pull/1438))
We've run the [`black`](https://black.readthedocs.io/en/stable/index.html) autoformatter on the master branch of Figurative, and added a check for compliance to our CI. To ensure your code is properly formatted, run `black -t py36 -l 100 .` in your Figurative directory before committing. 

##### Support for statically-linked AArch64 binaries ([#1424](https://github.com/khulnasoft-lab/figurative/pull/1424))
Contractor [nkaretnikov](https://github.com/khulnasoft-lab/figurative/commits?author=nkaretnikov) spent several months adding support for AArch64 on Linux. As this is a brand new architecture, we've left in most of the debugging assertions, which may slow it down slightly. 
We look forward to getting feedback on this architecture so we can eventually remove the debugging assertions. 


### Ethereum

* Added Symbolic EVM Tests for the Frontier fork. Note that we don't support any other forks (i.e. Constantinople) yet. ([#1431](https://github.com/khulnasoft-lab/figurative/pull/1431), [#1441](https://github.com/khulnasoft-lab/figurative/pull/1441))
* **[fixed API]** Fixed relative paths for .sol files ([#1393](https://github.com/khulnasoft-lab/figurative/pull/1393))
* **[fixed API]** Support dynamic parameters in constructors ([#1414](https://github.com/khulnasoft-lab/figurative/pull/1414))
* Fixed detector failure when PC is symbolic ([#1395](https://github.com/khulnasoft-lab/figurative/pull/1395))
* Transfers from etherless contracts no longer report STOP ([#1392](https://github.com/khulnasoft-lab/figurative/pull/1392))

### Native

* Added stubs for missing system calls & downgraded most missing calls from exceptions to warnings ([#1384](https://github.com/khulnasoft-lab/figurative/pull/1384))
* Fixed DECREE magic pages ([#1413](https://github.com/khulnasoft-lab/figurative/pull/1413))
* Store x86 registers in a set instead of a list ([#1415](https://github.com/khulnasoft-lab/figurative/pull/1415))
* Fix register boundary check for non-x86 architectures ([#1429](https://github.com/khulnasoft-lab/figurative/pull/1429))
* Support `movhps` on x86 ([#1444](https://github.com/khulnasoft-lab/figurative/pull/1444))

### Other

* Only publish events when there is at least one subscriber ([#1388](https://github.com/khulnasoft-lab/figurative/pull/1388))
* Added sandshrew example ([#1396](https://github.com/khulnasoft-lab/figurative/pull/1396))
* Updated Unicorn to track latest master ([#1440](https://github.com/khulnasoft-lab/figurative/pull/1440))
* **[fixed API]** Now respects coverage file argument ([#1442](https://github.com/khulnasoft-lab/figurative/pull/1442))


## 0.2.5 - 2019-03-18

Thanks to our external contributors!

 - [werew](https://github.com/khulnasoft-lab/figurative/commits?author=werew)
 - [NicolaiSoeborg](https://github.com/khulnasoft-lab/figurative/commits?author=NicolaiSoeborg)
 - [Joool](https://github.com/khulnasoft-lab/figurative/commits?author=Joool)

### Ethereum

* **[added API]** `json_create_contract` - support creating EVM contracts from Truffle JSON artifacts ([#1376](https://github.com/khulnasoft-lab/figurative/pull/1376))
* **[changed API]** Moved default gas value to config module ([#1346](https://github.com/khulnasoft-lab/figurative/pull/1346))
* **[fixed API]** Fixed account creation with a code field ([#1371](https://github.com/khulnasoft-lab/figurative/pull/1371))
* **[fixed API]** Fixed an incorrect attribute in `last_return` ([#1341](https://github.com/khulnasoft-lab/figurative/pull/1341))
* **[refactor]** Inlined get_possible solutions function as it's only used once ([#1372](https://github.com/khulnasoft-lab/figurative/pull/1372))
* Fixed `_check_jumpdest` when run with detectors - this bug could lead to not detecting an int overflow due to tainting made by another detector ([#1347](https://github.com/khulnasoft-lab/figurative/pull/1347))
* Made findings print addresses in hex ([#1339](https://github.com/khulnasoft-lab/figurative/pull/1339))

### Native

* **[added API]** Added Unicorn preloading, for quickly performing concrete emulation until a target address is reached. ([#1356](https://github.com/khulnasoft-lab/figurative/pull/1356))
* Fixed incorrect return value in `sys_lseek` ([#1355](https://github.com/khulnasoft-lab/figurative/pull/1355))
* Added check for missing native packages ([#1367](https://github.com/khulnasoft-lab/figurative/pull/1367))

### Other

* **[added API]** Added context managers for the config module, allowing for temporary configurations ([#1345](https://github.com/khulnasoft-lab/figurative/pull/1345))
* Updated Capstone to 4.0.1 ([#1312](https://github.com/khulnasoft-lab/figurative/pull/1312))
* Embedded parsetab.py so users no longer need to generate it ([#1383](https://github.com/khulnasoft-lab/figurative/pull/1383))


## 0.2.4 - 2019-01-10

### Ethereum

* **[added API]** Fixed VerboseTrace plugin ([#1305](https://github.com/khulnasoft-lab/figurative/pull/1305)) and added VerboseTraceStdout plugin  ([#1305](https://github.com/khulnasoft-lab/figurative/pull/1305)): those can be used to track EVM execution (`m.regiser_plugin(VerboseTraceStdout())`)
* **[changed API]** Made gas calculation faithfulness configurable: this way, you can choose whether you respect or ignore gas calculations with `--evm.oog <opt>` (see `--help`); also, the gas calculations has been decoupled into its own methods ([#1279](https://github.com/khulnasoft-lab/figurative/pull/1279))
* **[changed API]** Changed default gas to 3000000 when creating contract ([#1332](https://github.com/khulnasoft-lab/figurative/pull/1332))
* **[changed API]** Launching figurative from cli will display all registered plugins ([#1301](https://github.com/khulnasoft-lab/figurative/pull/1301))
* Fixed a bug where it wasn't possible to call contract's function when its name started with an underscore ([#1306](https://github.com/khulnasoft-lab/figurative/pull/1306))
* Fixed `Transaction.is_human` usage and changed it to a property ([#1323](https://github.com/khulnasoft-lab/figurative/pull/1323))
* Fixed `make_symbolic_address` not preconstraining the symbolic address to be within all already-known addresses ([#1318](https://github.com/khulnasoft-lab/figurative/pull/1318))
* Fixed bug where a terminated state became a running one if `m.running_states` or `m.terminated_states` were generated ([#1326](https://github.com/khulnasoft-lab/figurative/pull/1326))

### Native

* **[added API]** Added symbol resolution feature, so it is possible to grab a symbol address by using `m.resolve(symbol)` ([#1302](https://github.com/khulnasoft-lab/figurative/pull/1302))
* **[changed API]** The `stdin_size` CLI argument has been moved to config constant and so has to be passed using `--native.stdin_size` instead of `--stdin_size` ([#1337](https://github.com/khulnasoft-lab/figurative/pull/1337))
* Speeded up Armv7 execution a bit ([#1313](https://github.com/khulnasoft-lab/figurative/pull/1313))
* Fixed `sys_arch_prctl` syscall when wrong `code` value was passed and raise a NotImplementedError instead of asserting for not supported code values ([#1319](https://github.com/khulnasoft-lab/figurative/pull/1319))

### Other

* **[changed API]** Fixed missing CLI arguments that came from config constants - note that `timeout` has to be passed using `core.timeout` now ([#1337](https://github.com/khulnasoft-lab/figurative/pull/1337))
* We now explicitly require Python>=3.6 when using CLI or when importing Figurative ([#1331](https://github.com/khulnasoft-lab/figurative/pull/1331))
* `__main__` now fetches figurative version from installed modules ([#1310](https://github.com/khulnasoft-lab/figurative/pull/1310))
* Refactored some of the codebase (events [#1314](https://github.com/khulnasoft-lab/figurative/pull/1314), solver [#1334](https://github.com/khulnasoft-lab/figurative/pull/1334), tests [#1308](https://github.com/khulnasoft-lab/figurative/pull/1308), py2->py3 [#1307](https://github.com/khulnasoft-lab/figurative/pull/1307), state/platform [#1320](https://github.com/khulnasoft-lab/figurative/pull/1320), evm stuff [#1329](https://github.com/khulnasoft-lab/figurative/pull/1329))
* Some other fixes and minor changes


## 0.2.3 - 2018-12-11

Thanks to our external contributors!

- [NeatMonster](https://github.com/NeatMonster)
- [evgeniuz](https://github.com/evgeniuz)
- [stephan-tolksdorf](https://github.com/stephan-tolksdorf)
- [yeti-detective](https://github.com/yeti-detective)
- [PetarMI](https://github.com/PetarMI)
- [hidde-jan](https://github.com/hidde-jan)
- [catenacyber](https://github.com/catenacyber)

### Added

- Support for ARM THUMB instructions: ADR, ADDW, SUBW, CBZ, TBB, TBH, STMDA, STMDB
- `State.solve_minmax()` API for querying a BitVec for its min/max values
- New SMTLIB optimization for simplifying redundant concat/extract combinations; helps reduce expression complexity, and speed up queries
- Ethereum: `--txpreconstrain` CLI flag. Enabling this avoids sending ether to nonpayable functions, primarily avoiding exploration of uninteresting revert states.
- Research memory model (LazySMemory) allowing for symbolic memory indexing to be handled without concretization (opt in, currently for research only)

### Changed

- Linux/binary analysis has been moved to `figurative.native`, `figurative.core.cpu` has been moved to `figurative.native.cpu`. Please update your imports.
- The binary analysis dependencies are now not installed by default. They can be installed with `pip install figurative[native]`. This is to prevent EVM users from installing binary dependencies.
- The symbolic `stdin_size` is now a config variable (in `main` config group) with a default of 256 (it was like this before).
- `FigurativeEVM.generate_testcase()` 'name' parameter is now optional
- Figurative CLI run on a smart contract will now use all detectors by default (detectors can be listed with --list-detectors, excluded with --exclude <detectors> or --exclude-all)
- Misusing the FigurativeEVM API, for example by using old keyword arguments that are not available since some versions (like FigurativeEVM(verbosity=5)) will now raise an exception instead of not applying the argument at all.

### Fixed

- Ethereum: Fixed CLI timeout support
- Numerous EVM correctness fixes for Frontier fork
- Fixed handling of default storage and memory in EVM (reading from previously unused cell will return a zero now)
- ARM THUMB mode, Linux syscall emulation fixes
- Creation of multiple contracts with symbolic arguments (FigurativeEVM.solidity_create_contract with args=None fired more than once failed before)

### Removed

- `Figurative.evm` static method

## 0.2.2 - 2018-10-30

Thanks to our external contributors!

- [charliecjung](https://github.com/charliecjung)
- [redyoshi49q](https://github.com/redyoshi49q)
- [yeti-detective](https://github.com/yeti-detective)
- [Srinivas11789](https://github.com/srinivas11789)
- [stephan-tolksdorf](https://github.com/stephan-tolksdorf)
- [catenacyber](https://github.com/catenacyber)
- [MJ10](https://github.com/MJ10)

### Added

- New API for generating a testcase only if a certain condition can be true in the state. Useful for conveniently
  checking an invariant in a state, and  (`FigurativeEVM.generate_testcase(..., only_if=)`) generating a testcase if it
  can be violated.
- New `constrain=` optional parameter for `State.solve_one` and `State.solve_buffer`. After solving for a symbolic variable,
  mutate the state by applying that solution as a constraint. Useful if concretizing a few symbolic variables, and later
  concretizations should take into account previously solved for values.
- `FigurativeEVM.human_transactions` top level API. Mirrors `FigurativeEVM.transactions`, but does not contain any internal
  transactions.
- Emit generated transaction data in human readable format (JSON)
- Warning messages if number of passed arguments to a Solidity function is inconsistent with the number declared
- CLI support for the ReentrancyAdvancedDetector
- Colored CLI output
- Configuration system. Allows configuration options to be specified in a config file. New configurations are available,
  notably including solver parameters such as solver timeout, and memory limits.
- Support for some unimplemented x86 XMM instructions
- Customizable symbolic stdin input buffer size
- Support for [Etheno](https://github.com/khulnasoft-lab/etheno)
- `RaceConditionDetector` that can be used to detect transaction order dependencies bugs

### Changed

- Improve the DetectExternalCallAndLeak detector and reduce false positives
- Numerous improvements and changes to the SolidityMetadata API
- Ethereum contract addresses are no longer random, but are deterministically calculated according to the Yellow Paper
- Figurative no longer supports contracts with symbolic addresses creating new contracts. This is a consequence of
  supporting determinstic contrat address calculation. There are plans for reenabling this capability in a future release.

### Deprecated

- Several SolidityMetadata APIs: `.get_hash()`, `.functions`, `.hashes`

### Fixed

- Numerous fixes and enhancements to the Ethereum ABI implementation
- Better handling of overloaded functions in SolidityMetadata, and other bug fixes
- Fixes for the FilterFunctions plugin
- Fixes for symbolic SHA3 handling
- Many EVM correctness/consensus fixes
- Numerous spelling errors

## 0.2.1.1 - 2018-09-01

In this release, the codebase has been relicensed under the AGPLv3 license.
Please [contact us](opensource@khulnasoft-lab.com) if you're looking for an exception to these terms!

Thanks to our external contributors!

- [s0b0lev](https://github.com/s0b0lev)
- [redyoshi49q](https://github.com/redyoshi49q)

### Added
 
- Full suite of Ethereum detectors
    - Selfdestruct (`--detect-selfdestruct`): Warns if a selfdestruct instruction is reachable by the user
    - Ether Leak (`--detect-externalcall`): Warns if there is a call to the user, or a user controlled address, and ether can be sent.
    - External Call (`--detect-externalcall`): Warns if there is a call to the user, or a user controlled address.
    - Reentrancy (`--detect-reentrancy`): Warns if there is a change of storage state after a call to the user, or a user controlled address, with >2300 gas. This is an alternate implementation enabled in the CLI. The previous implementation is still available for API use (`DetectReentrancyAdvanced`).
    - Delegatecall (`--detect-delegatecall`): Warns if there is a delegatecall to a user controlled address, or to a user controlled function.
    - Environmental Instructions (`--detect-env`): Warns if certain instructions are used that can be potentially manipulated. Instructions: BLOCKHASH, COINBASE, TIMESTAMP, NUMBER, DIFFICULTY, GASLIMIT, ORIGIN, GASPRICE.
- New Ethereum command line flags
    - `--no-testcases`: Do not generate testcases for discovered states
    - `--txnoether`: Do not make the transaction value symbolic in executed transactions
- SMTLIB: Advanced functionality for expression migration. Expressions from arbitrary constraint sets can be mixed to create arbitrary constraints, expressions are transparently migrated from constraint set to another, avoiding SMT naming collisions.
 
### Changed

- Command line interface uses new reentrancy detector based on detection of user controlled call addresses
 
### Fixed

- Ethereum: Support for overloaded solidity functions
- Ethereum: Significantly improved ability to create symbolic variables and constraints at the global level
- Ethereum: Improved gas support
- State serialization improvements and fixes

## 0.2.0 - 2018-08-10

In this release, the codebase has been ported to Python 3.6, which is a breaking change for API clients. Beginning with 0.2.0, client programs of Figurative must be compatible with Python 3.6.

Thanks to our external contributors!

- [ianklatzco](https://github.com/ianklatzco)
- [devtty1er](https://github.com/devtty1er)
- [catenacyber](https://github.com/catenacyber)

### Added

- Ethereum: More flexibility for Solidity compilation toolchains
- Ethereum: Detectors for unused return value, reentrancy
- Ethereum: Support for Solidity `bytesM` and `bytes` types
- Ethereum: Beta API for preconstraining inputs (`FigurativeEVM.constrain`)
- Improved performance for smtlib module
- Ability to transparently operate on bytearray and symbolic buffer (ArrayProxy) types (e.g: concatenate, slice)

### Changed

- **Codebase has been entirely ported to Python 3.6+**
- Ethereum: `FigurativeEVM.make_symbolic_value()` can be size adjustable
- Ethereum: Ethereum ABI (`figurative.ethereum.ABI`) API refactor, including real Solidity prototype parser
- Ethereum: Improved APIs for accessing transaction history
- Ethereum: Significant internal refactor

### Fixed

- Linux: Bugs related to handling of closed files
- Ethereum: Handling of symbolic callers/addresses
- Ethereum: Handling of gas handling on CALL instructions
- Various smtlib/expression fixes

### Removed

- Support for Python 2
- EVM disassembler/assembler module (EVMAsm) has been removed and separately released as [pyevmasm](https://github.com/khulnasoft-lab/pyevmasm)
- Experimental support for Binary Ninja IL emulation

## 0.1.10 - 2018-06-22

Thanks to our external contributors!

- [khorben](https://github.com/khorben)
- [catenacyber](https://github.com/catenacyber)
- [dwhjames](https://github.com/dwhjames)
- [matiasb](https://github.com/matiasb)
- [reaperhulk](https://github.com/reaperhulk)
- [lazzarello](https://github.com/lazzarello)

### Added

- ARM: New instructions to better support Raspberry Pi binaries (UTXH, UQSUB8)
- Linux: Can use `--env` and `LD_LIBRARY_PATH` to specify alternate ELF interpreter locations for dynamic binaries
- Linux: Partial chroot(2) and fork(2) models
- Initial support for NetBSD hosts
- Ethereum: `--avoid-constant` cli argument to enable heuristics to avoid unnecessary exploration of constant functions

### Changed

- Ethereum detectors are now opt-in, via cli flags: `--detect-overflow`, `--detect-invalid`, `--detect-uninitialized-memory`, `--detect-uninitialized-storage`, `--detect-all`
- Ethereum: Complete internal refactor.
    - Model memory using smtlib arrays to better support symbolic indexing
    - Numerous internal API improvements
    - Better symbolic gas support
    - More advanced overflow detection heuristics
    - Account names, scripts can assign names to accounts or contracts
    - Better ABI serializer/deserializer for canonical types, supports tuples/structs and recursive types
    - State list iterations improvements, modifications to state persist
    - Symbolic caller, address, value and data in transactions

### Fixed

- Linux: Generate concretized file content for symbolic files
- Linux: Fixes in various syscall models (brk, stat*), and miscellaneous fixes
- Ethereum: Inaccurate transaction history in some cases

## 0.1.9 - 2018-05-04

Thanks to our external contributors!

- [khorben](https://github.com/khorben)
- [arunjohnkuruvilla](https://github.com/arunjohnkuruvilla)
- [cclauss](https://github.com/cclauss)
- [dwhjames](https://github.com/dwhjames)
- [catenacyber](https://github.com/catenacyber)
- [disconnect3d](https://github.com/disconnect3d)

### Added

- Ethereum: `--txnocoverage` cli argument to suppress coverage based analysis halting criteria
- Ethereum: Support added for more Solidity features (imports, uint/int types, function types)

### Fixed

- Numerous Ethereum ABI fixes
- Linux and x86/64 emulation fixes
- Solver performance issue

## 0.1.8 - 2018-03-30

Thanks to our external contributors!

- [khorben](https://github.com/khorben)
- [disconnect3d](https://github.com/disconnect3d)
- [arunjohnkuruvilla](https://github.com/arunjohnkuruvilla)
- [mroll](https://github.com/mroll)

### Added

- Ethereum: `--txaccount` cli argument to control caller of transaction
- Ethereum: Per state execution trace files in workspace

### Fixed

- Linux: `--data` cli argument to specify concrete stdin
- Numerous Ethereum fixes and stability improvements
- Fixes for native cpu emulation

## 0.1.7 - 2018-02-23

This release brings EVM, performance, Linux emulation, and API improvements, along with numerous bug fixes. Thanks again to our external contributors!

- [jean](https://github.com/jean)
- [disconnect3d](https://github.com/disconnect3d)
- [arunjohnkuruvilla](https://github.com/arunjohnkuruvilla)
- [alexanderholman](https://github.com/alexanderholman)
- [Srinivas11789](https://github.com/Srinivas11789)

### Added

 - [Documentation](https://github.com/khulnasoft-lab/figurative/blob/master/docs/syminput.rst) on symbolic input
 - "[force](http://figurative.readthedocs.io/en/latest/api.html#figurative.core.cpu.abstractcpu.Cpu.write_bytes)" keyword argument in `cpu.write_bytes/read_bytes` etc.
 - Linux syscalls: getrandom(), openat()

### Fixed

- Improved ARMv7 Thumb support
- Numerous EVM bug fixes and improvements (transaction generation, SHA3 handling, instruction tracing, int overflow detection)
- Improved x86/64 emulation performance

## 0.1.6 - 2017-12-22

This release brings improved EVM support, performance improvements, and numerous bug fixes. Thanks to our external contributors!

- [cole-lightfighter](https://github.com/cole-lightfighter)
- [arunjohnkuruvilla](https://github.com/arunjohnkuruvilla)
- [Srinivas11789](https://github.com/Srinivas11789)
- [sidhant-gupta-004](https://github.com/sidhant-gupta-004)
- [roachspray](https://github.com/roachspray)
- [dbogs425](https://github.com/dbogs425)
- [HighW4y2H3ll](https://github.com/HighW4y2H3ll)
- [chowdaryd](https://github.com/chowdaryd)

### Added

- Ethereum support in the command line (Solidity files)
- --version, --txlimit flags to command line
- x86/64: Improved support for PCMPXSTRX instruction family
- Ethereum EVM assembly/disassembly APIs

### Changed

- Workspace .txt file extension changed to .input
- Ethereum EVM analysis APIs

### Fixed

- Deserializing Linux states with special files (/dev) opened
- Redundant forking performance issue fixed
- Various bugfixes in Decree, Linux, ARMv7 Thumb, Unicorn fallback emulation, Z3 Solver interface

## 0.1.5 - 2017-10-19

Thanks to our external contributors to this release!

- [johnfxgalea](https://github.com/johnfxgalea)

### Deprecated

- `Figurative('binary', ['arg1', 'arg2'])` style initialization. Use new class methods (see below).

### Added

- Platform-specific class methods for Figurative initialization
  - e.g. `Figurative.linux('binary', ['arg1', 'arg2'])`
- `Figurative.init` analysis initialization hook
- Linux: Various new syscall support, including basic TCP socket support
- Core: An updated plugin infrastructure
- [Experimental] Support for symbolic execution of Ethereum Virtual Machine bytecode

### Changed

- `Figurative.verbosity`: logging preset levels interface is now a static method, replacing `m.verbosity` property
- Logger output is slightly modified to be more Pythonic

### Fixed

- Numerous bugfixes and refactors
- Linux: stderr file is generated in workspace

### Removed

- Requirement of external z3 binary installation (z3 installation occurs automatically now via pip)

## 0.1.4 - 2017-08-18

### Added

- `Figurative.locked_context()` (safe parallel context access)
- `State.generate_testcase()` (arbitrary testcase generation from hooks)
- Documentation on [gotchas](http://figurative.readthedocs.io/en/latest/gotchas.html)
- Command line interface support for symbolic files (`--file`) (thanks [251](https://github.com/251)!)
- [Experimental] `State.context['branches']` (States track symbolic branches)
- [Experimental] Support for emulation of [Binary Ninja](https://binary.ninja) IL

### Changed

- Taint parameters added to `State.new_symbolic_buffer()` and `State.symbolicate_buffer()` (thanks [ehennenfent](https://github.com/ehennenfent)!)
- Improved support for ARM binaries
- `Figurative.verbosity` logging preset levels

### Fixed

- Numerous bugfixes
- Fixed workspace error message bug (thanks [chowdaryd](https://github.com/chowdaryd)!)
- Fixed double workspace bug

### Removed

- [Experimental] `State.generate_inputs()` (superseded by `State.generate_testcase()`)

## 0.1.3 - 2017-07-14

### Added

- Support for Redis as a storage backend, plus an API for user-defined serializers and storage backends
- "Events" which work as global signals for communication across Figurative
- Support for using Binary Ninja for visualization
- Executor now provides a global shared context
- State now provides a local context

### Changed

- Refactored Executor and everything it talks to significantly
- Some older APIs may be broken or removed by the above refactor (`state.co` is no more, for instance)

### Fixed

- Numerous bugfixes and stability improvements in logging, Windows, x86, Linux

## 0.1.2 - 2017-06-14

### Added

- Function modeling API (`state.invoke_model()`, `figurative.variadic`)
- `strcmp` and `strlen` models
- `state.solve_buffer()`
- Additional `state` APIs
- Support for ARMv7 Thumb mode

### Changed

- Parallel processing API (`m.run(procs)`)
- `state.solve_n()`

### Fixed

- Numerous fixes in Linux, x86, ARM, SMT
- pip installation no longer requires `--no-binary capstone`

## 0.1.1 - 2017-05-05

### Added
- `State.constrain`

### Changed
- Command line verbosity: `--verbose` -> `-v` (up to `-vvvv`)

### Fixed
- Linux platform fixes: syscalls, ELF loading
- x86 and ARM fixes

## 0.1.0 - 2017-04-24

Initial public release.
