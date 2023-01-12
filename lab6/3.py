string = input('input string: ')
string = string.replace(' ', '').lower()
if string == string[::-1]:
    print('palyndrome')
else:
    print('not palyndrome')
