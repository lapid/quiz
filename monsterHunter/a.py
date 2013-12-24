def monsterHunt(m,w):
  hunt = 0
  for i in range(2):
    for j in range(6):
      if m[j] > 0 and w[j] == 1:
        hunt += m[j]
        m[j] = 0
        w[(j+1)%6] = 1

  return hunt

input = raw_input("Please input monster and weapons > ")

monster = [0] * 6
weapons = [0] * 6

for i in range(len(input)):
  # monster
  if 'B' == input[i]: monster[0] += 1
  if 'D' == input[i]: monster[1] += 1
  if 'F' == input[i]: monster[2] += 1
  if 'H' == input[i]: monster[3] += 1
  if 'J' == input[i]: monster[4] += 1
  if 'L' == input[i]: monster[5] += 1

  # weapons
  if 'a' == input[i]: weapons[0] = 1
  if 'c' == input[i]: weapons[1] = 1
  if 'e' == input[i]: weapons[2] = 1
  if 'g' == input[i]: weapons[3] = 1
  if 'i' == input[i]: weapons[4] = 1
  if 'k' == input[i]: weapons[5] = 1

print monsterHunt(monster, weapons)
