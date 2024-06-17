----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    04:22:51 03/05/2020 
-- Design Name: 
-- Module Name:    COMPARATOR - Behavioral 
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

entity COMPARATOR is
    Port ( a,b : in  STD_LOGIC_VECTOR (7 downto 0);
           l,e,g : out  STD_LOGIC);
end COMPARATOR;

architecture Behavioral of COMPARATOR is

begin
process(a,b)
begin
if(a=b) then
e<='1';
l<='0';
g<='0';
elsif(a>b) then
e<='0';
l<='0';
g<='1';
elsif(a<b) then
e<='0';
l<='1';
g<='0';
end if;
end process;
end Behavioral;

