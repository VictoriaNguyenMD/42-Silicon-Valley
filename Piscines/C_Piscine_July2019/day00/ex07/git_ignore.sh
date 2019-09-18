git status --ignored --porcelain | grep "\!\!" | sed "s/\!\! //g"
