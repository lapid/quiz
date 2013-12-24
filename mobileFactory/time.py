def time(input):
  if input[1] >= input[2]:
    input[2] += 24
    input[0] += 24

  if input[1] <= input[0] <= input[2]:
    return 'true'
  else: return 'false'

Input = map(int, raw_input('input > ').split())
print time(Input)
