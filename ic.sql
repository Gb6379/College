-- MySQL dump 10.13  Distrib 5.7.19, for Win64 (x86_64)
--
-- Host: localhost    Database: ic
-- ------------------------------------------------------
-- Server version	5.7.19-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `vertebrados`
--

DROP TABLE IF EXISTS `vertebrados`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `vertebrados` (
  `Nome` varchar(40) DEFAULT NULL,
  `Temperatura` varchar(6) DEFAULT NULL,
  `Pele` varchar(10) DEFAULT NULL,
  `Cria` int(1) DEFAULT NULL,
  `Aquatico` varchar(5) DEFAULT NULL,
  `Aereo` int(1) DEFAULT NULL,
  `Pernas` int(1) DEFAULT NULL,
  `Hiberna` int(1) DEFAULT NULL,
  `Classe` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `vertebrados`
--

LOCK TABLES `vertebrados` WRITE;
/*!40000 ALTER TABLE `vertebrados` DISABLE KEYS */;
INSERT INTO `vertebrados` VALUES ('Humano','Quente','Cabelo',1,'nao',0,1,0,'Mamifero'),('Piton','Frio','Escamas',0,'nao',0,0,1,'Reptil'),('Peixe','Frio','Escamas',0,'sim',0,0,0,'Peixe'),('Baleia','Quente','Cabelo',1,'sim',0,0,0,'Mamifero'),('Sapo','Frio','Nenhuma',0,'sim',0,1,1,'Anfibio'),('Dragao_Komodo','Frio','Escamas',0,'nao',0,1,0,'Reptil'),('Morcego','Quente','Cabelo',1,'nao',1,1,1,'Mamifero'),('Pomba','Quente','Penas',0,'nao',1,1,0,'Ave'),('Gato','Quente','Pelo',1,'nao',0,1,0,'Mamifero'),('Leopardo','Quente','Pelo',1,'nao',0,1,0,'Mamifero'),('Tubarao','Frio','Escamas',0,'sim',0,0,0,'Peixe'),('Pinguim','Quente','Penas',0,'semi',0,1,0,'Ave'),('Porco_Espinho','Quente','Espinhos',1,'nao',0,1,1,'Mamifero'),('Enguia','Frio','Escamas',0,'sim',0,0,0,'Peixe'),('Salamandra','Frio','nenhuma',0,'semi',0,1,1,'Anfibio');
/*!40000 ALTER TABLE `vertebrados` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `weather`
--

DROP TABLE IF EXISTS `weather`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `weather` (
  `outlook` varchar(10) DEFAULT NULL,
  `temperature` varchar(5) DEFAULT NULL,
  `humidity` varchar(7) DEFAULT NULL,
  `windy` varchar(6) DEFAULT NULL,
  `play` varchar(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `weather`
--

LOCK TABLES `weather` WRITE;
/*!40000 ALTER TABLE `weather` DISABLE KEYS */;
INSERT INTO `weather` VALUES ('sunny','hot','high','false','no'),('sunny','hot','high','true','no'),('overcast','hot','high','false','yes'),('rainy','mild','high','false','yes'),('rainy','cool','normal','false','yes'),('rainy','cool','normal','true','no'),('overcast','cool','normal','true','yes'),('sunny','mild','high','false','no'),('sunny','cool','normal','false','yes'),('rainy','mild','normal','false','yes'),('sunny','mild','normal','true','yes'),('overcast','mild','high','true','yes'),('overcast','hot','normal','true','yes'),('rainy','mild','high','true','no');
/*!40000 ALTER TABLE `weather` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-03-09 12:48:49
