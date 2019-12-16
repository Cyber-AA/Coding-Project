import string


def is_pangram(sentence):
    sentence.lower()
    d = dict.fromkeys(string.ascii_lowercase, 0)
    alphabet = []

    for letter in sentence:
        if letter in d:
            alphabet += letter
        else:
            pass

    print(d)
    alphabet.sort()
    print(alphabet)
    alphabet = list(dict.fromkeys(alphabet))
    print(alphabet)
    print(len(alphabet))
    if len(alphabet) > 25:
        print("This is a complete alphabet")
    else:
        print("Uncomplete alphabet, try again")


is_pangram("The quick brown fox jumps over the lazy dog.")

#import string
#d = dict.fromkeys(string.ascii_lowercase, 0)
#p = "The quick brown fox jumps over the lazy dog."


'''

print(ord("a"))
list_alphabet = []

# vowels keys
keys = {'a', 'e', 'i', 'o', 'u'}

vowels = dict.fromkeys(keys)
print(vowels)



alphabet = ["a",]


'''
#
#
#
#
#
#
#
#
#