# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
CONSOLE_ENABLE = no
COMMAND_ENABLE = no

AUTO_SHIFT_ENABLE = no

UNICODE_ENABLE = yes
LEADER_ENABLE = yes
FRENCH_ENABLE=yes

SRC = matrix.c 
EXTRAFLAGS+=--specs=nosys.specs
