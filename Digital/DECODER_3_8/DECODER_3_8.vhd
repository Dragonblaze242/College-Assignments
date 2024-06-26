----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    04:55:43 02/20/2020 
-- Design Name: 
-- Module Name:    DECODER_3_8 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity DECODER_3_8 is
    Port ( a : in  STD_LOGIC_VECTOR (2 downto 0);
           b : out  STD_LOGIC_VECTOR (7 downto 0));
end DECODER_3_8;

architecture Behavioral of DECODER_3_8 is

begin
b(0)<=not a(2) and not a(1) and not a(0);
b(1)<=not a(2) and not a(1) and a(0);
b(2)<=not a(2) and a(1) and not a(0);
b(3)<=not a(2) and a(1) and a(0);
b(4)<=a(2) and not a(1) and not a(0);
b(5)<=a(2) and not a(1) and a(0);
b(6)<=a(2) and a(1) and not a(0);
b(7)<=a(2) and a(1) and a(0);

end Behavioral;

