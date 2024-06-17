----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    05:06:34 03/12/2020 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
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

entity COUNTER is
    Port ( clk : in  STD_LOGIC;
           digit : out  integer range 0 to 9);
end COUNTER;

architecture Behavioral of COUNTER is
begin
count:process(clk)
variable temp: integer range 0 to 10;
begin
if(clk'event and clk='1') then
temp:=temp+1;
if (temp=10) then temp:=0;
end if;
end if;
digit<=temp;
end process count;
end Behavioral;

