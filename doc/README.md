# Projet C++ du groupe 3

## Étapes nécessaires à l'utilisation du dépôt Git

### Spécification de votre identité Git

```bash
git config --global user.name "Prénom Nom"
git config --global user.email "votre adresse de courriel"
```
(chaque commande sans le dernier argument permet de vérifier chaque paramètre de votre identité)

### Spécification de votre éditeur "préféré"

Il s'agit de configurer l’éditeur de texte qui sera utilisé quand Git vous demande de saisir un message (généralement un message de commit). Par défaut, Git utilise l’éditeur configuré au niveau système, qui est généralement Vi ou Vim.

Exemple d'une commande permettant de spécifier un éditeur différent : (ici. `pluma`):

```bash
git config --global core.editor pluma
```

Remarque : `pluma` peut être installé ainsi en _root_ sur votre machine :
```bash
apt install pluma
```

### Spécification de votre stratégie de réconciliation des branches divergentes

Avant d'en savoir plus sur ce que cela signifie, nous allons utiliser ce paramétrage (qui est la stratégie utilisée par défaut) :
```bash
git config --global pull.rebase false
```

Nous verrons que d'autres stratégies sont possibles, paramétrables ainsi :
- `git config --global pull.rebase true` : rebasage
- `git config --global pull.ff only` : spécifie l'utilisation de l'"avance rapide" seulement.

A noter qu'il est également possible de passer en paramètre à `git pull` l'une des options `--rebase`, `--no-rebase` ou `ff-only` pour remplacer la valeur configurée.

###  Génération d'une paire de clés SSH

```bash
ssh-keygen -t ed25519 -a 100 -f ~/.ssh/id_ed25519_gitlab_ldnr -C "MY own key for GitLab"
```

### Copie de la clé publique

Il s'agit du contenu du fichier
`~/.ssh/id_ed25519_gitlab_ldnr.pub` à copier dans
le champ *Key* de la page de votre
[profil utilisateur](https://www.campus-numerique.eu/ldnr/gitlab/-/profile/keys)

### Spécification d'une configuration SSH

Il s'agit d'affecter la clé (et éventuellement le numéro de port comme ici) à utiiser dans le fichier `~/.ssh/config` pour les accès Git :

```
Host www.campus-numerique.eu
	Port 11022
	User git
	IdentityFile ~/.ssh/id_ed25519_gitlab_ldnr
	IdentitiesOnly yes
```

### Clonage du dépôt

```bash
git clone ssh://git@www.campus-numerique.eu:11022/22-2-dwwm/cpp/projet/g3.git
```

La commande vous demande alors _Enter passphrase for key '/home/stag/.ssh/id_ed25519_gitlab_ldnr':_, indiquant qu'elle veut accéder à votre clé privée.
Il faut alors saisir la _passphrase_ que vous avez indiquée lors de la création de votre paire de clés SSH, et ensuite entrer la commande suivante pour ne plus avoir à le faire pour la session en cours :

```bash
ssh-add /home/stag/.ssh/id_ed25519_gitlab_ldnr
```

## Conseils d'utilisation

### Introduction à GitLab

[Vidéo d'introduction à GitLab](http://mbret.net/stri/l3/projet_web_php_bd/intro_gitlab.mp4). Cette vidéo a été réalisée pour des étudiants d'une formation STRI.
