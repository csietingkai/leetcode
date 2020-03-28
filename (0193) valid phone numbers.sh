#!/bin/bash
# Read from the file file.txt and output all valid phone numbers to stdout.
input="file.txt"
while IFS= read -r line
do
    [[ $line =~ ^(\([0-9]{3}\) [0-9]{3}-[0-9]{4}|[0-9]{3}-[0-9]{3}-[0-9]{4})$ ]] && echo "$line"
done < "$input"
