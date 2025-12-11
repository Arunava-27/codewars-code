def to_jaden_case(string):
    words = string.split()
    jaden_cased_words = [word.capitalize() for word in words]
    return ' '.join(jaden_cased_words)

# Example usage:
input_string = "how can mirrors be real if our eyes aren't real"
output_string = to_jaden_case(input_string)
print(output_string) 