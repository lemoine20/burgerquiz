Installation du projet Burger Quiz Online

Prérequis:
	-	serveur Apache configuré avec un vhost sur le dossier /var/www/burgerquizonline
	-	PHP 7
	-	serveur MySQL
	-	phpMyAdmin
	-	qt 5.6

Installation:
	-	Récupération des fichiers dans /var/www/burgerquizonline
	-	Création d'un utilisateur mysql dédié au projet avec phpMyAdmin (user: "Burger", pwd: "Burgerpwd")
	-	Remplissage de la base de donnée sous PhpMyAdmin (importation du fichier fill.sql)
	-	Copie et modification du fichier pwd.ini dans /var/www
	-	Compilation du qt (qmake puis make dans le répertoire QT)

(Comptes existants: login:pierre 	password:username
					login:jean 		password:tata)