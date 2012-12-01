SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

DROP SCHEMA IF EXISTS `opticaldb` ;
CREATE SCHEMA IF NOT EXISTS `opticaldb` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci ;
USE `opticaldb` ;

-- -----------------------------------------------------
-- Table `opticaldb`.`tipodoc_ident`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`tipodoc_ident` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`tipodoc_ident` (
  `idtipodoc_ident` INT(11) NOT NULL AUTO_INCREMENT ,
  `nombre` VARCHAR(20) NULL ,
  `size` INT(11) NULL ,
  PRIMARY KEY (`idtipodoc_ident`) )
AUTO_INCREMENT = 1
PACK_KEYS = 0
ROW_FORMAT = FIXED;


-- -----------------------------------------------------
-- Table `opticaldb`.`persona`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`persona` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`persona` (
  `idpersona` INT(11) NOT NULL AUTO_INCREMENT ,
  `idtipodoc_ident` INT(11) NOT NULL ,
  `nombre` VARCHAR(100) NOT NULL ,
  `primer_appellido` VARCHAR(50) NOT NULL ,
  `segundo_apellido` VARCHAR(50) NULL ,
  `nro_doc` INT(8) NULL ,
  `direccion` VARCHAR(100) NULL ,
  `sexo` TINYINT(1) NULL ,
  `fecha_nacimiento` DATE NULL ,
  `telefono` VARCHAR(10) NULL ,
  `celular` VARCHAR(10) NULL ,
  PRIMARY KEY (`idpersona`) ,
  CONSTRAINT `fk_{4EEC313B-29D5-4DE8-A299-C95849A00290}`
    FOREIGN KEY (`idtipodoc_ident` )
    REFERENCES `opticaldb`.`tipodoc_ident` (`idtipodoc_ident` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `persona_FKIndex1` ON `opticaldb`.`persona` (`idtipodoc_ident` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`cliente`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`cliente` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`cliente` (
  `idcliente` INT(11) NOT NULL ,
  PRIMARY KEY (`idcliente`) ,
  CONSTRAINT `fk_{B958894E-39E4-4CF7-9F96-E7FC968A14E9}`
    FOREIGN KEY (`idcliente` )
    REFERENCES `opticaldb`.`persona` (`idpersona` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `cliente_FKIndex1` ON `opticaldb`.`cliente` (`idcliente` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`tipo_colaborador`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`tipo_colaborador` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`tipo_colaborador` (
  `idtipo_colaborador` INT(11) NOT NULL AUTO_INCREMENT ,
  `nombre` VARCHAR(20) NULL ,
  PRIMARY KEY (`idtipo_colaborador`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`empresa`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`empresa` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`empresa` (
  `idempresa` INT(11) NOT NULL AUTO_INCREMENT ,
  `ruc` INT(11) NULL ,
  `raz_social` VARCHAR(100) NULL ,
  `domicilio_fiscal` VARCHAR(200) NULL ,
  `telefono` VARCHAR(15) NULL ,
  PRIMARY KEY (`idempresa`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`tienda`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`tienda` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`tienda` (
  `idtienda` INT(11) NOT NULL AUTO_INCREMENT ,
  `idempresa` INT(11) NOT NULL ,
  `alias` VARCHAR(50) NULL ,
  `direccion` VARCHAR(100) NULL ,
  `telefono` VARCHAR(20) NULL ,
  `permiso_municipal` VARCHAR(20) NULL ,
  PRIMARY KEY (`idtienda`) ,
  CONSTRAINT `fk_{D0F9A1E8-59E1-4923-B557-6106F9200F94}`
    FOREIGN KEY (`idempresa` )
    REFERENCES `opticaldb`.`empresa` (`idempresa` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `tienda_unique` ON `opticaldb`.`tienda` (`alias` ASC) ;

CREATE INDEX `tienda_FKIndex1` ON `opticaldb`.`tienda` (`idempresa` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`colaborador`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`colaborador` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`colaborador` (
  `idcolaborador` INT(11) NOT NULL ,
  `idtipo_colaborador` INT(11) NOT NULL ,
  `idtienda` INT(11) NOT NULL ,
  `telf_familiar` VARCHAR(10) NULL ,
  `observaciones` TEXT NULL ,
  `nombre_usuario` VARCHAR(20) NOT NULL ,
  `habilitado` TINYINT(1) NOT NULL ,
  `pass` VARCHAR(32) NOT NULL ,
  `reset_pass` TINYINT(1) NOT NULL ,
  PRIMARY KEY (`idcolaborador`) ,
  CONSTRAINT `fk_{9E8230CC-B449-4141-84FB-138D3A104E3F}`
    FOREIGN KEY (`idtipo_colaborador` )
    REFERENCES `opticaldb`.`tipo_colaborador` (`idtipo_colaborador` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{023789F5-3E3B-4DC2-AEC4-2E7D0E46EBFF}`
    FOREIGN KEY (`idtienda` )
    REFERENCES `opticaldb`.`tienda` (`idtienda` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{4BDC839F-901E-47EB-AE18-D85694503318}`
    FOREIGN KEY (`idcolaborador` )
    REFERENCES `opticaldb`.`persona` (`idpersona` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `colaborador_FKIndex1` ON `opticaldb`.`colaborador` (`idtipo_colaborador` ASC) ;

CREATE INDEX `colaborador_FKIndex2` ON `opticaldb`.`colaborador` (`idtienda` ASC) ;

CREATE INDEX `colaborador_FKIndex3` ON `opticaldb`.`colaborador` (`idcolaborador` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`vitrina`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`vitrina` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`vitrina` (
  `idvitrina` INT(11) NOT NULL AUTO_INCREMENT ,
  `idtienda` INT(11) NOT NULL ,
  `codigo` TEXT NOT NULL ,
  `alias` TEXT NULL ,
  `num_filas` INT(11) NOT NULL ,
  `num_columnas` INT(11) NOT NULL ,
  `num_niveles` INT(11) NOT NULL ,
  PRIMARY KEY (`idvitrina`) ,
  CONSTRAINT `fk_{2D524C27-3F83-4D02-B721-464DE98DF50A}`
    FOREIGN KEY (`idtienda` )
    REFERENCES `opticaldb`.`tienda` (`idtienda` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `mostrador_FKIndex1` ON `opticaldb`.`vitrina` (`idtienda` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`almacen`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`almacen` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`almacen` (
  `idalmacen` INT(11) NOT NULL AUTO_INCREMENT ,
  `idtienda` INT(11) NOT NULL ,
  `nombre` VARCHAR(50) NULL ,
  PRIMARY KEY (`idalmacen`) ,
  CONSTRAINT `fk_{35E9DE9F-97BF-480E-8496-D6AFD3CC1BFF}`
    FOREIGN KEY (`idtienda` )
    REFERENCES `opticaldb`.`tienda` (`idtienda` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE UNIQUE INDEX `almacen_unique` ON `opticaldb`.`almacen` (`nombre` ASC) ;

CREATE INDEX `almacen_FKIndex1` ON `opticaldb`.`almacen` (`idtienda` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`marca`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`marca` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`marca` (
  `idmarca` INT(11) NOT NULL AUTO_INCREMENT ,
  `nombre` INT(11) NOT NULL ,
  `descripcion` VARCHAR(100) NULL ,
  PRIMARY KEY (`idmarca`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`producto`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`producto` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`producto` (
  `idproducto` INT(11) NOT NULL AUTO_INCREMENT ,
  `codigo` VARCHAR(15) NOT NULL ,
  `descripcion` VARCHAR(150) NOT NULL ,
  `idmarca` INT(11) NOT NULL ,
  `stock` INT(11) NULL ,
  `precio` FLOAT(6,4) NULL ,
  `acccesorios` TEXT NULL ,
  `p_descuento` FLOAT(2,2) NULL ,
  `habilitado` TINYINT(1) NULL ,
  PRIMARY KEY (`idproducto`) ,
  CONSTRAINT `fk_{58C59973-5411-4117-B09E-A80CB6D3882B}`
    FOREIGN KEY (`idmarca` )
    REFERENCES `opticaldb`.`marca` (`idmarca` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `item_FKIndex1` ON `opticaldb`.`producto` (`idmarca` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`item_posicion`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`item_posicion` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`item_posicion` (
  `iditem_posicion` INT(11) NOT NULL AUTO_INCREMENT ,
  `idproducto` INT(11) NOT NULL ,
  `idvitrina` INT(11) NOT NULL ,
  `idseccion` INT(11) NOT NULL ,
  `fila` INT(11) NOT NULL ,
  `columna` INT(11) NOT NULL ,
  `nivel` INT(11) NOT NULL ,
  PRIMARY KEY (`iditem_posicion`) ,
  CONSTRAINT `fk_{CFFCBD98-FD3F-4513-A417-F0CD2FC28DED}`
    FOREIGN KEY (`idproducto` )
    REFERENCES `opticaldb`.`producto` (`idproducto` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_item_posicion_vitrina1`
    FOREIGN KEY (`idvitrina` )
    REFERENCES `opticaldb`.`vitrina` (`idvitrina` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `item_posicion_FKIndex1` ON `opticaldb`.`item_posicion` (`idproducto` ASC) ;

CREATE INDEX `item_posicion_FKIndex2` ON `opticaldb`.`item_posicion` (`idseccion` ASC) ;

CREATE INDEX `fk_item_posicion_vitrina1_idx` ON `opticaldb`.`item_posicion` (`idvitrina` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`color`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`color` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`color` (
  `idcolor` INT(11) NOT NULL AUTO_INCREMENT ,
  `color` VARCHAR(20) NOT NULL ,
  PRIMARY KEY (`idcolor`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`forma`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`forma` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`forma` (
  `idforma` INT(11) NOT NULL AUTO_INCREMENT ,
  `nombre` VARCHAR(100) NOT NULL ,
  PRIMARY KEY (`idforma`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`calidad`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`calidad` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`calidad` (
  `idcalidad` INT(11) NOT NULL AUTO_INCREMENT ,
  `cm_nombre` VARCHAR(20) NOT NULL ,
  PRIMARY KEY (`idcalidad`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`tamano`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`tamano` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`tamano` (
  `idtamano` INT(11) NOT NULL AUTO_INCREMENT ,
  `nombre` VARCHAR(20) NOT NULL ,
  PRIMARY KEY (`idtamano`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`montura`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`montura` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`montura` (
  `idmontura` INT(11) NOT NULL ,
  `idcalidad` INT(11) NOT NULL ,
  `idforma` INT(11) NOT NULL ,
  `idcolor` INT(11) NOT NULL ,
  `idtamano` INT(11) NOT NULL ,
  PRIMARY KEY (`idmontura`) ,
  CONSTRAINT `fk_{4B2AC9F9-DF43-415E-A818-EE4DE172F2B7}`
    FOREIGN KEY (`idcolor` )
    REFERENCES `opticaldb`.`color` (`idcolor` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{46DCC005-BF43-40C5-8AA9-63F6ACC660A7}`
    FOREIGN KEY (`idforma` )
    REFERENCES `opticaldb`.`forma` (`idforma` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{A3D10B26-CA72-4EF4-9457-48346B83FFE1}`
    FOREIGN KEY (`idcalidad` )
    REFERENCES `opticaldb`.`calidad` (`idcalidad` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{29F3BD29-39EB-4124-8CEE-A01F716E9D5B}`
    FOREIGN KEY (`idmontura` )
    REFERENCES `opticaldb`.`producto` (`idproducto` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_montura_tamano1`
    FOREIGN KEY (`idtamano` )
    REFERENCES `opticaldb`.`tamano` (`idtamano` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `montura_FKIndex1` ON `opticaldb`.`montura` (`idcolor` ASC) ;

CREATE INDEX `montura_FKIndex2` ON `opticaldb`.`montura` (`idforma` ASC) ;

CREATE INDEX `montura_FKIndex3` ON `opticaldb`.`montura` (`idcalidad` ASC) ;

CREATE INDEX `montura_FKIndex4` ON `opticaldb`.`montura` (`idmontura` ASC) ;

CREATE INDEX `fk_montura_tamano1_idx` ON `opticaldb`.`montura` (`idtamano` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`disenolentecon`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`disenolentecon` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`disenolentecon` (
  `iddisenolentecon` INT(11) NOT NULL AUTO_INCREMENT ,
  `nombre` VARCHAR(30) NULL ,
  PRIMARY KEY (`iddisenolentecon`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`material`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`material` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`material` (
  `idmaterial` INT(11) NOT NULL AUTO_INCREMENT ,
  `nombre` VARCHAR(20) NULL ,
  PRIMARY KEY (`idmaterial`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`tiempouso`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`tiempouso` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`tiempouso` (
  `idtiempouso` INT(11) NOT NULL AUTO_INCREMENT ,
  `nombre` VARCHAR(30) NULL ,
  PRIMARY KEY (`idtiempouso`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`rangok`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`rangok` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`rangok` (
  `idrangok` INT(11) NOT NULL AUTO_INCREMENT ,
  `val_ini` FLOAT(2,2) NULL ,
  `val_fin` FLOAT(2,2) NULL ,
  `obs` VARCHAR(30) NULL ,
  PRIMARY KEY (`idrangok`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`potencia`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`potencia` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`potencia` (
  `idpotencia` INT(11) NOT NULL AUTO_INCREMENT ,
  `nombre` VARCHAR(50) NULL ,
  PRIMARY KEY (`idpotencia`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`lente_contacto`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`lente_contacto` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`lente_contacto` (
  `idlentecontacto` INT(11) NOT NULL ,
  `idpotencia` INT(11) NOT NULL ,
  `idrangok` INT(11) NOT NULL ,
  `idtiempouso` INT(11) NOT NULL ,
  `idmaterial` INT(11) NOT NULL ,
  `iddisenolentecon` INT(11) NOT NULL ,
  `idcolor_visibilidad` INT(11) NOT NULL ,
  `curva_base` FLOAT(2,2) NOT NULL ,
  `diametro` FLOAT(2,2) NULL ,
  `contenido_acuoso` INT(11) NULL COMMENT 'porcentaje (0-100)|' ,
  PRIMARY KEY (`idlentecontacto`) ,
  CONSTRAINT `fk_{366825C0-0F47-456C-A845-DBC50DA830CD}`
    FOREIGN KEY (`idlentecontacto` )
    REFERENCES `opticaldb`.`producto` (`idproducto` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{0B17BC78-773E-4B40-BCDA-892A339788B5}`
    FOREIGN KEY (`idcolor_visibilidad` )
    REFERENCES `opticaldb`.`color` (`idcolor` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{723E2FAE-E385-4563-B238-DA452923A11A}`
    FOREIGN KEY (`iddisenolentecon` )
    REFERENCES `opticaldb`.`disenolentecon` (`iddisenolentecon` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{C4C75B37-DE93-48EA-950C-EB09F0E6A095}`
    FOREIGN KEY (`idmaterial` )
    REFERENCES `opticaldb`.`material` (`idmaterial` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{964F3459-D8E7-497D-9E74-5ABC53FB8295}`
    FOREIGN KEY (`idtiempouso` )
    REFERENCES `opticaldb`.`tiempouso` (`idtiempouso` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{8BBBF066-6AB7-421E-AE3E-55491D202972}`
    FOREIGN KEY (`idrangok` )
    REFERENCES `opticaldb`.`rangok` (`idrangok` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{B8B36054-682C-454F-97DF-53038F00A300}`
    FOREIGN KEY (`idpotencia` )
    REFERENCES `opticaldb`.`potencia` (`idpotencia` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `lente_contacto_FKIndex1` ON `opticaldb`.`lente_contacto` (`idlentecontacto` ASC) ;

CREATE INDEX `lente_contacto_FKIndex2` ON `opticaldb`.`lente_contacto` (`idcolor_visibilidad` ASC) ;

CREATE INDEX `lente_contacto_FKIndex3` ON `opticaldb`.`lente_contacto` (`iddisenolentecon` ASC) ;

CREATE INDEX `lente_contacto_FKIndex4` ON `opticaldb`.`lente_contacto` (`idmaterial` ASC) ;

CREATE INDEX `lente_contacto_FKIndex5` ON `opticaldb`.`lente_contacto` (`idtiempouso` ASC) ;

CREATE INDEX `lente_contacto_FKIndex6` ON `opticaldb`.`lente_contacto` (`idrangok` ASC) ;

CREATE INDEX `lente_contacto_FKIndex7` ON `opticaldb`.`lente_contacto` (`idpotencia` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`tipo_luna`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`tipo_luna` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`tipo_luna` (
  `idtipo_luna` INT(11) NOT NULL AUTO_INCREMENT ,
  `nombre` VARCHAR(30) NULL ,
  PRIMARY KEY (`idtipo_luna`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`indice_refraccion`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`indice_refraccion` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`indice_refraccion` (
  `idindice_refraccion` INT(11) NOT NULL AUTO_INCREMENT ,
  `valor` VARCHAR(30) NULL ,
  PRIMARY KEY (`idindice_refraccion`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`rango_medida`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`rango_medida` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`rango_medida` (
  `idrango_medida` INT(11) NOT NULL AUTO_INCREMENT ,
  `val_ini` FLOAT(2,2) NULL ,
  `val_fin` FLOAT(2,2) NULL ,
  `obs` VARCHAR(50) NULL ,
  PRIMARY KEY (`idrango_medida`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`luna`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`luna` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`luna` (
  `idluna` INT(11) NOT NULL ,
  `idrango_medida` INT(11) NOT NULL ,
  `idindice_refraccion` INT(11) NOT NULL ,
  `idtipo_luna` INT(11) NOT NULL ,
  `idcalidad` INT(11) NOT NULL ,
  PRIMARY KEY (`idluna`) ,
  CONSTRAINT `fk_{B144D416-56DD-4662-BA3D-0F6AD183C4E3}`
    FOREIGN KEY (`idluna` )
    REFERENCES `opticaldb`.`producto` (`idproducto` )
    ON DELETE CASCADE
    ON UPDATE CASCADE,
  CONSTRAINT `fk_{D26ACDAB-CC8C-443F-A0FF-1B6EA5F380DD}`
    FOREIGN KEY (`idcalidad` )
    REFERENCES `opticaldb`.`calidad` (`idcalidad` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{23582556-F740-4AAB-8B47-E85A8D3BE36D}`
    FOREIGN KEY (`idtipo_luna` )
    REFERENCES `opticaldb`.`tipo_luna` (`idtipo_luna` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{A932347E-B90E-46AC-A08E-53805D02B079}`
    FOREIGN KEY (`idindice_refraccion` )
    REFERENCES `opticaldb`.`indice_refraccion` (`idindice_refraccion` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{237D1133-44FA-4AB5-B717-1D3D60B9E62A}`
    FOREIGN KEY (`idrango_medida` )
    REFERENCES `opticaldb`.`rango_medida` (`idrango_medida` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `luna_FKIndex1` ON `opticaldb`.`luna` (`idluna` ASC) ;

CREATE INDEX `luna_FKIndex2` ON `opticaldb`.`luna` (`idcalidad` ASC) ;

CREATE INDEX `luna_FKIndex3` ON `opticaldb`.`luna` (`idtipo_luna` ASC) ;

CREATE INDEX `luna_FKIndex4` ON `opticaldb`.`luna` (`idindice_refraccion` ASC) ;

CREATE INDEX `luna_FKIndex5` ON `opticaldb`.`luna` (`idrango_medida` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`otros_optica`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`otros_optica` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`otros_optica` (
  `idotrosoptica` INT(11) NOT NULL ,
  PRIMARY KEY (`idotrosoptica`) ,
  CONSTRAINT `fk_{B38605F7-C340-46DA-8CF4-FA89BACF1336}`
    FOREIGN KEY (`idotrosoptica` )
    REFERENCES `opticaldb`.`producto` (`idproducto` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `otros_optica_FKIndex1` ON `opticaldb`.`otros_optica` (`idotrosoptica` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`otro`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`otro` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`otro` (
  `idproducto` INT(11) NOT NULL ,
  PRIMARY KEY (`idproducto`) ,
  CONSTRAINT `fk_{4BEC521A-A604-4330-BF4C-9B4F37651EFC}`
    FOREIGN KEY (`idproducto` )
    REFERENCES `opticaldb`.`producto` (`idproducto` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `otro_FKIndex1` ON `opticaldb`.`otro` (`idproducto` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`venta`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`venta` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`venta` (
  `idventa` INT(11) NOT NULL AUTO_INCREMENT ,
  `idtienda` INT(11) NOT NULL ,
  `idcolaborador` INT(11) NOT NULL ,
  `idcliente` INT(11) NOT NULL ,
  `fecha` DATETIME NULL ,
  `total` FLOAT(6,5) NULL ,
  PRIMARY KEY (`idventa`) ,
  CONSTRAINT `fk_{D53F7A78-50C0-469C-ABC3-F95A0910B531}`
    FOREIGN KEY (`idcliente` )
    REFERENCES `opticaldb`.`cliente` (`idcliente` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{072E0684-1816-46E1-AB01-7AD3A09CAD53}`
    FOREIGN KEY (`idcolaborador` )
    REFERENCES `opticaldb`.`colaborador` (`idcolaborador` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{7862CEF2-01B4-4FAA-9964-2ACCD14FEC20}`
    FOREIGN KEY (`idtienda` )
    REFERENCES `opticaldb`.`tienda` (`idtienda` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `venta_FKIndex1` ON `opticaldb`.`venta` (`idcliente` ASC) ;

CREATE INDEX `venta_FKIndex2` ON `opticaldb`.`venta` (`idcolaborador` ASC) ;

CREATE INDEX `venta_FKIndex3` ON `opticaldb`.`venta` (`idtienda` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`linea_venta`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`linea_venta` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`linea_venta` (
  `idlinea_venta` INT(11) NOT NULL AUTO_INCREMENT ,
  `idproducto` INT(11) NOT NULL ,
  `idventa` INT(11) NOT NULL ,
  `precio` FLOAT(6,5) NULL ,
  PRIMARY KEY (`idlinea_venta`) ,
  CONSTRAINT `fk_{EB9834CC-72F0-40C2-8C3D-A100682B325F}`
    FOREIGN KEY (`idproducto` )
    REFERENCES `opticaldb`.`producto` (`idproducto` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{DB22EC4C-3701-487C-A6E5-94A44E6DBDD1}`
    FOREIGN KEY (`idventa` )
    REFERENCES `opticaldb`.`venta` (`idventa` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `linea_venta_FKIndex1` ON `opticaldb`.`linea_venta` (`idproducto` ASC) ;

CREATE INDEX `linea_venta_FKIndex2` ON `opticaldb`.`linea_venta` (`idventa` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`cotizacion`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`cotizacion` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`cotizacion` (
  `idcotizacion` INT(11) NOT NULL AUTO_INCREMENT ,
  `idpersona` INT(11) NOT NULL ,
  `idtienda` INT(11) NOT NULL ,
  `fecha` DATE NULL ,
  PRIMARY KEY (`idcotizacion`) ,
  CONSTRAINT `fk_{427A72B0-56B4-4F86-912E-FBEF2CD9C945}`
    FOREIGN KEY (`idtienda` )
    REFERENCES `opticaldb`.`tienda` (`idtienda` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{9A76EE82-4744-4472-87A2-35FE4131B0A6}`
    FOREIGN KEY (`idpersona` )
    REFERENCES `opticaldb`.`colaborador` (`idcolaborador` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{DFAC29D2-72CC-4BC0-B156-111054625E89}`
    FOREIGN KEY (`idpersona` )
    REFERENCES `opticaldb`.`cliente` (`idcliente` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `cotizacion_FKIndex1` ON `opticaldb`.`cotizacion` (`idtienda` ASC) ;

CREATE INDEX `cotizacion_FKIndex2` ON `opticaldb`.`cotizacion` (`idpersona` ASC) ;

CREATE INDEX `cotizacion_FKIndex3` ON `opticaldb`.`cotizacion` (`idpersona` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`linea_cotizacion`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`linea_cotizacion` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`linea_cotizacion` (
  `idlinea_cotizacion` INT(11) NOT NULL AUTO_INCREMENT ,
  `idproducto` INT(11) NOT NULL ,
  `idcotizacion` INT(11) NOT NULL ,
  `precio` FLOAT(6,5) NULL ,
  PRIMARY KEY (`idlinea_cotizacion`) ,
  CONSTRAINT `fk_{3E61CE88-23DA-461C-9D9B-35E7C0CB21B3}`
    FOREIGN KEY (`idcotizacion` )
    REFERENCES `opticaldb`.`cotizacion` (`idcotizacion` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_{888047EA-B188-4441-A264-BFC3EA298C82}`
    FOREIGN KEY (`idproducto` )
    REFERENCES `opticaldb`.`producto` (`idproducto` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `linea_cotizacion_FKIndex1` ON `opticaldb`.`linea_cotizacion` (`idcotizacion` ASC) ;

CREATE INDEX `linea_cotizacion_FKIndex2` ON `opticaldb`.`linea_cotizacion` (`idproducto` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`doc_venta`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`doc_venta` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`doc_venta` (
  `iddoc_venta` INT(11) NOT NULL AUTO_INCREMENT ,
  `actual` INT(11) NULL ,
  `inicio` INT(11) NULL ,
  `fin` INT(11) NULL ,
  PRIMARY KEY (`iddoc_venta`) )
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;


-- -----------------------------------------------------
-- Table `opticaldb`.`historial_colaborador`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`historial_colaborador` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`historial_colaborador` (
  `idhistorial_colaborador` INT(11) NOT NULL AUTO_INCREMENT ,
  `idcolaborador` INT(11) NOT NULL ,
  `fecha_inicio` DATETIME NULL ,
  `fecha_fin` DATETIME NULL ,
  `motivo` TEXT NULL ,
  PRIMARY KEY (`idhistorial_colaborador`) ,
  CONSTRAINT `fk_{355E35BF-1CBF-4973-A314-E2719B444A2B}`
    FOREIGN KEY (`idcolaborador` )
    REFERENCES `opticaldb`.`colaborador` (`idcolaborador` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
PACK_KEYS = 0
ROW_FORMAT = DEFAULT;

CREATE INDEX `historial_colaborador_FKIndex1` ON `opticaldb`.`historial_colaborador` (`idcolaborador` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`sys_modulos`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`sys_modulos` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`sys_modulos` (
  `id` INT NOT NULL ,
  `nombre` VARCHAR(45) NULL ,
  `descripcion` VARCHAR(45) NULL ,
  PRIMARY KEY (`id`) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `opticaldb`.`funcion_modulo`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`funcion_modulo` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`funcion_modulo` (
  `id` INT NOT NULL ,
  `nombre` VARCHAR(45) NULL ,
  `descripcion` VARCHAR(45) NULL ,
  `sys_modulos_id` INT NOT NULL ,
  PRIMARY KEY (`id`) ,
  CONSTRAINT `fk_funcion_modulo_sys_modulos1`
    FOREIGN KEY (`sys_modulos_id` )
    REFERENCES `opticaldb`.`sys_modulos` (`id` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_funcion_modulo_sys_modulos1_idx` ON `opticaldb`.`funcion_modulo` (`sys_modulos_id` ASC) ;


-- -----------------------------------------------------
-- Table `opticaldb`.`sys_acceso`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `opticaldb`.`sys_acceso` ;

CREATE  TABLE IF NOT EXISTS `opticaldb`.`sys_acceso` (
  `idcolaborador` INT(11) NOT NULL ,
  `funcion_modulo_id` INT NOT NULL ,
  `fecha` DATETIME NULL ,
  PRIMARY KEY (`idcolaborador`, `funcion_modulo_id`) ,
  CONSTRAINT `fk_sys_acceso_colaborador1`
    FOREIGN KEY (`idcolaborador` )
    REFERENCES `opticaldb`.`colaborador` (`idcolaborador` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_sys_acceso_funcion_modulo1`
    FOREIGN KEY (`funcion_modulo_id` )
    REFERENCES `opticaldb`.`funcion_modulo` (`id` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_sys_acceso_colaborador1_idx` ON `opticaldb`.`sys_acceso` (`idcolaborador` ASC) ;

CREATE INDEX `fk_sys_acceso_funcion_modulo1_idx` ON `opticaldb`.`sys_acceso` (`funcion_modulo_id` ASC) ;


-- -----------------------------------------------------
-- procedure verify_usrpass
-- -----------------------------------------------------

USE `opticaldb`;
DROP procedure IF EXISTS `opticaldb`.`verify_usrpass`;

DELIMITER $$
USE `opticaldb`$$
CREATE PROCEDURE `opticaldb`.`verify_usrpass` ( n_usuario VARCHAR(20), cont VARCHAR(32))
BEGIN
	select * from persona,colaborador 
	where idpersona=idcolaborador and nombre_usuario = n_usuario
		and pass = MD5(cont);
END$$

DELIMITER ;

-- -----------------------------------------------------
-- procedure deshabilitarUsr
-- -----------------------------------------------------

USE `opticaldb`;
DROP procedure IF EXISTS `opticaldb`.`deshabilitarUsr`;

DELIMITER $$
USE `opticaldb`$$
CREATE PROCEDURE `opticaldb`.`deshabilitarUsr` (n_usuario varchar(20))
BEGIN
	update colaborador set habilitado=0 where nombre_usuario = n_usuario;
END$$

DELIMITER ;

-- -----------------------------------------------------
-- procedure set_pass
-- -----------------------------------------------------

USE `opticaldb`;
DROP procedure IF EXISTS `opticaldb`.`set_pass`;

DELIMITER $$
USE `opticaldb`$$
CREATE PROCEDURE `opticaldb`.`set_pass` (id int ,n_pass varchar(50))
BEGIN
	update colaborador set pass=MD5(n_pass),reset_pass=0 where idcolaborador = id;
END$$

DELIMITER ;

-- -----------------------------------------------------
-- procedure buscarUsuarios
-- -----------------------------------------------------

USE `opticaldb`;
DROP procedure IF EXISTS `opticaldb`.`buscarUsuarios`;

DELIMITER $$
USE `opticaldb`$$
CREATE PROCEDURE `opticaldb`.`buscarUsuarios`(nUsuario varchar(20)
											 ,nombres varchar(100)
											 ,pApellido varchar(50)
											 ,di varchar(8))
BEGIN
	select
	P.primer_apellido as 'Primer Apellido'
	,P.segundo_apellido as 'Segundo Apellido'
	,P.nombres as 'Nombres'
	,TC.nombre as 'Tipo Colaborador'
	,C.nombre_usuario as 'Nombre Usuario'
	,TDA.alias as 'Tienda'
 	,CASE 
 		WHEN C.habilitado = 1 then 'Si'
 		WHEN C.habilitado = 0 then 'No'
 	end as 'Habilitado'
 	,CASE 
 		WHEN C.reset_pass = 1 then 'Si'
 		WHEN C.reset_pass = 0 then 'No'
 	end as 'Cambiar Contraseña'
	,ucase(TDOC.nombre) as 'T. DI'
	,P.nro_doc as 'Nro. DI'
	,P.direccion as 'Dirección'
	,P.telefono as 'Telf. Fijo'
	,P.celular as 'Celular'
	,C.telf_familiar as 'Telf. Familiar'
	,P.fecha_nacimiento as 'F. Nacimiento'
 	,CASE 
 		WHEN P.sexo = 1 then 'M'
 		WHEN P.sexo = 0 then 'F'
 	end as 'Sexo'
	,C.observaciones
from
	persona P
	,colaborador C
	,tipodoc_ident TDOC
	,tipo_colaborador TC
	,tienda TDA
where
	P.idpersona=C.idcolaborador
	and TDOC.idtipodoc_ident = P.idtipodoc_ident
	and TC.idtipo_colaborador = C.idtipo_colaborador
	and TDA.idtienda = C.idtienda
	and C.nombre_usuario like concat('%',nUsuario,'%')
	and P.nombres like concat('%',nombres,'%')
	and P.primer_apellido like concat('%',pApellido,'%')
	and P.nro_doc like concat('%',di,'%');
	-- and P.nro_doc = '%'
END$$

DELIMITER ;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
