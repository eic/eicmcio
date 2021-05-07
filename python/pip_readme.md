# ejpm

**ejpm** stands for **e**<sup>**J**ANA</sup> **p**acket ~~**m**anager~~ helper

**The main goal** of ejpm is to provide easy experience of:

* installing e<sup>JANA</sup> reconstruction framework and dependent packages
* unify installation for different environments: various operating systems, docker images, etc. 

The secondary goal is to help users with e^JANA plugin development cycle.

***TL;DR;*** example for CentOS/RHEL7
```bash

# INSTALL PREREQUESTIES
ejpm req centos ejana         # get list of OS packets required to build jana and deps
sudo yum install ...          # install watever 'ejpm req' shows

# or if you are a lucky bash user (yes, csh is still common in physics):
sudo yum install $(ejpm req centos ejana --all) 

# SETUP EJPM
ejpm --top-dir=<where-to>   # Directory where packets will be installed
ejpm set root `$ROOTSYS`    # (optional) if you have CERN.ROOT or other monster packets: 

# INSTALL PACKETS
ejpm install ejana          # install ejana and dependencies (like genfit, jana and rave)
ejpm install g4e            # install 'Geant 4 EIC' and dependencies (like vgm, hepmc)

# SET RIGHT ENVIRONMENT 
source<$(ejpm env)          # set environment variables, 
source ~/.local/share/ejpm/env.sh  # more convenient way. Use *.csh file for tcsh
```


### Motivation

**ejpm** is here as there is no standard convention in HEP and NP of how to distribute and install software packages 
with its dependencies. Some packages (like eigen, xerces, etc.) are usually supported by 
OS maintainers, while others (Cern ROOT, Geant4, Rave) are usually built by users or 
other packet managers and could be located anywhere. Here comes "version hell" multiplied by lack of software manpower 
(e.g. to continuously maintain packages on distros level or even to fix GitHub issues) 
Still we love our users and try to get things easier for them!
So here is ejpm.


At this points **ejpm** tries to unify experience and make it simple to deploy e^JANA for:

- Users on RHEL 7, 8 and CentOS
- Users on Ubutnu/Debian (and Windows with WSL) \*\*
- Docker and other containers


It should be as easy as ```> ejpm install ejana``` to build and install a packet called 'ejana'
 and its dependencies. But it should also provide a possibility to adopt existing installations
  and have a fine control over dependencies: ```> ejpm set root /opt/root6_04_16```

**ejpm** is not: 

1. It is not a **real** package manager, which automatically solves dependencies, 
download binaries (working with GPG keys, etc.), finds fastest mirrors, manage... etc. 
2. **ejpm is not a requirment** for e<sup>JANA</sup>. It is not a part of e<sup>JANA</sup> 
    build system and one can compile and install e<sup>JANA</sup> without ejpm   


## Get ejana installed

Step by step explained instruction:

1. **Install prerequisites** utilizing OS packet manager:

    ```bash
    # To see the prerequesties
    ejpm req ubuntu         # for all packets that ejpm knows
    ejpm req centos ejana   # for ejana and its dependencies only
    
    # To put everything into packet manager 
    apt-get -y install `ejpm req ubuntu --all`   # debian
    yum -y install `ejpm req centos --all`       # centos/centos    
    ```
    
    At this point only ***'ubuntu'*** and ***'centos'*** are known words for req command. Put: 
    * ***ubuntu*** for debian family 
    * ***centos*** for RHEL and CentOS systems.

    *In the future this will be updated to support macOS and to have more detailed versions*

2. **Set top-dir**. This is where all missing packets will be installed.   

    ```bash
    ejpm --top-dir=<where-to-install-all>
    ```
   
3. **Register installed packets**. You may have CERN.ROOT installed (req. version >= 6.14.00). Run this:
    ```bash
    ejpm set root `$ROOTSYS` 
    ```
   
   You may set paths for other installed dependencies combining:  
   ```bash
   ejpm install ejana --missing --explain    # to see missing dependencies
   ejpm set <name> <path>                    # to set dependency path
   ```
   
   Or you may skip this step and just get everything installed by ejpm
   
4. **Install ejana** and all missing dependencies:

    ```bash
    ejpm install ejana
    ```

5. **Set environment**. There are 3 ways for doing this this: 
    
    1. Dynamically source output of ```ejpm env``` command (recommended)
    
        ```bash        
        source <(ejpm env)                # works for bash only
        ```
    2. Save output of ```ejpm env``` command to a file (can be useful)
    
        ```bash
         ejpm env sh  > your-file.sh       # get environment for bash or compatible shells
         ejpm env csh > your-file.csh      # get environment for CSH/TCSH
        ```
    3. Use ejpm generated ```env.sh``` and ```env.csh``` files (lazy and convenient)
    
        ```bash        
        $HOME/.local/share/ejpm/env.sh    # bash and compatible
        $HOME/.local/share/ejpm/env.csh   # for CSH/TCSH
        ```
        (!) The files are regenerated each time ```ejpm <command>``` changes something in EJPM.
        If you change ```db.json``` by yourself, ejpm doesn't track it automatically, so call 'ejpm env'
        to regenerate these 2 files
    

## Environment

 ```EJPM_DATA_PATH```- sets the path where the configuration db.json and env.sh, env.csh are located


Each time you make changes to packets, 
EJPM generates `env.sh` and `env.csh` files, 
that could be found in standard apps user directory.

For linux it is in XDG_DATA_HOME:

```
~/.local/share/ejpm/env.sh      # sh version
~/.local/share/ejpm/env.csh     # csh version
~/.local/share/ejpm/db.json     # open it, edit it, love it
```

> XDG is the standard POSIX paths to store applications data, configs, etc. 
EJPM uses [XDG_DATA_HOME](https://wiki.archlinux.org/index.php/XDG_Base_Directory#Specification)
to store `env.sh`, `env.csh` and `db.json` and ```db.json```

You can always get fresh environment with ejpm ```env``` command 
```bash
ejpm env
```

You can directly source it like:
```bash
source<(ejpm env)
```

You can control where ejpm stores data by setting ```EJPM_DATA_PATH``` environment variable.


<br><br>

