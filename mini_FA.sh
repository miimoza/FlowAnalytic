echo "=================<FA>================"

while read line; do
    for word in $line; do
        word=$(echo "$word " | tr 'a-z' 'A-Z')
        echo "[$word]" | tr 'a-z' 'A-Z'
        cat "cmudict-0.7b" | grep --color $word
    done
done < $1
