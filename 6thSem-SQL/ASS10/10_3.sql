DROP TRIGGER TRG_EMP;
CREATE OR REPLACE TRIGGER TRG_EMP
BEFORE INSERT ON EMP
FOR EACH ROW
DECLARE
	BEGIN
		IF :NEW.SAL<3000 THEN
			RAISE_APPLICATION_ERROR(-20003,'SAL SHOULD BE>3000');
			END IF;
		
	END;
	/