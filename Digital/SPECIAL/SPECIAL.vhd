----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    04:58:13 03/05/2020 
-- Design Name: 
-- Module Name:    SPECIAL - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SPECIAL is
    Port ( x,y : in  STD_LOGIC;
           w : in  STD_LOGIC;
           temp : out  STD_LOGIC_VECTOR (3 downto 0));
end SPECIAL;

architecture Behavioral of SPECIAL is

begin
process(x,y,w)
begin
if (x<y) then 
temp<="1111";
elsif(x=y and w='0') then
temp<="1110";
else
temp<="0000";
end if;
end process;
end Behavioral;

