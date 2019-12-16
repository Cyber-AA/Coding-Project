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

    alphabet.sort()
    alphabet = list(dict.fromkeys(alphabet))

    if len(alphabet) > 25:
        print("This is a complete alphabet")
    else:
        print("Incomplete alphabet, try again")


is_pangram("The quick brown fox jumps over the lazy dog.")
is_pangram("Jolly Jumper is a hell of a horse")
