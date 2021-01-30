scores = [66,57,54,53,64,52,59]
n = len(scores)
for i in range(n):
	for j in range(0,n-i-1):
		if scores[j]> scores[j+1]:
			scores[j],scores[j+1] = scores[j+1],scores[j]
print(f"Best score is: {scores[0]}")

