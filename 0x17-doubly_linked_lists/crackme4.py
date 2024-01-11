#!/usr/bin/python3
pwd = input('Password: ')
ok = 'Zen of Python'
ok = ok + ' C'
ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]

# Create a file and write the variable 'ok' to it
with open('100-password', 'w') as file:
    file.write(ok)
    print(f'100-password": {ok}')

    # Print the variable 'ok' to the console
    print(f'Password: {ok}')

if pwd == ok:
    print('OK')

    
else:
    print('KO')
