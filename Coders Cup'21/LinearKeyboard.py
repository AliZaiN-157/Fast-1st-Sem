z = 0
val = []
TestCases = int(input("Enter Testcases"))

while(TestCases > 0):
    Keyboard = input("Enter Keyboard: ")
    Input = input("Enter Input: ")

    for i in Input:
        for j in Keyboard:
            z += 1
            if(i == j):
                print("i =", i, "j =", j)
                break
            val.append[z]
    print(val)
