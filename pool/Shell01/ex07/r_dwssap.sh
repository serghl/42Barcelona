cat /etc/passwd | sed '/^#/d' | sed -n 'p;n' | cut -f1 -d ':' | rev | sort -r | awk '{print}' ORS=',' | sed 's/\(.*\),/\1./'

# awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]'
#	sed -n $FT_LINE1 $FT_LINE2
